/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/InstanceOnboardingJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CONNECTCAMPAIGNS_API GetInstanceOnboardingJobStatusResult() = default;
    AWS_CONNECTCAMPAIGNS_API GetInstanceOnboardingJobStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNS_API GetInstanceOnboardingJobStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const InstanceOnboardingJobStatus& GetConnectInstanceOnboardingJobStatus() const { return m_connectInstanceOnboardingJobStatus; }
    template<typename ConnectInstanceOnboardingJobStatusT = InstanceOnboardingJobStatus>
    void SetConnectInstanceOnboardingJobStatus(ConnectInstanceOnboardingJobStatusT&& value) { m_connectInstanceOnboardingJobStatusHasBeenSet = true; m_connectInstanceOnboardingJobStatus = std::forward<ConnectInstanceOnboardingJobStatusT>(value); }
    template<typename ConnectInstanceOnboardingJobStatusT = InstanceOnboardingJobStatus>
    GetInstanceOnboardingJobStatusResult& WithConnectInstanceOnboardingJobStatus(ConnectInstanceOnboardingJobStatusT&& value) { SetConnectInstanceOnboardingJobStatus(std::forward<ConnectInstanceOnboardingJobStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInstanceOnboardingJobStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InstanceOnboardingJobStatus m_connectInstanceOnboardingJobStatus;
    bool m_connectInstanceOnboardingJobStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
