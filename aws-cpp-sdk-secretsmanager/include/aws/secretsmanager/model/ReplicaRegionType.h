/**
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
   * <p>(Optional) Custom type consisting of a <code>Region</code> (required) and the
   * <code>KmsKeyId</code> which can be an <code>ARN</code>, <code>Key ID</code>, or
   * <code>Alias</code>.</p><p><h3>See Also:</h3>   <a
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
     * <p>Describes a single instance of Region objects.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>Describes a single instance of Region objects.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>Describes a single instance of Region objects.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>Describes a single instance of Region objects.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>Describes a single instance of Region objects.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>Describes a single instance of Region objects.</p>
     */
    inline ReplicaRegionType& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>Describes a single instance of Region objects.</p>
     */
    inline ReplicaRegionType& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>Describes a single instance of Region objects.</p>
     */
    inline ReplicaRegionType& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline ReplicaRegionType& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline ReplicaRegionType& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
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
