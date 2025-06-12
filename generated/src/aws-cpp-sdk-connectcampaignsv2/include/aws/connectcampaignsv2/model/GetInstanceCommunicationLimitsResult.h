/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/InstanceCommunicationLimitsConfig.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{
  /**
   * <p>The response for GetInstanceCommunicationLimits API.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/GetInstanceCommunicationLimitsResponse">AWS
   * API Reference</a></p>
   */
  class GetInstanceCommunicationLimitsResult
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API GetInstanceCommunicationLimitsResult() = default;
    AWS_CONNECTCAMPAIGNSV2_API GetInstanceCommunicationLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNSV2_API GetInstanceCommunicationLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const InstanceCommunicationLimitsConfig& GetCommunicationLimitsConfig() const { return m_communicationLimitsConfig; }
    template<typename CommunicationLimitsConfigT = InstanceCommunicationLimitsConfig>
    void SetCommunicationLimitsConfig(CommunicationLimitsConfigT&& value) { m_communicationLimitsConfigHasBeenSet = true; m_communicationLimitsConfig = std::forward<CommunicationLimitsConfigT>(value); }
    template<typename CommunicationLimitsConfigT = InstanceCommunicationLimitsConfig>
    GetInstanceCommunicationLimitsResult& WithCommunicationLimitsConfig(CommunicationLimitsConfigT&& value) { SetCommunicationLimitsConfig(std::forward<CommunicationLimitsConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInstanceCommunicationLimitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InstanceCommunicationLimitsConfig m_communicationLimitsConfig;
    bool m_communicationLimitsConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
