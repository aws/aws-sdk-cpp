/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/InstanceOnboardingJobStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConnectCampaigns
{
namespace Model
{
  /**
   * <p>GetInstanceOnboardingJobStatusResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetInstanceOnboardingJobStatusResponse">AWS
   * API Reference</a></p>
   */
  class GetInstanceOnboardingJobStatusResult
  {
  public:
    AWS_CONNECTCAMPAIGNS_API GetInstanceOnboardingJobStatusResult();
    AWS_CONNECTCAMPAIGNS_API GetInstanceOnboardingJobStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNS_API GetInstanceOnboardingJobStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const InstanceOnboardingJobStatus& GetConnectInstanceOnboardingJobStatus() const{ return m_connectInstanceOnboardingJobStatus; }

    
    inline void SetConnectInstanceOnboardingJobStatus(const InstanceOnboardingJobStatus& value) { m_connectInstanceOnboardingJobStatus = value; }

    
    inline void SetConnectInstanceOnboardingJobStatus(InstanceOnboardingJobStatus&& value) { m_connectInstanceOnboardingJobStatus = std::move(value); }

    
    inline GetInstanceOnboardingJobStatusResult& WithConnectInstanceOnboardingJobStatus(const InstanceOnboardingJobStatus& value) { SetConnectInstanceOnboardingJobStatus(value); return *this;}

    
    inline GetInstanceOnboardingJobStatusResult& WithConnectInstanceOnboardingJobStatus(InstanceOnboardingJobStatus&& value) { SetConnectInstanceOnboardingJobStatus(std::move(value)); return *this;}

  private:

    InstanceOnboardingJobStatus m_connectInstanceOnboardingJobStatus;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
