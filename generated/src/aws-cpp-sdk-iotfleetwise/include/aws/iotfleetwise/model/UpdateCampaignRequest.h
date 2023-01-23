/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/UpdateCampaignAction.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class UpdateCampaignRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API UpdateCampaignRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaign"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the campaign to update. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the campaign to update. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the campaign to update. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the campaign to update. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the campaign to update. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the campaign to update. </p>
     */
    inline UpdateCampaignRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the campaign to update. </p>
     */
    inline UpdateCampaignRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the campaign to update. </p>
     */
    inline UpdateCampaignRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the campaign.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the campaign.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the campaign.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the campaign.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the campaign.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the campaign.</p>
     */
    inline UpdateCampaignRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the campaign.</p>
     */
    inline UpdateCampaignRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the campaign.</p>
     */
    inline UpdateCampaignRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A list of vehicle attributes to associate with a signal. </p> <p>Default: An
     * empty array</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const{ return m_dataExtraDimensions; }

    /**
     * <p> A list of vehicle attributes to associate with a signal. </p> <p>Default: An
     * empty array</p>
     */
    inline bool DataExtraDimensionsHasBeenSet() const { return m_dataExtraDimensionsHasBeenSet; }

    /**
     * <p> A list of vehicle attributes to associate with a signal. </p> <p>Default: An
     * empty array</p>
     */
    inline void SetDataExtraDimensions(const Aws::Vector<Aws::String>& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = value; }

    /**
     * <p> A list of vehicle attributes to associate with a signal. </p> <p>Default: An
     * empty array</p>
     */
    inline void SetDataExtraDimensions(Aws::Vector<Aws::String>&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = std::move(value); }

    /**
     * <p> A list of vehicle attributes to associate with a signal. </p> <p>Default: An
     * empty array</p>
     */
    inline UpdateCampaignRequest& WithDataExtraDimensions(const Aws::Vector<Aws::String>& value) { SetDataExtraDimensions(value); return *this;}

    /**
     * <p> A list of vehicle attributes to associate with a signal. </p> <p>Default: An
     * empty array</p>
     */
    inline UpdateCampaignRequest& WithDataExtraDimensions(Aws::Vector<Aws::String>&& value) { SetDataExtraDimensions(std::move(value)); return *this;}

    /**
     * <p> A list of vehicle attributes to associate with a signal. </p> <p>Default: An
     * empty array</p>
     */
    inline UpdateCampaignRequest& AddDataExtraDimensions(const Aws::String& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.push_back(value); return *this; }

    /**
     * <p> A list of vehicle attributes to associate with a signal. </p> <p>Default: An
     * empty array</p>
     */
    inline UpdateCampaignRequest& AddDataExtraDimensions(Aws::String&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of vehicle attributes to associate with a signal. </p> <p>Default: An
     * empty array</p>
     */
    inline UpdateCampaignRequest& AddDataExtraDimensions(const char* value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.push_back(value); return *this; }


    /**
     * <p> Specifies how to update a campaign. The action can be one of the
     * following:</p> <ul> <li> <p> <code>APPROVE</code> - To approve delivering a data
     * collection scheme to vehicles. </p> </li> <li> <p> <code>SUSPEND</code> - To
     * suspend collecting signal data. </p> </li> <li> <p> <code>RESUME</code> - To
     * resume collecting signal data. </p> </li> <li> <p> <code>UPDATE</code> - To
     * update a campaign. </p> </li> </ul>
     */
    inline const UpdateCampaignAction& GetAction() const{ return m_action; }

    /**
     * <p> Specifies how to update a campaign. The action can be one of the
     * following:</p> <ul> <li> <p> <code>APPROVE</code> - To approve delivering a data
     * collection scheme to vehicles. </p> </li> <li> <p> <code>SUSPEND</code> - To
     * suspend collecting signal data. </p> </li> <li> <p> <code>RESUME</code> - To
     * resume collecting signal data. </p> </li> <li> <p> <code>UPDATE</code> - To
     * update a campaign. </p> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p> Specifies how to update a campaign. The action can be one of the
     * following:</p> <ul> <li> <p> <code>APPROVE</code> - To approve delivering a data
     * collection scheme to vehicles. </p> </li> <li> <p> <code>SUSPEND</code> - To
     * suspend collecting signal data. </p> </li> <li> <p> <code>RESUME</code> - To
     * resume collecting signal data. </p> </li> <li> <p> <code>UPDATE</code> - To
     * update a campaign. </p> </li> </ul>
     */
    inline void SetAction(const UpdateCampaignAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p> Specifies how to update a campaign. The action can be one of the
     * following:</p> <ul> <li> <p> <code>APPROVE</code> - To approve delivering a data
     * collection scheme to vehicles. </p> </li> <li> <p> <code>SUSPEND</code> - To
     * suspend collecting signal data. </p> </li> <li> <p> <code>RESUME</code> - To
     * resume collecting signal data. </p> </li> <li> <p> <code>UPDATE</code> - To
     * update a campaign. </p> </li> </ul>
     */
    inline void SetAction(UpdateCampaignAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p> Specifies how to update a campaign. The action can be one of the
     * following:</p> <ul> <li> <p> <code>APPROVE</code> - To approve delivering a data
     * collection scheme to vehicles. </p> </li> <li> <p> <code>SUSPEND</code> - To
     * suspend collecting signal data. </p> </li> <li> <p> <code>RESUME</code> - To
     * resume collecting signal data. </p> </li> <li> <p> <code>UPDATE</code> - To
     * update a campaign. </p> </li> </ul>
     */
    inline UpdateCampaignRequest& WithAction(const UpdateCampaignAction& value) { SetAction(value); return *this;}

    /**
     * <p> Specifies how to update a campaign. The action can be one of the
     * following:</p> <ul> <li> <p> <code>APPROVE</code> - To approve delivering a data
     * collection scheme to vehicles. </p> </li> <li> <p> <code>SUSPEND</code> - To
     * suspend collecting signal data. </p> </li> <li> <p> <code>RESUME</code> - To
     * resume collecting signal data. </p> </li> <li> <p> <code>UPDATE</code> - To
     * update a campaign. </p> </li> </ul>
     */
    inline UpdateCampaignRequest& WithAction(UpdateCampaignAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataExtraDimensions;
    bool m_dataExtraDimensionsHasBeenSet = false;

    UpdateCampaignAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
