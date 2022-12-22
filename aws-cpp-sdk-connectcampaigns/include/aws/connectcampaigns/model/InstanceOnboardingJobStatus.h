/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaigns/model/InstanceOnboardingJobFailureCode.h>
#include <aws/connectcampaigns/model/InstanceOnboardingJobStatusCode.h>
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
    AWS_CONNECTCAMPAIGNS_API InstanceOnboardingJobStatus();
    AWS_CONNECTCAMPAIGNS_API InstanceOnboardingJobStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API InstanceOnboardingJobStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetConnectInstanceId() const{ return m_connectInstanceId; }

    
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }

    
    inline void SetConnectInstanceId(const Aws::String& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = value; }

    
    inline void SetConnectInstanceId(Aws::String&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::move(value); }

    
    inline void SetConnectInstanceId(const char* value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId.assign(value); }

    
    inline InstanceOnboardingJobStatus& WithConnectInstanceId(const Aws::String& value) { SetConnectInstanceId(value); return *this;}

    
    inline InstanceOnboardingJobStatus& WithConnectInstanceId(Aws::String&& value) { SetConnectInstanceId(std::move(value)); return *this;}

    
    inline InstanceOnboardingJobStatus& WithConnectInstanceId(const char* value) { SetConnectInstanceId(value); return *this;}


    
    inline const InstanceOnboardingJobFailureCode& GetFailureCode() const{ return m_failureCode; }

    
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    
    inline void SetFailureCode(const InstanceOnboardingJobFailureCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    
    inline void SetFailureCode(InstanceOnboardingJobFailureCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    
    inline InstanceOnboardingJobStatus& WithFailureCode(const InstanceOnboardingJobFailureCode& value) { SetFailureCode(value); return *this;}

    
    inline InstanceOnboardingJobStatus& WithFailureCode(InstanceOnboardingJobFailureCode&& value) { SetFailureCode(std::move(value)); return *this;}


    
    inline const InstanceOnboardingJobStatusCode& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const InstanceOnboardingJobStatusCode& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(InstanceOnboardingJobStatusCode&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline InstanceOnboardingJobStatus& WithStatus(const InstanceOnboardingJobStatusCode& value) { SetStatus(value); return *this;}

    
    inline InstanceOnboardingJobStatus& WithStatus(InstanceOnboardingJobStatusCode&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;

    InstanceOnboardingJobFailureCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    InstanceOnboardingJobStatusCode m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
