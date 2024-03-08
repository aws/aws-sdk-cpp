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
    AWS_LOOKOUTEQUIPMENT_API UpdateModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateModel"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the model to update.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model to update.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the model to update.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model to update.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the model to update.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model to update.</p>
     */
    inline UpdateModelRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model to update.</p>
     */
    inline UpdateModelRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model to update.</p>
     */
    inline UpdateModelRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    
    inline const LabelsInputConfiguration& GetLabelsInputConfiguration() const{ return m_labelsInputConfiguration; }

    
    inline bool LabelsInputConfigurationHasBeenSet() const { return m_labelsInputConfigurationHasBeenSet; }

    
    inline void SetLabelsInputConfiguration(const LabelsInputConfiguration& value) { m_labelsInputConfigurationHasBeenSet = true; m_labelsInputConfiguration = value; }

    
    inline void SetLabelsInputConfiguration(LabelsInputConfiguration&& value) { m_labelsInputConfigurationHasBeenSet = true; m_labelsInputConfiguration = std::move(value); }

    
    inline UpdateModelRequest& WithLabelsInputConfiguration(const LabelsInputConfiguration& value) { SetLabelsInputConfiguration(value); return *this;}

    
    inline UpdateModelRequest& WithLabelsInputConfiguration(LabelsInputConfiguration&& value) { SetLabelsInputConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ARN of the model to update.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the model to update.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the model to update.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the model to update.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the model to update.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the model to update.</p>
     */
    inline UpdateModelRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the model to update.</p>
     */
    inline UpdateModelRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model to update.</p>
     */
    inline UpdateModelRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon S3 location where you want Amazon Lookout for Equipment to save
     * the pointwise model diagnostics for the model. You must also specify the
     * <code>RoleArn</code> request parameter.</p>
     */
    inline const ModelDiagnosticsOutputConfiguration& GetModelDiagnosticsOutputConfiguration() const{ return m_modelDiagnosticsOutputConfiguration; }

    /**
     * <p>The Amazon S3 location where you want Amazon Lookout for Equipment to save
     * the pointwise model diagnostics for the model. You must also specify the
     * <code>RoleArn</code> request parameter.</p>
     */
    inline bool ModelDiagnosticsOutputConfigurationHasBeenSet() const { return m_modelDiagnosticsOutputConfigurationHasBeenSet; }

    /**
     * <p>The Amazon S3 location where you want Amazon Lookout for Equipment to save
     * the pointwise model diagnostics for the model. You must also specify the
     * <code>RoleArn</code> request parameter.</p>
     */
    inline void SetModelDiagnosticsOutputConfiguration(const ModelDiagnosticsOutputConfiguration& value) { m_modelDiagnosticsOutputConfigurationHasBeenSet = true; m_modelDiagnosticsOutputConfiguration = value; }

    /**
     * <p>The Amazon S3 location where you want Amazon Lookout for Equipment to save
     * the pointwise model diagnostics for the model. You must also specify the
     * <code>RoleArn</code> request parameter.</p>
     */
    inline void SetModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfiguration&& value) { m_modelDiagnosticsOutputConfigurationHasBeenSet = true; m_modelDiagnosticsOutputConfiguration = std::move(value); }

    /**
     * <p>The Amazon S3 location where you want Amazon Lookout for Equipment to save
     * the pointwise model diagnostics for the model. You must also specify the
     * <code>RoleArn</code> request parameter.</p>
     */
    inline UpdateModelRequest& WithModelDiagnosticsOutputConfiguration(const ModelDiagnosticsOutputConfiguration& value) { SetModelDiagnosticsOutputConfiguration(value); return *this;}

    /**
     * <p>The Amazon S3 location where you want Amazon Lookout for Equipment to save
     * the pointwise model diagnostics for the model. You must also specify the
     * <code>RoleArn</code> request parameter.</p>
     */
    inline UpdateModelRequest& WithModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfiguration&& value) { SetModelDiagnosticsOutputConfiguration(std::move(value)); return *this;}

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
