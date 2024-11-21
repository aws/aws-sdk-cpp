/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/SubstituteStringEntry.h>
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
   * <p>This processor matches a key’s value against a regular expression and
   * replaces all matches with a replacement string.</p> <p>For more information
   * about this processor including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-substituteString">
   * substituteString</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/SubstituteString">AWS
   * API Reference</a></p>
   */
  class SubstituteString
  {
  public:
    AWS_CLOUDWATCHLOGS_API SubstituteString();
    AWS_CLOUDWATCHLOGS_API SubstituteString(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API SubstituteString& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects, where each object contains the information about one key
     * to match and replace. </p>
     */
    inline const Aws::Vector<SubstituteStringEntry>& GetEntries() const{ return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    inline void SetEntries(const Aws::Vector<SubstituteStringEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }
    inline void SetEntries(Aws::Vector<SubstituteStringEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }
    inline SubstituteString& WithEntries(const Aws::Vector<SubstituteStringEntry>& value) { SetEntries(value); return *this;}
    inline SubstituteString& WithEntries(Aws::Vector<SubstituteStringEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline SubstituteString& AddEntries(const SubstituteStringEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }
    inline SubstituteString& AddEntries(SubstituteStringEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SubstituteStringEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
