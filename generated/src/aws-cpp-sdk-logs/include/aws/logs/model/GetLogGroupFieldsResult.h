/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CLOUDWATCHLOGS_API GetLogGroupFieldsResult() = default;
    AWS_CLOUDWATCHLOGS_API GetLogGroupFieldsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetLogGroupFieldsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The array of fields found in the query. Each object in the array contains the
     * name of the field, along with the percentage of time it appeared in the log
     * events that were queried.</p>
     */
    inline const Aws::Vector<LogGroupField>& GetLogGroupFields() const { return m_logGroupFields; }
    template<typename LogGroupFieldsT = Aws::Vector<LogGroupField>>
    void SetLogGroupFields(LogGroupFieldsT&& value) { m_logGroupFieldsHasBeenSet = true; m_logGroupFields = std::forward<LogGroupFieldsT>(value); }
    template<typename LogGroupFieldsT = Aws::Vector<LogGroupField>>
    GetLogGroupFieldsResult& WithLogGroupFields(LogGroupFieldsT&& value) { SetLogGroupFields(std::forward<LogGroupFieldsT>(value)); return *this;}
    template<typename LogGroupFieldsT = LogGroupField>
    GetLogGroupFieldsResult& AddLogGroupFields(LogGroupFieldsT&& value) { m_logGroupFieldsHasBeenSet = true; m_logGroupFields.emplace_back(std::forward<LogGroupFieldsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLogGroupFieldsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LogGroupField> m_logGroupFields;
    bool m_logGroupFieldsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
