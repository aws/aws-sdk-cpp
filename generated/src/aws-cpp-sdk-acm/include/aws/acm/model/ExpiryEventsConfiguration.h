/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>

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
namespace ACM
{
namespace Model
{

  /**
   * <p>Object containing expiration events options associated with an Amazon Web
   * Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ExpiryEventsConfiguration">AWS
   * API Reference</a></p>
   */
  class ExpiryEventsConfiguration
  {
  public:
    AWS_ACM_API ExpiryEventsConfiguration() = default;
    AWS_ACM_API ExpiryEventsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API ExpiryEventsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the number of days prior to certificate expiration when ACM starts
     * generating <code>EventBridge</code> events. ACM sends one event per day per
     * certificate until the certificate expires. By default, accounts receive events
     * starting 45 days before certificate expiration.</p>
     */
    inline int GetDaysBeforeExpiry() const { return m_daysBeforeExpiry; }
    inline bool DaysBeforeExpiryHasBeenSet() const { return m_daysBeforeExpiryHasBeenSet; }
    inline void SetDaysBeforeExpiry(int value) { m_daysBeforeExpiryHasBeenSet = true; m_daysBeforeExpiry = value; }
    inline ExpiryEventsConfiguration& WithDaysBeforeExpiry(int value) { SetDaysBeforeExpiry(value); return *this;}
    ///@}
  private:

    int m_daysBeforeExpiry{0};
    bool m_daysBeforeExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
