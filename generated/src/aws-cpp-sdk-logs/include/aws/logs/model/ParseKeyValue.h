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
    AWS_CLOUDWATCHLOGS_API ParseKeyValue();
    AWS_CLOUDWATCHLOGS_API ParseKeyValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ParseKeyValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Path to the field in the log event that will be parsed. Use dot notation to
     * access child fields. For example, <code>store.book</code> </p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline ParseKeyValue& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline ParseKeyValue& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline ParseKeyValue& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination field to put the extracted key-value pairs into</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline ParseKeyValue& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline ParseKeyValue& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline ParseKeyValue& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field delimiter string that is used between key-value pairs in the
     * original log events. If you omit this, the ampersand <code>&amp;</code>
     * character is used.</p>
     */
    inline const Aws::String& GetFieldDelimiter() const{ return m_fieldDelimiter; }
    inline bool FieldDelimiterHasBeenSet() const { return m_fieldDelimiterHasBeenSet; }
    inline void SetFieldDelimiter(const Aws::String& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = value; }
    inline void SetFieldDelimiter(Aws::String&& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = std::move(value); }
    inline void SetFieldDelimiter(const char* value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter.assign(value); }
    inline ParseKeyValue& WithFieldDelimiter(const Aws::String& value) { SetFieldDelimiter(value); return *this;}
    inline ParseKeyValue& WithFieldDelimiter(Aws::String&& value) { SetFieldDelimiter(std::move(value)); return *this;}
    inline ParseKeyValue& WithFieldDelimiter(const char* value) { SetFieldDelimiter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delimiter string to use between the key and value in each pair in the
     * transformed log event.</p> <p> If you omit this, the equal <code>=</code>
     * character is used.</p>
     */
    inline const Aws::String& GetKeyValueDelimiter() const{ return m_keyValueDelimiter; }
    inline bool KeyValueDelimiterHasBeenSet() const { return m_keyValueDelimiterHasBeenSet; }
    inline void SetKeyValueDelimiter(const Aws::String& value) { m_keyValueDelimiterHasBeenSet = true; m_keyValueDelimiter = value; }
    inline void SetKeyValueDelimiter(Aws::String&& value) { m_keyValueDelimiterHasBeenSet = true; m_keyValueDelimiter = std::move(value); }
    inline void SetKeyValueDelimiter(const char* value) { m_keyValueDelimiterHasBeenSet = true; m_keyValueDelimiter.assign(value); }
    inline ParseKeyValue& WithKeyValueDelimiter(const Aws::String& value) { SetKeyValueDelimiter(value); return *this;}
    inline ParseKeyValue& WithKeyValueDelimiter(Aws::String&& value) { SetKeyValueDelimiter(std::move(value)); return *this;}
    inline ParseKeyValue& WithKeyValueDelimiter(const char* value) { SetKeyValueDelimiter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you want to add a prefix to all transformed keys, specify it here.</p>
     */
    inline const Aws::String& GetKeyPrefix() const{ return m_keyPrefix; }
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }
    inline void SetKeyPrefix(const Aws::String& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = value; }
    inline void SetKeyPrefix(Aws::String&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::move(value); }
    inline void SetKeyPrefix(const char* value) { m_keyPrefixHasBeenSet = true; m_keyPrefix.assign(value); }
    inline ParseKeyValue& WithKeyPrefix(const Aws::String& value) { SetKeyPrefix(value); return *this;}
    inline ParseKeyValue& WithKeyPrefix(Aws::String&& value) { SetKeyPrefix(std::move(value)); return *this;}
    inline ParseKeyValue& WithKeyPrefix(const char* value) { SetKeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value to insert into the value field in the result, when a key-value pair
     * is not successfully split.</p>
     */
    inline const Aws::String& GetNonMatchValue() const{ return m_nonMatchValue; }
    inline bool NonMatchValueHasBeenSet() const { return m_nonMatchValueHasBeenSet; }
    inline void SetNonMatchValue(const Aws::String& value) { m_nonMatchValueHasBeenSet = true; m_nonMatchValue = value; }
    inline void SetNonMatchValue(Aws::String&& value) { m_nonMatchValueHasBeenSet = true; m_nonMatchValue = std::move(value); }
    inline void SetNonMatchValue(const char* value) { m_nonMatchValueHasBeenSet = true; m_nonMatchValue.assign(value); }
    inline ParseKeyValue& WithNonMatchValue(const Aws::String& value) { SetNonMatchValue(value); return *this;}
    inline ParseKeyValue& WithNonMatchValue(Aws::String&& value) { SetNonMatchValue(std::move(value)); return *this;}
    inline ParseKeyValue& WithNonMatchValue(const char* value) { SetNonMatchValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to overwrite the value if the destination key already
     * exists. If you omit this, the default is <code>false</code>.</p>
     */
    inline bool GetOverwriteIfExists() const{ return m_overwriteIfExists; }
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

    bool m_overwriteIfExists;
    bool m_overwriteIfExistsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
