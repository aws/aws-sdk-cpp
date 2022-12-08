/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains the text for the generated policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GeneratedPolicy">AWS
   * API Reference</a></p>
   */
  class GeneratedPolicy
  {
  public:
    AWS_ACCESSANALYZER_API GeneratedPolicy();
    AWS_ACCESSANALYZER_API GeneratedPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API GeneratedPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline GeneratedPolicy& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline GeneratedPolicy& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The text to use as the content for the new policy. The policy is created
     * using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreatePolicy.html">CreatePolicy</a>
     * action.</p>
     */
    inline GeneratedPolicy& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
