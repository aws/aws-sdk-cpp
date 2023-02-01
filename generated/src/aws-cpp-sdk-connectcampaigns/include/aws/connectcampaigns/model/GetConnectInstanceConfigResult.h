/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/InstanceConfig.h>
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
    AWS_CONNECTCAMPAIGNS_API GetConnectInstanceConfigResult();
    AWS_CONNECTCAMPAIGNS_API GetConnectInstanceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNS_API GetConnectInstanceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const InstanceConfig& GetConnectInstanceConfig() const{ return m_connectInstanceConfig; }

    
    inline void SetConnectInstanceConfig(const InstanceConfig& value) { m_connectInstanceConfig = value; }

    
    inline void SetConnectInstanceConfig(InstanceConfig&& value) { m_connectInstanceConfig = std::move(value); }

    
    inline GetConnectInstanceConfigResult& WithConnectInstanceConfig(const InstanceConfig& value) { SetConnectInstanceConfig(value); return *this;}

    
    inline GetConnectInstanceConfigResult& WithConnectInstanceConfig(InstanceConfig&& value) { SetConnectInstanceConfig(std::move(value)); return *this;}

  private:

    InstanceConfig m_connectInstanceConfig;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
