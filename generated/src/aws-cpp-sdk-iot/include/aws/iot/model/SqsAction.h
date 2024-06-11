﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action to publish data to an Amazon SQS queue.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SqsAction">AWS API
   * Reference</a></p>
   */
  class SqsAction
  {
  public:
    AWS_IOT_API SqsAction();
    AWS_IOT_API SqsAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API SqsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline SqsAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline SqsAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline SqsAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the Amazon SQS queue.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::move(value); }
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }
    inline SqsAction& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}
    inline SqsAction& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}
    inline SqsAction& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to use Base64 encoding.</p>
     */
    inline bool GetUseBase64() const{ return m_useBase64; }
    inline bool UseBase64HasBeenSet() const { return m_useBase64HasBeenSet; }
    inline void SetUseBase64(bool value) { m_useBase64HasBeenSet = true; m_useBase64 = value; }
    inline SqsAction& WithUseBase64(bool value) { SetUseBase64(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet = false;

    bool m_useBase64;
    bool m_useBase64HasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
