/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/PublicWorkforceTaskPrice.h>
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
   * <p>Describes the work to be performed by human workers.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HumanLoopConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API HumanLoopConfig
  {
  public:
    HumanLoopConfig();
    HumanLoopConfig(Aws::Utils::Json::JsonView jsonValue);
    HumanLoopConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of a team of workers.</p>
     */
    inline const Aws::String& GetWorkteamArn() const{ return m_workteamArn; }

    /**
     * <p>Amazon Resource Name (ARN) of a team of workers.</p>
     */
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of a team of workers.</p>
     */
    inline void SetWorkteamArn(const Aws::String& value) { m_workteamArnHasBeenSet = true; m_workteamArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of a team of workers.</p>
     */
    inline void SetWorkteamArn(Aws::String&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of a team of workers.</p>
     */
    inline void SetWorkteamArn(const char* value) { m_workteamArnHasBeenSet = true; m_workteamArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of a team of workers.</p>
     */
    inline HumanLoopConfig& WithWorkteamArn(const Aws::String& value) { SetWorkteamArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of a team of workers.</p>
     */
    inline HumanLoopConfig& WithWorkteamArn(Aws::String&& value) { SetWorkteamArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of a team of workers.</p>
     */
    inline HumanLoopConfig& WithWorkteamArn(const char* value) { SetWorkteamArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const{ return m_humanTaskUiArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline bool HumanTaskUiArnHasBeenSet() const { return m_humanTaskUiArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline void SetHumanTaskUiArn(const Aws::String& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline void SetHumanTaskUiArn(Aws::String&& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline void SetHumanTaskUiArn(const char* value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline HumanLoopConfig& WithHumanTaskUiArn(const Aws::String& value) { SetHumanTaskUiArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline HumanLoopConfig& WithHumanTaskUiArn(Aws::String&& value) { SetHumanTaskUiArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline HumanLoopConfig& WithHumanTaskUiArn(const char* value) { SetHumanTaskUiArn(value); return *this;}


    /**
     * <p>A title for the human worker task.</p>
     */
    inline const Aws::String& GetTaskTitle() const{ return m_taskTitle; }

    /**
     * <p>A title for the human worker task.</p>
     */
    inline bool TaskTitleHasBeenSet() const { return m_taskTitleHasBeenSet; }

    /**
     * <p>A title for the human worker task.</p>
     */
    inline void SetTaskTitle(const Aws::String& value) { m_taskTitleHasBeenSet = true; m_taskTitle = value; }

    /**
     * <p>A title for the human worker task.</p>
     */
    inline void SetTaskTitle(Aws::String&& value) { m_taskTitleHasBeenSet = true; m_taskTitle = std::move(value); }

    /**
     * <p>A title for the human worker task.</p>
     */
    inline void SetTaskTitle(const char* value) { m_taskTitleHasBeenSet = true; m_taskTitle.assign(value); }

    /**
     * <p>A title for the human worker task.</p>
     */
    inline HumanLoopConfig& WithTaskTitle(const Aws::String& value) { SetTaskTitle(value); return *this;}

    /**
     * <p>A title for the human worker task.</p>
     */
    inline HumanLoopConfig& WithTaskTitle(Aws::String&& value) { SetTaskTitle(std::move(value)); return *this;}

    /**
     * <p>A title for the human worker task.</p>
     */
    inline HumanLoopConfig& WithTaskTitle(const char* value) { SetTaskTitle(value); return *this;}


    /**
     * <p>A description for the human worker task.</p>
     */
    inline const Aws::String& GetTaskDescription() const{ return m_taskDescription; }

    /**
     * <p>A description for the human worker task.</p>
     */
    inline bool TaskDescriptionHasBeenSet() const { return m_taskDescriptionHasBeenSet; }

    /**
     * <p>A description for the human worker task.</p>
     */
    inline void SetTaskDescription(const Aws::String& value) { m_taskDescriptionHasBeenSet = true; m_taskDescription = value; }

    /**
     * <p>A description for the human worker task.</p>
     */
    inline void SetTaskDescription(Aws::String&& value) { m_taskDescriptionHasBeenSet = true; m_taskDescription = std::move(value); }

    /**
     * <p>A description for the human worker task.</p>
     */
    inline void SetTaskDescription(const char* value) { m_taskDescriptionHasBeenSet = true; m_taskDescription.assign(value); }

    /**
     * <p>A description for the human worker task.</p>
     */
    inline HumanLoopConfig& WithTaskDescription(const Aws::String& value) { SetTaskDescription(value); return *this;}

    /**
     * <p>A description for the human worker task.</p>
     */
    inline HumanLoopConfig& WithTaskDescription(Aws::String&& value) { SetTaskDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the human worker task.</p>
     */
    inline HumanLoopConfig& WithTaskDescription(const char* value) { SetTaskDescription(value); return *this;}


    /**
     * <p>The number of distinct workers who will perform the same task on each object.
     * For example, if <code>TaskCount</code> is set to <code>3</code> for an image
     * classification labeling job, three workers will classify each input image.
     * Increasing <code>TaskCount</code> can improve label accuracy.</p>
     */
    inline int GetTaskCount() const{ return m_taskCount; }

    /**
     * <p>The number of distinct workers who will perform the same task on each object.
     * For example, if <code>TaskCount</code> is set to <code>3</code> for an image
     * classification labeling job, three workers will classify each input image.
     * Increasing <code>TaskCount</code> can improve label accuracy.</p>
     */
    inline bool TaskCountHasBeenSet() const { return m_taskCountHasBeenSet; }

    /**
     * <p>The number of distinct workers who will perform the same task on each object.
     * For example, if <code>TaskCount</code> is set to <code>3</code> for an image
     * classification labeling job, three workers will classify each input image.
     * Increasing <code>TaskCount</code> can improve label accuracy.</p>
     */
    inline void SetTaskCount(int value) { m_taskCountHasBeenSet = true; m_taskCount = value; }

    /**
     * <p>The number of distinct workers who will perform the same task on each object.
     * For example, if <code>TaskCount</code> is set to <code>3</code> for an image
     * classification labeling job, three workers will classify each input image.
     * Increasing <code>TaskCount</code> can improve label accuracy.</p>
     */
    inline HumanLoopConfig& WithTaskCount(int value) { SetTaskCount(value); return *this;}


    /**
     * <p>The length of time that a task remains available for review by human
     * workers.</p>
     */
    inline int GetTaskAvailabilityLifetimeInSeconds() const{ return m_taskAvailabilityLifetimeInSeconds; }

    /**
     * <p>The length of time that a task remains available for review by human
     * workers.</p>
     */
    inline bool TaskAvailabilityLifetimeInSecondsHasBeenSet() const { return m_taskAvailabilityLifetimeInSecondsHasBeenSet; }

    /**
     * <p>The length of time that a task remains available for review by human
     * workers.</p>
     */
    inline void SetTaskAvailabilityLifetimeInSeconds(int value) { m_taskAvailabilityLifetimeInSecondsHasBeenSet = true; m_taskAvailabilityLifetimeInSeconds = value; }

    /**
     * <p>The length of time that a task remains available for review by human
     * workers.</p>
     */
    inline HumanLoopConfig& WithTaskAvailabilityLifetimeInSeconds(int value) { SetTaskAvailabilityLifetimeInSeconds(value); return *this;}


    /**
     * <p>The amount of time that a worker has to complete a task. The default value is
     * 3,600 seconds (1 hour)</p>
     */
    inline int GetTaskTimeLimitInSeconds() const{ return m_taskTimeLimitInSeconds; }

    /**
     * <p>The amount of time that a worker has to complete a task. The default value is
     * 3,600 seconds (1 hour)</p>
     */
    inline bool TaskTimeLimitInSecondsHasBeenSet() const { return m_taskTimeLimitInSecondsHasBeenSet; }

    /**
     * <p>The amount of time that a worker has to complete a task. The default value is
     * 3,600 seconds (1 hour)</p>
     */
    inline void SetTaskTimeLimitInSeconds(int value) { m_taskTimeLimitInSecondsHasBeenSet = true; m_taskTimeLimitInSeconds = value; }

    /**
     * <p>The amount of time that a worker has to complete a task. The default value is
     * 3,600 seconds (1 hour)</p>
     */
    inline HumanLoopConfig& WithTaskTimeLimitInSeconds(int value) { SetTaskTimeLimitInSeconds(value); return *this;}


    /**
     * <p>Keywords used to describe the task so that workers can discover the task.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskKeywords() const{ return m_taskKeywords; }

    /**
     * <p>Keywords used to describe the task so that workers can discover the task.</p>
     */
    inline bool TaskKeywordsHasBeenSet() const { return m_taskKeywordsHasBeenSet; }

    /**
     * <p>Keywords used to describe the task so that workers can discover the task.</p>
     */
    inline void SetTaskKeywords(const Aws::Vector<Aws::String>& value) { m_taskKeywordsHasBeenSet = true; m_taskKeywords = value; }

    /**
     * <p>Keywords used to describe the task so that workers can discover the task.</p>
     */
    inline void SetTaskKeywords(Aws::Vector<Aws::String>&& value) { m_taskKeywordsHasBeenSet = true; m_taskKeywords = std::move(value); }

    /**
     * <p>Keywords used to describe the task so that workers can discover the task.</p>
     */
    inline HumanLoopConfig& WithTaskKeywords(const Aws::Vector<Aws::String>& value) { SetTaskKeywords(value); return *this;}

    /**
     * <p>Keywords used to describe the task so that workers can discover the task.</p>
     */
    inline HumanLoopConfig& WithTaskKeywords(Aws::Vector<Aws::String>&& value) { SetTaskKeywords(std::move(value)); return *this;}

    /**
     * <p>Keywords used to describe the task so that workers can discover the task.</p>
     */
    inline HumanLoopConfig& AddTaskKeywords(const Aws::String& value) { m_taskKeywordsHasBeenSet = true; m_taskKeywords.push_back(value); return *this; }

    /**
     * <p>Keywords used to describe the task so that workers can discover the task.</p>
     */
    inline HumanLoopConfig& AddTaskKeywords(Aws::String&& value) { m_taskKeywordsHasBeenSet = true; m_taskKeywords.push_back(std::move(value)); return *this; }

    /**
     * <p>Keywords used to describe the task so that workers can discover the task.</p>
     */
    inline HumanLoopConfig& AddTaskKeywords(const char* value) { m_taskKeywordsHasBeenSet = true; m_taskKeywords.push_back(value); return *this; }


    
    inline const PublicWorkforceTaskPrice& GetPublicWorkforceTaskPrice() const{ return m_publicWorkforceTaskPrice; }

    
    inline bool PublicWorkforceTaskPriceHasBeenSet() const { return m_publicWorkforceTaskPriceHasBeenSet; }

    
    inline void SetPublicWorkforceTaskPrice(const PublicWorkforceTaskPrice& value) { m_publicWorkforceTaskPriceHasBeenSet = true; m_publicWorkforceTaskPrice = value; }

    
    inline void SetPublicWorkforceTaskPrice(PublicWorkforceTaskPrice&& value) { m_publicWorkforceTaskPriceHasBeenSet = true; m_publicWorkforceTaskPrice = std::move(value); }

    
    inline HumanLoopConfig& WithPublicWorkforceTaskPrice(const PublicWorkforceTaskPrice& value) { SetPublicWorkforceTaskPrice(value); return *this;}

    
    inline HumanLoopConfig& WithPublicWorkforceTaskPrice(PublicWorkforceTaskPrice&& value) { SetPublicWorkforceTaskPrice(std::move(value)); return *this;}

  private:

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet;

    Aws::String m_humanTaskUiArn;
    bool m_humanTaskUiArnHasBeenSet;

    Aws::String m_taskTitle;
    bool m_taskTitleHasBeenSet;

    Aws::String m_taskDescription;
    bool m_taskDescriptionHasBeenSet;

    int m_taskCount;
    bool m_taskCountHasBeenSet;

    int m_taskAvailabilityLifetimeInSeconds;
    bool m_taskAvailabilityLifetimeInSecondsHasBeenSet;

    int m_taskTimeLimitInSeconds;
    bool m_taskTimeLimitInSecondsHasBeenSet;

    Aws::Vector<Aws::String> m_taskKeywords;
    bool m_taskKeywordsHasBeenSet;

    PublicWorkforceTaskPrice m_publicWorkforceTaskPrice;
    bool m_publicWorkforceTaskPriceHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
