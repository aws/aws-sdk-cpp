/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CustomDeliveryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/MessageConfiguration.h>
#include <aws/pinpoint/model/Schedule.h>
#include <aws/pinpoint/model/CampaignState.h>
#include <aws/pinpoint/model/TemplateConfiguration.h>
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
   * <p>Specifies the settings for a campaign treatment. A <i>treatment</i> is a
   * variation of a campaign that's used for A/B testing of a campaign.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TreatmentResource">AWS
   * API Reference</a></p>
   */
  class TreatmentResource
  {
  public:
    AWS_PINPOINT_API TreatmentResource();
    AWS_PINPOINT_API TreatmentResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API TreatmentResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The delivery configuration settings for sending the treatment through a
     * custom channel. This object is required if the MessageConfiguration object for
     * the treatment specifies a CustomMessage object.</p>
     */
    inline const CustomDeliveryConfiguration& GetCustomDeliveryConfiguration() const{ return m_customDeliveryConfiguration; }

    /**
     * <p>The delivery configuration settings for sending the treatment through a
     * custom channel. This object is required if the MessageConfiguration object for
     * the treatment specifies a CustomMessage object.</p>
     */
    inline bool CustomDeliveryConfigurationHasBeenSet() const { return m_customDeliveryConfigurationHasBeenSet; }

    /**
     * <p>The delivery configuration settings for sending the treatment through a
     * custom channel. This object is required if the MessageConfiguration object for
     * the treatment specifies a CustomMessage object.</p>
     */
    inline void SetCustomDeliveryConfiguration(const CustomDeliveryConfiguration& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = value; }

    /**
     * <p>The delivery configuration settings for sending the treatment through a
     * custom channel. This object is required if the MessageConfiguration object for
     * the treatment specifies a CustomMessage object.</p>
     */
    inline void SetCustomDeliveryConfiguration(CustomDeliveryConfiguration&& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = std::move(value); }

    /**
     * <p>The delivery configuration settings for sending the treatment through a
     * custom channel. This object is required if the MessageConfiguration object for
     * the treatment specifies a CustomMessage object.</p>
     */
    inline TreatmentResource& WithCustomDeliveryConfiguration(const CustomDeliveryConfiguration& value) { SetCustomDeliveryConfiguration(value); return *this;}

    /**
     * <p>The delivery configuration settings for sending the treatment through a
     * custom channel. This object is required if the MessageConfiguration object for
     * the treatment specifies a CustomMessage object.</p>
     */
    inline TreatmentResource& WithCustomDeliveryConfiguration(CustomDeliveryConfiguration&& value) { SetCustomDeliveryConfiguration(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the treatment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the treatment.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the treatment.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the treatment.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the treatment.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the treatment.</p>
     */
    inline TreatmentResource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the treatment.</p>
     */
    inline TreatmentResource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the treatment.</p>
     */
    inline TreatmentResource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The message configuration settings for the treatment.</p>
     */
    inline const MessageConfiguration& GetMessageConfiguration() const{ return m_messageConfiguration; }

    /**
     * <p>The message configuration settings for the treatment.</p>
     */
    inline bool MessageConfigurationHasBeenSet() const { return m_messageConfigurationHasBeenSet; }

    /**
     * <p>The message configuration settings for the treatment.</p>
     */
    inline void SetMessageConfiguration(const MessageConfiguration& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = value; }

    /**
     * <p>The message configuration settings for the treatment.</p>
     */
    inline void SetMessageConfiguration(MessageConfiguration&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::move(value); }

    /**
     * <p>The message configuration settings for the treatment.</p>
     */
    inline TreatmentResource& WithMessageConfiguration(const MessageConfiguration& value) { SetMessageConfiguration(value); return *this;}

    /**
     * <p>The message configuration settings for the treatment.</p>
     */
    inline TreatmentResource& WithMessageConfiguration(MessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}


    /**
     * <p>The schedule settings for the treatment.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule settings for the treatment.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule settings for the treatment.</p>
     */
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule settings for the treatment.</p>
     */
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule settings for the treatment.</p>
     */
    inline TreatmentResource& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule settings for the treatment.</p>
     */
    inline TreatmentResource& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The allocated percentage of users (segment members) that the treatment is
     * sent to.</p>
     */
    inline int GetSizePercent() const{ return m_sizePercent; }

    /**
     * <p>The allocated percentage of users (segment members) that the treatment is
     * sent to.</p>
     */
    inline bool SizePercentHasBeenSet() const { return m_sizePercentHasBeenSet; }

    /**
     * <p>The allocated percentage of users (segment members) that the treatment is
     * sent to.</p>
     */
    inline void SetSizePercent(int value) { m_sizePercentHasBeenSet = true; m_sizePercent = value; }

    /**
     * <p>The allocated percentage of users (segment members) that the treatment is
     * sent to.</p>
     */
    inline TreatmentResource& WithSizePercent(int value) { SetSizePercent(value); return *this;}


    /**
     * <p>The current status of the treatment.</p>
     */
    inline const CampaignState& GetState() const{ return m_state; }

    /**
     * <p>The current status of the treatment.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current status of the treatment.</p>
     */
    inline void SetState(const CampaignState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current status of the treatment.</p>
     */
    inline void SetState(CampaignState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current status of the treatment.</p>
     */
    inline TreatmentResource& WithState(const CampaignState& value) { SetState(value); return *this;}

    /**
     * <p>The current status of the treatment.</p>
     */
    inline TreatmentResource& WithState(CampaignState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The message template to use for the treatment.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }

    /**
     * <p>The message template to use for the treatment.</p>
     */
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }

    /**
     * <p>The message template to use for the treatment.</p>
     */
    inline void SetTemplateConfiguration(const TemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }

    /**
     * <p>The message template to use for the treatment.</p>
     */
    inline void SetTemplateConfiguration(TemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }

    /**
     * <p>The message template to use for the treatment.</p>
     */
    inline TreatmentResource& WithTemplateConfiguration(const TemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}

    /**
     * <p>The message template to use for the treatment.</p>
     */
    inline TreatmentResource& WithTemplateConfiguration(TemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}


    /**
     * <p>The custom description of the treatment.</p>
     */
    inline const Aws::String& GetTreatmentDescription() const{ return m_treatmentDescription; }

    /**
     * <p>The custom description of the treatment.</p>
     */
    inline bool TreatmentDescriptionHasBeenSet() const { return m_treatmentDescriptionHasBeenSet; }

    /**
     * <p>The custom description of the treatment.</p>
     */
    inline void SetTreatmentDescription(const Aws::String& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = value; }

    /**
     * <p>The custom description of the treatment.</p>
     */
    inline void SetTreatmentDescription(Aws::String&& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = std::move(value); }

    /**
     * <p>The custom description of the treatment.</p>
     */
    inline void SetTreatmentDescription(const char* value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription.assign(value); }

    /**
     * <p>The custom description of the treatment.</p>
     */
    inline TreatmentResource& WithTreatmentDescription(const Aws::String& value) { SetTreatmentDescription(value); return *this;}

    /**
     * <p>The custom description of the treatment.</p>
     */
    inline TreatmentResource& WithTreatmentDescription(Aws::String&& value) { SetTreatmentDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of the treatment.</p>
     */
    inline TreatmentResource& WithTreatmentDescription(const char* value) { SetTreatmentDescription(value); return *this;}


    /**
     * <p>The custom name of the treatment.</p>
     */
    inline const Aws::String& GetTreatmentName() const{ return m_treatmentName; }

    /**
     * <p>The custom name of the treatment.</p>
     */
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }

    /**
     * <p>The custom name of the treatment.</p>
     */
    inline void SetTreatmentName(const Aws::String& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = value; }

    /**
     * <p>The custom name of the treatment.</p>
     */
    inline void SetTreatmentName(Aws::String&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::move(value); }

    /**
     * <p>The custom name of the treatment.</p>
     */
    inline void SetTreatmentName(const char* value) { m_treatmentNameHasBeenSet = true; m_treatmentName.assign(value); }

    /**
     * <p>The custom name of the treatment.</p>
     */
    inline TreatmentResource& WithTreatmentName(const Aws::String& value) { SetTreatmentName(value); return *this;}

    /**
     * <p>The custom name of the treatment.</p>
     */
    inline TreatmentResource& WithTreatmentName(Aws::String&& value) { SetTreatmentName(std::move(value)); return *this;}

    /**
     * <p>The custom name of the treatment.</p>
     */
    inline TreatmentResource& WithTreatmentName(const char* value) { SetTreatmentName(value); return *this;}

  private:

    CustomDeliveryConfiguration m_customDeliveryConfiguration;
    bool m_customDeliveryConfigurationHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MessageConfiguration m_messageConfiguration;
    bool m_messageConfigurationHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    int m_sizePercent;
    bool m_sizePercentHasBeenSet = false;

    CampaignState m_state;
    bool m_stateHasBeenSet = false;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    Aws::String m_treatmentDescription;
    bool m_treatmentDescriptionHasBeenSet = false;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
