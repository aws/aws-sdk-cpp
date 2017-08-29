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
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MarketplaceCommerceAnalytics
{
namespace Model
{
  /**
   * Container for the result of the GenerateDataSet operation.<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplacecommerceanalytics-2015-07-01/GenerateDataSetResult">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACECOMMERCEANALYTICS_API GenerateDataSetResult
  {
  public:
    GenerateDataSetResult();
    GenerateDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GenerateDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A unique identifier representing a specific request to the GenerateDataSet
     * operation. This identifier can be used to correlate a request with notifications
     * from the SNS topic.
     */
    inline const Aws::String& GetDataSetRequestId() const{ return m_dataSetRequestId; }

    /**
     * A unique identifier representing a specific request to the GenerateDataSet
     * operation. This identifier can be used to correlate a request with notifications
     * from the SNS topic.
     */
    inline void SetDataSetRequestId(const Aws::String& value) { m_dataSetRequestId = value; }

    /**
     * A unique identifier representing a specific request to the GenerateDataSet
     * operation. This identifier can be used to correlate a request with notifications
     * from the SNS topic.
     */
    inline void SetDataSetRequestId(Aws::String&& value) { m_dataSetRequestId = std::move(value); }

    /**
     * A unique identifier representing a specific request to the GenerateDataSet
     * operation. This identifier can be used to correlate a request with notifications
     * from the SNS topic.
     */
    inline void SetDataSetRequestId(const char* value) { m_dataSetRequestId.assign(value); }

    /**
     * A unique identifier representing a specific request to the GenerateDataSet
     * operation. This identifier can be used to correlate a request with notifications
     * from the SNS topic.
     */
    inline GenerateDataSetResult& WithDataSetRequestId(const Aws::String& value) { SetDataSetRequestId(value); return *this;}

    /**
     * A unique identifier representing a specific request to the GenerateDataSet
     * operation. This identifier can be used to correlate a request with notifications
     * from the SNS topic.
     */
    inline GenerateDataSetResult& WithDataSetRequestId(Aws::String&& value) { SetDataSetRequestId(std::move(value)); return *this;}

    /**
     * A unique identifier representing a specific request to the GenerateDataSet
     * operation. This identifier can be used to correlate a request with notifications
     * from the SNS topic.
     */
    inline GenerateDataSetResult& WithDataSetRequestId(const char* value) { SetDataSetRequestId(value); return *this;}

  private:

    Aws::String m_dataSetRequestId;
  };

} // namespace Model
} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
