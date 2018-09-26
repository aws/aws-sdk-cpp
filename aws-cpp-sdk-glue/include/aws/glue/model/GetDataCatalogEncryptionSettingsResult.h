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
  class AWS_GLUE_API GetDataCatalogEncryptionSettingsResult
  {
  public:
    GetDataCatalogEncryptionSettingsResult();
    GetDataCatalogEncryptionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDataCatalogEncryptionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
