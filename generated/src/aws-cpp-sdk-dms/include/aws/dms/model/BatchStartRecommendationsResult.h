/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/BatchStartRecommendationsErrorEntry.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class BatchStartRecommendationsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API BatchStartRecommendationsResult();
    AWS_DATABASEMIGRATIONSERVICE_API BatchStartRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API BatchStartRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list with error details about the analysis of each source database.</p>
     */
    inline const Aws::Vector<BatchStartRecommendationsErrorEntry>& GetErrorEntries() const{ return m_errorEntries; }

    /**
     * <p>A list with error details about the analysis of each source database.</p>
     */
    inline void SetErrorEntries(const Aws::Vector<BatchStartRecommendationsErrorEntry>& value) { m_errorEntries = value; }

    /**
     * <p>A list with error details about the analysis of each source database.</p>
     */
    inline void SetErrorEntries(Aws::Vector<BatchStartRecommendationsErrorEntry>&& value) { m_errorEntries = std::move(value); }

    /**
     * <p>A list with error details about the analysis of each source database.</p>
     */
    inline BatchStartRecommendationsResult& WithErrorEntries(const Aws::Vector<BatchStartRecommendationsErrorEntry>& value) { SetErrorEntries(value); return *this;}

    /**
     * <p>A list with error details about the analysis of each source database.</p>
     */
    inline BatchStartRecommendationsResult& WithErrorEntries(Aws::Vector<BatchStartRecommendationsErrorEntry>&& value) { SetErrorEntries(std::move(value)); return *this;}

    /**
     * <p>A list with error details about the analysis of each source database.</p>
     */
    inline BatchStartRecommendationsResult& AddErrorEntries(const BatchStartRecommendationsErrorEntry& value) { m_errorEntries.push_back(value); return *this; }

    /**
     * <p>A list with error details about the analysis of each source database.</p>
     */
    inline BatchStartRecommendationsResult& AddErrorEntries(BatchStartRecommendationsErrorEntry&& value) { m_errorEntries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchStartRecommendationsErrorEntry> m_errorEntries;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
