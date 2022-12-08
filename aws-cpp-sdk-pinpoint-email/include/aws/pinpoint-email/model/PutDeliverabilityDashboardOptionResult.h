/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>A response that indicates whether the Deliverability dashboard is enabled for
   * your Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutDeliverabilityDashboardOptionResponse">AWS
   * API Reference</a></p>
   */
  class PutDeliverabilityDashboardOptionResult
  {
  public:
    AWS_PINPOINTEMAIL_API PutDeliverabilityDashboardOptionResult();
    AWS_PINPOINTEMAIL_API PutDeliverabilityDashboardOptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API PutDeliverabilityDashboardOptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
