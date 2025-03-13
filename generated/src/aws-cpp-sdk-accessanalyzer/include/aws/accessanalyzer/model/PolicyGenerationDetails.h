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
   * <p>Contains the ARN details about the IAM entity for which the policy is
   * generated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/PolicyGenerationDetails">AWS
   * API Reference</a></p>
   */
  class PolicyGenerationDetails
  {
  public:
    AWS_ACCESSANALYZER_API PolicyGenerationDetails() = default;
    AWS_ACCESSANALYZER_API PolicyGenerationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API PolicyGenerationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
    template<typename PrincipalArnT = Aws::String>
    void SetPrincipalArn(PrincipalArnT&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::forward<PrincipalArnT>(value); }
    template<typename PrincipalArnT = Aws::String>
    PolicyGenerationDetails& WithPrincipalArn(PrincipalArnT&& value) { SetPrincipalArn(std::forward<PrincipalArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
