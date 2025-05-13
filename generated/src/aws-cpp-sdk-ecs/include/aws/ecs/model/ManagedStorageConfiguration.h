/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The managed storage configuration for the cluster.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedStorageConfiguration">AWS
   * API Reference</a></p>
   */
  class ManagedStorageConfiguration
  {
  public:
    AWS_ECS_API ManagedStorageConfiguration() = default;
    AWS_ECS_API ManagedStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ManagedStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify a Key Management Service key ID to encrypt Amazon ECS managed
     * storage.</p> <p> When you specify a <code>kmsKeyId</code>, Amazon ECS uses the
     * key to encrypt data volumes managed by Amazon ECS that are attached to tasks in
     * the cluster. The following data volumes are managed by Amazon ECS: Amazon EBS.
     * For more information about encryption of Amazon EBS volumes attached to Amazon
     * ECS tasks, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ebs-kms-encryption.html">Encrypt
     * data stored in Amazon EBS volumes for Amazon ECS</a> in the <i>Amazon Elastic
     * Container Service Developer Guide</i>.</p> <p>The key must be a single Region
     * key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ManagedStorageConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the Key Management Service key ID for Fargate ephemeral storage.</p>
     * <p>When you specify a <code>fargateEphemeralStorageKmsKeyId</code>, Amazon Web
     * Services Fargate uses the key to encrypt data at rest in ephemeral storage. For
     * more information about Fargate ephemeral storage encryption, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/fargate-storage-encryption.html">Customer
     * managed keys for Amazon Web Services Fargate ephemeral storage for Amazon
     * ECS</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     * <p>The key must be a single Region key.</p>
     */
    inline const Aws::String& GetFargateEphemeralStorageKmsKeyId() const { return m_fargateEphemeralStorageKmsKeyId; }
    inline bool FargateEphemeralStorageKmsKeyIdHasBeenSet() const { return m_fargateEphemeralStorageKmsKeyIdHasBeenSet; }
    template<typename FargateEphemeralStorageKmsKeyIdT = Aws::String>
    void SetFargateEphemeralStorageKmsKeyId(FargateEphemeralStorageKmsKeyIdT&& value) { m_fargateEphemeralStorageKmsKeyIdHasBeenSet = true; m_fargateEphemeralStorageKmsKeyId = std::forward<FargateEphemeralStorageKmsKeyIdT>(value); }
    template<typename FargateEphemeralStorageKmsKeyIdT = Aws::String>
    ManagedStorageConfiguration& WithFargateEphemeralStorageKmsKeyId(FargateEphemeralStorageKmsKeyIdT&& value) { SetFargateEphemeralStorageKmsKeyId(std::forward<FargateEphemeralStorageKmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_fargateEphemeralStorageKmsKeyId;
    bool m_fargateEphemeralStorageKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
