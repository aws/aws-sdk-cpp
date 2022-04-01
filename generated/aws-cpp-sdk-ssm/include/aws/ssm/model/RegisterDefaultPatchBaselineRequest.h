﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterDefaultPatchBaseline"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the patch baseline that should be the default patch baseline.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }

    /**
     * <p>The ID of the patch baseline that should be the default patch baseline.</p>
     */
    inline bool BaselineIdHasBeenSet() const { return m_baselineIdHasBeenSet; }

    /**
     * <p>The ID of the patch baseline that should be the default patch baseline.</p>
     */
    inline void SetBaselineId(const Aws::String& value) { m_baselineIdHasBeenSet = true; m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline that should be the default patch baseline.</p>
     */
    inline void SetBaselineId(Aws::String&& value) { m_baselineIdHasBeenSet = true; m_baselineId = std::move(value); }

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
    inline RegisterDefaultPatchBaselineRequest& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}

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
