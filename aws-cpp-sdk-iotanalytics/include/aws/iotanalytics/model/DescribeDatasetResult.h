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
  class AWS_IOTANALYTICS_API DescribeDatasetResult
  {
  public:
    DescribeDatasetResult();
    DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about the data set.</p>
     */
    inline const Dataset& GetDataset() const{ return m_dataset; }

    /**
     * <p>An object that contains information about the data set.</p>
     */
    inline void SetDataset(const Dataset& value) { m_dataset = value; }

    /**
     * <p>An object that contains information about the data set.</p>
     */
    inline void SetDataset(Dataset&& value) { m_dataset = std::move(value); }

    /**
     * <p>An object that contains information about the data set.</p>
     */
    inline DescribeDatasetResult& WithDataset(const Dataset& value) { SetDataset(value); return *this;}

    /**
     * <p>An object that contains information about the data set.</p>
     */
    inline DescribeDatasetResult& WithDataset(Dataset&& value) { SetDataset(std::move(value)); return *this;}

  private:

    Dataset m_dataset;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
