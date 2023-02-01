/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/VerificationState.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class PutVerificationStateOnViolationRequest : public IoTRequest
  {
  public:
    AWS_IOT_API PutVerificationStateOnViolationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutVerificationStateOnViolation"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The violation ID.</p>
     */
    inline const Aws::String& GetViolationId() const{ return m_violationId; }

    /**
     * <p>The violation ID.</p>
     */
    inline bool ViolationIdHasBeenSet() const { return m_violationIdHasBeenSet; }

    /**
     * <p>The violation ID.</p>
     */
    inline void SetViolationId(const Aws::String& value) { m_violationIdHasBeenSet = true; m_violationId = value; }

    /**
     * <p>The violation ID.</p>
     */
    inline void SetViolationId(Aws::String&& value) { m_violationIdHasBeenSet = true; m_violationId = std::move(value); }

    /**
     * <p>The violation ID.</p>
     */
    inline void SetViolationId(const char* value) { m_violationIdHasBeenSet = true; m_violationId.assign(value); }

    /**
     * <p>The violation ID.</p>
     */
    inline PutVerificationStateOnViolationRequest& WithViolationId(const Aws::String& value) { SetViolationId(value); return *this;}

    /**
     * <p>The violation ID.</p>
     */
    inline PutVerificationStateOnViolationRequest& WithViolationId(Aws::String&& value) { SetViolationId(std::move(value)); return *this;}

    /**
     * <p>The violation ID.</p>
     */
    inline PutVerificationStateOnViolationRequest& WithViolationId(const char* value) { SetViolationId(value); return *this;}


    /**
     * <p>The verification state of the violation.</p>
     */
    inline const VerificationState& GetVerificationState() const{ return m_verificationState; }

    /**
     * <p>The verification state of the violation.</p>
     */
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }

    /**
     * <p>The verification state of the violation.</p>
     */
    inline void SetVerificationState(const VerificationState& value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }

    /**
     * <p>The verification state of the violation.</p>
     */
    inline void SetVerificationState(VerificationState&& value) { m_verificationStateHasBeenSet = true; m_verificationState = std::move(value); }

    /**
     * <p>The verification state of the violation.</p>
     */
    inline PutVerificationStateOnViolationRequest& WithVerificationState(const VerificationState& value) { SetVerificationState(value); return *this;}

    /**
     * <p>The verification state of the violation.</p>
     */
    inline PutVerificationStateOnViolationRequest& WithVerificationState(VerificationState&& value) { SetVerificationState(std::move(value)); return *this;}


    /**
     * <p>The description of the verification state of the violation (detect
     * alarm).</p>
     */
    inline const Aws::String& GetVerificationStateDescription() const{ return m_verificationStateDescription; }

    /**
     * <p>The description of the verification state of the violation (detect
     * alarm).</p>
     */
    inline bool VerificationStateDescriptionHasBeenSet() const { return m_verificationStateDescriptionHasBeenSet; }

    /**
     * <p>The description of the verification state of the violation (detect
     * alarm).</p>
     */
    inline void SetVerificationStateDescription(const Aws::String& value) { m_verificationStateDescriptionHasBeenSet = true; m_verificationStateDescription = value; }

    /**
     * <p>The description of the verification state of the violation (detect
     * alarm).</p>
     */
    inline void SetVerificationStateDescription(Aws::String&& value) { m_verificationStateDescriptionHasBeenSet = true; m_verificationStateDescription = std::move(value); }

    /**
     * <p>The description of the verification state of the violation (detect
     * alarm).</p>
     */
    inline void SetVerificationStateDescription(const char* value) { m_verificationStateDescriptionHasBeenSet = true; m_verificationStateDescription.assign(value); }

    /**
     * <p>The description of the verification state of the violation (detect
     * alarm).</p>
     */
    inline PutVerificationStateOnViolationRequest& WithVerificationStateDescription(const Aws::String& value) { SetVerificationStateDescription(value); return *this;}

    /**
     * <p>The description of the verification state of the violation (detect
     * alarm).</p>
     */
    inline PutVerificationStateOnViolationRequest& WithVerificationStateDescription(Aws::String&& value) { SetVerificationStateDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the verification state of the violation (detect
     * alarm).</p>
     */
    inline PutVerificationStateOnViolationRequest& WithVerificationStateDescription(const char* value) { SetVerificationStateDescription(value); return *this;}

  private:

    Aws::String m_violationId;
    bool m_violationIdHasBeenSet = false;

    VerificationState m_verificationState;
    bool m_verificationStateHasBeenSet = false;

    Aws::String m_verificationStateDescription;
    bool m_verificationStateDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
