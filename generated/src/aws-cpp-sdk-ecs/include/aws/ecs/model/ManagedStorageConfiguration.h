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
     * <p>Specify a Key Management Service key ID to encrypt the managed storage.</p>
     * <p>The key must be a single Region key.</p>
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
     * <p>Specify the Key Management Service key ID for the Fargate ephemeral
     * storage.</p> <p>The key must be a single Region key.</p>
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
