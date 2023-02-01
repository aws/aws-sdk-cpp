/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataCatalogEncryptionSettings.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class GetDataCatalogEncryptionSettingsResult
  {
  public:
    AWS_GLUE_API GetDataCatalogEncryptionSettingsResult();
    AWS_GLUE_API GetDataCatalogEncryptionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataCatalogEncryptionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested security configuration.</p>
     */
    inline const DataCatalogEncryptionSettings& GetDataCatalogEncryptionSettings() const{ return m_dataCatalogEncryptionSettings; }

    /**
     * <p>The requested security configuration.</p>
     */
    inline void SetDataCatalogEncryptionSettings(const DataCatalogEncryptionSettings& value) { m_dataCatalogEncryptionSettings = value; }

    /**
     * <p>The requested security configuration.</p>
     */
    inline void SetDataCatalogEncryptionSettings(DataCatalogEncryptionSettings&& value) { m_dataCatalogEncryptionSettings = std::move(value); }

    /**
     * <p>The requested security configuration.</p>
     */
    inline GetDataCatalogEncryptionSettingsResult& WithDataCatalogEncryptionSettings(const DataCatalogEncryptionSettings& value) { SetDataCatalogEncryptionSettings(value); return *this;}

    /**
     * <p>The requested security configuration.</p>
     */
    inline GetDataCatalogEncryptionSettingsResult& WithDataCatalogEncryptionSettings(DataCatalogEncryptionSettings&& value) { SetDataCatalogEncryptionSettings(std::move(value)); return *this;}

  private:

    DataCatalogEncryptionSettings m_dataCatalogEncryptionSettings;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
