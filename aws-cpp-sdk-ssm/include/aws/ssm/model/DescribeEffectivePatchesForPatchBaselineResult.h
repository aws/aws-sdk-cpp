/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/model/EffectivePatch.h>
#include <utility>

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
  class AWS_SSM_API DescribeEffectivePatchesForPatchBaselineResult
  {
  public:
    DescribeEffectivePatchesForPatchBaselineResult();
    DescribeEffectivePatchesForPatchBaselineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEffectivePatchesForPatchBaselineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of patches and patch status.</p>
     */
    inline const Aws::Vector<EffectivePatch>& GetEffectivePatches() const{ return m_effectivePatches; }

    /**
     * <p>An array of patches and patch status.</p>
     */
    inline void SetEffectivePatches(const Aws::Vector<EffectivePatch>& value) { m_effectivePatches = value; }

    /**
     * <p>An array of patches and patch status.</p>
     */
    inline void SetEffectivePatches(Aws::Vector<EffectivePatch>&& value) { m_effectivePatches = std::move(value); }

    /**
     * <p>An array of patches and patch status.</p>
     */
    inline DescribeEffectivePatchesForPatchBaselineResult& WithEffectivePatches(const Aws::Vector<EffectivePatch>& value) { SetEffectivePatches(value); return *this;}

    /**
     * <p>An array of patches and patch status.</p>
     */
    inline DescribeEffectivePatchesForPatchBaselineResult& WithEffectivePatches(Aws::Vector<EffectivePatch>&& value) { SetEffectivePatches(std::move(value)); return *this;}

    /**
     * <p>An array of patches and patch status.</p>
     */
    inline DescribeEffectivePatchesForPatchBaselineResult& AddEffectivePatches(const EffectivePatch& value) { m_effectivePatches.push_back(value); return *this; }

    /**
     * <p>An array of patches and patch status.</p>
     */
    inline DescribeEffectivePatchesForPatchBaselineResult& AddEffectivePatches(EffectivePatch&& value) { m_effectivePatches.push_back(std::move(value)); return *this; }


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
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeEffectivePatchesForPatchBaselineResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeEffectivePatchesForPatchBaselineResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeEffectivePatchesForPatchBaselineResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EffectivePatch> m_effectivePatches;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
