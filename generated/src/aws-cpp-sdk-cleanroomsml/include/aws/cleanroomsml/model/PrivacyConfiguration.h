/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/PrivacyConfigurationPolicies.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Information about the privacy configuration for a configured model algorithm
   * association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/PrivacyConfiguration">AWS
   * API Reference</a></p>
   */
  class PrivacyConfiguration
  {
  public:
    AWS_CLEANROOMSML_API PrivacyConfiguration() = default;
    AWS_CLEANROOMSML_API PrivacyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API PrivacyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The privacy configuration policies for a configured model algorithm
     * association.</p>
     */
    inline const PrivacyConfigurationPolicies& GetPolicies() const { return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    template<typename PoliciesT = PrivacyConfigurationPolicies>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = PrivacyConfigurationPolicies>
    PrivacyConfiguration& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
    ///@}
  private:

    PrivacyConfigurationPolicies m_policies;
    bool m_policiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
