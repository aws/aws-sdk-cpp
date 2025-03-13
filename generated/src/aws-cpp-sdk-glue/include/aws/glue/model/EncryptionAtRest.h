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
    AWS_GLUE_API EncryptionAtRest() = default;
    AWS_GLUE_API EncryptionAtRest(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API EncryptionAtRest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption-at-rest mode for encrypting Data Catalog data.</p>
     */
    inline CatalogEncryptionMode GetCatalogEncryptionMode() const { return m_catalogEncryptionMode; }
    inline bool CatalogEncryptionModeHasBeenSet() const { return m_catalogEncryptionModeHasBeenSet; }
    inline void SetCatalogEncryptionMode(CatalogEncryptionMode value) { m_catalogEncryptionModeHasBeenSet = true; m_catalogEncryptionMode = value; }
    inline EncryptionAtRest& WithCatalogEncryptionMode(CatalogEncryptionMode value) { SetCatalogEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key to use for encryption at rest.</p>
     */
    inline const Aws::String& GetSseAwsKmsKeyId() const { return m_sseAwsKmsKeyId; }
    inline bool SseAwsKmsKeyIdHasBeenSet() const { return m_sseAwsKmsKeyIdHasBeenSet; }
    template<typename SseAwsKmsKeyIdT = Aws::String>
    void SetSseAwsKmsKeyId(SseAwsKmsKeyIdT&& value) { m_sseAwsKmsKeyIdHasBeenSet = true; m_sseAwsKmsKeyId = std::forward<SseAwsKmsKeyIdT>(value); }
    template<typename SseAwsKmsKeyIdT = Aws::String>
    EncryptionAtRest& WithSseAwsKmsKeyId(SseAwsKmsKeyIdT&& value) { SetSseAwsKmsKeyId(std::forward<SseAwsKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role that Glue assumes to encrypt and decrypt the Data Catalog objects on
     * the caller's behalf.</p>
     */
    inline const Aws::String& GetCatalogEncryptionServiceRole() const { return m_catalogEncryptionServiceRole; }
    inline bool CatalogEncryptionServiceRoleHasBeenSet() const { return m_catalogEncryptionServiceRoleHasBeenSet; }
    template<typename CatalogEncryptionServiceRoleT = Aws::String>
    void SetCatalogEncryptionServiceRole(CatalogEncryptionServiceRoleT&& value) { m_catalogEncryptionServiceRoleHasBeenSet = true; m_catalogEncryptionServiceRole = std::forward<CatalogEncryptionServiceRoleT>(value); }
    template<typename CatalogEncryptionServiceRoleT = Aws::String>
    EncryptionAtRest& WithCatalogEncryptionServiceRole(CatalogEncryptionServiceRoleT&& value) { SetCatalogEncryptionServiceRole(std::forward<CatalogEncryptionServiceRoleT>(value)); return *this;}
    ///@}
  private:

    CatalogEncryptionMode m_catalogEncryptionMode{CatalogEncryptionMode::NOT_SET};
    bool m_catalogEncryptionModeHasBeenSet = false;

    Aws::String m_sseAwsKmsKeyId;
    bool m_sseAwsKmsKeyIdHasBeenSet = false;

    Aws::String m_catalogEncryptionServiceRole;
    bool m_catalogEncryptionServiceRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
