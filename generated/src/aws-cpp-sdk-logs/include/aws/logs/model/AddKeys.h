/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/AddKeyEntry.h>
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
   * <p>This processor adds new key-value pairs to the log event. </p> <p>For more
   * information about this processor including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-addKeys">
   * addKeys</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/AddKeys">AWS API
   * Reference</a></p>
   */
  class AddKeys
  {
  public:
    AWS_CLOUDWATCHLOGS_API AddKeys();
    AWS_CLOUDWATCHLOGS_API AddKeys(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API AddKeys& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects, where each object contains the information about one key
     * to add to the log event. </p>
     */
    inline const Aws::Vector<AddKeyEntry>& GetEntries() const{ return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    inline void SetEntries(const Aws::Vector<AddKeyEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }
    inline void SetEntries(Aws::Vector<AddKeyEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }
    inline AddKeys& WithEntries(const Aws::Vector<AddKeyEntry>& value) { SetEntries(value); return *this;}
    inline AddKeys& WithEntries(Aws::Vector<AddKeyEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline AddKeys& AddEntries(const AddKeyEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }
    inline AddKeys& AddEntries(AddKeyEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AddKeyEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
