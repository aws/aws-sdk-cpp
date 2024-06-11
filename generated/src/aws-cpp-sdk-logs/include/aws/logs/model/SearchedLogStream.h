/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents the search status of a log stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/SearchedLogStream">AWS
   * API Reference</a></p>
   */
  class SearchedLogStream
  {
  public:
    AWS_CLOUDWATCHLOGS_API SearchedLogStream();
    AWS_CLOUDWATCHLOGS_API SearchedLogStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API SearchedLogStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the log stream.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }
    inline SearchedLogStream& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}
    inline SearchedLogStream& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}
    inline SearchedLogStream& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether all the events in this log stream were searched.</p>
     */
    inline bool GetSearchedCompletely() const{ return m_searchedCompletely; }
    inline bool SearchedCompletelyHasBeenSet() const { return m_searchedCompletelyHasBeenSet; }
    inline void SetSearchedCompletely(bool value) { m_searchedCompletelyHasBeenSet = true; m_searchedCompletely = value; }
    inline SearchedLogStream& WithSearchedCompletely(bool value) { SetSearchedCompletely(value); return *this;}
    ///@}
  private:

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    bool m_searchedCompletely;
    bool m_searchedCompletelyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
