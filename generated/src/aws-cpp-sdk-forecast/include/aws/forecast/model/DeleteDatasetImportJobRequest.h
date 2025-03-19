/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class DeleteDatasetImportJobRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API DeleteDatasetImportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDatasetImportJob"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job to delete.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const { return m_datasetImportJobArn; }
    inline bool DatasetImportJobArnHasBeenSet() const { return m_datasetImportJobArnHasBeenSet; }
    template<typename DatasetImportJobArnT = Aws::String>
    void SetDatasetImportJobArn(DatasetImportJobArnT&& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = std::forward<DatasetImportJobArnT>(value); }
    template<typename DatasetImportJobArnT = Aws::String>
    DeleteDatasetImportJobRequest& WithDatasetImportJobArn(DatasetImportJobArnT&& value) { SetDatasetImportJobArn(std::forward<DatasetImportJobArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetImportJobArn;
    bool m_datasetImportJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
