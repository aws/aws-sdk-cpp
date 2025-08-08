/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/iot-data/IoTDataPlaneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTDataPlane
{
namespace Model
{

  /**
   */
  class DeleteConnectionRequest : public IoTDataPlaneRequest
  {
  public:
    AWS_IOTDATAPLANE_API DeleteConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConnection"; }

    AWS_IOTDATAPLANE_API Aws::String SerializePayload() const override;

    AWS_IOTDATAPLANE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the MQTT client to disconnect. The client ID can't
     * start with a dollar sign ($).</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    DeleteConnectionRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to remove the client's session state when disconnecting.
     * Set to <code>TRUE</code> to delete all session information, including
     * subscriptions and queued messages. Set to <code>FALSE</code> to preserve the
     * session state. By default, this is set to <code>FALSE</code> (preserves the
     * session state).</p>
     */
    inline bool GetCleanSession() const { return m_cleanSession; }
    inline bool CleanSessionHasBeenSet() const { return m_cleanSessionHasBeenSet; }
    inline void SetCleanSession(bool value) { m_cleanSessionHasBeenSet = true; m_cleanSession = value; }
    inline DeleteConnectionRequest& WithCleanSession(bool value) { SetCleanSession(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls if Amazon Web Services IoT Core publishes the client's Last Will and
     * Testament (LWT) message upon disconnection. Set to <code>TRUE</code> to prevent
     * publishing the LWT message. Set to <code>FALSE</code> to allow publishing. By
     * default, this is set to <code>FALSE</code> (allows publishing the LWT
     * message).</p>
     */
    inline bool GetPreventWillMessage() const { return m_preventWillMessage; }
    inline bool PreventWillMessageHasBeenSet() const { return m_preventWillMessageHasBeenSet; }
    inline void SetPreventWillMessage(bool value) { m_preventWillMessageHasBeenSet = true; m_preventWillMessage = value; }
    inline DeleteConnectionRequest& WithPreventWillMessage(bool value) { SetPreventWillMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    bool m_cleanSession{false};
    bool m_cleanSessionHasBeenSet = false;

    bool m_preventWillMessage{false};
    bool m_preventWillMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
