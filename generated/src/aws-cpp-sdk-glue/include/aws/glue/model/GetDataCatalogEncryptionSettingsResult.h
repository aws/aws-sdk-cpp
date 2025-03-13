/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataCatalogEncryptionSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_GLUE_API GetDataCatalogEncryptionSettingsResult() = default;
    AWS_GLUE_API GetDataCatalogEncryptionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataCatalogEncryptionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested security configuration.</p>
     */
    inline const DataCatalogEncryptionSettings& GetDataCatalogEncryptionSettings() const { return m_dataCatalogEncryptionSettings; }
    template<typename DataCatalogEncryptionSettingsT = DataCatalogEncryptionSettings>
    void SetDataCatalogEncryptionSettings(DataCatalogEncryptionSettingsT&& value) { m_dataCatalogEncryptionSettingsHasBeenSet = true; m_dataCatalogEncryptionSettings = std::forward<DataCatalogEncryptionSettingsT>(value); }
    template<typename DataCatalogEncryptionSettingsT = DataCatalogEncryptionSettings>
    GetDataCatalogEncryptionSettingsResult& WithDataCatalogEncryptionSettings(DataCatalogEncryptionSettingsT&& value) { SetDataCatalogEncryptionSettings(std::forward<DataCatalogEncryptionSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataCatalogEncryptionSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataCatalogEncryptionSettings m_dataCatalogEncryptionSettings;
    bool m_dataCatalogEncryptionSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
