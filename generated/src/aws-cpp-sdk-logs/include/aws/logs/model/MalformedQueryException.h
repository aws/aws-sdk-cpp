/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/QueryCompileError.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>The query string is not valid. Details about this error are displayed in a
   * <code>QueryCompileError</code> object. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_QueryCompileError.html">QueryCompileError</a>.</p>
   * <p>For more information about valid query syntax, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
   * Logs Insights Query Syntax</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/MalformedQueryException">AWS
   * API Reference</a></p>
   */
  class MalformedQueryException
  {
  public:
    AWS_CLOUDWATCHLOGS_API MalformedQueryException() = default;
    AWS_CLOUDWATCHLOGS_API MalformedQueryException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API MalformedQueryException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const QueryCompileError& GetQueryCompileError() const { return m_queryCompileError; }
    inline bool QueryCompileErrorHasBeenSet() const { return m_queryCompileErrorHasBeenSet; }
    template<typename QueryCompileErrorT = QueryCompileError>
    void SetQueryCompileError(QueryCompileErrorT&& value) { m_queryCompileErrorHasBeenSet = true; m_queryCompileError = std::forward<QueryCompileErrorT>(value); }
    template<typename QueryCompileErrorT = QueryCompileError>
    MalformedQueryException& WithQueryCompileError(QueryCompileErrorT&& value) { SetQueryCompileError(std::forward<QueryCompileErrorT>(value)); return *this;}
    ///@}
  private:

    QueryCompileError m_queryCompileError;
    bool m_queryCompileErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
