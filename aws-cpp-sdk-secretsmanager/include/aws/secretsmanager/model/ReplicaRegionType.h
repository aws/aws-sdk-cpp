﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
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
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>A custom type that specifies a <code>Region</code> and the
   * <code>KmsKeyId</code> for a replica secret.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ReplicaRegionType">AWS
   * API Reference</a></p>
   */
  class AWS_SECRETSMANAGER_API ReplicaRegionType
  {
  public:
    ReplicaRegionType();
    ReplicaRegionType(Aws::Utils::Json::JsonView jsonValue);
    ReplicaRegionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Region code. For a list of Region codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Name
     * and code of Regions</a>.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>A Region code. For a list of Region codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Name
     * and code of Regions</a>.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>A Region code. For a list of Region codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Name
     * and code of Regions</a>.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>A Region code. For a list of Region codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Name
     * and code of Regions</a>.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>A Region code. For a list of Region codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Name
     * and code of Regions</a>.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>A Region code. For a list of Region codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Name
     * and code of Regions</a>.</p>
     */
    inline ReplicaRegionType& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>A Region code. For a list of Region codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Name
     * and code of Regions</a>.</p>
     */
    inline ReplicaRegionType& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>A Region code. For a list of Region codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Name
     * and code of Regions</a>.</p>
     */
    inline ReplicaRegionType& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The ARN, key ID, or alias of the KMS key to encrypt the secret. If you don't
     * include this field, Secrets Manager uses <code>aws/secretsmanager</code>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ARN, key ID, or alias of the KMS key to encrypt the secret. If you don't
     * include this field, Secrets Manager uses <code>aws/secretsmanager</code>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ARN, key ID, or alias of the KMS key to encrypt the secret. If you don't
     * include this field, Secrets Manager uses <code>aws/secretsmanager</code>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ARN, key ID, or alias of the KMS key to encrypt the secret. If you don't
     * include this field, Secrets Manager uses <code>aws/secretsmanager</code>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ARN, key ID, or alias of the KMS key to encrypt the secret. If you don't
     * include this field, Secrets Manager uses <code>aws/secretsmanager</code>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ARN, key ID, or alias of the KMS key to encrypt the secret. If you don't
     * include this field, Secrets Manager uses <code>aws/secretsmanager</code>.</p>
     */
    inline ReplicaRegionType& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ARN, key ID, or alias of the KMS key to encrypt the secret. If you don't
     * include this field, Secrets Manager uses <code>aws/secretsmanager</code>.</p>
     */
    inline ReplicaRegionType& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ARN, key ID, or alias of the KMS key to encrypt the secret. If you don't
     * include this field, Secrets Manager uses <code>aws/secretsmanager</code>.</p>
     */
    inline ReplicaRegionType& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
