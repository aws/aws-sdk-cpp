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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/SecondaryStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies a secondary status the job has transitioned into. It includes a
   * start timestamp and later an end timestamp. The end timestamp is added either
   * after the job transitions to a different secondary status or after the job has
   * ended.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SecondaryStatusTransition">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API SecondaryStatusTransition
  {
  public:
    SecondaryStatusTransition();
    SecondaryStatusTransition(Aws::Utils::Json::JsonView jsonValue);
    SecondaryStatusTransition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides granular information about the system state. For more information,
     * see <code>SecondaryStatus</code> under the <a>DescribeTrainingJob</a> response
     * elements.</p>
     */
    inline const SecondaryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Provides granular information about the system state. For more information,
     * see <code>SecondaryStatus</code> under the <a>DescribeTrainingJob</a> response
     * elements.</p>
     */
    inline void SetStatus(const SecondaryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Provides granular information about the system state. For more information,
     * see <code>SecondaryStatus</code> under the <a>DescribeTrainingJob</a> response
     * elements.</p>
     */
    inline void SetStatus(SecondaryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Provides granular information about the system state. For more information,
     * see <code>SecondaryStatus</code> under the <a>DescribeTrainingJob</a> response
     * elements.</p>
     */
    inline SecondaryStatusTransition& WithStatus(const SecondaryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Provides granular information about the system state. For more information,
     * see <code>SecondaryStatus</code> under the <a>DescribeTrainingJob</a> response
     * elements.</p>
     */
    inline SecondaryStatusTransition& WithStatus(SecondaryStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the training job has entered this secondary
     * status.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>A timestamp that shows when the training job has entered this secondary
     * status.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>A timestamp that shows when the training job has entered this secondary
     * status.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the training job has entered this secondary
     * status.</p>
     */
    inline SecondaryStatusTransition& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the training job has entered this secondary
     * status.</p>
     */
    inline SecondaryStatusTransition& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the secondary status has ended and the job has
     * transitioned into another secondary status. The <code>EndTime</code> timestamp
     * is also set after the training job has ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>A timestamp that shows when the secondary status has ended and the job has
     * transitioned into another secondary status. The <code>EndTime</code> timestamp
     * is also set after the training job has ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>A timestamp that shows when the secondary status has ended and the job has
     * transitioned into another secondary status. The <code>EndTime</code> timestamp
     * is also set after the training job has ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the secondary status has ended and the job has
     * transitioned into another secondary status. The <code>EndTime</code> timestamp
     * is also set after the training job has ended.</p>
     */
    inline SecondaryStatusTransition& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the secondary status has ended and the job has
     * transitioned into another secondary status. The <code>EndTime</code> timestamp
     * is also set after the training job has ended.</p>
     */
    inline SecondaryStatusTransition& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Shows a brief description and other information about the secondary status.
     * For example, the <code>LaunchingMLInstances</code> secondary status could show a
     * status message of "Insufficent capacity error while launching instances".</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Shows a brief description and other information about the secondary status.
     * For example, the <code>LaunchingMLInstances</code> secondary status could show a
     * status message of "Insufficent capacity error while launching instances".</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Shows a brief description and other information about the secondary status.
     * For example, the <code>LaunchingMLInstances</code> secondary status could show a
     * status message of "Insufficent capacity error while launching instances".</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Shows a brief description and other information about the secondary status.
     * For example, the <code>LaunchingMLInstances</code> secondary status could show a
     * status message of "Insufficent capacity error while launching instances".</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Shows a brief description and other information about the secondary status.
     * For example, the <code>LaunchingMLInstances</code> secondary status could show a
     * status message of "Insufficent capacity error while launching instances".</p>
     */
    inline SecondaryStatusTransition& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Shows a brief description and other information about the secondary status.
     * For example, the <code>LaunchingMLInstances</code> secondary status could show a
     * status message of "Insufficent capacity error while launching instances".</p>
     */
    inline SecondaryStatusTransition& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Shows a brief description and other information about the secondary status.
     * For example, the <code>LaunchingMLInstances</code> secondary status could show a
     * status message of "Insufficent capacity error while launching instances".</p>
     */
    inline SecondaryStatusTransition& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    SecondaryStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
