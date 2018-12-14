/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>An object that shows the status of the Deliverability dashboard for your
   * Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDeliverabilityDashboardOptionsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API GetDeliverabilityDashboardOptionsResult
  {
  public:
    GetDeliverabilityDashboardOptionsResult();
    GetDeliverabilityDashboardOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeliverabilityDashboardOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether the Deliverability dashboard is enabled. If the value is
     * <code>true</code>, then the dashboard is enabled.</p>
     */
    inline bool GetDashboardEnabled() const{ return m_dashboardEnabled; }

    /**
     * <p>Indicates whether the Deliverability dashboard is enabled. If the value is
     * <code>true</code>, then the dashboard is enabled.</p>
     */
    inline void SetDashboardEnabled(bool value) { m_dashboardEnabled = value; }

    /**
     * <p>Indicates whether the Deliverability dashboard is enabled. If the value is
     * <code>true</code>, then the dashboard is enabled.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& WithDashboardEnabled(bool value) { SetDashboardEnabled(value); return *this;}

  private:

    bool m_dashboardEnabled;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
