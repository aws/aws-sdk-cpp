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
    AWS_CONNECTCAMPAIGNS_API GetConnectInstanceConfigResult();
    AWS_CONNECTCAMPAIGNS_API GetConnectInstanceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNS_API GetConnectInstanceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const InstanceConfig& GetConnectInstanceConfig() const{ return m_connectInstanceConfig; }

    
    inline void SetConnectInstanceConfig(const InstanceConfig& value) { m_connectInstanceConfig = value; }

    
    inline void SetConnectInstanceConfig(InstanceConfig&& value) { m_connectInstanceConfig = std::move(value); }

    
    inline GetConnectInstanceConfigResult& WithConnectInstanceConfig(const InstanceConfig& value) { SetConnectInstanceConfig(value); return *this;}

    
    inline GetConnectInstanceConfigResult& WithConnectInstanceConfig(InstanceConfig&& value) { SetConnectInstanceConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConnectInstanceConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConnectInstanceConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConnectInstanceConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InstanceConfig m_connectInstanceConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
