/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DataSetImportConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class CreateDataSetImportTaskRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API CreateDataSetImportTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSetImportTask"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the application for which you want to import data
     * sets.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    CreateDataSetImportTaskRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create a data set import. The service generates the clientToken
     * when the API call is triggered. The token expires after one hour, so if you
     * retry the API within this timeframe with the same clientToken, you will get the
     * same response. The service also handles deleting the clientToken after it
     * expires. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateDataSetImportTaskRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data set import task configuration.</p>
     */
    inline const DataSetImportConfig& GetImportConfig() const { return m_importConfig; }
    inline bool ImportConfigHasBeenSet() const { return m_importConfigHasBeenSet; }
    template<typename ImportConfigT = DataSetImportConfig>
    void SetImportConfig(ImportConfigT&& value) { m_importConfigHasBeenSet = true; m_importConfig = std::forward<ImportConfigT>(value); }
    template<typename ImportConfigT = DataSetImportConfig>
    CreateDataSetImportTaskRequest& WithImportConfig(ImportConfigT&& value) { SetImportConfig(std::forward<ImportConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    DataSetImportConfig m_importConfig;
    bool m_importConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
