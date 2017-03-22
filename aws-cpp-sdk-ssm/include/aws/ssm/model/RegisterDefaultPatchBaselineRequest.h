/*
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
  class AWS_SSM_API RegisterDefaultPatchBaselineRequest : public SSMRequest
  {
  public:
    RegisterDefaultPatchBaselineRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the patch baseline that should be the default patch baseline.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }

    /**
     * <p>The ID of the patch baseline that should be the default patch baseline.</p>
     */
    inline void SetBaselineId(const Aws::String& value) { m_baselineIdHasBeenSet = true; m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline that should be the default patch baseline.</p>
     */
    inline void SetBaselineId(Aws::String&& value) { m_baselineIdHasBeenSet = true; m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline that should be the default patch baseline.</p>
     */
    inline void SetBaselineId(const char* value) { m_baselineIdHasBeenSet = true; m_baselineId.assign(value); }

    /**
     * <p>The ID of the patch baseline that should be the default patch baseline.</p>
     */
    inline RegisterDefaultPatchBaselineRequest& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the patch baseline that should be the default patch baseline.</p>
     */
    inline RegisterDefaultPatchBaselineRequest& WithBaselineId(Aws::String&& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the patch baseline that should be the default patch baseline.</p>
     */
    inline RegisterDefaultPatchBaselineRequest& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}

  private:
    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
