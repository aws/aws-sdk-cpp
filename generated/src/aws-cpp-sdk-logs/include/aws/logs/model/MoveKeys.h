/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/MoveKeyEntry.h>
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
   * <p>This processor moves a key from one field to another. The original key is
   * deleted.</p> <p>For more information about this processor including examples,
   * see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-moveKeys">
   * moveKeys</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/MoveKeys">AWS
   * API Reference</a></p>
   */
  class MoveKeys
  {
  public:
    AWS_CLOUDWATCHLOGS_API MoveKeys();
    AWS_CLOUDWATCHLOGS_API MoveKeys(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API MoveKeys& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects, where each object contains the information about one key
     * to move. </p>
     */
    inline const Aws::Vector<MoveKeyEntry>& GetEntries() const{ return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    inline void SetEntries(const Aws::Vector<MoveKeyEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }
    inline void SetEntries(Aws::Vector<MoveKeyEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }
    inline MoveKeys& WithEntries(const Aws::Vector<MoveKeyEntry>& value) { SetEntries(value); return *this;}
    inline MoveKeys& WithEntries(Aws::Vector<MoveKeyEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline MoveKeys& AddEntries(const MoveKeyEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }
    inline MoveKeys& AddEntries(MoveKeyEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MoveKeyEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
