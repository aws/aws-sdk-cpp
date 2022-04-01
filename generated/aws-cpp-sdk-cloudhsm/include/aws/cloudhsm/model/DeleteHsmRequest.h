﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>DeleteHsm</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteHsmRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDHSM_API DeleteHsmRequest : public CloudHSMRequest
  {
  public:
    DeleteHsmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHsm"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline const Aws::String& GetHsmArn() const{ return m_hsmArn; }

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline bool HsmArnHasBeenSet() const { return m_hsmArnHasBeenSet; }

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline void SetHsmArn(const Aws::String& value) { m_hsmArnHasBeenSet = true; m_hsmArn = value; }

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline void SetHsmArn(Aws::String&& value) { m_hsmArnHasBeenSet = true; m_hsmArn = std::move(value); }

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline void SetHsmArn(const char* value) { m_hsmArnHasBeenSet = true; m_hsmArn.assign(value); }

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline DeleteHsmRequest& WithHsmArn(const Aws::String& value) { SetHsmArn(value); return *this;}

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline DeleteHsmRequest& WithHsmArn(Aws::String&& value) { SetHsmArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline DeleteHsmRequest& WithHsmArn(const char* value) { SetHsmArn(value); return *this;}

  private:

    Aws::String m_hsmArn;
    bool m_hsmArnHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
