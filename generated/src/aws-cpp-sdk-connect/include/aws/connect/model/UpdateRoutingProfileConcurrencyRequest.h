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
    AWS_CONNECT_API UpdateRoutingProfileConcurrencyRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateRoutingProfileConcurrencyRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateRoutingProfileConcurrencyRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateRoutingProfileConcurrencyRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const{ return m_routingProfileId; }
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }
    inline void SetRoutingProfileId(const Aws::String& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = value; }
    inline void SetRoutingProfileId(Aws::String&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::move(value); }
    inline void SetRoutingProfileId(const char* value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId.assign(value); }
    inline UpdateRoutingProfileConcurrencyRequest& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}
    inline UpdateRoutingProfileConcurrencyRequest& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}
    inline UpdateRoutingProfileConcurrencyRequest& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channels that agents can handle in the Contact Control Panel (CCP).</p>
     */
    inline const Aws::Vector<MediaConcurrency>& GetMediaConcurrencies() const{ return m_mediaConcurrencies; }
    inline bool MediaConcurrenciesHasBeenSet() const { return m_mediaConcurrenciesHasBeenSet; }
    inline void SetMediaConcurrencies(const Aws::Vector<MediaConcurrency>& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies = value; }
    inline void SetMediaConcurrencies(Aws::Vector<MediaConcurrency>&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies = std::move(value); }
    inline UpdateRoutingProfileConcurrencyRequest& WithMediaConcurrencies(const Aws::Vector<MediaConcurrency>& value) { SetMediaConcurrencies(value); return *this;}
    inline UpdateRoutingProfileConcurrencyRequest& WithMediaConcurrencies(Aws::Vector<MediaConcurrency>&& value) { SetMediaConcurrencies(std::move(value)); return *this;}
    inline UpdateRoutingProfileConcurrencyRequest& AddMediaConcurrencies(const MediaConcurrency& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies.push_back(value); return *this; }
    inline UpdateRoutingProfileConcurrencyRequest& AddMediaConcurrencies(MediaConcurrency&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies.push_back(std::move(value)); return *this; }
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
