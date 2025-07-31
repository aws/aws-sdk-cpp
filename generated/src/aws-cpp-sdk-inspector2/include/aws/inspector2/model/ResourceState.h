/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/State.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details the state of Amazon Inspector for each resource type Amazon Inspector
   * scans.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ResourceState">AWS
   * API Reference</a></p>
   */
  class ResourceState
  {
  public:
    AWS_INSPECTOR2_API ResourceState() = default;
    AWS_INSPECTOR2_API ResourceState(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ResourceState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon EC2
     * resources.</p>
     */
    inline const State& GetEc2() const { return m_ec2; }
    inline bool Ec2HasBeenSet() const { return m_ec2HasBeenSet; }
    template<typename Ec2T = State>
    void SetEc2(Ec2T&& value) { m_ec2HasBeenSet = true; m_ec2 = std::forward<Ec2T>(value); }
    template<typename Ec2T = State>
    ResourceState& WithEc2(Ec2T&& value) { SetEc2(std::forward<Ec2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon ECR
     * resources.</p>
     */
    inline const State& GetEcr() const { return m_ecr; }
    inline bool EcrHasBeenSet() const { return m_ecrHasBeenSet; }
    template<typename EcrT = State>
    void SetEcr(EcrT&& value) { m_ecrHasBeenSet = true; m_ecr = std::forward<EcrT>(value); }
    template<typename EcrT = State>
    ResourceState& WithEcr(EcrT&& value) { SetEcr(std::forward<EcrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that described the state of Amazon Inspector scans for an
     * account.</p>
     */
    inline const State& GetLambda() const { return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    template<typename LambdaT = State>
    void SetLambda(LambdaT&& value) { m_lambdaHasBeenSet = true; m_lambda = std::forward<LambdaT>(value); }
    template<typename LambdaT = State>
    ResourceState& WithLambda(LambdaT&& value) { SetLambda(std::forward<LambdaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that described the state of Amazon Inspector scans for an
     * account.</p>
     */
    inline const State& GetLambdaCode() const { return m_lambdaCode; }
    inline bool LambdaCodeHasBeenSet() const { return m_lambdaCodeHasBeenSet; }
    template<typename LambdaCodeT = State>
    void SetLambdaCode(LambdaCodeT&& value) { m_lambdaCodeHasBeenSet = true; m_lambdaCode = std::forward<LambdaCodeT>(value); }
    template<typename LambdaCodeT = State>
    ResourceState& WithLambdaCode(LambdaCodeT&& value) { SetLambdaCode(std::forward<LambdaCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const State& GetCodeRepository() const { return m_codeRepository; }
    inline bool CodeRepositoryHasBeenSet() const { return m_codeRepositoryHasBeenSet; }
    template<typename CodeRepositoryT = State>
    void SetCodeRepository(CodeRepositoryT&& value) { m_codeRepositoryHasBeenSet = true; m_codeRepository = std::forward<CodeRepositoryT>(value); }
    template<typename CodeRepositoryT = State>
    ResourceState& WithCodeRepository(CodeRepositoryT&& value) { SetCodeRepository(std::forward<CodeRepositoryT>(value)); return *this;}
    ///@}
  private:

    State m_ec2;
    bool m_ec2HasBeenSet = false;

    State m_ecr;
    bool m_ecrHasBeenSet = false;

    State m_lambda;
    bool m_lambdaHasBeenSet = false;

    State m_lambdaCode;
    bool m_lambdaCodeHasBeenSet = false;

    State m_codeRepository;
    bool m_codeRepositoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
