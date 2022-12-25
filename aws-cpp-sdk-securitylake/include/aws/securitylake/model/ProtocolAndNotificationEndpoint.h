/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Notifications in Security Lake which dictates how notifications are posted at
   * the endpoint. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/ProtocolAndNotificationEndpoint">AWS
   * API Reference</a></p>
   */
  class ProtocolAndNotificationEndpoint
  {
  public:
    AWS_SECURITYLAKE_API ProtocolAndNotificationEndpoint();
    AWS_SECURITYLAKE_API ProtocolAndNotificationEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API ProtocolAndNotificationEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account which is subscribed to receive exception notifications. </p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The account which is subscribed to receive exception notifications. </p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The account which is subscribed to receive exception notifications. </p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The account which is subscribed to receive exception notifications. </p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The account which is subscribed to receive exception notifications. </p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The account which is subscribed to receive exception notifications. </p>
     */
    inline ProtocolAndNotificationEndpoint& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The account which is subscribed to receive exception notifications. </p>
     */
    inline ProtocolAndNotificationEndpoint& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The account which is subscribed to receive exception notifications. </p>
     */
    inline ProtocolAndNotificationEndpoint& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The protocol to which notification messages are posted. </p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol to which notification messages are posted. </p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol to which notification messages are posted. </p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol to which notification messages are posted. </p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol to which notification messages are posted. </p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol to which notification messages are posted. </p>
     */
    inline ProtocolAndNotificationEndpoint& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol to which notification messages are posted. </p>
     */
    inline ProtocolAndNotificationEndpoint& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol to which notification messages are posted. </p>
     */
    inline ProtocolAndNotificationEndpoint& WithProtocol(const char* value) { SetProtocol(value); return *this;}

  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
