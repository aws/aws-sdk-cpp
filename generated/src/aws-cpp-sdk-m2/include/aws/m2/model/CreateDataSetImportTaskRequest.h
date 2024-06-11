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
    AWS_MAINFRAMEMODERNIZATION_API CreateDataSetImportTaskRequest();

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
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline CreateDataSetImportTaskRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline CreateDataSetImportTaskRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline CreateDataSetImportTaskRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateDataSetImportTaskRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDataSetImportTaskRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDataSetImportTaskRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data set import task configuration.</p>
     */
    inline const DataSetImportConfig& GetImportConfig() const{ return m_importConfig; }
    inline bool ImportConfigHasBeenSet() const { return m_importConfigHasBeenSet; }
    inline void SetImportConfig(const DataSetImportConfig& value) { m_importConfigHasBeenSet = true; m_importConfig = value; }
    inline void SetImportConfig(DataSetImportConfig&& value) { m_importConfigHasBeenSet = true; m_importConfig = std::move(value); }
    inline CreateDataSetImportTaskRequest& WithImportConfig(const DataSetImportConfig& value) { SetImportConfig(value); return *this;}
    inline CreateDataSetImportTaskRequest& WithImportConfig(DataSetImportConfig&& value) { SetImportConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DataSetImportConfig m_importConfig;
    bool m_importConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
