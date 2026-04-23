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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MessageFormatValue.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/KinesisSettings">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API KinesisSettings
  {
  public:
    KinesisSettings();
    KinesisSettings(Aws::Utils::Json::JsonView jsonValue);
    KinesisSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Kinesis Data Streams
     * endpoint.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Kinesis Data Streams
     * endpoint.</p>
     */
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Kinesis Data Streams
     * endpoint.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Kinesis Data Streams
     * endpoint.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Kinesis Data Streams
     * endpoint.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Kinesis Data Streams
     * endpoint.</p>
     */
    inline KinesisSettings& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Kinesis Data Streams
     * endpoint.</p>
     */
    inline KinesisSettings& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Kinesis Data Streams
     * endpoint.</p>
     */
    inline KinesisSettings& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code>.</p>
     */
    inline const MessageFormatValue& GetMessageFormat() const{ return m_messageFormat; }

    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code>.</p>
     */
    inline bool MessageFormatHasBeenSet() const { return m_messageFormatHasBeenSet; }

    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code>.</p>
     */
    inline void SetMessageFormat(const MessageFormatValue& value) { m_messageFormatHasBeenSet = true; m_messageFormat = value; }

    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code>.</p>
     */
    inline void SetMessageFormat(MessageFormatValue&& value) { m_messageFormatHasBeenSet = true; m_messageFormat = std::move(value); }

    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code>.</p>
     */
    inline KinesisSettings& WithMessageFormat(const MessageFormatValue& value) { SetMessageFormat(value); return *this;}

    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code>.</p>
     */
    inline KinesisSettings& WithMessageFormat(MessageFormatValue&& value) { SetMessageFormat(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that DMS uses to write to the
     * Amazon Kinesis data stream.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that DMS uses to write to the
     * Amazon Kinesis data stream.</p>
     */
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that DMS uses to write to the
     * Amazon Kinesis data stream.</p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that DMS uses to write to the
     * Amazon Kinesis data stream.</p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that DMS uses to write to the
     * Amazon Kinesis data stream.</p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that DMS uses to write to the
     * Amazon Kinesis data stream.</p>
     */
    inline KinesisSettings& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that DMS uses to write to the
     * Amazon Kinesis data stream.</p>
     */
    inline KinesisSettings& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that DMS uses to write to the
     * Amazon Kinesis data stream.</p>
     */
    inline KinesisSettings& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}

  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet;

    MessageFormatValue m_messageFormat;
    bool m_messageFormatHasBeenSet;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
