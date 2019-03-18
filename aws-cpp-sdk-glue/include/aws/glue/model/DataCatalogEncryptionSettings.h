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
#include <aws/glue/model/EncryptionAtRest.h>
#include <aws/glue/model/ConnectionPasswordEncryption.h>
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
   * <p>Contains configuration information for maintaining Data Catalog
   * security.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataCatalogEncryptionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API DataCatalogEncryptionSettings
  {
  public:
    DataCatalogEncryptionSettings();
    DataCatalogEncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    DataCatalogEncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the encryption-at-rest configuration for the Data Catalog.</p>
     */
    inline const EncryptionAtRest& GetEncryptionAtRest() const{ return m_encryptionAtRest; }

    /**
     * <p>Specifies the encryption-at-rest configuration for the Data Catalog.</p>
     */
    inline bool EncryptionAtRestHasBeenSet() const { return m_encryptionAtRestHasBeenSet; }

    /**
     * <p>Specifies the encryption-at-rest configuration for the Data Catalog.</p>
     */
    inline void SetEncryptionAtRest(const EncryptionAtRest& value) { m_encryptionAtRestHasBeenSet = true; m_encryptionAtRest = value; }

    /**
     * <p>Specifies the encryption-at-rest configuration for the Data Catalog.</p>
     */
    inline void SetEncryptionAtRest(EncryptionAtRest&& value) { m_encryptionAtRestHasBeenSet = true; m_encryptionAtRest = std::move(value); }

    /**
     * <p>Specifies the encryption-at-rest configuration for the Data Catalog.</p>
     */
    inline DataCatalogEncryptionSettings& WithEncryptionAtRest(const EncryptionAtRest& value) { SetEncryptionAtRest(value); return *this;}

    /**
     * <p>Specifies the encryption-at-rest configuration for the Data Catalog.</p>
     */
    inline DataCatalogEncryptionSettings& WithEncryptionAtRest(EncryptionAtRest&& value) { SetEncryptionAtRest(std::move(value)); return *this;}


    /**
     * <p>When connection password protection is enabled, the Data Catalog uses a
     * customer-provided key to encrypt the password as part of
     * <code>CreateConnection</code> or <code>UpdateConnection</code> and store it in
     * the <code>ENCRYPTED_PASSWORD</code> field in the connection properties. You can
     * enable catalog encryption or only password encryption.</p>
     */
    inline const ConnectionPasswordEncryption& GetConnectionPasswordEncryption() const{ return m_connectionPasswordEncryption; }

    /**
     * <p>When connection password protection is enabled, the Data Catalog uses a
     * customer-provided key to encrypt the password as part of
     * <code>CreateConnection</code> or <code>UpdateConnection</code> and store it in
     * the <code>ENCRYPTED_PASSWORD</code> field in the connection properties. You can
     * enable catalog encryption or only password encryption.</p>
     */
    inline bool ConnectionPasswordEncryptionHasBeenSet() const { return m_connectionPasswordEncryptionHasBeenSet; }

    /**
     * <p>When connection password protection is enabled, the Data Catalog uses a
     * customer-provided key to encrypt the password as part of
     * <code>CreateConnection</code> or <code>UpdateConnection</code> and store it in
     * the <code>ENCRYPTED_PASSWORD</code> field in the connection properties. You can
     * enable catalog encryption or only password encryption.</p>
     */
    inline void SetConnectionPasswordEncryption(const ConnectionPasswordEncryption& value) { m_connectionPasswordEncryptionHasBeenSet = true; m_connectionPasswordEncryption = value; }

    /**
     * <p>When connection password protection is enabled, the Data Catalog uses a
     * customer-provided key to encrypt the password as part of
     * <code>CreateConnection</code> or <code>UpdateConnection</code> and store it in
     * the <code>ENCRYPTED_PASSWORD</code> field in the connection properties. You can
     * enable catalog encryption or only password encryption.</p>
     */
    inline void SetConnectionPasswordEncryption(ConnectionPasswordEncryption&& value) { m_connectionPasswordEncryptionHasBeenSet = true; m_connectionPasswordEncryption = std::move(value); }

    /**
     * <p>When connection password protection is enabled, the Data Catalog uses a
     * customer-provided key to encrypt the password as part of
     * <code>CreateConnection</code> or <code>UpdateConnection</code> and store it in
     * the <code>ENCRYPTED_PASSWORD</code> field in the connection properties. You can
     * enable catalog encryption or only password encryption.</p>
     */
    inline DataCatalogEncryptionSettings& WithConnectionPasswordEncryption(const ConnectionPasswordEncryption& value) { SetConnectionPasswordEncryption(value); return *this;}

    /**
     * <p>When connection password protection is enabled, the Data Catalog uses a
     * customer-provided key to encrypt the password as part of
     * <code>CreateConnection</code> or <code>UpdateConnection</code> and store it in
     * the <code>ENCRYPTED_PASSWORD</code> field in the connection properties. You can
     * enable catalog encryption or only password encryption.</p>
     */
    inline DataCatalogEncryptionSettings& WithConnectionPasswordEncryption(ConnectionPasswordEncryption&& value) { SetConnectionPasswordEncryption(std::move(value)); return *this;}

  private:

    EncryptionAtRest m_encryptionAtRest;
    bool m_encryptionAtRestHasBeenSet;

    ConnectionPasswordEncryption m_connectionPasswordEncryption;
    bool m_connectionPasswordEncryptionHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
