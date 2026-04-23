/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLUE_API EncryptionAtRest
  {
  public:
    EncryptionAtRest();
    EncryptionAtRest(Aws::Utils::Json::JsonView jsonValue);
    EncryptionAtRest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption-at-rest mode for encrypting Data Catalog data.</p>
     */
    inline const CatalogEncryptionMode& GetCatalogEncryptionMode() const{ return m_catalogEncryptionMode; }

    /**
     * <p>The encryption-at-rest mode for encrypting Data Catalog data.</p>
     */
    inline bool CatalogEncryptionModeHasBeenSet() const { return m_catalogEncryptionModeHasBeenSet; }

    /**
     * <p>The encryption-at-rest mode for encrypting Data Catalog data.</p>
     */
    inline void SetCatalogEncryptionMode(const CatalogEncryptionMode& value) { m_catalogEncryptionModeHasBeenSet = true; m_catalogEncryptionMode = value; }

    /**
     * <p>The encryption-at-rest mode for encrypting Data Catalog data.</p>
     */
    inline void SetCatalogEncryptionMode(CatalogEncryptionMode&& value) { m_catalogEncryptionModeHasBeenSet = true; m_catalogEncryptionMode = std::move(value); }

    /**
     * <p>The encryption-at-rest mode for encrypting Data Catalog data.</p>
     */
    inline EncryptionAtRest& WithCatalogEncryptionMode(const CatalogEncryptionMode& value) { SetCatalogEncryptionMode(value); return *this;}

    /**
     * <p>The encryption-at-rest mode for encrypting Data Catalog data.</p>
     */
    inline EncryptionAtRest& WithCatalogEncryptionMode(CatalogEncryptionMode&& value) { SetCatalogEncryptionMode(std::move(value)); return *this;}


    /**
     * <p>The ID of the AWS KMS key to use for encryption at rest.</p>
     */
    inline const Aws::String& GetSseAwsKmsKeyId() const{ return m_sseAwsKmsKeyId; }

    /**
     * <p>The ID of the AWS KMS key to use for encryption at rest.</p>
     */
    inline bool SseAwsKmsKeyIdHasBeenSet() const { return m_sseAwsKmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the AWS KMS key to use for encryption at rest.</p>
     */
    inline void SetSseAwsKmsKeyId(const Aws::String& value) { m_sseAwsKmsKeyIdHasBeenSet = true; m_sseAwsKmsKeyId = value; }

    /**
     * <p>The ID of the AWS KMS key to use for encryption at rest.</p>
     */
    inline void SetSseAwsKmsKeyId(Aws::String&& value) { m_sseAwsKmsKeyIdHasBeenSet = true; m_sseAwsKmsKeyId = std::move(value); }

    /**
     * <p>The ID of the AWS KMS key to use for encryption at rest.</p>
     */
    inline void SetSseAwsKmsKeyId(const char* value) { m_sseAwsKmsKeyIdHasBeenSet = true; m_sseAwsKmsKeyId.assign(value); }

    /**
     * <p>The ID of the AWS KMS key to use for encryption at rest.</p>
     */
    inline EncryptionAtRest& WithSseAwsKmsKeyId(const Aws::String& value) { SetSseAwsKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the AWS KMS key to use for encryption at rest.</p>
     */
    inline EncryptionAtRest& WithSseAwsKmsKeyId(Aws::String&& value) { SetSseAwsKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS KMS key to use for encryption at rest.</p>
     */
    inline EncryptionAtRest& WithSseAwsKmsKeyId(const char* value) { SetSseAwsKmsKeyId(value); return *this;}

  private:

    CatalogEncryptionMode m_catalogEncryptionMode;
    bool m_catalogEncryptionModeHasBeenSet;

    Aws::String m_sseAwsKmsKeyId;
    bool m_sseAwsKmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
