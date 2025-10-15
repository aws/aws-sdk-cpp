/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/BucketCorsRule.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the cross-origin resource sharing (CORS) configuration for a
   * Lightsail bucket. CORS defines a way for client web applications that are loaded
   * in one domain to interact with resources in a different domain. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/configure-cors.html">Configuring
   * cross-origin resource sharing (CORS)</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/BucketCorsConfig">AWS
   * API Reference</a></p>
   */
  class BucketCorsConfig
  {
  public:
    AWS_LIGHTSAIL_API BucketCorsConfig() = default;
    AWS_LIGHTSAIL_API BucketCorsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API BucketCorsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 20 rules to the configuration. The total size is limited to 64
     * KB.</p>
     */
    inline const Aws::Vector<BucketCorsRule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<BucketCorsRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<BucketCorsRule>>
    BucketCorsConfig& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = BucketCorsRule>
    BucketCorsConfig& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<BucketCorsRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
