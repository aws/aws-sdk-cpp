/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Retrieve information about the status of the Deliverability dashboard for
   * your Amazon Web Services account. When the Deliverability dashboard is enabled,
   * you gain access to reputation, deliverability, and other metrics for your
   * domains. You also gain the ability to perform predictive inbox placement
   * tests.</p> <p>When you use the Deliverability dashboard, you pay a monthly
   * subscription charge, in addition to any other fees that you accrue by using
   * Amazon SES and other Amazon Web Services services. For more information about
   * the features and cost of a Deliverability dashboard subscription, see <a
   * href="http://aws.amazon.com/pinpoint/pricing/">Amazon Pinpoint
   * Pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityDashboardOptionsRequest">AWS
   * API Reference</a></p>
   */
  class GetDeliverabilityDashboardOptionsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API GetDeliverabilityDashboardOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeliverabilityDashboardOptions"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
