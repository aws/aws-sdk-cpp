/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/Dataset.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class DescribeDatasetResult
  {
  public:
    AWS_IOTANALYTICS_API DescribeDatasetResult();
    AWS_IOTANALYTICS_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about the dataset.</p>
     */
    inline const Dataset& GetDataset() const{ return m_dataset; }

    /**
     * <p>An object that contains information about the dataset.</p>
     */
    inline void SetDataset(const Dataset& value) { m_dataset = value; }

    /**
     * <p>An object that contains information about the dataset.</p>
     */
    inline void SetDataset(Dataset&& value) { m_dataset = std::move(value); }

    /**
     * <p>An object that contains information about the dataset.</p>
     */
    inline DescribeDatasetResult& WithDataset(const Dataset& value) { SetDataset(value); return *this;}

    /**
     * <p>An object that contains information about the dataset.</p>
     */
    inline DescribeDatasetResult& WithDataset(Dataset&& value) { SetDataset(std::move(value)); return *this;}

  private:

    Dataset m_dataset;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
