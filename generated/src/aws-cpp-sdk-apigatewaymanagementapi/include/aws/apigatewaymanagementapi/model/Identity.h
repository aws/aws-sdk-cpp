/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ApiGatewayManagementApi
{
namespace Model
{

  class Identity
  {
  public:
    AWS_APIGATEWAYMANAGEMENTAPI_API Identity() = default;
    AWS_APIGATEWAYMANAGEMENTAPI_API Identity(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYMANAGEMENTAPI_API Identity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYMANAGEMENTAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source IP address of the TCP connection making the request to API
     * Gateway.</p>
     */
    inline const Aws::String& GetSourceIp() const { return m_sourceIp; }
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }
    template<typename SourceIpT = Aws::String>
    void SetSourceIp(SourceIpT&& value) { m_sourceIpHasBeenSet = true; m_sourceIp = std::forward<SourceIpT>(value); }
    template<typename SourceIpT = Aws::String>
    Identity& WithSourceIp(SourceIpT&& value) { SetSourceIp(std::forward<SourceIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The User Agent of the API caller.</p>
     */
    inline const Aws::String& GetUserAgent() const { return m_userAgent; }
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
    template<typename UserAgentT = Aws::String>
    void SetUserAgent(UserAgentT&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::forward<UserAgentT>(value); }
    template<typename UserAgentT = Aws::String>
    Identity& WithUserAgent(UserAgentT&& value) { SetUserAgent(std::forward<UserAgentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceIp;
    bool m_sourceIpHasBeenSet = false;

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayManagementApi
} // namespace Aws
