/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ControlTower
{
namespace Model
{

  /**
   */
  class EnableControlRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API EnableControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableControl"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline const Aws::String& GetControlIdentifier() const{ return m_controlIdentifier; }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline bool ControlIdentifierHasBeenSet() const { return m_controlIdentifierHasBeenSet; }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline void SetControlIdentifier(const Aws::String& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = value; }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline void SetControlIdentifier(Aws::String&& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = std::move(value); }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline void SetControlIdentifier(const char* value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier.assign(value); }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline EnableControlRequest& WithControlIdentifier(const Aws::String& value) { SetControlIdentifier(value); return *this;}

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline EnableControlRequest& WithControlIdentifier(Aws::String&& value) { SetControlIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline EnableControlRequest& WithControlIdentifier(const char* value) { SetControlIdentifier(value); return *this;}


    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const{ return m_targetIdentifier; }

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline void SetTargetIdentifier(const Aws::String& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = value; }

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline void SetTargetIdentifier(Aws::String&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::move(value); }

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline void SetTargetIdentifier(const char* value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier.assign(value); }

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline EnableControlRequest& WithTargetIdentifier(const Aws::String& value) { SetTargetIdentifier(value); return *this;}

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline EnableControlRequest& WithTargetIdentifier(Aws::String&& value) { SetTargetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline EnableControlRequest& WithTargetIdentifier(const char* value) { SetTargetIdentifier(value); return *this;}

  private:

    Aws::String m_controlIdentifier;
    bool m_controlIdentifierHasBeenSet = false;

    Aws::String m_targetIdentifier;
    bool m_targetIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
