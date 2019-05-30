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
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to retrieve a list of the blacklists that your dedicated IP
   * addresses appear on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetBlacklistReportsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API GetBlacklistReportsRequest : public PinpointEmailRequest
  {
  public:
    GetBlacklistReportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBlacklistReports"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlacklistItemNames() const{ return m_blacklistItemNames; }

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline bool BlacklistItemNamesHasBeenSet() const { return m_blacklistItemNamesHasBeenSet; }

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline void SetBlacklistItemNames(const Aws::Vector<Aws::String>& value) { m_blacklistItemNamesHasBeenSet = true; m_blacklistItemNames = value; }

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline void SetBlacklistItemNames(Aws::Vector<Aws::String>&& value) { m_blacklistItemNamesHasBeenSet = true; m_blacklistItemNames = std::move(value); }

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline GetBlacklistReportsRequest& WithBlacklistItemNames(const Aws::Vector<Aws::String>& value) { SetBlacklistItemNames(value); return *this;}

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline GetBlacklistReportsRequest& WithBlacklistItemNames(Aws::Vector<Aws::String>&& value) { SetBlacklistItemNames(std::move(value)); return *this;}

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline GetBlacklistReportsRequest& AddBlacklistItemNames(const Aws::String& value) { m_blacklistItemNamesHasBeenSet = true; m_blacklistItemNames.push_back(value); return *this; }

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline GetBlacklistReportsRequest& AddBlacklistItemNames(Aws::String&& value) { m_blacklistItemNamesHasBeenSet = true; m_blacklistItemNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline GetBlacklistReportsRequest& AddBlacklistItemNames(const char* value) { m_blacklistItemNamesHasBeenSet = true; m_blacklistItemNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_blacklistItemNames;
    bool m_blacklistItemNamesHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
