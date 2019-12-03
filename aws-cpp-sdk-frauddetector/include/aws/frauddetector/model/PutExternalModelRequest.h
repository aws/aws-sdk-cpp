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
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelSource.h>
#include <aws/frauddetector/model/Role.h>
#include <aws/frauddetector/model/ModelInputConfiguration.h>
#include <aws/frauddetector/model/ModelOutputConfiguration.h>
#include <aws/frauddetector/model/ModelEndpointStatus.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class AWS_FRAUDDETECTOR_API PutExternalModelRequest : public FraudDetectorRequest
  {
  public:
    PutExternalModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutExternalModel"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The model endpoints name.</p>
     */
    inline const Aws::String& GetModelEndpoint() const{ return m_modelEndpoint; }

    /**
     * <p>The model endpoints name.</p>
     */
    inline bool ModelEndpointHasBeenSet() const { return m_modelEndpointHasBeenSet; }

    /**
     * <p>The model endpoints name.</p>
     */
    inline void SetModelEndpoint(const Aws::String& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = value; }

    /**
     * <p>The model endpoints name.</p>
     */
    inline void SetModelEndpoint(Aws::String&& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = std::move(value); }

    /**
     * <p>The model endpoints name.</p>
     */
    inline void SetModelEndpoint(const char* value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint.assign(value); }

    /**
     * <p>The model endpoints name.</p>
     */
    inline PutExternalModelRequest& WithModelEndpoint(const Aws::String& value) { SetModelEndpoint(value); return *this;}

    /**
     * <p>The model endpoints name.</p>
     */
    inline PutExternalModelRequest& WithModelEndpoint(Aws::String&& value) { SetModelEndpoint(std::move(value)); return *this;}

    /**
     * <p>The model endpoints name.</p>
     */
    inline PutExternalModelRequest& WithModelEndpoint(const char* value) { SetModelEndpoint(value); return *this;}


    /**
     * <p>The source of the model.</p>
     */
    inline const ModelSource& GetModelSource() const{ return m_modelSource; }

    /**
     * <p>The source of the model.</p>
     */
    inline bool ModelSourceHasBeenSet() const { return m_modelSourceHasBeenSet; }

    /**
     * <p>The source of the model.</p>
     */
    inline void SetModelSource(const ModelSource& value) { m_modelSourceHasBeenSet = true; m_modelSource = value; }

    /**
     * <p>The source of the model.</p>
     */
    inline void SetModelSource(ModelSource&& value) { m_modelSourceHasBeenSet = true; m_modelSource = std::move(value); }

    /**
     * <p>The source of the model.</p>
     */
    inline PutExternalModelRequest& WithModelSource(const ModelSource& value) { SetModelSource(value); return *this;}

    /**
     * <p>The source of the model.</p>
     */
    inline PutExternalModelRequest& WithModelSource(ModelSource&& value) { SetModelSource(std::move(value)); return *this;}


    /**
     * <p>The IAM role used to invoke the model endpoint.</p>
     */
    inline const Role& GetRole() const{ return m_role; }

    /**
     * <p>The IAM role used to invoke the model endpoint.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The IAM role used to invoke the model endpoint.</p>
     */
    inline void SetRole(const Role& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM role used to invoke the model endpoint.</p>
     */
    inline void SetRole(Role&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The IAM role used to invoke the model endpoint.</p>
     */
    inline PutExternalModelRequest& WithRole(const Role& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM role used to invoke the model endpoint.</p>
     */
    inline PutExternalModelRequest& WithRole(Role&& value) { SetRole(std::move(value)); return *this;}


    /**
     * <p>The model endpoint input configuration.</p>
     */
    inline const ModelInputConfiguration& GetInputConfiguration() const{ return m_inputConfiguration; }

    /**
     * <p>The model endpoint input configuration.</p>
     */
    inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }

    /**
     * <p>The model endpoint input configuration.</p>
     */
    inline void SetInputConfiguration(const ModelInputConfiguration& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = value; }

    /**
     * <p>The model endpoint input configuration.</p>
     */
    inline void SetInputConfiguration(ModelInputConfiguration&& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = std::move(value); }

    /**
     * <p>The model endpoint input configuration.</p>
     */
    inline PutExternalModelRequest& WithInputConfiguration(const ModelInputConfiguration& value) { SetInputConfiguration(value); return *this;}

    /**
     * <p>The model endpoint input configuration.</p>
     */
    inline PutExternalModelRequest& WithInputConfiguration(ModelInputConfiguration&& value) { SetInputConfiguration(std::move(value)); return *this;}


    /**
     * <p>The model endpoint output configuration.</p>
     */
    inline const ModelOutputConfiguration& GetOutputConfiguration() const{ return m_outputConfiguration; }

    /**
     * <p>The model endpoint output configuration.</p>
     */
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }

    /**
     * <p>The model endpoint output configuration.</p>
     */
    inline void SetOutputConfiguration(const ModelOutputConfiguration& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = value; }

    /**
     * <p>The model endpoint output configuration.</p>
     */
    inline void SetOutputConfiguration(ModelOutputConfiguration&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::move(value); }

    /**
     * <p>The model endpoint output configuration.</p>
     */
    inline PutExternalModelRequest& WithOutputConfiguration(const ModelOutputConfiguration& value) { SetOutputConfiguration(value); return *this;}

    /**
     * <p>The model endpoint output configuration.</p>
     */
    inline PutExternalModelRequest& WithOutputConfiguration(ModelOutputConfiguration&& value) { SetOutputConfiguration(std::move(value)); return *this;}


    /**
     * <p>The model endpoint’s status in Amazon Fraud Detector.</p>
     */
    inline const ModelEndpointStatus& GetModelEndpointStatus() const{ return m_modelEndpointStatus; }

    /**
     * <p>The model endpoint’s status in Amazon Fraud Detector.</p>
     */
    inline bool ModelEndpointStatusHasBeenSet() const { return m_modelEndpointStatusHasBeenSet; }

    /**
     * <p>The model endpoint’s status in Amazon Fraud Detector.</p>
     */
    inline void SetModelEndpointStatus(const ModelEndpointStatus& value) { m_modelEndpointStatusHasBeenSet = true; m_modelEndpointStatus = value; }

    /**
     * <p>The model endpoint’s status in Amazon Fraud Detector.</p>
     */
    inline void SetModelEndpointStatus(ModelEndpointStatus&& value) { m_modelEndpointStatusHasBeenSet = true; m_modelEndpointStatus = std::move(value); }

    /**
     * <p>The model endpoint’s status in Amazon Fraud Detector.</p>
     */
    inline PutExternalModelRequest& WithModelEndpointStatus(const ModelEndpointStatus& value) { SetModelEndpointStatus(value); return *this;}

    /**
     * <p>The model endpoint’s status in Amazon Fraud Detector.</p>
     */
    inline PutExternalModelRequest& WithModelEndpointStatus(ModelEndpointStatus&& value) { SetModelEndpointStatus(std::move(value)); return *this;}

  private:

    Aws::String m_modelEndpoint;
    bool m_modelEndpointHasBeenSet;

    ModelSource m_modelSource;
    bool m_modelSourceHasBeenSet;

    Role m_role;
    bool m_roleHasBeenSet;

    ModelInputConfiguration m_inputConfiguration;
    bool m_inputConfigurationHasBeenSet;

    ModelOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet;

    ModelEndpointStatus m_modelEndpointStatus;
    bool m_modelEndpointStatusHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
