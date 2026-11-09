/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/WafInspectionLevelEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {

/**
 * <p>Describes the configuration of the bot control Web Application Firewall (WAF)
 * rule group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/WafBotControlConfig">AWS
 * API Reference</a></p>
 */
class WafBotControlConfig {
 public:
  AWS_LIGHTSAIL_API WafBotControlConfig() = default;
  AWS_LIGHTSAIL_API WafBotControlConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API WafBotControlConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The inspection level of the bot control rule group.</p> <p>The following
   * inspection levels are possible:</p> <ul> <li> <p> <code>COMMON</code> – Detects
   * a variety of bots that identify themselves, such as web scraping frameworks,
   * search engines, and automated browsers.</p> </li> <li> <p> <code>TARGETED</code>
   * – Includes the <code>COMMON</code> protections, and adds detection for
   * sophisticated bots that don't identify themselves. This level uses rate
   * limiting, CAPTCHA, and background browser challenges.</p> </li> </ul>
   */
  inline WafInspectionLevelEnum GetInspectionLevel() const { return m_inspectionLevel; }
  inline bool InspectionLevelHasBeenSet() const { return m_inspectionLevelHasBeenSet; }
  inline void SetInspectionLevel(WafInspectionLevelEnum value) {
    m_inspectionLevelHasBeenSet = true;
    m_inspectionLevel = value;
  }
  inline WafBotControlConfig& WithInspectionLevel(WafInspectionLevelEnum value) {
    SetInspectionLevel(value);
    return *this;
  }
  ///@}
 private:
  WafInspectionLevelEnum m_inspectionLevel{WafInspectionLevelEnum::NOT_SET};
  bool m_inspectionLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
