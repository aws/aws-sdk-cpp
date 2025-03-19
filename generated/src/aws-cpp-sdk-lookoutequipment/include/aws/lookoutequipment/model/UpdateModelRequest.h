/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/LabelsInputConfiguration.h>
#include <aws/lookoutequipment/model/ModelDiagnosticsOutputConfiguration.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class UpdateModelRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API UpdateModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateModel"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the model to update.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    UpdateModelRequest& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LabelsInputConfiguration& GetLabelsInputConfiguration() const { return m_labelsInputConfiguration; }
    inline bool LabelsInputConfigurationHasBeenSet() const { return m_labelsInputConfigurationHasBeenSet; }
    template<typename LabelsInputConfigurationT = LabelsInputConfiguration>
    void SetLabelsInputConfiguration(LabelsInputConfigurationT&& value) { m_labelsInputConfigurationHasBeenSet = true; m_labelsInputConfiguration = std::forward<LabelsInputConfigurationT>(value); }
    template<typename LabelsInputConfigurationT = LabelsInputConfiguration>
    UpdateModelRequest& WithLabelsInputConfiguration(LabelsInputConfigurationT&& value) { SetLabelsInputConfiguration(std::forward<LabelsInputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model to update.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateModelRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location where you want Amazon Lookout for Equipment to save
     * the pointwise model diagnostics for the model. You must also specify the
     * <code>RoleArn</code> request parameter.</p>
     */
    inline const ModelDiagnosticsOutputConfiguration& GetModelDiagnosticsOutputConfiguration() const { return m_modelDiagnosticsOutputConfiguration; }
    inline bool ModelDiagnosticsOutputConfigurationHasBeenSet() const { return m_modelDiagnosticsOutputConfigurationHasBeenSet; }
    template<typename ModelDiagnosticsOutputConfigurationT = ModelDiagnosticsOutputConfiguration>
    void SetModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfigurationT&& value) { m_modelDiagnosticsOutputConfigurationHasBeenSet = true; m_modelDiagnosticsOutputConfiguration = std::forward<ModelDiagnosticsOutputConfigurationT>(value); }
    template<typename ModelDiagnosticsOutputConfigurationT = ModelDiagnosticsOutputConfiguration>
    UpdateModelRequest& WithModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfigurationT&& value) { SetModelDiagnosticsOutputConfiguration(std::forward<ModelDiagnosticsOutputConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    LabelsInputConfiguration m_labelsInputConfiguration;
    bool m_labelsInputConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ModelDiagnosticsOutputConfiguration m_modelDiagnosticsOutputConfiguration;
    bool m_modelDiagnosticsOutputConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
