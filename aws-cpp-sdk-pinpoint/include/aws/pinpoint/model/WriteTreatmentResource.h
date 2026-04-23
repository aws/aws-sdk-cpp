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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/MessageConfiguration.h>
#include <aws/pinpoint/model/Schedule.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Used to create a campaign treatment.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/WriteTreatmentResource">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API WriteTreatmentResource
  {
  public:
    WriteTreatmentResource();
    WriteTreatmentResource(Aws::Utils::Json::JsonView jsonValue);
    WriteTreatmentResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The message configuration settings.
     */
    inline const MessageConfiguration& GetMessageConfiguration() const{ return m_messageConfiguration; }

    /**
     * The message configuration settings.
     */
    inline bool MessageConfigurationHasBeenSet() const { return m_messageConfigurationHasBeenSet; }

    /**
     * The message configuration settings.
     */
    inline void SetMessageConfiguration(const MessageConfiguration& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = value; }

    /**
     * The message configuration settings.
     */
    inline void SetMessageConfiguration(MessageConfiguration&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::move(value); }

    /**
     * The message configuration settings.
     */
    inline WriteTreatmentResource& WithMessageConfiguration(const MessageConfiguration& value) { SetMessageConfiguration(value); return *this;}

    /**
     * The message configuration settings.
     */
    inline WriteTreatmentResource& WithMessageConfiguration(MessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}


    /**
     * The campaign schedule.
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }

    /**
     * The campaign schedule.
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * The campaign schedule.
     */
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * The campaign schedule.
     */
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * The campaign schedule.
     */
    inline WriteTreatmentResource& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}

    /**
     * The campaign schedule.
     */
    inline WriteTreatmentResource& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * The allocated percentage of users for this treatment.
     */
    inline int GetSizePercent() const{ return m_sizePercent; }

    /**
     * The allocated percentage of users for this treatment.
     */
    inline bool SizePercentHasBeenSet() const { return m_sizePercentHasBeenSet; }

    /**
     * The allocated percentage of users for this treatment.
     */
    inline void SetSizePercent(int value) { m_sizePercentHasBeenSet = true; m_sizePercent = value; }

    /**
     * The allocated percentage of users for this treatment.
     */
    inline WriteTreatmentResource& WithSizePercent(int value) { SetSizePercent(value); return *this;}


    /**
     * A custom description for the treatment.
     */
    inline const Aws::String& GetTreatmentDescription() const{ return m_treatmentDescription; }

    /**
     * A custom description for the treatment.
     */
    inline bool TreatmentDescriptionHasBeenSet() const { return m_treatmentDescriptionHasBeenSet; }

    /**
     * A custom description for the treatment.
     */
    inline void SetTreatmentDescription(const Aws::String& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = value; }

    /**
     * A custom description for the treatment.
     */
    inline void SetTreatmentDescription(Aws::String&& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = std::move(value); }

    /**
     * A custom description for the treatment.
     */
    inline void SetTreatmentDescription(const char* value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription.assign(value); }

    /**
     * A custom description for the treatment.
     */
    inline WriteTreatmentResource& WithTreatmentDescription(const Aws::String& value) { SetTreatmentDescription(value); return *this;}

    /**
     * A custom description for the treatment.
     */
    inline WriteTreatmentResource& WithTreatmentDescription(Aws::String&& value) { SetTreatmentDescription(std::move(value)); return *this;}

    /**
     * A custom description for the treatment.
     */
    inline WriteTreatmentResource& WithTreatmentDescription(const char* value) { SetTreatmentDescription(value); return *this;}


    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline const Aws::String& GetTreatmentName() const{ return m_treatmentName; }

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline void SetTreatmentName(const Aws::String& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = value; }

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline void SetTreatmentName(Aws::String&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::move(value); }

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline void SetTreatmentName(const char* value) { m_treatmentNameHasBeenSet = true; m_treatmentName.assign(value); }

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline WriteTreatmentResource& WithTreatmentName(const Aws::String& value) { SetTreatmentName(value); return *this;}

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline WriteTreatmentResource& WithTreatmentName(Aws::String&& value) { SetTreatmentName(std::move(value)); return *this;}

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline WriteTreatmentResource& WithTreatmentName(const char* value) { SetTreatmentName(value); return *this;}

  private:

    MessageConfiguration m_messageConfiguration;
    bool m_messageConfigurationHasBeenSet;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet;

    int m_sizePercent;
    bool m_sizePercentHasBeenSet;

    Aws::String m_treatmentDescription;
    bool m_treatmentDescriptionHasBeenSet;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
