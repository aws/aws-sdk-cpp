/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/CampaignStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about a campaign. </p> <p>You can use the API operation to return
   * this information about multiple created campaigns.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CampaignSummary">AWS
   * API Reference</a></p>
   */
  class CampaignSummary
  {
  public:
    AWS_IOTFLEETWISE_API CampaignSummary();
    AWS_IOTFLEETWISE_API CampaignSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CampaignSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a campaign.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CampaignSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CampaignSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CampaignSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a campaign.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CampaignSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CampaignSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CampaignSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the campaign.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CampaignSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CampaignSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CampaignSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the signal catalog associated with the campaign.</p>
     */
    inline const Aws::String& GetSignalCatalogArn() const{ return m_signalCatalogArn; }
    inline bool SignalCatalogArnHasBeenSet() const { return m_signalCatalogArnHasBeenSet; }
    inline void SetSignalCatalogArn(const Aws::String& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = value; }
    inline void SetSignalCatalogArn(Aws::String&& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = std::move(value); }
    inline void SetSignalCatalogArn(const char* value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn.assign(value); }
    inline CampaignSummary& WithSignalCatalogArn(const Aws::String& value) { SetSignalCatalogArn(value); return *this;}
    inline CampaignSummary& WithSignalCatalogArn(Aws::String&& value) { SetSignalCatalogArn(std::move(value)); return *this;}
    inline CampaignSummary& WithSignalCatalogArn(const char* value) { SetSignalCatalogArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a vehicle or fleet to which the campaign is deployed.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }
    inline CampaignSummary& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline CampaignSummary& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline CampaignSummary& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a campaign. The status can be one of the following:</p> <ul>
     * <li> <p> <code>CREATING</code> - Amazon Web Services IoT FleetWise is processing
     * your request to create the campaign.</p> </li> <li> <p>
     * <code>WAITING_FOR_APPROVAL</code> - After a campaign is created, it enters the
     * <code>WAITING_FOR_APPROVAL</code> state. To allow Amazon Web Services IoT
     * FleetWise to deploy the campaign to the target vehicle or fleet, use the API
     * operation to approve the campaign. </p> </li> <li> <p> <code>RUNNING</code> -
     * The campaign is active. </p> </li> <li> <p> <code>SUSPENDED</code> - The
     * campaign is suspended. To resume the campaign, use the API operation. </p> </li>
     * </ul>
     */
    inline const CampaignStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CampaignStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CampaignStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CampaignSummary& WithStatus(const CampaignStatus& value) { SetStatus(value); return *this;}
    inline CampaignSummary& WithStatus(CampaignStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the campaign was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline CampaignSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CampaignSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the campaign was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }
    inline CampaignSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline CampaignSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_signalCatalogArn;
    bool m_signalCatalogArnHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    CampaignStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
