/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaigns/model/InstanceOnboardingJobStatusCode.h>
#include <aws/connectcampaigns/model/InstanceOnboardingJobFailureCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>Instance onboarding job status object</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/InstanceOnboardingJobStatus">AWS
   * API Reference</a></p>
   */
  class InstanceOnboardingJobStatus
  {
  public:
    AWS_CONNECTCAMPAIGNS_API InstanceOnboardingJobStatus() = default;
    AWS_CONNECTCAMPAIGNS_API InstanceOnboardingJobStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API InstanceOnboardingJobStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetConnectInstanceId() const { return m_connectInstanceId; }
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }
    template<typename ConnectInstanceIdT = Aws::String>
    void SetConnectInstanceId(ConnectInstanceIdT&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::forward<ConnectInstanceIdT>(value); }
    template<typename ConnectInstanceIdT = Aws::String>
    InstanceOnboardingJobStatus& WithConnectInstanceId(ConnectInstanceIdT&& value) { SetConnectInstanceId(std::forward<ConnectInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline InstanceOnboardingJobStatusCode GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InstanceOnboardingJobStatusCode value) { m_statusHasBeenSet = true; m_status = value; }
    inline InstanceOnboardingJobStatus& WithStatus(InstanceOnboardingJobStatusCode value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline InstanceOnboardingJobFailureCode GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(InstanceOnboardingJobFailureCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline InstanceOnboardingJobStatus& WithFailureCode(InstanceOnboardingJobFailureCode value) { SetFailureCode(value); return *this;}
    ///@}
  private:

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;

    InstanceOnboardingJobStatusCode m_status{InstanceOnboardingJobStatusCode::NOT_SET};
    bool m_statusHasBeenSet = false;

    InstanceOnboardingJobFailureCode m_failureCode{InstanceOnboardingJobFailureCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
