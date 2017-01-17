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
#include <aws/core/utils/memory/stl/AWSString.h>

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
  class AWS_SSM_API GetDefaultPatchBaselineResult
  {
  public:
    GetDefaultPatchBaselineResult();
    GetDefaultPatchBaselineResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDefaultPatchBaselineResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The ID of the default patch baseline.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }

    /**
     * <p>The ID of the default patch baseline.</p>
     */
    inline void SetBaselineId(const Aws::String& value) { m_baselineId = value; }

    /**
     * <p>The ID of the default patch baseline.</p>
     */
    inline void SetBaselineId(Aws::String&& value) { m_baselineId = value; }

    /**
     * <p>The ID of the default patch baseline.</p>
     */
    inline void SetBaselineId(const char* value) { m_baselineId.assign(value); }

    /**
     * <p>The ID of the default patch baseline.</p>
     */
    inline GetDefaultPatchBaselineResult& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the default patch baseline.</p>
     */
    inline GetDefaultPatchBaselineResult& WithBaselineId(Aws::String&& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the default patch baseline.</p>
     */
    inline GetDefaultPatchBaselineResult& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}

  private:
    Aws::String m_baselineId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
