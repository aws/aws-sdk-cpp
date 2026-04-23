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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that defines the tracking options for a configuration set. When you
   * use Amazon Pinpoint to send an email, it contains an invisible image that's used
   * to track when recipients open your email. If your email contains links, those
   * links are changed slightly in order to track when recipients click them.</p>
   * <p>These images and links include references to a domain operated by AWS. You
   * can optionally configure Amazon Pinpoint to use a domain that you operate for
   * these images and links.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/TrackingOptions">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API TrackingOptions
  {
  public:
    TrackingOptions();
    TrackingOptions(Aws::Utils::Json::JsonView jsonValue);
    TrackingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain that you want to use for tracking open and click events.</p>
     */
    inline const Aws::String& GetCustomRedirectDomain() const{ return m_customRedirectDomain; }

    /**
     * <p>The domain that you want to use for tracking open and click events.</p>
     */
    inline bool CustomRedirectDomainHasBeenSet() const { return m_customRedirectDomainHasBeenSet; }

    /**
     * <p>The domain that you want to use for tracking open and click events.</p>
     */
    inline void SetCustomRedirectDomain(const Aws::String& value) { m_customRedirectDomainHasBeenSet = true; m_customRedirectDomain = value; }

    /**
     * <p>The domain that you want to use for tracking open and click events.</p>
     */
    inline void SetCustomRedirectDomain(Aws::String&& value) { m_customRedirectDomainHasBeenSet = true; m_customRedirectDomain = std::move(value); }

    /**
     * <p>The domain that you want to use for tracking open and click events.</p>
     */
    inline void SetCustomRedirectDomain(const char* value) { m_customRedirectDomainHasBeenSet = true; m_customRedirectDomain.assign(value); }

    /**
     * <p>The domain that you want to use for tracking open and click events.</p>
     */
    inline TrackingOptions& WithCustomRedirectDomain(const Aws::String& value) { SetCustomRedirectDomain(value); return *this;}

    /**
     * <p>The domain that you want to use for tracking open and click events.</p>
     */
    inline TrackingOptions& WithCustomRedirectDomain(Aws::String&& value) { SetCustomRedirectDomain(std::move(value)); return *this;}

    /**
     * <p>The domain that you want to use for tracking open and click events.</p>
     */
    inline TrackingOptions& WithCustomRedirectDomain(const char* value) { SetCustomRedirectDomain(value); return *this;}

  private:

    Aws::String m_customRedirectDomain;
    bool m_customRedirectDomainHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
