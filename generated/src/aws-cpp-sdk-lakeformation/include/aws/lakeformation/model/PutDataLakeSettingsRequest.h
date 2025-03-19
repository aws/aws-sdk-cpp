/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/DataLakeSettings.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class PutDataLakeSettingsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API PutDataLakeSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDataLakeSettings"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    PutDataLakeSettingsRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure representing a list of Lake Formation principals designated as
     * data lake administrators.</p>
     */
    inline const DataLakeSettings& GetDataLakeSettings() const { return m_dataLakeSettings; }
    inline bool DataLakeSettingsHasBeenSet() const { return m_dataLakeSettingsHasBeenSet; }
    template<typename DataLakeSettingsT = DataLakeSettings>
    void SetDataLakeSettings(DataLakeSettingsT&& value) { m_dataLakeSettingsHasBeenSet = true; m_dataLakeSettings = std::forward<DataLakeSettingsT>(value); }
    template<typename DataLakeSettingsT = DataLakeSettings>
    PutDataLakeSettingsRequest& WithDataLakeSettings(DataLakeSettingsT&& value) { SetDataLakeSettings(std::forward<DataLakeSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    DataLakeSettings m_dataLakeSettings;
    bool m_dataLakeSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
