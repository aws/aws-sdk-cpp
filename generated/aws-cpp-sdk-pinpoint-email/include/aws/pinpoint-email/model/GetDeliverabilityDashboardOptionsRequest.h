﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Retrieve information about the status of the Deliverability dashboard for
   * your Amazon Pinpoint account. When the Deliverability dashboard is enabled, you
   * gain access to reputation, deliverability, and other metrics for the domains
   * that you use to send email using Amazon Pinpoint. You also gain the ability to
   * perform predictive inbox placement tests.</p> <p>When you use the Deliverability
   * dashboard, you pay a monthly subscription charge, in addition to any other fees
   * that you accrue by using Amazon Pinpoint. For more information about the
   * features and cost of a Deliverability dashboard subscription, see <a
   * href="http://aws.amazon.com/pinpoint/pricing/">Amazon Pinpoint
   * Pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDeliverabilityDashboardOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API GetDeliverabilityDashboardOptionsRequest : public PinpointEmailRequest
  {
  public:
    GetDeliverabilityDashboardOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeliverabilityDashboardOptions"; }

    Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
