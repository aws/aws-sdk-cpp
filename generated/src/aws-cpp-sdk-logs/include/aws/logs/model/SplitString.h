/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/SplitStringEntry.h>
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
   * <p>Use this processor to split a field into an array of strings using a
   * delimiting character.</p> <p>For more information about this processor including
   * examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-splitString">
   * splitString</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/SplitString">AWS
   * API Reference</a></p>
   */
  class SplitString
  {
  public:
    AWS_CLOUDWATCHLOGS_API SplitString();
    AWS_CLOUDWATCHLOGS_API SplitString(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API SplitString& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of <code>SplitStringEntry</code> objects, where each object contains
     * the information about one field to split. </p>
     */
    inline const Aws::Vector<SplitStringEntry>& GetEntries() const{ return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    inline void SetEntries(const Aws::Vector<SplitStringEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }
    inline void SetEntries(Aws::Vector<SplitStringEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }
    inline SplitString& WithEntries(const Aws::Vector<SplitStringEntry>& value) { SetEntries(value); return *this;}
    inline SplitString& WithEntries(Aws::Vector<SplitStringEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline SplitString& AddEntries(const SplitStringEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }
    inline SplitString& AddEntries(SplitStringEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SplitStringEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
