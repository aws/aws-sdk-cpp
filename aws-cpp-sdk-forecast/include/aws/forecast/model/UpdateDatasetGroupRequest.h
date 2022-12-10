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
    AWS_FORECASTSERVICE_API UpdateDatasetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDatasetGroup"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline UpdateDatasetGroupRequest& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline UpdateDatasetGroupRequest& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline UpdateDatasetGroupRequest& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>An array of the Amazon Resource Names (ARNs) of the datasets to add to the
     * dataset group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatasetArns() const{ return m_datasetArns; }

    /**
     * <p>An array of the Amazon Resource Names (ARNs) of the datasets to add to the
     * dataset group.</p>
     */
    inline bool DatasetArnsHasBeenSet() const { return m_datasetArnsHasBeenSet; }

    /**
     * <p>An array of the Amazon Resource Names (ARNs) of the datasets to add to the
     * dataset group.</p>
     */
    inline void SetDatasetArns(const Aws::Vector<Aws::String>& value) { m_datasetArnsHasBeenSet = true; m_datasetArns = value; }

    /**
     * <p>An array of the Amazon Resource Names (ARNs) of the datasets to add to the
     * dataset group.</p>
     */
    inline void SetDatasetArns(Aws::Vector<Aws::String>&& value) { m_datasetArnsHasBeenSet = true; m_datasetArns = std::move(value); }

    /**
     * <p>An array of the Amazon Resource Names (ARNs) of the datasets to add to the
     * dataset group.</p>
     */
    inline UpdateDatasetGroupRequest& WithDatasetArns(const Aws::Vector<Aws::String>& value) { SetDatasetArns(value); return *this;}

    /**
     * <p>An array of the Amazon Resource Names (ARNs) of the datasets to add to the
     * dataset group.</p>
     */
    inline UpdateDatasetGroupRequest& WithDatasetArns(Aws::Vector<Aws::String>&& value) { SetDatasetArns(std::move(value)); return *this;}

    /**
     * <p>An array of the Amazon Resource Names (ARNs) of the datasets to add to the
     * dataset group.</p>
     */
    inline UpdateDatasetGroupRequest& AddDatasetArns(const Aws::String& value) { m_datasetArnsHasBeenSet = true; m_datasetArns.push_back(value); return *this; }

    /**
     * <p>An array of the Amazon Resource Names (ARNs) of the datasets to add to the
     * dataset group.</p>
     */
    inline UpdateDatasetGroupRequest& AddDatasetArns(Aws::String&& value) { m_datasetArnsHasBeenSet = true; m_datasetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of the Amazon Resource Names (ARNs) of the datasets to add to the
     * dataset group.</p>
     */
    inline UpdateDatasetGroupRequest& AddDatasetArns(const char* value) { m_datasetArnsHasBeenSet = true; m_datasetArns.push_back(value); return *this; }

  private:

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_datasetArns;
    bool m_datasetArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
