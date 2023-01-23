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
    AWS_ACCESSANALYZER_API GeneratedPolicyResults();
    AWS_ACCESSANALYZER_API GeneratedPolicyResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API GeneratedPolicyResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>GeneratedPolicyProperties</code> object that contains properties of
     * the generated policy.</p>
     */
    inline const GeneratedPolicyProperties& GetProperties() const{ return m_properties; }

    /**
     * <p>A <code>GeneratedPolicyProperties</code> object that contains properties of
     * the generated policy.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A <code>GeneratedPolicyProperties</code> object that contains properties of
     * the generated policy.</p>
     */
    inline void SetProperties(const GeneratedPolicyProperties& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A <code>GeneratedPolicyProperties</code> object that contains properties of
     * the generated policy.</p>
     */
    inline void SetProperties(GeneratedPolicyProperties&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A <code>GeneratedPolicyProperties</code> object that contains properties of
     * the generated policy.</p>
     */
    inline GeneratedPolicyResults& WithProperties(const GeneratedPolicyProperties& value) { SetProperties(value); return *this;}

    /**
     * <p>A <code>GeneratedPolicyProperties</code> object that contains properties of
     * the generated policy.</p>
     */
    inline GeneratedPolicyResults& WithProperties(GeneratedPolicyProperties&& value) { SetProperties(std::move(value)); return *this;}


    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline const Aws::Vector<GeneratedPolicy>& GetGeneratedPolicies() const{ return m_generatedPolicies; }

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline bool GeneratedPoliciesHasBeenSet() const { return m_generatedPoliciesHasBeenSet; }

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline void SetGeneratedPolicies(const Aws::Vector<GeneratedPolicy>& value) { m_generatedPoliciesHasBeenSet = true; m_generatedPolicies = value; }

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline void SetGeneratedPolicies(Aws::Vector<GeneratedPolicy>&& value) { m_generatedPoliciesHasBeenSet = true; m_generatedPolicies = std::move(value); }

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline GeneratedPolicyResults& WithGeneratedPolicies(const Aws::Vector<GeneratedPolicy>& value) { SetGeneratedPolicies(value); return *this;}

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline GeneratedPolicyResults& WithGeneratedPolicies(Aws::Vector<GeneratedPolicy>&& value) { SetGeneratedPolicies(std::move(value)); return *this;}

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline GeneratedPolicyResults& AddGeneratedPolicies(const GeneratedPolicy& value) { m_generatedPoliciesHasBeenSet = true; m_generatedPolicies.push_back(value); return *this; }

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline GeneratedPolicyResults& AddGeneratedPolicies(GeneratedPolicy&& value) { m_generatedPoliciesHasBeenSet = true; m_generatedPolicies.push_back(std::move(value)); return *this; }

  private:

    GeneratedPolicyProperties m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Vector<GeneratedPolicy> m_generatedPolicies;
    bool m_generatedPoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
