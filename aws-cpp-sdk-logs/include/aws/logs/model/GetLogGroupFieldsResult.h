/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/LogGroupField.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class GetLogGroupFieldsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetLogGroupFieldsResult();
    AWS_CLOUDWATCHLOGS_API GetLogGroupFieldsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetLogGroupFieldsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The array of fields found in the query. Each object in the array contains the
     * name of the field, along with the percentage of time it appeared in the log
     * events that were queried.</p>
     */
    inline const Aws::Vector<LogGroupField>& GetLogGroupFields() const{ return m_logGroupFields; }

    /**
     * <p>The array of fields found in the query. Each object in the array contains the
     * name of the field, along with the percentage of time it appeared in the log
     * events that were queried.</p>
     */
    inline void SetLogGroupFields(const Aws::Vector<LogGroupField>& value) { m_logGroupFields = value; }

    /**
     * <p>The array of fields found in the query. Each object in the array contains the
     * name of the field, along with the percentage of time it appeared in the log
     * events that were queried.</p>
     */
    inline void SetLogGroupFields(Aws::Vector<LogGroupField>&& value) { m_logGroupFields = std::move(value); }

    /**
     * <p>The array of fields found in the query. Each object in the array contains the
     * name of the field, along with the percentage of time it appeared in the log
     * events that were queried.</p>
     */
    inline GetLogGroupFieldsResult& WithLogGroupFields(const Aws::Vector<LogGroupField>& value) { SetLogGroupFields(value); return *this;}

    /**
     * <p>The array of fields found in the query. Each object in the array contains the
     * name of the field, along with the percentage of time it appeared in the log
     * events that were queried.</p>
     */
    inline GetLogGroupFieldsResult& WithLogGroupFields(Aws::Vector<LogGroupField>&& value) { SetLogGroupFields(std::move(value)); return *this;}

    /**
     * <p>The array of fields found in the query. Each object in the array contains the
     * name of the field, along with the percentage of time it appeared in the log
     * events that were queried.</p>
     */
    inline GetLogGroupFieldsResult& AddLogGroupFields(const LogGroupField& value) { m_logGroupFields.push_back(value); return *this; }

    /**
     * <p>The array of fields found in the query. Each object in the array contains the
     * name of the field, along with the percentage of time it appeared in the log
     * events that were queried.</p>
     */
    inline GetLogGroupFieldsResult& AddLogGroupFields(LogGroupField&& value) { m_logGroupFields.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LogGroupField> m_logGroupFields;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
