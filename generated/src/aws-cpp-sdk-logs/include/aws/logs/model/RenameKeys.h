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
    AWS_CLOUDWATCHLOGS_API RenameKeys() = default;
    AWS_CLOUDWATCHLOGS_API RenameKeys(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API RenameKeys& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of <code>RenameKeyEntry</code> objects, where each object contains
     * the information about a single key to rename. </p>
     */
    inline const Aws::Vector<RenameKeyEntry>& GetEntries() const { return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    template<typename EntriesT = Aws::Vector<RenameKeyEntry>>
    void SetEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries = std::forward<EntriesT>(value); }
    template<typename EntriesT = Aws::Vector<RenameKeyEntry>>
    RenameKeys& WithEntries(EntriesT&& value) { SetEntries(std::forward<EntriesT>(value)); return *this;}
    template<typename EntriesT = RenameKeyEntry>
    RenameKeys& AddEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries.emplace_back(std::forward<EntriesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RenameKeyEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
