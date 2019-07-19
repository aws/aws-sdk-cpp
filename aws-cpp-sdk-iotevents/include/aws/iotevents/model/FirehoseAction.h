/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Sends information about the detector model instance and the event which
   * triggered the action to a Kinesis Data Firehose stream.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/FirehoseAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API FirehoseAction
  {
  public:
    FirehoseAction();
    FirehoseAction(Aws::Utils::Json::JsonView jsonValue);
    FirehoseAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Kinesis Data Firehose stream where the data is written.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }

    /**
     * <p>The name of the Kinesis Data Firehose stream where the data is written.</p>
     */
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }

    /**
     * <p>The name of the Kinesis Data Firehose stream where the data is written.</p>
     */
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the Kinesis Data Firehose stream where the data is written.</p>
     */
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::move(value); }

    /**
     * <p>The name of the Kinesis Data Firehose stream where the data is written.</p>
     */
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }

    /**
     * <p>The name of the Kinesis Data Firehose stream where the data is written.</p>
     */
    inline FirehoseAction& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the Kinesis Data Firehose stream where the data is written.</p>
     */
    inline FirehoseAction& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the Kinesis Data Firehose stream where the data is written.</p>
     */
    inline FirehoseAction& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}


    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n'
     * (Windows newline), ',' (comma).</p>
     */
    inline const Aws::String& GetSeparator() const{ return m_separator; }

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n'
     * (Windows newline), ',' (comma).</p>
     */
    inline bool SeparatorHasBeenSet() const { return m_separatorHasBeenSet; }

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n'
     * (Windows newline), ',' (comma).</p>
     */
    inline void SetSeparator(const Aws::String& value) { m_separatorHasBeenSet = true; m_separator = value; }

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n'
     * (Windows newline), ',' (comma).</p>
     */
    inline void SetSeparator(Aws::String&& value) { m_separatorHasBeenSet = true; m_separator = std::move(value); }

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n'
     * (Windows newline), ',' (comma).</p>
     */
    inline void SetSeparator(const char* value) { m_separatorHasBeenSet = true; m_separator.assign(value); }

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n'
     * (Windows newline), ',' (comma).</p>
     */
    inline FirehoseAction& WithSeparator(const Aws::String& value) { SetSeparator(value); return *this;}

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n'
     * (Windows newline), ',' (comma).</p>
     */
    inline FirehoseAction& WithSeparator(Aws::String&& value) { SetSeparator(std::move(value)); return *this;}

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n'
     * (Windows newline), ',' (comma).</p>
     */
    inline FirehoseAction& WithSeparator(const char* value) { SetSeparator(value); return *this;}

  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet;

    Aws::String m_separator;
    bool m_separatorHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
