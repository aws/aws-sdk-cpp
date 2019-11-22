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
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/Domain.h>
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
  class AWS_FORECASTSERVICE_API CreateDatasetGroupRequest : public ForecastServiceRequest
  {
  public:
    CreateDatasetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatasetGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupName() const{ return m_datasetGroupName; }

    /**
     * <p>A name for the dataset group.</p>
     */
    inline bool DatasetGroupNameHasBeenSet() const { return m_datasetGroupNameHasBeenSet; }

    /**
     * <p>A name for the dataset group.</p>
     */
    inline void SetDatasetGroupName(const Aws::String& value) { m_datasetGroupNameHasBeenSet = true; m_datasetGroupName = value; }

    /**
     * <p>A name for the dataset group.</p>
     */
    inline void SetDatasetGroupName(Aws::String&& value) { m_datasetGroupNameHasBeenSet = true; m_datasetGroupName = std::move(value); }

    /**
     * <p>A name for the dataset group.</p>
     */
    inline void SetDatasetGroupName(const char* value) { m_datasetGroupNameHasBeenSet = true; m_datasetGroupName.assign(value); }

    /**
     * <p>A name for the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithDatasetGroupName(const Aws::String& value) { SetDatasetGroupName(value); return *this;}

    /**
     * <p>A name for the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithDatasetGroupName(Aws::String&& value) { SetDatasetGroupName(std::move(value)); return *this;}

    /**
     * <p>A name for the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithDatasetGroupName(const char* value) { SetDatasetGroupName(value); return *this;}


    /**
     * <p>The domain associated with the dataset group. When you add a dataset to a
     * dataset group, this value and the value specified for the <code>Domain</code>
     * parameter of the <a>CreateDataset</a> operation must match.</p> <p>The
     * <code>Domain</code> and <code>DatasetType</code> that you choose determine the
     * fields that must be present in training data that you import to a dataset. For
     * example, if you choose the <code>RETAIL</code> domain and
     * <code>TARGET_TIME_SERIES</code> as the <code>DatasetType</code>, Amazon Forecast
     * requires that <code>item_id</code>, <code>timestamp</code>, and
     * <code>demand</code> fields are present in your data. For more information, see
     * <a>howitworks-datasets-groups</a>.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain associated with the dataset group. When you add a dataset to a
     * dataset group, this value and the value specified for the <code>Domain</code>
     * parameter of the <a>CreateDataset</a> operation must match.</p> <p>The
     * <code>Domain</code> and <code>DatasetType</code> that you choose determine the
     * fields that must be present in training data that you import to a dataset. For
     * example, if you choose the <code>RETAIL</code> domain and
     * <code>TARGET_TIME_SERIES</code> as the <code>DatasetType</code>, Amazon Forecast
     * requires that <code>item_id</code>, <code>timestamp</code>, and
     * <code>demand</code> fields are present in your data. For more information, see
     * <a>howitworks-datasets-groups</a>.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain associated with the dataset group. When you add a dataset to a
     * dataset group, this value and the value specified for the <code>Domain</code>
     * parameter of the <a>CreateDataset</a> operation must match.</p> <p>The
     * <code>Domain</code> and <code>DatasetType</code> that you choose determine the
     * fields that must be present in training data that you import to a dataset. For
     * example, if you choose the <code>RETAIL</code> domain and
     * <code>TARGET_TIME_SERIES</code> as the <code>DatasetType</code>, Amazon Forecast
     * requires that <code>item_id</code>, <code>timestamp</code>, and
     * <code>demand</code> fields are present in your data. For more information, see
     * <a>howitworks-datasets-groups</a>.</p>
     */
    inline void SetDomain(const Domain& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain associated with the dataset group. When you add a dataset to a
     * dataset group, this value and the value specified for the <code>Domain</code>
     * parameter of the <a>CreateDataset</a> operation must match.</p> <p>The
     * <code>Domain</code> and <code>DatasetType</code> that you choose determine the
     * fields that must be present in training data that you import to a dataset. For
     * example, if you choose the <code>RETAIL</code> domain and
     * <code>TARGET_TIME_SERIES</code> as the <code>DatasetType</code>, Amazon Forecast
     * requires that <code>item_id</code>, <code>timestamp</code>, and
     * <code>demand</code> fields are present in your data. For more information, see
     * <a>howitworks-datasets-groups</a>.</p>
     */
    inline void SetDomain(Domain&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain associated with the dataset group. When you add a dataset to a
     * dataset group, this value and the value specified for the <code>Domain</code>
     * parameter of the <a>CreateDataset</a> operation must match.</p> <p>The
     * <code>Domain</code> and <code>DatasetType</code> that you choose determine the
     * fields that must be present in training data that you import to a dataset. For
     * example, if you choose the <code>RETAIL</code> domain and
     * <code>TARGET_TIME_SERIES</code> as the <code>DatasetType</code>, Amazon Forecast
     * requires that <code>item_id</code>, <code>timestamp</code>, and
     * <code>demand</code> fields are present in your data. For more information, see
     * <a>howitworks-datasets-groups</a>.</p>
     */
    inline CreateDatasetGroupRequest& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain associated with the dataset group. When you add a dataset to a
     * dataset group, this value and the value specified for the <code>Domain</code>
     * parameter of the <a>CreateDataset</a> operation must match.</p> <p>The
     * <code>Domain</code> and <code>DatasetType</code> that you choose determine the
     * fields that must be present in training data that you import to a dataset. For
     * example, if you choose the <code>RETAIL</code> domain and
     * <code>TARGET_TIME_SERIES</code> as the <code>DatasetType</code>, Amazon Forecast
     * requires that <code>item_id</code>, <code>timestamp</code>, and
     * <code>demand</code> fields are present in your data. For more information, see
     * <a>howitworks-datasets-groups</a>.</p>
     */
    inline CreateDatasetGroupRequest& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}


    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatasetArns() const{ return m_datasetArns; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline bool DatasetArnsHasBeenSet() const { return m_datasetArnsHasBeenSet; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline void SetDatasetArns(const Aws::Vector<Aws::String>& value) { m_datasetArnsHasBeenSet = true; m_datasetArns = value; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline void SetDatasetArns(Aws::Vector<Aws::String>&& value) { m_datasetArnsHasBeenSet = true; m_datasetArns = std::move(value); }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithDatasetArns(const Aws::Vector<Aws::String>& value) { SetDatasetArns(value); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithDatasetArns(Aws::Vector<Aws::String>&& value) { SetDatasetArns(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& AddDatasetArns(const Aws::String& value) { m_datasetArnsHasBeenSet = true; m_datasetArns.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& AddDatasetArns(Aws::String&& value) { m_datasetArnsHasBeenSet = true; m_datasetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& AddDatasetArns(const char* value) { m_datasetArnsHasBeenSet = true; m_datasetArns.push_back(value); return *this; }

  private:

    Aws::String m_datasetGroupName;
    bool m_datasetGroupNameHasBeenSet;

    Domain m_domain;
    bool m_domainHasBeenSet;

    Aws::Vector<Aws::String> m_datasetArns;
    bool m_datasetArnsHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
