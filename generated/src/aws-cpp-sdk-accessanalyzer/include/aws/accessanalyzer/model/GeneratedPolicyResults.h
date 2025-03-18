/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/GeneratedPolicyProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/GeneratedPolicy.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains the text for the generated policy and its details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GeneratedPolicyResult">AWS
   * API Reference</a></p>
   */
  class GeneratedPolicyResults
  {
  public:
    AWS_ACCESSANALYZER_API GeneratedPolicyResults() = default;
    AWS_ACCESSANALYZER_API GeneratedPolicyResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API GeneratedPolicyResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>GeneratedPolicyProperties</code> object that contains properties of
     * the generated policy.</p>
     */
    inline const GeneratedPolicyProperties& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = GeneratedPolicyProperties>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = GeneratedPolicyProperties>
    GeneratedPolicyResults& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline const Aws::Vector<GeneratedPolicy>& GetGeneratedPolicies() const { return m_generatedPolicies; }
    inline bool GeneratedPoliciesHasBeenSet() const { return m_generatedPoliciesHasBeenSet; }
    template<typename GeneratedPoliciesT = Aws::Vector<GeneratedPolicy>>
    void SetGeneratedPolicies(GeneratedPoliciesT&& value) { m_generatedPoliciesHasBeenSet = true; m_generatedPolicies = std::forward<GeneratedPoliciesT>(value); }
    template<typename GeneratedPoliciesT = Aws::Vector<GeneratedPolicy>>
    GeneratedPolicyResults& WithGeneratedPolicies(GeneratedPoliciesT&& value) { SetGeneratedPolicies(std::forward<GeneratedPoliciesT>(value)); return *this;}
    template<typename GeneratedPoliciesT = GeneratedPolicy>
    GeneratedPolicyResults& AddGeneratedPolicies(GeneratedPoliciesT&& value) { m_generatedPoliciesHasBeenSet = true; m_generatedPolicies.emplace_back(std::forward<GeneratedPoliciesT>(value)); return *this; }
    ///@}
  private:

    GeneratedPolicyProperties m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Vector<GeneratedPolicy> m_generatedPolicies;
    bool m_generatedPoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
