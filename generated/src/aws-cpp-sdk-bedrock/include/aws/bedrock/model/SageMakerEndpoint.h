/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/VpcConfig.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Specifies the configuration for a Amazon SageMaker endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/SageMakerEndpoint">AWS
   * API Reference</a></p>
   */
  class SageMakerEndpoint
  {
  public:
    AWS_BEDROCK_API SageMakerEndpoint() = default;
    AWS_BEDROCK_API SageMakerEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API SageMakerEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of Amazon EC2 compute instances to deploy for initial endpoint
     * creation.</p>
     */
    inline int GetInitialInstanceCount() const { return m_initialInstanceCount; }
    inline bool InitialInstanceCountHasBeenSet() const { return m_initialInstanceCountHasBeenSet; }
    inline void SetInitialInstanceCount(int value) { m_initialInstanceCountHasBeenSet = true; m_initialInstanceCount = value; }
    inline SageMakerEndpoint& WithInitialInstanceCount(int value) { SetInitialInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 compute instance type to deploy for hosting the model.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    SageMakerEndpoint& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and docker image for deployment on Amazon EC2 compute instances or for
     * batch transform jobs.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    SageMakerEndpoint& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key that Amazon SageMaker uses to encrypt data on
     * the storage volume attached to the Amazon EC2 compute instance that hosts the
     * endpoint.</p>
     */
    inline const Aws::String& GetKmsEncryptionKey() const { return m_kmsEncryptionKey; }
    inline bool KmsEncryptionKeyHasBeenSet() const { return m_kmsEncryptionKeyHasBeenSet; }
    template<typename KmsEncryptionKeyT = Aws::String>
    void SetKmsEncryptionKey(KmsEncryptionKeyT&& value) { m_kmsEncryptionKeyHasBeenSet = true; m_kmsEncryptionKey = std::forward<KmsEncryptionKeyT>(value); }
    template<typename KmsEncryptionKeyT = Aws::String>
    SageMakerEndpoint& WithKmsEncryptionKey(KmsEncryptionKeyT&& value) { SetKmsEncryptionKey(std::forward<KmsEncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration for the endpoint.</p>
     */
    inline const VpcConfig& GetVpc() const { return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    template<typename VpcT = VpcConfig>
    void SetVpc(VpcT&& value) { m_vpcHasBeenSet = true; m_vpc = std::forward<VpcT>(value); }
    template<typename VpcT = VpcConfig>
    SageMakerEndpoint& WithVpc(VpcT&& value) { SetVpc(std::forward<VpcT>(value)); return *this;}
    ///@}
  private:

    int m_initialInstanceCount{0};
    bool m_initialInstanceCountHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    Aws::String m_kmsEncryptionKey;
    bool m_kmsEncryptionKeyHasBeenSet = false;

    VpcConfig m_vpc;
    bool m_vpcHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
