/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action that writes data to an Amazon Kinesis Firehose
   * stream.</p>
   */
  class AWS_IOT_API FirehoseAction
  {
  public:
    FirehoseAction();
    FirehoseAction(const Aws::Utils::Json::JsonValue& jsonValue);
    FirehoseAction& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehost stream.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehost stream.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehost stream.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehost stream.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehost stream.</p>
     */
    inline FirehoseAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehost stream.</p>
     */
    inline FirehoseAction& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehost stream.</p>
     */
    inline FirehoseAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    /**
     * <p>The delivery stream name.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }

    /**
     * <p>The delivery stream name.</p>
     */
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The delivery stream name.</p>
     */
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The delivery stream name.</p>
     */
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }

    /**
     * <p>The delivery stream name.</p>
     */
    inline FirehoseAction& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The delivery stream name.</p>
     */
    inline FirehoseAction& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The delivery stream name.</p>
     */
    inline FirehoseAction& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline const Aws::String& GetSeparator() const{ return m_separator; }

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline void SetSeparator(const Aws::String& value) { m_separatorHasBeenSet = true; m_separator = value; }

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline void SetSeparator(Aws::String&& value) { m_separatorHasBeenSet = true; m_separator = value; }

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline void SetSeparator(const char* value) { m_separatorHasBeenSet = true; m_separator.assign(value); }

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline FirehoseAction& WithSeparator(const Aws::String& value) { SetSeparator(value); return *this;}

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline FirehoseAction& WithSeparator(Aws::String&& value) { SetSeparator(value); return *this;}

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline FirehoseAction& WithSeparator(const char* value) { SetSeparator(value); return *this;}

  private:
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet;
    Aws::String m_separator;
    bool m_separatorHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
