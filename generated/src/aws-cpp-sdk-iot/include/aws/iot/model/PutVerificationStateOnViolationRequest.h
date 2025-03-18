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
    AWS_IOT_API PutVerificationStateOnViolationRequest() = default;

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
    inline const Aws::String& GetViolationId() const { return m_violationId; }
    inline bool ViolationIdHasBeenSet() const { return m_violationIdHasBeenSet; }
    template<typename ViolationIdT = Aws::String>
    void SetViolationId(ViolationIdT&& value) { m_violationIdHasBeenSet = true; m_violationId = std::forward<ViolationIdT>(value); }
    template<typename ViolationIdT = Aws::String>
    PutVerificationStateOnViolationRequest& WithViolationId(ViolationIdT&& value) { SetViolationId(std::forward<ViolationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verification state of the violation.</p>
     */
    inline VerificationState GetVerificationState() const { return m_verificationState; }
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }
    inline void SetVerificationState(VerificationState value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }
    inline PutVerificationStateOnViolationRequest& WithVerificationState(VerificationState value) { SetVerificationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the verification state of the violation (detect
     * alarm).</p>
     */
    inline const Aws::String& GetVerificationStateDescription() const { return m_verificationStateDescription; }
    inline bool VerificationStateDescriptionHasBeenSet() const { return m_verificationStateDescriptionHasBeenSet; }
    template<typename VerificationStateDescriptionT = Aws::String>
    void SetVerificationStateDescription(VerificationStateDescriptionT&& value) { m_verificationStateDescriptionHasBeenSet = true; m_verificationStateDescription = std::forward<VerificationStateDescriptionT>(value); }
    template<typename VerificationStateDescriptionT = Aws::String>
    PutVerificationStateOnViolationRequest& WithVerificationStateDescription(VerificationStateDescriptionT&& value) { SetVerificationStateDescription(std::forward<VerificationStateDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_violationId;
    bool m_violationIdHasBeenSet = false;

    VerificationState m_verificationState{VerificationState::NOT_SET};
    bool m_verificationStateHasBeenSet = false;

    Aws::String m_verificationStateDescription;
    bool m_verificationStateDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
