/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>Optional IAM policy. The resulting job IAM role permissions will be an
   * intersection of the policies passed and the policy associated with your job
   * execution role.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/JobRunExecutionIamPolicy">AWS
   * API Reference</a></p>
   */
  class JobRunExecutionIamPolicy
  {
  public:
    AWS_EMRSERVERLESS_API JobRunExecutionIamPolicy() = default;
    AWS_EMRSERVERLESS_API JobRunExecutionIamPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API JobRunExecutionIamPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An IAM inline policy to use as an execution IAM policy.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    JobRunExecutionIamPolicy& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Resource Names (ARNs) to use as an execution IAM policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyArns() const { return m_policyArns; }
    inline bool PolicyArnsHasBeenSet() const { return m_policyArnsHasBeenSet; }
    template<typename PolicyArnsT = Aws::Vector<Aws::String>>
    void SetPolicyArns(PolicyArnsT&& value) { m_policyArnsHasBeenSet = true; m_policyArns = std::forward<PolicyArnsT>(value); }
    template<typename PolicyArnsT = Aws::Vector<Aws::String>>
    JobRunExecutionIamPolicy& WithPolicyArns(PolicyArnsT&& value) { SetPolicyArns(std::forward<PolicyArnsT>(value)); return *this;}
    template<typename PolicyArnsT = Aws::String>
    JobRunExecutionIamPolicy& AddPolicyArns(PolicyArnsT&& value) { m_policyArnsHasBeenSet = true; m_policyArns.emplace_back(std::forward<PolicyArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyArns;
    bool m_policyArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
