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
    AWS_APIGATEWAYMANAGEMENTAPI_API Identity();
    AWS_APIGATEWAYMANAGEMENTAPI_API Identity(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYMANAGEMENTAPI_API Identity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYMANAGEMENTAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source IP address of the TCP connection making the request to API
     * Gateway.</p>
     */
    inline const Aws::String& GetSourceIp() const{ return m_sourceIp; }

    /**
     * <p>The source IP address of the TCP connection making the request to API
     * Gateway.</p>
     */
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }

    /**
     * <p>The source IP address of the TCP connection making the request to API
     * Gateway.</p>
     */
    inline void SetSourceIp(const Aws::String& value) { m_sourceIpHasBeenSet = true; m_sourceIp = value; }

    /**
     * <p>The source IP address of the TCP connection making the request to API
     * Gateway.</p>
     */
    inline void SetSourceIp(Aws::String&& value) { m_sourceIpHasBeenSet = true; m_sourceIp = std::move(value); }

    /**
     * <p>The source IP address of the TCP connection making the request to API
     * Gateway.</p>
     */
    inline void SetSourceIp(const char* value) { m_sourceIpHasBeenSet = true; m_sourceIp.assign(value); }

    /**
     * <p>The source IP address of the TCP connection making the request to API
     * Gateway.</p>
     */
    inline Identity& WithSourceIp(const Aws::String& value) { SetSourceIp(value); return *this;}

    /**
     * <p>The source IP address of the TCP connection making the request to API
     * Gateway.</p>
     */
    inline Identity& WithSourceIp(Aws::String&& value) { SetSourceIp(std::move(value)); return *this;}

    /**
     * <p>The source IP address of the TCP connection making the request to API
     * Gateway.</p>
     */
    inline Identity& WithSourceIp(const char* value) { SetSourceIp(value); return *this;}


    /**
     * <p>The User Agent of the API caller.</p>
     */
    inline const Aws::String& GetUserAgent() const{ return m_userAgent; }

    /**
     * <p>The User Agent of the API caller.</p>
     */
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }

    /**
     * <p>The User Agent of the API caller.</p>
     */
    inline void SetUserAgent(const Aws::String& value) { m_userAgentHasBeenSet = true; m_userAgent = value; }

    /**
     * <p>The User Agent of the API caller.</p>
     */
    inline void SetUserAgent(Aws::String&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::move(value); }

    /**
     * <p>The User Agent of the API caller.</p>
     */
    inline void SetUserAgent(const char* value) { m_userAgentHasBeenSet = true; m_userAgent.assign(value); }

    /**
     * <p>The User Agent of the API caller.</p>
     */
    inline Identity& WithUserAgent(const Aws::String& value) { SetUserAgent(value); return *this;}

    /**
     * <p>The User Agent of the API caller.</p>
     */
    inline Identity& WithUserAgent(Aws::String&& value) { SetUserAgent(std::move(value)); return *this;}

    /**
     * <p>The User Agent of the API caller.</p>
     */
    inline Identity& WithUserAgent(const char* value) { SetUserAgent(value); return *this;}

  private:

    Aws::String m_sourceIp;
    bool m_sourceIpHasBeenSet = false;

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayManagementApi
} // namespace Aws
