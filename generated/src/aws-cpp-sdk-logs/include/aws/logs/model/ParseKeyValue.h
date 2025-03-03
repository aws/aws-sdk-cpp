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
   * <p>This processor parses a specified field in the original log event into
   * key-value pairs. </p> <p>For more information about this processor including
   * examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseKeyValue">
   * parseKeyValue</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ParseKeyValue">AWS
   * API Reference</a></p>
   */
  class ParseKeyValue
  {
  public:
    AWS_CLOUDWATCHLOGS_API ParseKeyValue() = default;
    AWS_CLOUDWATCHLOGS_API ParseKeyValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ParseKeyValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Path to the field in the log event that will be parsed. Use dot notation to
     * access child fields. For example, <code>store.book</code> </p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    ParseKeyValue& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination field to put the extracted key-value pairs into</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    ParseKeyValue& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field delimiter string that is used between key-value pairs in the
     * original log events. If you omit this, the ampersand <code>&amp;</code>
     * character is used.</p>
     */
    inline const Aws::String& GetFieldDelimiter() const { return m_fieldDelimiter; }
    inline bool FieldDelimiterHasBeenSet() const { return m_fieldDelimiterHasBeenSet; }
    template<typename FieldDelimiterT = Aws::String>
    void SetFieldDelimiter(FieldDelimiterT&& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = std::forward<FieldDelimiterT>(value); }
    template<typename FieldDelimiterT = Aws::String>
    ParseKeyValue& WithFieldDelimiter(FieldDelimiterT&& value) { SetFieldDelimiter(std::forward<FieldDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delimiter string to use between the key and value in each pair in the
     * transformed log event.</p> <p> If you omit this, the equal <code>=</code>
     * character is used.</p>
     */
    inline const Aws::String& GetKeyValueDelimiter() const { return m_keyValueDelimiter; }
    inline bool KeyValueDelimiterHasBeenSet() const { return m_keyValueDelimiterHasBeenSet; }
    template<typename KeyValueDelimiterT = Aws::String>
    void SetKeyValueDelimiter(KeyValueDelimiterT&& value) { m_keyValueDelimiterHasBeenSet = true; m_keyValueDelimiter = std::forward<KeyValueDelimiterT>(value); }
    template<typename KeyValueDelimiterT = Aws::String>
    ParseKeyValue& WithKeyValueDelimiter(KeyValueDelimiterT&& value) { SetKeyValueDelimiter(std::forward<KeyValueDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you want to add a prefix to all transformed keys, specify it here.</p>
     */
    inline const Aws::String& GetKeyPrefix() const { return m_keyPrefix; }
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }
    template<typename KeyPrefixT = Aws::String>
    void SetKeyPrefix(KeyPrefixT&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::forward<KeyPrefixT>(value); }
    template<typename KeyPrefixT = Aws::String>
    ParseKeyValue& WithKeyPrefix(KeyPrefixT&& value) { SetKeyPrefix(std::forward<KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value to insert into the value field in the result, when a key-value pair
     * is not successfully split.</p>
     */
    inline const Aws::String& GetNonMatchValue() const { return m_nonMatchValue; }
    inline bool NonMatchValueHasBeenSet() const { return m_nonMatchValueHasBeenSet; }
    template<typename NonMatchValueT = Aws::String>
    void SetNonMatchValue(NonMatchValueT&& value) { m_nonMatchValueHasBeenSet = true; m_nonMatchValue = std::forward<NonMatchValueT>(value); }
    template<typename NonMatchValueT = Aws::String>
    ParseKeyValue& WithNonMatchValue(NonMatchValueT&& value) { SetNonMatchValue(std::forward<NonMatchValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to overwrite the value if the destination key already
     * exists. If you omit this, the default is <code>false</code>.</p>
     */
    inline bool GetOverwriteIfExists() const { return m_overwriteIfExists; }
    inline bool OverwriteIfExistsHasBeenSet() const { return m_overwriteIfExistsHasBeenSet; }
    inline void SetOverwriteIfExists(bool value) { m_overwriteIfExistsHasBeenSet = true; m_overwriteIfExists = value; }
    inline ParseKeyValue& WithOverwriteIfExists(bool value) { SetOverwriteIfExists(value); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_fieldDelimiter;
    bool m_fieldDelimiterHasBeenSet = false;

    Aws::String m_keyValueDelimiter;
    bool m_keyValueDelimiterHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;

    Aws::String m_nonMatchValue;
    bool m_nonMatchValueHasBeenSet = false;

    bool m_overwriteIfExists{false};
    bool m_overwriteIfExistsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
