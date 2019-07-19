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
   * triggered the action to an AWS SQS queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/SqsAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API SqsAction
  {
  public:
    SqsAction();
    SqsAction(Aws::Utils::Json::JsonView jsonValue);
    SqsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the SQS queue where the data is written.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL of the SQS queue where the data is written.</p>
     */
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }

    /**
     * <p>The URL of the SQS queue where the data is written.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the SQS queue where the data is written.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::move(value); }

    /**
     * <p>The URL of the SQS queue where the data is written.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * <p>The URL of the SQS queue where the data is written.</p>
     */
    inline SqsAction& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the SQS queue where the data is written.</p>
     */
    inline SqsAction& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the SQS queue where the data is written.</p>
     */
    inline SqsAction& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}


    /**
     * <p>Set this to TRUE if you want the data to be Base-64 encoded before it is
     * written to the queue. Otherwise, set this to FALSE.</p>
     */
    inline bool GetUseBase64() const{ return m_useBase64; }

    /**
     * <p>Set this to TRUE if you want the data to be Base-64 encoded before it is
     * written to the queue. Otherwise, set this to FALSE.</p>
     */
    inline bool UseBase64HasBeenSet() const { return m_useBase64HasBeenSet; }

    /**
     * <p>Set this to TRUE if you want the data to be Base-64 encoded before it is
     * written to the queue. Otherwise, set this to FALSE.</p>
     */
    inline void SetUseBase64(bool value) { m_useBase64HasBeenSet = true; m_useBase64 = value; }

    /**
     * <p>Set this to TRUE if you want the data to be Base-64 encoded before it is
     * written to the queue. Otherwise, set this to FALSE.</p>
     */
    inline SqsAction& WithUseBase64(bool value) { SetUseBase64(value); return *this;}

  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;

    bool m_useBase64;
    bool m_useBase64HasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
