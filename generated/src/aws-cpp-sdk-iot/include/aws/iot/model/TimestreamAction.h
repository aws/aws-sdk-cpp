/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/TimestreamTimestamp.h>
#include <aws/iot/model/TimestreamDimension.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The Timestream rule action writes attributes (measures) from an MQTT message
   * into an Amazon Timestream table. For more information, see the <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/timestream-rule-action.html">Timestream</a>
   * topic rule action documentation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TimestreamAction">AWS
   * API Reference</a></p>
   */
  class TimestreamAction
  {
  public:
    AWS_IOT_API TimestreamAction();
    AWS_IOT_API TimestreamAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TimestreamAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the role that grants permission to write to the Amazon Timestream
     * database table.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that grants permission to write to the Amazon Timestream
     * database table.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that grants permission to write to the Amazon Timestream
     * database table.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that grants permission to write to the Amazon Timestream
     * database table.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that grants permission to write to the Amazon Timestream
     * database table.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that grants permission to write to the Amazon Timestream
     * database table.</p>
     */
    inline TimestreamAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants permission to write to the Amazon Timestream
     * database table.</p>
     */
    inline TimestreamAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants permission to write to the Amazon Timestream
     * database table.</p>
     */
    inline TimestreamAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of an Amazon Timestream database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of an Amazon Timestream database.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of an Amazon Timestream database.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of an Amazon Timestream database.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of an Amazon Timestream database.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of an Amazon Timestream database.</p>
     */
    inline TimestreamAction& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of an Amazon Timestream database.</p>
     */
    inline TimestreamAction& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of an Amazon Timestream database.</p>
     */
    inline TimestreamAction& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the database table into which to write the measure records.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the database table into which to write the measure records.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the database table into which to write the measure records.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the database table into which to write the measure records.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the database table into which to write the measure records.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the database table into which to write the measure records.</p>
     */
    inline TimestreamAction& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the database table into which to write the measure records.</p>
     */
    inline TimestreamAction& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the database table into which to write the measure records.</p>
     */
    inline TimestreamAction& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>Metadata attributes of the time series that are written in each measure
     * record.</p>
     */
    inline const Aws::Vector<TimestreamDimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>Metadata attributes of the time series that are written in each measure
     * record.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>Metadata attributes of the time series that are written in each measure
     * record.</p>
     */
    inline void SetDimensions(const Aws::Vector<TimestreamDimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>Metadata attributes of the time series that are written in each measure
     * record.</p>
     */
    inline void SetDimensions(Aws::Vector<TimestreamDimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>Metadata attributes of the time series that are written in each measure
     * record.</p>
     */
    inline TimestreamAction& WithDimensions(const Aws::Vector<TimestreamDimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>Metadata attributes of the time series that are written in each measure
     * record.</p>
     */
    inline TimestreamAction& WithDimensions(Aws::Vector<TimestreamDimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>Metadata attributes of the time series that are written in each measure
     * record.</p>
     */
    inline TimestreamAction& AddDimensions(const TimestreamDimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>Metadata attributes of the time series that are written in each measure
     * record.</p>
     */
    inline TimestreamAction& AddDimensions(TimestreamDimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies an application-defined value to replace the default value assigned
     * to the Timestream record's timestamp in the <code>time</code> column.</p> <p>You
     * can use this property to specify the value and the precision of the Timestream
     * record's timestamp. You can specify a value from the message payload or a value
     * computed by a substitution template.</p> <p>If omitted, the topic rule action
     * assigns the timestamp, in milliseconds, at the time it processed the rule. </p>
     */
    inline const TimestreamTimestamp& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Specifies an application-defined value to replace the default value assigned
     * to the Timestream record's timestamp in the <code>time</code> column.</p> <p>You
     * can use this property to specify the value and the precision of the Timestream
     * record's timestamp. You can specify a value from the message payload or a value
     * computed by a substitution template.</p> <p>If omitted, the topic rule action
     * assigns the timestamp, in milliseconds, at the time it processed the rule. </p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Specifies an application-defined value to replace the default value assigned
     * to the Timestream record's timestamp in the <code>time</code> column.</p> <p>You
     * can use this property to specify the value and the precision of the Timestream
     * record's timestamp. You can specify a value from the message payload or a value
     * computed by a substitution template.</p> <p>If omitted, the topic rule action
     * assigns the timestamp, in milliseconds, at the time it processed the rule. </p>
     */
    inline void SetTimestamp(const TimestreamTimestamp& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Specifies an application-defined value to replace the default value assigned
     * to the Timestream record's timestamp in the <code>time</code> column.</p> <p>You
     * can use this property to specify the value and the precision of the Timestream
     * record's timestamp. You can specify a value from the message payload or a value
     * computed by a substitution template.</p> <p>If omitted, the topic rule action
     * assigns the timestamp, in milliseconds, at the time it processed the rule. </p>
     */
    inline void SetTimestamp(TimestreamTimestamp&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>Specifies an application-defined value to replace the default value assigned
     * to the Timestream record's timestamp in the <code>time</code> column.</p> <p>You
     * can use this property to specify the value and the precision of the Timestream
     * record's timestamp. You can specify a value from the message payload or a value
     * computed by a substitution template.</p> <p>If omitted, the topic rule action
     * assigns the timestamp, in milliseconds, at the time it processed the rule. </p>
     */
    inline TimestreamAction& WithTimestamp(const TimestreamTimestamp& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Specifies an application-defined value to replace the default value assigned
     * to the Timestream record's timestamp in the <code>time</code> column.</p> <p>You
     * can use this property to specify the value and the precision of the Timestream
     * record's timestamp. You can specify a value from the message payload or a value
     * computed by a substitution template.</p> <p>If omitted, the topic rule action
     * assigns the timestamp, in milliseconds, at the time it processed the rule. </p>
     */
    inline TimestreamAction& WithTimestamp(TimestreamTimestamp&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<TimestreamDimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    TimestreamTimestamp m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
