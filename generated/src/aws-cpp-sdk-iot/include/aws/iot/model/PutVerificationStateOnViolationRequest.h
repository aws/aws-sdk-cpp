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


    ///@{
    /**
     * <p>The violation ID.</p>
     */
    inline const Aws::String& GetViolationId() const{ return m_violationId; }
    inline bool ViolationIdHasBeenSet() const { return m_violationIdHasBeenSet; }
    inline void SetViolationId(const Aws::String& value) { m_violationIdHasBeenSet = true; m_violationId = value; }
    inline void SetViolationId(Aws::String&& value) { m_violationIdHasBeenSet = true; m_violationId = std::move(value); }
    inline void SetViolationId(const char* value) { m_violationIdHasBeenSet = true; m_violationId.assign(value); }
    inline PutVerificationStateOnViolationRequest& WithViolationId(const Aws::String& value) { SetViolationId(value); return *this;}
    inline PutVerificationStateOnViolationRequest& WithViolationId(Aws::String&& value) { SetViolationId(std::move(value)); return *this;}
    inline PutVerificationStateOnViolationRequest& WithViolationId(const char* value) { SetViolationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verification state of the violation.</p>
     */
    inline const VerificationState& GetVerificationState() const{ return m_verificationState; }
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }
    inline void SetVerificationState(const VerificationState& value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }
    inline void SetVerificationState(VerificationState&& value) { m_verificationStateHasBeenSet = true; m_verificationState = std::move(value); }
    inline PutVerificationStateOnViolationRequest& WithVerificationState(const VerificationState& value) { SetVerificationState(value); return *this;}
    inline PutVerificationStateOnViolationRequest& WithVerificationState(VerificationState&& value) { SetVerificationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the verification state of the violation (detect
     * alarm).</p>
     */
    inline const Aws::String& GetVerificationStateDescription() const{ return m_verificationStateDescription; }
    inline bool VerificationStateDescriptionHasBeenSet() const { return m_verificationStateDescriptionHasBeenSet; }
    inline void SetVerificationStateDescription(const Aws::String& value) { m_verificationStateDescriptionHasBeenSet = true; m_verificationStateDescription = value; }
    inline void SetVerificationStateDescription(Aws::String&& value) { m_verificationStateDescriptionHasBeenSet = true; m_verificationStateDescription = std::move(value); }
    inline void SetVerificationStateDescription(const char* value) { m_verificationStateDescriptionHasBeenSet = true; m_verificationStateDescription.assign(value); }
    inline PutVerificationStateOnViolationRequest& WithVerificationStateDescription(const Aws::String& value) { SetVerificationStateDescription(value); return *this;}
    inline PutVerificationStateOnViolationRequest& WithVerificationStateDescription(Aws::String&& value) { SetVerificationStateDescription(std::move(value)); return *this;}
    inline PutVerificationStateOnViolationRequest& WithVerificationStateDescription(const char* value) { SetVerificationStateDescription(value); return *this;}
    ///@}
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
