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
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataCatalogEncryptionSettings.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API PutDataCatalogEncryptionSettingsRequest : public GlueRequest
  {
  public:
    PutDataCatalogEncryptionSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDataCatalogEncryptionSettings"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog for which to set the security configuration. If
     * none is provided, the AWS account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog for which to set the security configuration. If
     * none is provided, the AWS account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog for which to set the security configuration. If
     * none is provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog for which to set the security configuration. If
     * none is provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog for which to set the security configuration. If
     * none is provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog for which to set the security configuration. If
     * none is provided, the AWS account ID is used by default.</p>
     */
    inline PutDataCatalogEncryptionSettingsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog for which to set the security configuration. If
     * none is provided, the AWS account ID is used by default.</p>
     */
    inline PutDataCatalogEncryptionSettingsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog for which to set the security configuration. If
     * none is provided, the AWS account ID is used by default.</p>
     */
    inline PutDataCatalogEncryptionSettingsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The security configuration to set.</p>
     */
    inline const DataCatalogEncryptionSettings& GetDataCatalogEncryptionSettings() const{ return m_dataCatalogEncryptionSettings; }

    /**
     * <p>The security configuration to set.</p>
     */
    inline bool DataCatalogEncryptionSettingsHasBeenSet() const { return m_dataCatalogEncryptionSettingsHasBeenSet; }

    /**
     * <p>The security configuration to set.</p>
     */
    inline void SetDataCatalogEncryptionSettings(const DataCatalogEncryptionSettings& value) { m_dataCatalogEncryptionSettingsHasBeenSet = true; m_dataCatalogEncryptionSettings = value; }

    /**
     * <p>The security configuration to set.</p>
     */
    inline void SetDataCatalogEncryptionSettings(DataCatalogEncryptionSettings&& value) { m_dataCatalogEncryptionSettingsHasBeenSet = true; m_dataCatalogEncryptionSettings = std::move(value); }

    /**
     * <p>The security configuration to set.</p>
     */
    inline PutDataCatalogEncryptionSettingsRequest& WithDataCatalogEncryptionSettings(const DataCatalogEncryptionSettings& value) { SetDataCatalogEncryptionSettings(value); return *this;}

    /**
     * <p>The security configuration to set.</p>
     */
    inline PutDataCatalogEncryptionSettingsRequest& WithDataCatalogEncryptionSettings(DataCatalogEncryptionSettings&& value) { SetDataCatalogEncryptionSettings(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    DataCatalogEncryptionSettings m_dataCatalogEncryptionSettings;
    bool m_dataCatalogEncryptionSettingsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
