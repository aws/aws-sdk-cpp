/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Status.h>
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
   * <p>Details the status of Amazon Inspector for each resource type Amazon
   * Inspector scans.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ResourceStatus">AWS
   * API Reference</a></p>
   */
  class ResourceStatus
  {
  public:
    AWS_INSPECTOR2_API ResourceStatus() = default;
    AWS_INSPECTOR2_API ResourceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ResourceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of Amazon Inspector scanning for Amazon EC2 resources.</p>
     */
    inline Status GetEc2() const { return m_ec2; }
    inline bool Ec2HasBeenSet() const { return m_ec2HasBeenSet; }
    inline void SetEc2(Status value) { m_ec2HasBeenSet = true; m_ec2 = value; }
    inline ResourceStatus& WithEc2(Status value) { SetEc2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of Amazon Inspector scanning for Amazon ECR resources.</p>
     */
    inline Status GetEcr() const { return m_ecr; }
    inline bool EcrHasBeenSet() const { return m_ecrHasBeenSet; }
    inline void SetEcr(Status value) { m_ecrHasBeenSet = true; m_ecr = value; }
    inline ResourceStatus& WithEcr(Status value) { SetEcr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of Amazon Inspector scanning for Amazon Web Services Lambda
     * function.</p>
     */
    inline Status GetLambda() const { return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    inline void SetLambda(Status value) { m_lambdaHasBeenSet = true; m_lambda = value; }
    inline ResourceStatus& WithLambda(Status value) { SetLambda(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of Amazon Inspector scanning for custom application code for
     * Amazon Web Services Lambda functions. </p>
     */
    inline Status GetLambdaCode() const { return m_lambdaCode; }
    inline bool LambdaCodeHasBeenSet() const { return m_lambdaCodeHasBeenSet; }
    inline void SetLambdaCode(Status value) { m_lambdaCodeHasBeenSet = true; m_lambdaCode = value; }
    inline ResourceStatus& WithLambdaCode(Status value) { SetLambdaCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of Amazon Inspector scanning for code repositories.</p>
     */
    inline Status GetCodeRepository() const { return m_codeRepository; }
    inline bool CodeRepositoryHasBeenSet() const { return m_codeRepositoryHasBeenSet; }
    inline void SetCodeRepository(Status value) { m_codeRepositoryHasBeenSet = true; m_codeRepository = value; }
    inline ResourceStatus& WithCodeRepository(Status value) { SetCodeRepository(value); return *this;}
    ///@}
  private:

    Status m_ec2{Status::NOT_SET};
    bool m_ec2HasBeenSet = false;

    Status m_ecr{Status::NOT_SET};
    bool m_ecrHasBeenSet = false;

    Status m_lambda{Status::NOT_SET};
    bool m_lambdaHasBeenSet = false;

    Status m_lambdaCode{Status::NOT_SET};
    bool m_lambdaCodeHasBeenSet = false;

    Status m_codeRepository{Status::NOT_SET};
    bool m_codeRepositoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
