/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/TypeConverterEntry.h>
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
   * <p>Use this processor to convert a value type associated with the specified key
   * to the specified type. It's a casting processor that changes the types of the
   * specified fields. Values can be converted into one of the following datatypes:
   * <code>integer</code>, <code>double</code>, <code>string</code> and
   * <code>boolean</code>. </p> <p>For more information about this processor
   * including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-trimString">
   * trimString</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TypeConverter">AWS
   * API Reference</a></p>
   */
  class TypeConverter
  {
  public:
    AWS_CLOUDWATCHLOGS_API TypeConverter() = default;
    AWS_CLOUDWATCHLOGS_API TypeConverter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API TypeConverter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of <code>TypeConverterEntry</code> objects, where each object
     * contains the information about one field to change the type of. </p>
     */
    inline const Aws::Vector<TypeConverterEntry>& GetEntries() const { return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    template<typename EntriesT = Aws::Vector<TypeConverterEntry>>
    void SetEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries = std::forward<EntriesT>(value); }
    template<typename EntriesT = Aws::Vector<TypeConverterEntry>>
    TypeConverter& WithEntries(EntriesT&& value) { SetEntries(std::forward<EntriesT>(value)); return *this;}
    template<typename EntriesT = TypeConverterEntry>
    TypeConverter& AddEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries.emplace_back(std::forward<EntriesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TypeConverterEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
