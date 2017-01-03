﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/Patch.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class AWS_SSM_API DescribeAvailablePatchesResult
  {
  public:
    DescribeAvailablePatchesResult();
    DescribeAvailablePatchesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAvailablePatchesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An array of patches. Each entry in the array is a patch structure.</p>
     */
    inline const Aws::Vector<Patch>& GetPatches() const{ return m_patches; }

    /**
     * <p>An array of patches. Each entry in the array is a patch structure.</p>
     */
    inline void SetPatches(const Aws::Vector<Patch>& value) { m_patches = value; }

    /**
     * <p>An array of patches. Each entry in the array is a patch structure.</p>
     */
    inline void SetPatches(Aws::Vector<Patch>&& value) { m_patches = value; }

    /**
     * <p>An array of patches. Each entry in the array is a patch structure.</p>
     */
    inline DescribeAvailablePatchesResult& WithPatches(const Aws::Vector<Patch>& value) { SetPatches(value); return *this;}

    /**
     * <p>An array of patches. Each entry in the array is a patch structure.</p>
     */
    inline DescribeAvailablePatchesResult& WithPatches(Aws::Vector<Patch>&& value) { SetPatches(value); return *this;}

    /**
     * <p>An array of patches. Each entry in the array is a patch structure.</p>
     */
    inline DescribeAvailablePatchesResult& AddPatches(const Patch& value) { m_patches.push_back(value); return *this; }

    /**
     * <p>An array of patches. Each entry in the array is a patch structure.</p>
     */
    inline DescribeAvailablePatchesResult& AddPatches(Patch&& value) { m_patches.push_back(value); return *this; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeAvailablePatchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeAvailablePatchesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeAvailablePatchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Patch> m_patches;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
