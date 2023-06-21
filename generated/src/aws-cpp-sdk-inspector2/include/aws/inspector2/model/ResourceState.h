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
    AWS_INSPECTOR2_API ResourceState();
    AWS_INSPECTOR2_API ResourceState(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ResourceState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon EC2
     * resources.</p>
     */
    inline const State& GetEc2() const{ return m_ec2; }

    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon EC2
     * resources.</p>
     */
    inline bool Ec2HasBeenSet() const { return m_ec2HasBeenSet; }

    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon EC2
     * resources.</p>
     */
    inline void SetEc2(const State& value) { m_ec2HasBeenSet = true; m_ec2 = value; }

    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon EC2
     * resources.</p>
     */
    inline void SetEc2(State&& value) { m_ec2HasBeenSet = true; m_ec2 = std::move(value); }

    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon EC2
     * resources.</p>
     */
    inline ResourceState& WithEc2(const State& value) { SetEc2(value); return *this;}

    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon EC2
     * resources.</p>
     */
    inline ResourceState& WithEc2(State&& value) { SetEc2(std::move(value)); return *this;}


    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon ECR
     * resources.</p>
     */
    inline const State& GetEcr() const{ return m_ecr; }

    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon ECR
     * resources.</p>
     */
    inline bool EcrHasBeenSet() const { return m_ecrHasBeenSet; }

    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon ECR
     * resources.</p>
     */
    inline void SetEcr(const State& value) { m_ecrHasBeenSet = true; m_ecr = value; }

    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon ECR
     * resources.</p>
     */
    inline void SetEcr(State&& value) { m_ecrHasBeenSet = true; m_ecr = std::move(value); }

    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon ECR
     * resources.</p>
     */
    inline ResourceState& WithEcr(const State& value) { SetEcr(value); return *this;}

    /**
     * <p>An object detailing the state of Amazon Inspector scanning for Amazon ECR
     * resources.</p>
     */
    inline ResourceState& WithEcr(State&& value) { SetEcr(std::move(value)); return *this;}


    
    inline const State& GetLambda() const{ return m_lambda; }

    
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }

    
    inline void SetLambda(const State& value) { m_lambdaHasBeenSet = true; m_lambda = value; }

    
    inline void SetLambda(State&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }

    
    inline ResourceState& WithLambda(const State& value) { SetLambda(value); return *this;}

    
    inline ResourceState& WithLambda(State&& value) { SetLambda(std::move(value)); return *this;}


    
    inline const State& GetLambdaCode() const{ return m_lambdaCode; }

    
    inline bool LambdaCodeHasBeenSet() const { return m_lambdaCodeHasBeenSet; }

    
    inline void SetLambdaCode(const State& value) { m_lambdaCodeHasBeenSet = true; m_lambdaCode = value; }

    
    inline void SetLambdaCode(State&& value) { m_lambdaCodeHasBeenSet = true; m_lambdaCode = std::move(value); }

    
    inline ResourceState& WithLambdaCode(const State& value) { SetLambdaCode(value); return *this;}

    
    inline ResourceState& WithLambdaCode(State&& value) { SetLambdaCode(std::move(value)); return *this;}

  private:

    State m_ec2;
    bool m_ec2HasBeenSet = false;

    State m_ecr;
    bool m_ecrHasBeenSet = false;

    State m_lambda;
    bool m_lambdaHasBeenSet = false;

    State m_lambdaCode;
    bool m_lambdaCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
