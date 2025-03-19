/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/InstanceConfig.h>
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
   * <p>GetConnectInstanceConfigResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetConnectInstanceConfigResponse">AWS
   * API Reference</a></p>
   */
  class GetConnectInstanceConfigResult
  {
  public:
    AWS_CONNECTCAMPAIGNS_API GetConnectInstanceConfigResult() = default;
    AWS_CONNECTCAMPAIGNS_API GetConnectInstanceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNS_API GetConnectInstanceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const InstanceConfig& GetConnectInstanceConfig() const { return m_connectInstanceConfig; }
    template<typename ConnectInstanceConfigT = InstanceConfig>
    void SetConnectInstanceConfig(ConnectInstanceConfigT&& value) { m_connectInstanceConfigHasBeenSet = true; m_connectInstanceConfig = std::forward<ConnectInstanceConfigT>(value); }
    template<typename ConnectInstanceConfigT = InstanceConfig>
    GetConnectInstanceConfigResult& WithConnectInstanceConfig(ConnectInstanceConfigT&& value) { SetConnectInstanceConfig(std::forward<ConnectInstanceConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConnectInstanceConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InstanceConfig m_connectInstanceConfig;
    bool m_connectInstanceConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
