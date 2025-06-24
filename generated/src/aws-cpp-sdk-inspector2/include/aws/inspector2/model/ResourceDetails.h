/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AwsEc2InstanceDetails.h>
#include <aws/inspector2/model/AwsEcrContainerImageDetails.h>
#include <aws/inspector2/model/AwsLambdaFunctionDetails.h>
#include <aws/inspector2/model/CodeRepositoryDetails.h>
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
   * <p>Contains details about the resource involved in the finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ResourceDetails">AWS
   * API Reference</a></p>
   */
  class ResourceDetails
  {
  public:
    AWS_INSPECTOR2_API ResourceDetails() = default;
    AWS_INSPECTOR2_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains details about the Amazon EC2 instance involved in the
     * finding.</p>
     */
    inline const AwsEc2InstanceDetails& GetAwsEc2Instance() const { return m_awsEc2Instance; }
    inline bool AwsEc2InstanceHasBeenSet() const { return m_awsEc2InstanceHasBeenSet; }
    template<typename AwsEc2InstanceT = AwsEc2InstanceDetails>
    void SetAwsEc2Instance(AwsEc2InstanceT&& value) { m_awsEc2InstanceHasBeenSet = true; m_awsEc2Instance = std::forward<AwsEc2InstanceT>(value); }
    template<typename AwsEc2InstanceT = AwsEc2InstanceDetails>
    ResourceDetails& WithAwsEc2Instance(AwsEc2InstanceT&& value) { SetAwsEc2Instance(std::forward<AwsEc2InstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about the Amazon ECR container image involved
     * in the finding.</p>
     */
    inline const AwsEcrContainerImageDetails& GetAwsEcrContainerImage() const { return m_awsEcrContainerImage; }
    inline bool AwsEcrContainerImageHasBeenSet() const { return m_awsEcrContainerImageHasBeenSet; }
    template<typename AwsEcrContainerImageT = AwsEcrContainerImageDetails>
    void SetAwsEcrContainerImage(AwsEcrContainerImageT&& value) { m_awsEcrContainerImageHasBeenSet = true; m_awsEcrContainerImage = std::forward<AwsEcrContainerImageT>(value); }
    template<typename AwsEcrContainerImageT = AwsEcrContainerImageDetails>
    ResourceDetails& WithAwsEcrContainerImage(AwsEcrContainerImageT&& value) { SetAwsEcrContainerImage(std::forward<AwsEcrContainerImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the information about an Amazon Web Services Lambda function
     * affected by a finding.</p>
     */
    inline const AwsLambdaFunctionDetails& GetAwsLambdaFunction() const { return m_awsLambdaFunction; }
    inline bool AwsLambdaFunctionHasBeenSet() const { return m_awsLambdaFunctionHasBeenSet; }
    template<typename AwsLambdaFunctionT = AwsLambdaFunctionDetails>
    void SetAwsLambdaFunction(AwsLambdaFunctionT&& value) { m_awsLambdaFunctionHasBeenSet = true; m_awsLambdaFunction = std::forward<AwsLambdaFunctionT>(value); }
    template<typename AwsLambdaFunctionT = AwsLambdaFunctionDetails>
    ResourceDetails& WithAwsLambdaFunction(AwsLambdaFunctionT&& value) { SetAwsLambdaFunction(std::forward<AwsLambdaFunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a code repository resource associated with a
     * finding.</p>
     */
    inline const CodeRepositoryDetails& GetCodeRepository() const { return m_codeRepository; }
    inline bool CodeRepositoryHasBeenSet() const { return m_codeRepositoryHasBeenSet; }
    template<typename CodeRepositoryT = CodeRepositoryDetails>
    void SetCodeRepository(CodeRepositoryT&& value) { m_codeRepositoryHasBeenSet = true; m_codeRepository = std::forward<CodeRepositoryT>(value); }
    template<typename CodeRepositoryT = CodeRepositoryDetails>
    ResourceDetails& WithCodeRepository(CodeRepositoryT&& value) { SetCodeRepository(std::forward<CodeRepositoryT>(value)); return *this;}
    ///@}
  private:

    AwsEc2InstanceDetails m_awsEc2Instance;
    bool m_awsEc2InstanceHasBeenSet = false;

    AwsEcrContainerImageDetails m_awsEcrContainerImage;
    bool m_awsEcrContainerImageHasBeenSet = false;

    AwsLambdaFunctionDetails m_awsLambdaFunction;
    bool m_awsLambdaFunctionHasBeenSet = false;

    CodeRepositoryDetails m_codeRepository;
    bool m_codeRepositoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
