﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/QueueReference.h>
#include <aws/connect/model/Channel.h>
#include <aws/connect/model/RoutingProfileReference.h>
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
  class Dimensions
  {
  public:
    AWS_CONNECT_API Dimensions();
    AWS_CONNECT_API Dimensions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Dimensions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the queue for which metrics are returned.</p>
     */
    inline const QueueReference& GetQueue() const{ return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    inline void SetQueue(const QueueReference& value) { m_queueHasBeenSet = true; m_queue = value; }
    inline void SetQueue(QueueReference&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }
    inline Dimensions& WithQueue(const QueueReference& value) { SetQueue(value); return *this;}
    inline Dimensions& WithQueue(QueueReference&& value) { SetQueue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel used for grouping and filters.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }
    inline Dimensions& WithChannel(const Channel& value) { SetChannel(value); return *this;}
    inline Dimensions& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const RoutingProfileReference& GetRoutingProfile() const{ return m_routingProfile; }
    inline bool RoutingProfileHasBeenSet() const { return m_routingProfileHasBeenSet; }
    inline void SetRoutingProfile(const RoutingProfileReference& value) { m_routingProfileHasBeenSet = true; m_routingProfile = value; }
    inline void SetRoutingProfile(RoutingProfileReference&& value) { m_routingProfileHasBeenSet = true; m_routingProfile = std::move(value); }
    inline Dimensions& WithRoutingProfile(const RoutingProfileReference& value) { SetRoutingProfile(value); return *this;}
    inline Dimensions& WithRoutingProfile(RoutingProfileReference&& value) { SetRoutingProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expression of a step in a routing criteria.</p>
     */
    inline const Aws::String& GetRoutingStepExpression() const{ return m_routingStepExpression; }
    inline bool RoutingStepExpressionHasBeenSet() const { return m_routingStepExpressionHasBeenSet; }
    inline void SetRoutingStepExpression(const Aws::String& value) { m_routingStepExpressionHasBeenSet = true; m_routingStepExpression = value; }
    inline void SetRoutingStepExpression(Aws::String&& value) { m_routingStepExpressionHasBeenSet = true; m_routingStepExpression = std::move(value); }
    inline void SetRoutingStepExpression(const char* value) { m_routingStepExpressionHasBeenSet = true; m_routingStepExpression.assign(value); }
    inline Dimensions& WithRoutingStepExpression(const Aws::String& value) { SetRoutingStepExpression(value); return *this;}
    inline Dimensions& WithRoutingStepExpression(Aws::String&& value) { SetRoutingStepExpression(std::move(value)); return *this;}
    inline Dimensions& WithRoutingStepExpression(const char* value) { SetRoutingStepExpression(value); return *this;}
    ///@}
  private:

    QueueReference m_queue;
    bool m_queueHasBeenSet = false;

    Channel m_channel;
    bool m_channelHasBeenSet = false;

    RoutingProfileReference m_routingProfile;
    bool m_routingProfileHasBeenSet = false;

    Aws::String m_routingStepExpression;
    bool m_routingStepExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
