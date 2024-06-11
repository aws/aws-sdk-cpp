/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CatalogEncryptionMode.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies the encryption-at-rest configuration for the Data
   * Catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/EncryptionAtRest">AWS
   * API Reference</a></p>
   */
  class EncryptionAtRest
  {
  public:
    AWS_GLUE_API EncryptionAtRest();
    AWS_GLUE_API EncryptionAtRest(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API EncryptionAtRest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption-at-rest mode for encrypting Data Catalog data.</p>
     */
    inline const CatalogEncryptionMode& GetCatalogEncryptionMode() const{ return m_catalogEncryptionMode; }
    inline bool CatalogEncryptionModeHasBeenSet() const { return m_catalogEncryptionModeHasBeenSet; }
    inline void SetCatalogEncryptionMode(const CatalogEncryptionMode& value) { m_catalogEncryptionModeHasBeenSet = true; m_catalogEncryptionMode = value; }
    inline void SetCatalogEncryptionMode(CatalogEncryptionMode&& value) { m_catalogEncryptionModeHasBeenSet = true; m_catalogEncryptionMode = std::move(value); }
    inline EncryptionAtRest& WithCatalogEncryptionMode(const CatalogEncryptionMode& value) { SetCatalogEncryptionMode(value); return *this;}
    inline EncryptionAtRest& WithCatalogEncryptionMode(CatalogEncryptionMode&& value) { SetCatalogEncryptionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key to use for encryption at rest.</p>
     */
    inline const Aws::String& GetSseAwsKmsKeyId() const{ return m_sseAwsKmsKeyId; }
    inline bool SseAwsKmsKeyIdHasBeenSet() const { return m_sseAwsKmsKeyIdHasBeenSet; }
    inline void SetSseAwsKmsKeyId(const Aws::String& value) { m_sseAwsKmsKeyIdHasBeenSet = true; m_sseAwsKmsKeyId = value; }
    inline void SetSseAwsKmsKeyId(Aws::String&& value) { m_sseAwsKmsKeyIdHasBeenSet = true; m_sseAwsKmsKeyId = std::move(value); }
    inline void SetSseAwsKmsKeyId(const char* value) { m_sseAwsKmsKeyIdHasBeenSet = true; m_sseAwsKmsKeyId.assign(value); }
    inline EncryptionAtRest& WithSseAwsKmsKeyId(const Aws::String& value) { SetSseAwsKmsKeyId(value); return *this;}
    inline EncryptionAtRest& WithSseAwsKmsKeyId(Aws::String&& value) { SetSseAwsKmsKeyId(std::move(value)); return *this;}
    inline EncryptionAtRest& WithSseAwsKmsKeyId(const char* value) { SetSseAwsKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role that Glue assumes to encrypt and decrypt the Data Catalog objects on
     * the caller's behalf.</p>
     */
    inline const Aws::String& GetCatalogEncryptionServiceRole() const{ return m_catalogEncryptionServiceRole; }
    inline bool CatalogEncryptionServiceRoleHasBeenSet() const { return m_catalogEncryptionServiceRoleHasBeenSet; }
    inline void SetCatalogEncryptionServiceRole(const Aws::String& value) { m_catalogEncryptionServiceRoleHasBeenSet = true; m_catalogEncryptionServiceRole = value; }
    inline void SetCatalogEncryptionServiceRole(Aws::String&& value) { m_catalogEncryptionServiceRoleHasBeenSet = true; m_catalogEncryptionServiceRole = std::move(value); }
    inline void SetCatalogEncryptionServiceRole(const char* value) { m_catalogEncryptionServiceRoleHasBeenSet = true; m_catalogEncryptionServiceRole.assign(value); }
    inline EncryptionAtRest& WithCatalogEncryptionServiceRole(const Aws::String& value) { SetCatalogEncryptionServiceRole(value); return *this;}
    inline EncryptionAtRest& WithCatalogEncryptionServiceRole(Aws::String&& value) { SetCatalogEncryptionServiceRole(std::move(value)); return *this;}
    inline EncryptionAtRest& WithCatalogEncryptionServiceRole(const char* value) { SetCatalogEncryptionServiceRole(value); return *this;}
    ///@}
  private:

    CatalogEncryptionMode m_catalogEncryptionMode;
    bool m_catalogEncryptionModeHasBeenSet = false;

    Aws::String m_sseAwsKmsKeyId;
    bool m_sseAwsKmsKeyIdHasBeenSet = false;

    Aws::String m_catalogEncryptionServiceRole;
    bool m_catalogEncryptionServiceRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
