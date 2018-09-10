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
     * <p>Specifies encryption-at-rest configuration for the Data Catalog.</p>
     */
    inline const EncryptionAtRest& GetEncryptionAtRest() const{ return m_encryptionAtRest; }

    /**
     * <p>Specifies encryption-at-rest configuration for the Data Catalog.</p>
     */
    inline void SetEncryptionAtRest(const EncryptionAtRest& value) { m_encryptionAtRestHasBeenSet = true; m_encryptionAtRest = value; }

    /**
     * <p>Specifies encryption-at-rest configuration for the Data Catalog.</p>
     */
    inline void SetEncryptionAtRest(EncryptionAtRest&& value) { m_encryptionAtRestHasBeenSet = true; m_encryptionAtRest = std::move(value); }

    /**
     * <p>Specifies encryption-at-rest configuration for the Data Catalog.</p>
     */
    inline DataCatalogEncryptionSettings& WithEncryptionAtRest(const EncryptionAtRest& value) { SetEncryptionAtRest(value); return *this;}

    /**
     * <p>Specifies encryption-at-rest configuration for the Data Catalog.</p>
     */
    inline DataCatalogEncryptionSettings& WithEncryptionAtRest(EncryptionAtRest&& value) { SetEncryptionAtRest(std::move(value)); return *this;}

  private:

    EncryptionAtRest m_encryptionAtRest;
    bool m_encryptionAtRestHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
