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
    AWS_CLEANROOMSML_API StartTrainedModelExportJobRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartTrainedModelExportJobRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartTrainedModelExportJobRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartTrainedModelExportJobRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model that you want to
     * export.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const{ return m_trainedModelArn; }
    inline bool TrainedModelArnHasBeenSet() const { return m_trainedModelArnHasBeenSet; }
    inline void SetTrainedModelArn(const Aws::String& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = value; }
    inline void SetTrainedModelArn(Aws::String&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::move(value); }
    inline void SetTrainedModelArn(const char* value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn.assign(value); }
    inline StartTrainedModelExportJobRequest& WithTrainedModelArn(const Aws::String& value) { SetTrainedModelArn(value); return *this;}
    inline StartTrainedModelExportJobRequest& WithTrainedModelArn(Aws::String&& value) { SetTrainedModelArn(std::move(value)); return *this;}
    inline StartTrainedModelExportJobRequest& WithTrainedModelArn(const char* value) { SetTrainedModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership ID of the member that is receiving the exported trained model
     * artifacts.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline StartTrainedModelExportJobRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline StartTrainedModelExportJobRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline StartTrainedModelExportJobRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration information for the trained model export job.</p>
     */
    inline const TrainedModelExportOutputConfiguration& GetOutputConfiguration() const{ return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    inline void SetOutputConfiguration(const TrainedModelExportOutputConfiguration& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = value; }
    inline void SetOutputConfiguration(TrainedModelExportOutputConfiguration&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::move(value); }
    inline StartTrainedModelExportJobRequest& WithOutputConfiguration(const TrainedModelExportOutputConfiguration& value) { SetOutputConfiguration(value); return *this;}
    inline StartTrainedModelExportJobRequest& WithOutputConfiguration(TrainedModelExportOutputConfiguration&& value) { SetOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model export job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StartTrainedModelExportJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StartTrainedModelExportJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StartTrainedModelExportJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_trainedModelArn;
    bool m_trainedModelArnHasBeenSet = false;

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
