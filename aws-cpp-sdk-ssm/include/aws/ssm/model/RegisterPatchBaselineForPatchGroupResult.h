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
  class AWS_SSM_API RegisterPatchBaselineForPatchGroupResult
  {
  public:
    RegisterPatchBaselineForPatchGroupResult();
    RegisterPatchBaselineForPatchGroupResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RegisterPatchBaselineForPatchGroupResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The ID of the patch baseline the patch group was registered with.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }

    /**
     * <p>The ID of the patch baseline the patch group was registered with.</p>
     */
    inline void SetBaselineId(const Aws::String& value) { m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline the patch group was registered with.</p>
     */
    inline void SetBaselineId(Aws::String&& value) { m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline the patch group was registered with.</p>
     */
    inline void SetBaselineId(const char* value) { m_baselineId.assign(value); }

    /**
     * <p>The ID of the patch baseline the patch group was registered with.</p>
     */
    inline RegisterPatchBaselineForPatchGroupResult& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the patch baseline the patch group was registered with.</p>
     */
    inline RegisterPatchBaselineForPatchGroupResult& WithBaselineId(Aws::String&& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the patch baseline the patch group was registered with.</p>
     */
    inline RegisterPatchBaselineForPatchGroupResult& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroup = value; }

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroup = value; }

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline void SetPatchGroup(const char* value) { m_patchGroup.assign(value); }

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline RegisterPatchBaselineForPatchGroupResult& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline RegisterPatchBaselineForPatchGroupResult& WithPatchGroup(Aws::String&& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline RegisterPatchBaselineForPatchGroupResult& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}

  private:
    Aws::String m_baselineId;
    Aws::String m_patchGroup;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
