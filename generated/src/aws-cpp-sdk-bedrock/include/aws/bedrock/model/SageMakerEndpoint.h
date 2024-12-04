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
    AWS_BEDROCK_API SageMakerEndpoint();
    AWS_BEDROCK_API SageMakerEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API SageMakerEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of Amazon EC2 compute instances to deploy for initial endpoint
     * creation.</p>
     */
    inline int GetInitialInstanceCount() const{ return m_initialInstanceCount; }
    inline bool InitialInstanceCountHasBeenSet() const { return m_initialInstanceCountHasBeenSet; }
    inline void SetInitialInstanceCount(int value) { m_initialInstanceCountHasBeenSet = true; m_initialInstanceCount = value; }
    inline SageMakerEndpoint& WithInitialInstanceCount(int value) { SetInitialInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 compute instance type to deploy for hosting the model.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline SageMakerEndpoint& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline SageMakerEndpoint& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline SageMakerEndpoint& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and docker image for deployment on Amazon EC2 compute instances or for
     * batch transform jobs.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline SageMakerEndpoint& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline SageMakerEndpoint& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline SageMakerEndpoint& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key that Amazon SageMaker uses to encrypt data on
     * the storage volume attached to the Amazon EC2 compute instance that hosts the
     * endpoint.</p>
     */
    inline const Aws::String& GetKmsEncryptionKey() const{ return m_kmsEncryptionKey; }
    inline bool KmsEncryptionKeyHasBeenSet() const { return m_kmsEncryptionKeyHasBeenSet; }
    inline void SetKmsEncryptionKey(const Aws::String& value) { m_kmsEncryptionKeyHasBeenSet = true; m_kmsEncryptionKey = value; }
    inline void SetKmsEncryptionKey(Aws::String&& value) { m_kmsEncryptionKeyHasBeenSet = true; m_kmsEncryptionKey = std::move(value); }
    inline void SetKmsEncryptionKey(const char* value) { m_kmsEncryptionKeyHasBeenSet = true; m_kmsEncryptionKey.assign(value); }
    inline SageMakerEndpoint& WithKmsEncryptionKey(const Aws::String& value) { SetKmsEncryptionKey(value); return *this;}
    inline SageMakerEndpoint& WithKmsEncryptionKey(Aws::String&& value) { SetKmsEncryptionKey(std::move(value)); return *this;}
    inline SageMakerEndpoint& WithKmsEncryptionKey(const char* value) { SetKmsEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration for the endpoint.</p>
     */
    inline const VpcConfig& GetVpc() const{ return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    inline void SetVpc(const VpcConfig& value) { m_vpcHasBeenSet = true; m_vpc = value; }
    inline void SetVpc(VpcConfig&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }
    inline SageMakerEndpoint& WithVpc(const VpcConfig& value) { SetVpc(value); return *this;}
    inline SageMakerEndpoint& WithVpc(VpcConfig&& value) { SetVpc(std::move(value)); return *this;}
    ///@}
  private:

    int m_initialInstanceCount;
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
