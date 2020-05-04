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
   * <code>QueryCompileError</code> object. For more information, see .</p> <p>For
   * more information about valid query syntax, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
   * Logs Insights Query Syntax</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/MalformedQueryException">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHLOGS_API MalformedQueryException
  {
  public:
    MalformedQueryException();
    MalformedQueryException(Aws::Utils::Json::JsonView jsonValue);
    MalformedQueryException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const QueryCompileError& GetQueryCompileError() const{ return m_queryCompileError; }

    
    inline bool QueryCompileErrorHasBeenSet() const { return m_queryCompileErrorHasBeenSet; }

    
    inline void SetQueryCompileError(const QueryCompileError& value) { m_queryCompileErrorHasBeenSet = true; m_queryCompileError = value; }

    
    inline void SetQueryCompileError(QueryCompileError&& value) { m_queryCompileErrorHasBeenSet = true; m_queryCompileError = std::move(value); }

    
    inline MalformedQueryException& WithQueryCompileError(const QueryCompileError& value) { SetQueryCompileError(value); return *this;}

    
    inline MalformedQueryException& WithQueryCompileError(QueryCompileError&& value) { SetQueryCompileError(std::move(value)); return *this;}

  private:

    QueryCompileError m_queryCompileError;
    bool m_queryCompileErrorHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
