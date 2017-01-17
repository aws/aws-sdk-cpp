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
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DeregisterPatchBaselineForPatchGroupRequest : public SSMRequest
  {
  public:
    DeregisterPatchBaselineForPatchGroupRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the patch baseline to deregister the patch group from.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }

    /**
     * <p>The ID of the patch baseline to deregister the patch group from.</p>
     */
    inline void SetBaselineId(const Aws::String& value) { m_baselineIdHasBeenSet = true; m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline to deregister the patch group from.</p>
     */
    inline void SetBaselineId(Aws::String&& value) { m_baselineIdHasBeenSet = true; m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline to deregister the patch group from.</p>
     */
    inline void SetBaselineId(const char* value) { m_baselineIdHasBeenSet = true; m_baselineId.assign(value); }

    /**
     * <p>The ID of the patch baseline to deregister the patch group from.</p>
     */
    inline DeregisterPatchBaselineForPatchGroupRequest& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the patch baseline to deregister the patch group from.</p>
     */
    inline DeregisterPatchBaselineForPatchGroupRequest& WithBaselineId(Aws::String&& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the patch baseline to deregister the patch group from.</p>
     */
    inline DeregisterPatchBaselineForPatchGroupRequest& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}

    /**
     * <p>The name of the patch group that should be deregistered from the patch
     * baseline.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }

    /**
     * <p>The name of the patch group that should be deregistered from the patch
     * baseline.</p>
     */
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }

    /**
     * <p>The name of the patch group that should be deregistered from the patch
     * baseline.</p>
     */
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }

    /**
     * <p>The name of the patch group that should be deregistered from the patch
     * baseline.</p>
     */
    inline void SetPatchGroup(const char* value) { m_patchGroupHasBeenSet = true; m_patchGroup.assign(value); }

    /**
     * <p>The name of the patch group that should be deregistered from the patch
     * baseline.</p>
     */
    inline DeregisterPatchBaselineForPatchGroupRequest& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The name of the patch group that should be deregistered from the patch
     * baseline.</p>
     */
    inline DeregisterPatchBaselineForPatchGroupRequest& WithPatchGroup(Aws::String&& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The name of the patch group that should be deregistered from the patch
     * baseline.</p>
     */
    inline DeregisterPatchBaselineForPatchGroupRequest& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}

  private:
    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet;
    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
