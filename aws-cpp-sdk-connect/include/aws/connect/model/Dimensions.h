/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/QueueReference.h>
#include <aws/connect/model/Channel.h>
#include <aws/connect/model/RoutingProfileReference.h>
#include <aws/connect/model/InstanceReference.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about the dimensions for a set of metrics.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Dimensions">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API Dimensions
  {
  public:
    Dimensions();
    Dimensions(Aws::Utils::Json::JsonView jsonValue);
    Dimensions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the queue for which metrics are returned.</p>
     */
    inline const QueueReference& GetQueue() const{ return m_queue; }

    /**
     * <p>Information about the queue for which metrics are returned.</p>
     */
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }

    /**
     * <p>Information about the queue for which metrics are returned.</p>
     */
    inline void SetQueue(const QueueReference& value) { m_queueHasBeenSet = true; m_queue = value; }

    /**
     * <p>Information about the queue for which metrics are returned.</p>
     */
    inline void SetQueue(QueueReference&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }

    /**
     * <p>Information about the queue for which metrics are returned.</p>
     */
    inline Dimensions& WithQueue(const QueueReference& value) { SetQueue(value); return *this;}

    /**
     * <p>Information about the queue for which metrics are returned.</p>
     */
    inline Dimensions& WithQueue(QueueReference&& value) { SetQueue(std::move(value)); return *this;}


    /**
     * <p>The channel used for grouping and filters.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }

    /**
     * <p>The channel used for grouping and filters.</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>The channel used for grouping and filters.</p>
     */
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>The channel used for grouping and filters.</p>
     */
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>The channel used for grouping and filters.</p>
     */
    inline Dimensions& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    /**
     * <p>The channel used for grouping and filters.</p>
     */
    inline Dimensions& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * <p>The routing profile.</p>
     */
    inline const RoutingProfileReference& GetRoutingProfile() const{ return m_routingProfile; }

    /**
     * <p>The routing profile.</p>
     */
    inline bool RoutingProfileHasBeenSet() const { return m_routingProfileHasBeenSet; }

    /**
     * <p>The routing profile.</p>
     */
    inline void SetRoutingProfile(const RoutingProfileReference& value) { m_routingProfileHasBeenSet = true; m_routingProfile = value; }

    /**
     * <p>The routing profile.</p>
     */
    inline void SetRoutingProfile(RoutingProfileReference&& value) { m_routingProfileHasBeenSet = true; m_routingProfile = std::move(value); }

    /**
     * <p>The routing profile.</p>
     */
    inline Dimensions& WithRoutingProfile(const RoutingProfileReference& value) { SetRoutingProfile(value); return *this;}

    /**
     * <p>The routing profile.</p>
     */
    inline Dimensions& WithRoutingProfile(RoutingProfileReference&& value) { SetRoutingProfile(std::move(value)); return *this;}


    /**
     * <p>The instance reference.</p>
     */
    inline const InstanceReference& GetInstanceReference() const{ return m_instanceReference; }

    /**
     * <p>The instance reference.</p>
     */
    inline bool InstanceReferenceHasBeenSet() const { return m_instanceReferenceHasBeenSet; }

    /**
     * <p>The instance reference.</p>
     */
    inline void SetInstanceReference(const InstanceReference& value) { m_instanceReferenceHasBeenSet = true; m_instanceReference = value; }

    /**
     * <p>The instance reference.</p>
     */
    inline void SetInstanceReference(InstanceReference&& value) { m_instanceReferenceHasBeenSet = true; m_instanceReference = std::move(value); }

    /**
     * <p>The instance reference.</p>
     */
    inline Dimensions& WithInstanceReference(const InstanceReference& value) { SetInstanceReference(value); return *this;}

    /**
     * <p>The instance reference.</p>
     */
    inline Dimensions& WithInstanceReference(InstanceReference&& value) { SetInstanceReference(std::move(value)); return *this;}

  private:

    QueueReference m_queue;
    bool m_queueHasBeenSet;

    Channel m_channel;
    bool m_channelHasBeenSet;

    RoutingProfileReference m_routingProfile;
    bool m_routingProfileHasBeenSet;

    InstanceReference m_instanceReference;
    bool m_instanceReferenceHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
