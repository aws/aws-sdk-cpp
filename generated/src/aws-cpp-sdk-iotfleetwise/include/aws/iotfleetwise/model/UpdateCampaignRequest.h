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
    AWS_IOTFLEETWISE_API UpdateCampaignRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaign"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the campaign to update. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateCampaignRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the campaign.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateCampaignRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of vehicle attributes to associate with a signal. </p> <p>Default: An
     * empty array</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const { return m_dataExtraDimensions; }
    inline bool DataExtraDimensionsHasBeenSet() const { return m_dataExtraDimensionsHasBeenSet; }
    template<typename DataExtraDimensionsT = Aws::Vector<Aws::String>>
    void SetDataExtraDimensions(DataExtraDimensionsT&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = std::forward<DataExtraDimensionsT>(value); }
    template<typename DataExtraDimensionsT = Aws::Vector<Aws::String>>
    UpdateCampaignRequest& WithDataExtraDimensions(DataExtraDimensionsT&& value) { SetDataExtraDimensions(std::forward<DataExtraDimensionsT>(value)); return *this;}
    template<typename DataExtraDimensionsT = Aws::String>
    UpdateCampaignRequest& AddDataExtraDimensions(DataExtraDimensionsT&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.emplace_back(std::forward<DataExtraDimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies how to update a campaign. The action can be one of the
     * following:</p> <ul> <li> <p> <code>APPROVE</code> - To approve delivering a data
     * collection scheme to vehicles. </p> </li> <li> <p> <code>SUSPEND</code> - To
     * suspend collecting signal data. The campaign is deleted from vehicles and all
     * vehicles in the suspended campaign will stop sending data.</p> </li> <li> <p>
     * <code>RESUME</code> - To reactivate the <code>SUSPEND</code> campaign. The
     * campaign is redeployed to all vehicles and the vehicles will resume sending
     * data.</p> </li> <li> <p> <code>UPDATE</code> - To update a campaign. </p> </li>
     * </ul>
     */
    inline UpdateCampaignAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(UpdateCampaignAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline UpdateCampaignRequest& WithAction(UpdateCampaignAction value) { SetAction(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataExtraDimensions;
    bool m_dataExtraDimensionsHasBeenSet = false;

    UpdateCampaignAction m_action{UpdateCampaignAction::NOT_SET};
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
