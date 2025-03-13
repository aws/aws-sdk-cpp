/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/MediaConcurrency.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateRoutingProfileConcurrencyRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateRoutingProfileConcurrencyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoutingProfileConcurrency"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateRoutingProfileConcurrencyRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const { return m_routingProfileId; }
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }
    template<typename RoutingProfileIdT = Aws::String>
    void SetRoutingProfileId(RoutingProfileIdT&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::forward<RoutingProfileIdT>(value); }
    template<typename RoutingProfileIdT = Aws::String>
    UpdateRoutingProfileConcurrencyRequest& WithRoutingProfileId(RoutingProfileIdT&& value) { SetRoutingProfileId(std::forward<RoutingProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channels that agents can handle in the Contact Control Panel (CCP).</p>
     */
    inline const Aws::Vector<MediaConcurrency>& GetMediaConcurrencies() const { return m_mediaConcurrencies; }
    inline bool MediaConcurrenciesHasBeenSet() const { return m_mediaConcurrenciesHasBeenSet; }
    template<typename MediaConcurrenciesT = Aws::Vector<MediaConcurrency>>
    void SetMediaConcurrencies(MediaConcurrenciesT&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies = std::forward<MediaConcurrenciesT>(value); }
    template<typename MediaConcurrenciesT = Aws::Vector<MediaConcurrency>>
    UpdateRoutingProfileConcurrencyRequest& WithMediaConcurrencies(MediaConcurrenciesT&& value) { SetMediaConcurrencies(std::forward<MediaConcurrenciesT>(value)); return *this;}
    template<typename MediaConcurrenciesT = MediaConcurrency>
    UpdateRoutingProfileConcurrencyRequest& AddMediaConcurrencies(MediaConcurrenciesT&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies.emplace_back(std::forward<MediaConcurrenciesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_routingProfileId;
    bool m_routingProfileIdHasBeenSet = false;

    Aws::Vector<MediaConcurrency> m_mediaConcurrencies;
    bool m_mediaConcurrenciesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
