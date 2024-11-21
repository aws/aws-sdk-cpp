﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/CopyValueEntry.h>
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
   * <p>This processor copies values within a log event. You can also use this
   * processor to add metadata to log events by copying the values of the following
   * metadata keys into the log events: <code>@logGroupName</code>,
   * <code>@logGroupStream</code>, <code>@accountId</code>, <code>@regionName</code>.
   * </p> <p>For more information about this processor including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-copyValue">
   * copyValue</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CopyValue">AWS
   * API Reference</a></p>
   */
  class CopyValue
  {
  public:
    AWS_CLOUDWATCHLOGS_API CopyValue();
    AWS_CLOUDWATCHLOGS_API CopyValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API CopyValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of <code>CopyValueEntry</code> objects, where each object contains
     * the information about one field value to copy. </p>
     */
    inline const Aws::Vector<CopyValueEntry>& GetEntries() const{ return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    inline void SetEntries(const Aws::Vector<CopyValueEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }
    inline void SetEntries(Aws::Vector<CopyValueEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }
    inline CopyValue& WithEntries(const Aws::Vector<CopyValueEntry>& value) { SetEntries(value); return *this;}
    inline CopyValue& WithEntries(Aws::Vector<CopyValueEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline CopyValue& AddEntries(const CopyValueEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }
    inline CopyValue& AddEntries(CopyValueEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CopyValueEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
