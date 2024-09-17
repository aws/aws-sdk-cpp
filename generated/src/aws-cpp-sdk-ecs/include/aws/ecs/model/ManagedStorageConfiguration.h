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
    AWS_ECS_API ManagedStorageConfiguration();
    AWS_ECS_API ManagedStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ManagedStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify a Key Management Service key ID to encrypt the managed storage.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ManagedStorageConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ManagedStorageConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ManagedStorageConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the Key Management Service key ID for the Fargate ephemeral
     * storage.</p>
     */
    inline const Aws::String& GetFargateEphemeralStorageKmsKeyId() const{ return m_fargateEphemeralStorageKmsKeyId; }
    inline bool FargateEphemeralStorageKmsKeyIdHasBeenSet() const { return m_fargateEphemeralStorageKmsKeyIdHasBeenSet; }
    inline void SetFargateEphemeralStorageKmsKeyId(const Aws::String& value) { m_fargateEphemeralStorageKmsKeyIdHasBeenSet = true; m_fargateEphemeralStorageKmsKeyId = value; }
    inline void SetFargateEphemeralStorageKmsKeyId(Aws::String&& value) { m_fargateEphemeralStorageKmsKeyIdHasBeenSet = true; m_fargateEphemeralStorageKmsKeyId = std::move(value); }
    inline void SetFargateEphemeralStorageKmsKeyId(const char* value) { m_fargateEphemeralStorageKmsKeyIdHasBeenSet = true; m_fargateEphemeralStorageKmsKeyId.assign(value); }
    inline ManagedStorageConfiguration& WithFargateEphemeralStorageKmsKeyId(const Aws::String& value) { SetFargateEphemeralStorageKmsKeyId(value); return *this;}
    inline ManagedStorageConfiguration& WithFargateEphemeralStorageKmsKeyId(Aws::String&& value) { SetFargateEphemeralStorageKmsKeyId(std::move(value)); return *this;}
    inline ManagedStorageConfiguration& WithFargateEphemeralStorageKmsKeyId(const char* value) { SetFargateEphemeralStorageKmsKeyId(value); return *this;}
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
