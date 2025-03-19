/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DataCatalogEncryptionSettings
  {
  public:
    AWS_GLUE_API DataCatalogEncryptionSettings() = default;
    AWS_GLUE_API DataCatalogEncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataCatalogEncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the encryption-at-rest configuration for the Data Catalog.</p>
     */
    inline const EncryptionAtRest& GetEncryptionAtRest() const { return m_encryptionAtRest; }
    inline bool EncryptionAtRestHasBeenSet() const { return m_encryptionAtRestHasBeenSet; }
    template<typename EncryptionAtRestT = EncryptionAtRest>
    void SetEncryptionAtRest(EncryptionAtRestT&& value) { m_encryptionAtRestHasBeenSet = true; m_encryptionAtRest = std::forward<EncryptionAtRestT>(value); }
    template<typename EncryptionAtRestT = EncryptionAtRest>
    DataCatalogEncryptionSettings& WithEncryptionAtRest(EncryptionAtRestT&& value) { SetEncryptionAtRest(std::forward<EncryptionAtRestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When connection password protection is enabled, the Data Catalog uses a
     * customer-provided key to encrypt the password as part of
     * <code>CreateConnection</code> or <code>UpdateConnection</code> and store it in
     * the <code>ENCRYPTED_PASSWORD</code> field in the connection properties. You can
     * enable catalog encryption or only password encryption.</p>
     */
    inline const ConnectionPasswordEncryption& GetConnectionPasswordEncryption() const { return m_connectionPasswordEncryption; }
    inline bool ConnectionPasswordEncryptionHasBeenSet() const { return m_connectionPasswordEncryptionHasBeenSet; }
    template<typename ConnectionPasswordEncryptionT = ConnectionPasswordEncryption>
    void SetConnectionPasswordEncryption(ConnectionPasswordEncryptionT&& value) { m_connectionPasswordEncryptionHasBeenSet = true; m_connectionPasswordEncryption = std::forward<ConnectionPasswordEncryptionT>(value); }
    template<typename ConnectionPasswordEncryptionT = ConnectionPasswordEncryption>
    DataCatalogEncryptionSettings& WithConnectionPasswordEncryption(ConnectionPasswordEncryptionT&& value) { SetConnectionPasswordEncryption(std::forward<ConnectionPasswordEncryptionT>(value)); return *this;}
    ///@}
  private:

    EncryptionAtRest m_encryptionAtRest;
    bool m_encryptionAtRestHasBeenSet = false;

    ConnectionPasswordEncryption m_connectionPasswordEncryption;
    bool m_connectionPasswordEncryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
