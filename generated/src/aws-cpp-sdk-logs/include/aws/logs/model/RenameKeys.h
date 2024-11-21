/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/RenameKeyEntry.h>
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
   * <p>Use this processor to rename keys in a log event.</p> <p>For more information
   * about this processor including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-renameKeys">
   * renameKeys</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/RenameKeys">AWS API
   * Reference</a></p>
   */
  class RenameKeys
  {
  public:
    AWS_CLOUDWATCHLOGS_API RenameKeys();
    AWS_CLOUDWATCHLOGS_API RenameKeys(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API RenameKeys& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of <code>RenameKeyEntry</code> objects, where each object contains
     * the information about a single key to rename. </p>
     */
    inline const Aws::Vector<RenameKeyEntry>& GetEntries() const{ return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    inline void SetEntries(const Aws::Vector<RenameKeyEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }
    inline void SetEntries(Aws::Vector<RenameKeyEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }
    inline RenameKeys& WithEntries(const Aws::Vector<RenameKeyEntry>& value) { SetEntries(value); return *this;}
    inline RenameKeys& WithEntries(Aws::Vector<RenameKeyEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline RenameKeys& AddEntries(const RenameKeyEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }
    inline RenameKeys& AddEntries(RenameKeyEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RenameKeyEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
