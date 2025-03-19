/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/EndpointStatus.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Specifies information about the specified endpoint. For information about
   * endpoints, see <a
   * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
   * endpoints</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EndpointProperties">AWS
   * API Reference</a></p>
   */
  class EndpointProperties
  {
  public:
    AWS_COMPREHEND_API EndpointProperties() = default;
    AWS_COMPREHEND_API EndpointProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EndpointProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    EndpointProperties& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the endpoint. Because the endpoint updates and
     * creation are asynchronous, so customers will need to wait for the endpoint to be
     * <code>Ready</code> status before making inference requests.</p>
     */
    inline EndpointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EndpointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EndpointProperties& WithStatus(EndpointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a reason for failure in cases of <code>Failed</code> status.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    EndpointProperties& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    EndpointProperties& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the new model to use for updating an existing endpoint. This ARN is
     * going to be different from the model ARN when the update is in progress</p>
     */
    inline const Aws::String& GetDesiredModelArn() const { return m_desiredModelArn; }
    inline bool DesiredModelArnHasBeenSet() const { return m_desiredModelArnHasBeenSet; }
    template<typename DesiredModelArnT = Aws::String>
    void SetDesiredModelArn(DesiredModelArnT&& value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn = std::forward<DesiredModelArnT>(value); }
    template<typename DesiredModelArnT = Aws::String>
    EndpointProperties& WithDesiredModelArn(DesiredModelArnT&& value) { SetDesiredModelArn(std::forward<DesiredModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired number of inference units to be used by the model using this
     * endpoint. Each inference unit represents of a throughput of 100 characters per
     * second.</p>
     */
    inline int GetDesiredInferenceUnits() const { return m_desiredInferenceUnits; }
    inline bool DesiredInferenceUnitsHasBeenSet() const { return m_desiredInferenceUnitsHasBeenSet; }
    inline void SetDesiredInferenceUnits(int value) { m_desiredInferenceUnitsHasBeenSet = true; m_desiredInferenceUnits = value; }
    inline EndpointProperties& WithDesiredInferenceUnits(int value) { SetDesiredInferenceUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of inference units currently used by the model using this
     * endpoint.</p>
     */
    inline int GetCurrentInferenceUnits() const { return m_currentInferenceUnits; }
    inline bool CurrentInferenceUnitsHasBeenSet() const { return m_currentInferenceUnitsHasBeenSet; }
    inline void SetCurrentInferenceUnits(int value) { m_currentInferenceUnitsHasBeenSet = true; m_currentInferenceUnits = value; }
    inline EndpointProperties& WithCurrentInferenceUnits(int value) { SetCurrentInferenceUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time of the endpoint.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    EndpointProperties& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the endpoint was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    EndpointProperties& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * read access to trained custom models encrypted with a customer managed key
     * (ModelKmsKeyId).</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    EndpointProperties& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data access role ARN to use in case the new model is encrypted with a
     * customer KMS key.</p>
     */
    inline const Aws::String& GetDesiredDataAccessRoleArn() const { return m_desiredDataAccessRoleArn; }
    inline bool DesiredDataAccessRoleArnHasBeenSet() const { return m_desiredDataAccessRoleArnHasBeenSet; }
    template<typename DesiredDataAccessRoleArnT = Aws::String>
    void SetDesiredDataAccessRoleArn(DesiredDataAccessRoleArnT&& value) { m_desiredDataAccessRoleArnHasBeenSet = true; m_desiredDataAccessRoleArn = std::forward<DesiredDataAccessRoleArnT>(value); }
    template<typename DesiredDataAccessRoleArnT = Aws::String>
    EndpointProperties& WithDesiredDataAccessRoleArn(DesiredDataAccessRoleArnT&& value) { SetDesiredDataAccessRoleArn(std::forward<DesiredDataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel</p>
     */
    inline const Aws::String& GetFlywheelArn() const { return m_flywheelArn; }
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }
    template<typename FlywheelArnT = Aws::String>
    void SetFlywheelArn(FlywheelArnT&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::forward<FlywheelArnT>(value); }
    template<typename FlywheelArnT = Aws::String>
    EndpointProperties& WithFlywheelArn(FlywheelArnT&& value) { SetFlywheelArn(std::forward<FlywheelArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    EndpointStatus m_status{EndpointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_desiredModelArn;
    bool m_desiredModelArnHasBeenSet = false;

    int m_desiredInferenceUnits{0};
    bool m_desiredInferenceUnitsHasBeenSet = false;

    int m_currentInferenceUnits{0};
    bool m_currentInferenceUnitsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_desiredDataAccessRoleArn;
    bool m_desiredDataAccessRoleArnHasBeenSet = false;

    Aws::String m_flywheelArn;
    bool m_flywheelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
