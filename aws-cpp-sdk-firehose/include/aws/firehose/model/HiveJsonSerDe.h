/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>The native Hive / HCatalog JsonSerDe. Used by Kinesis Data Firehose for
   * deserializing data, which means converting it from the JSON format in
   * preparation for serializing it to the Parquet or ORC format. This is one of two
   * deserializers you can choose, depending on which one offers the functionality
   * you need. The other option is the OpenX SerDe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/HiveJsonSerDe">AWS
   * API Reference</a></p>
   */
  class HiveJsonSerDe
  {
  public:
    AWS_FIREHOSE_API HiveJsonSerDe();
    AWS_FIREHOSE_API HiveJsonSerDe(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API HiveJsonSerDe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates how you want Kinesis Data Firehose to parse the date and timestamps
     * that may be present in your input data JSON. To specify these format strings,
     * follow the pattern syntax of JodaTime's DateTimeFormat format strings. For more
     * information, see <a
     * href="https://www.joda.org/joda-time/apidocs/org/joda/time/format/DateTimeFormat.html">Class
     * DateTimeFormat</a>. You can also use the special value <code>millis</code> to
     * parse timestamps in epoch milliseconds. If you don't specify a format, Kinesis
     * Data Firehose uses <code>java.sql.Timestamp::valueOf</code> by default.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTimestampFormats() const{ return m_timestampFormats; }

    /**
     * <p>Indicates how you want Kinesis Data Firehose to parse the date and timestamps
     * that may be present in your input data JSON. To specify these format strings,
     * follow the pattern syntax of JodaTime's DateTimeFormat format strings. For more
     * information, see <a
     * href="https://www.joda.org/joda-time/apidocs/org/joda/time/format/DateTimeFormat.html">Class
     * DateTimeFormat</a>. You can also use the special value <code>millis</code> to
     * parse timestamps in epoch milliseconds. If you don't specify a format, Kinesis
     * Data Firehose uses <code>java.sql.Timestamp::valueOf</code> by default.</p>
     */
    inline bool TimestampFormatsHasBeenSet() const { return m_timestampFormatsHasBeenSet; }

    /**
     * <p>Indicates how you want Kinesis Data Firehose to parse the date and timestamps
     * that may be present in your input data JSON. To specify these format strings,
     * follow the pattern syntax of JodaTime's DateTimeFormat format strings. For more
     * information, see <a
     * href="https://www.joda.org/joda-time/apidocs/org/joda/time/format/DateTimeFormat.html">Class
     * DateTimeFormat</a>. You can also use the special value <code>millis</code> to
     * parse timestamps in epoch milliseconds. If you don't specify a format, Kinesis
     * Data Firehose uses <code>java.sql.Timestamp::valueOf</code> by default.</p>
     */
    inline void SetTimestampFormats(const Aws::Vector<Aws::String>& value) { m_timestampFormatsHasBeenSet = true; m_timestampFormats = value; }

    /**
     * <p>Indicates how you want Kinesis Data Firehose to parse the date and timestamps
     * that may be present in your input data JSON. To specify these format strings,
     * follow the pattern syntax of JodaTime's DateTimeFormat format strings. For more
     * information, see <a
     * href="https://www.joda.org/joda-time/apidocs/org/joda/time/format/DateTimeFormat.html">Class
     * DateTimeFormat</a>. You can also use the special value <code>millis</code> to
     * parse timestamps in epoch milliseconds. If you don't specify a format, Kinesis
     * Data Firehose uses <code>java.sql.Timestamp::valueOf</code> by default.</p>
     */
    inline void SetTimestampFormats(Aws::Vector<Aws::String>&& value) { m_timestampFormatsHasBeenSet = true; m_timestampFormats = std::move(value); }

    /**
     * <p>Indicates how you want Kinesis Data Firehose to parse the date and timestamps
     * that may be present in your input data JSON. To specify these format strings,
     * follow the pattern syntax of JodaTime's DateTimeFormat format strings. For more
     * information, see <a
     * href="https://www.joda.org/joda-time/apidocs/org/joda/time/format/DateTimeFormat.html">Class
     * DateTimeFormat</a>. You can also use the special value <code>millis</code> to
     * parse timestamps in epoch milliseconds. If you don't specify a format, Kinesis
     * Data Firehose uses <code>java.sql.Timestamp::valueOf</code> by default.</p>
     */
    inline HiveJsonSerDe& WithTimestampFormats(const Aws::Vector<Aws::String>& value) { SetTimestampFormats(value); return *this;}

    /**
     * <p>Indicates how you want Kinesis Data Firehose to parse the date and timestamps
     * that may be present in your input data JSON. To specify these format strings,
     * follow the pattern syntax of JodaTime's DateTimeFormat format strings. For more
     * information, see <a
     * href="https://www.joda.org/joda-time/apidocs/org/joda/time/format/DateTimeFormat.html">Class
     * DateTimeFormat</a>. You can also use the special value <code>millis</code> to
     * parse timestamps in epoch milliseconds. If you don't specify a format, Kinesis
     * Data Firehose uses <code>java.sql.Timestamp::valueOf</code> by default.</p>
     */
    inline HiveJsonSerDe& WithTimestampFormats(Aws::Vector<Aws::String>&& value) { SetTimestampFormats(std::move(value)); return *this;}

    /**
     * <p>Indicates how you want Kinesis Data Firehose to parse the date and timestamps
     * that may be present in your input data JSON. To specify these format strings,
     * follow the pattern syntax of JodaTime's DateTimeFormat format strings. For more
     * information, see <a
     * href="https://www.joda.org/joda-time/apidocs/org/joda/time/format/DateTimeFormat.html">Class
     * DateTimeFormat</a>. You can also use the special value <code>millis</code> to
     * parse timestamps in epoch milliseconds. If you don't specify a format, Kinesis
     * Data Firehose uses <code>java.sql.Timestamp::valueOf</code> by default.</p>
     */
    inline HiveJsonSerDe& AddTimestampFormats(const Aws::String& value) { m_timestampFormatsHasBeenSet = true; m_timestampFormats.push_back(value); return *this; }

    /**
     * <p>Indicates how you want Kinesis Data Firehose to parse the date and timestamps
     * that may be present in your input data JSON. To specify these format strings,
     * follow the pattern syntax of JodaTime's DateTimeFormat format strings. For more
     * information, see <a
     * href="https://www.joda.org/joda-time/apidocs/org/joda/time/format/DateTimeFormat.html">Class
     * DateTimeFormat</a>. You can also use the special value <code>millis</code> to
     * parse timestamps in epoch milliseconds. If you don't specify a format, Kinesis
     * Data Firehose uses <code>java.sql.Timestamp::valueOf</code> by default.</p>
     */
    inline HiveJsonSerDe& AddTimestampFormats(Aws::String&& value) { m_timestampFormatsHasBeenSet = true; m_timestampFormats.push_back(std::move(value)); return *this; }

    /**
     * <p>Indicates how you want Kinesis Data Firehose to parse the date and timestamps
     * that may be present in your input data JSON. To specify these format strings,
     * follow the pattern syntax of JodaTime's DateTimeFormat format strings. For more
     * information, see <a
     * href="https://www.joda.org/joda-time/apidocs/org/joda/time/format/DateTimeFormat.html">Class
     * DateTimeFormat</a>. You can also use the special value <code>millis</code> to
     * parse timestamps in epoch milliseconds. If you don't specify a format, Kinesis
     * Data Firehose uses <code>java.sql.Timestamp::valueOf</code> by default.</p>
     */
    inline HiveJsonSerDe& AddTimestampFormats(const char* value) { m_timestampFormatsHasBeenSet = true; m_timestampFormats.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_timestampFormats;
    bool m_timestampFormatsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
