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
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/meteringmarketplace/model/UsageRecordResult.h>
#include <aws/meteringmarketplace/model/UsageRecord.h>
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
namespace MarketplaceMetering
{
namespace Model
{
  /**
   * <p>Contains the UsageRecords processed by BatchMeterUsage and any records that
   * have failed due to transient error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/BatchMeterUsageResult">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACEMETERING_API BatchMeterUsageResult
  {
  public:
    BatchMeterUsageResult();
    BatchMeterUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchMeterUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains all UsageRecords processed by BatchMeterUsage. These records were
     * either honored by AWS Marketplace Metering Service or were invalid.</p>
     */
    inline const Aws::Vector<UsageRecordResult>& GetResults() const{ return m_results; }

    /**
     * <p>Contains all UsageRecords processed by BatchMeterUsage. These records were
     * either honored by AWS Marketplace Metering Service or were invalid.</p>
     */
    inline void SetResults(const Aws::Vector<UsageRecordResult>& value) { m_results = value; }

    /**
     * <p>Contains all UsageRecords processed by BatchMeterUsage. These records were
     * either honored by AWS Marketplace Metering Service or were invalid.</p>
     */
    inline void SetResults(Aws::Vector<UsageRecordResult>&& value) { m_results = std::move(value); }

    /**
     * <p>Contains all UsageRecords processed by BatchMeterUsage. These records were
     * either honored by AWS Marketplace Metering Service or were invalid.</p>
     */
    inline BatchMeterUsageResult& WithResults(const Aws::Vector<UsageRecordResult>& value) { SetResults(value); return *this;}

    /**
     * <p>Contains all UsageRecords processed by BatchMeterUsage. These records were
     * either honored by AWS Marketplace Metering Service or were invalid.</p>
     */
    inline BatchMeterUsageResult& WithResults(Aws::Vector<UsageRecordResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>Contains all UsageRecords processed by BatchMeterUsage. These records were
     * either honored by AWS Marketplace Metering Service or were invalid.</p>
     */
    inline BatchMeterUsageResult& AddResults(const UsageRecordResult& value) { m_results.push_back(value); return *this; }

    /**
     * <p>Contains all UsageRecords processed by BatchMeterUsage. These records were
     * either honored by AWS Marketplace Metering Service or were invalid.</p>
     */
    inline BatchMeterUsageResult& AddResults(UsageRecordResult&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains all UsageRecords that were not processed by BatchMeterUsage. This is
     * a list of UsageRecords. You can retry the failed request by making another
     * BatchMeterUsage call with this list as input in the BatchMeterUsageRequest.</p>
     */
    inline const Aws::Vector<UsageRecord>& GetUnprocessedRecords() const{ return m_unprocessedRecords; }

    /**
     * <p>Contains all UsageRecords that were not processed by BatchMeterUsage. This is
     * a list of UsageRecords. You can retry the failed request by making another
     * BatchMeterUsage call with this list as input in the BatchMeterUsageRequest.</p>
     */
    inline void SetUnprocessedRecords(const Aws::Vector<UsageRecord>& value) { m_unprocessedRecords = value; }

    /**
     * <p>Contains all UsageRecords that were not processed by BatchMeterUsage. This is
     * a list of UsageRecords. You can retry the failed request by making another
     * BatchMeterUsage call with this list as input in the BatchMeterUsageRequest.</p>
     */
    inline void SetUnprocessedRecords(Aws::Vector<UsageRecord>&& value) { m_unprocessedRecords = std::move(value); }

    /**
     * <p>Contains all UsageRecords that were not processed by BatchMeterUsage. This is
     * a list of UsageRecords. You can retry the failed request by making another
     * BatchMeterUsage call with this list as input in the BatchMeterUsageRequest.</p>
     */
    inline BatchMeterUsageResult& WithUnprocessedRecords(const Aws::Vector<UsageRecord>& value) { SetUnprocessedRecords(value); return *this;}

    /**
     * <p>Contains all UsageRecords that were not processed by BatchMeterUsage. This is
     * a list of UsageRecords. You can retry the failed request by making another
     * BatchMeterUsage call with this list as input in the BatchMeterUsageRequest.</p>
     */
    inline BatchMeterUsageResult& WithUnprocessedRecords(Aws::Vector<UsageRecord>&& value) { SetUnprocessedRecords(std::move(value)); return *this;}

    /**
     * <p>Contains all UsageRecords that were not processed by BatchMeterUsage. This is
     * a list of UsageRecords. You can retry the failed request by making another
     * BatchMeterUsage call with this list as input in the BatchMeterUsageRequest.</p>
     */
    inline BatchMeterUsageResult& AddUnprocessedRecords(const UsageRecord& value) { m_unprocessedRecords.push_back(value); return *this; }

    /**
     * <p>Contains all UsageRecords that were not processed by BatchMeterUsage. This is
     * a list of UsageRecords. You can retry the failed request by making another
     * BatchMeterUsage call with this list as input in the BatchMeterUsageRequest.</p>
     */
    inline BatchMeterUsageResult& AddUnprocessedRecords(UsageRecord&& value) { m_unprocessedRecords.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UsageRecordResult> m_results;

    Aws::Vector<UsageRecord> m_unprocessedRecords;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
