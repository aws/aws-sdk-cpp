/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/TrainedModelExportOutputConfiguration.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class StartTrainedModelExportJobRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API StartTrainedModelExportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTrainedModelExportJob"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the trained model export job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartTrainedModelExportJobRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model that you want to
     * export.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const { return m_trainedModelArn; }
    inline bool TrainedModelArnHasBeenSet() const { return m_trainedModelArnHasBeenSet; }
    template<typename TrainedModelArnT = Aws::String>
    void SetTrainedModelArn(TrainedModelArnT&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::forward<TrainedModelArnT>(value); }
    template<typename TrainedModelArnT = Aws::String>
    StartTrainedModelExportJobRequest& WithTrainedModelArn(TrainedModelArnT&& value) { SetTrainedModelArn(std::forward<TrainedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier of the trained model to export. This specifies which
     * version of the trained model should be exported to the specified
     * destination.</p>
     */
    inline const Aws::String& GetTrainedModelVersionIdentifier() const { return m_trainedModelVersionIdentifier; }
    inline bool TrainedModelVersionIdentifierHasBeenSet() const { return m_trainedModelVersionIdentifierHasBeenSet; }
    template<typename TrainedModelVersionIdentifierT = Aws::String>
    void SetTrainedModelVersionIdentifier(TrainedModelVersionIdentifierT&& value) { m_trainedModelVersionIdentifierHasBeenSet = true; m_trainedModelVersionIdentifier = std::forward<TrainedModelVersionIdentifierT>(value); }
    template<typename TrainedModelVersionIdentifierT = Aws::String>
    StartTrainedModelExportJobRequest& WithTrainedModelVersionIdentifier(TrainedModelVersionIdentifierT&& value) { SetTrainedModelVersionIdentifier(std::forward<TrainedModelVersionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership ID of the member that is receiving the exported trained model
     * artifacts.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    StartTrainedModelExportJobRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration information for the trained model export job.</p>
     */
    inline const TrainedModelExportOutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    template<typename OutputConfigurationT = TrainedModelExportOutputConfiguration>
    void SetOutputConfiguration(OutputConfigurationT&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::forward<OutputConfigurationT>(value); }
    template<typename OutputConfigurationT = TrainedModelExportOutputConfiguration>
    StartTrainedModelExportJobRequest& WithOutputConfiguration(OutputConfigurationT&& value) { SetOutputConfiguration(std::forward<OutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model export job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartTrainedModelExportJobRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_trainedModelArn;
    bool m_trainedModelArnHasBeenSet = false;

    Aws::String m_trainedModelVersionIdentifier;
    bool m_trainedModelVersionIdentifierHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    TrainedModelExportOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
