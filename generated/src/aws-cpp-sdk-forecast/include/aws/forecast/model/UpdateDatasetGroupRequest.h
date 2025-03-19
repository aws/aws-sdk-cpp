/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class UpdateDatasetGroupRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API UpdateDatasetGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDatasetGroup"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const { return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    template<typename DatasetGroupArnT = Aws::String>
    void SetDatasetGroupArn(DatasetGroupArnT&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::forward<DatasetGroupArnT>(value); }
    template<typename DatasetGroupArnT = Aws::String>
    UpdateDatasetGroupRequest& WithDatasetGroupArn(DatasetGroupArnT&& value) { SetDatasetGroupArn(std::forward<DatasetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of the Amazon Resource Names (ARNs) of the datasets to add to the
     * dataset group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatasetArns() const { return m_datasetArns; }
    inline bool DatasetArnsHasBeenSet() const { return m_datasetArnsHasBeenSet; }
    template<typename DatasetArnsT = Aws::Vector<Aws::String>>
    void SetDatasetArns(DatasetArnsT&& value) { m_datasetArnsHasBeenSet = true; m_datasetArns = std::forward<DatasetArnsT>(value); }
    template<typename DatasetArnsT = Aws::Vector<Aws::String>>
    UpdateDatasetGroupRequest& WithDatasetArns(DatasetArnsT&& value) { SetDatasetArns(std::forward<DatasetArnsT>(value)); return *this;}
    template<typename DatasetArnsT = Aws::String>
    UpdateDatasetGroupRequest& AddDatasetArns(DatasetArnsT&& value) { m_datasetArnsHasBeenSet = true; m_datasetArns.emplace_back(std::forward<DatasetArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_datasetArns;
    bool m_datasetArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
