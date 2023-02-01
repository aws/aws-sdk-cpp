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
    AWS_COMPREHEND_API EndpointProperties();
    AWS_COMPREHEND_API EndpointProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EndpointProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint.</p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint.</p>
     */
    inline EndpointProperties& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint.</p>
     */
    inline EndpointProperties& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint.</p>
     */
    inline EndpointProperties& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>Specifies the status of the endpoint. Because the endpoint updates and
     * creation are asynchronous, so customers will need to wait for the endpoint to be
     * <code>Ready</code> status before making inference requests.</p>
     */
    inline const EndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the status of the endpoint. Because the endpoint updates and
     * creation are asynchronous, so customers will need to wait for the endpoint to be
     * <code>Ready</code> status before making inference requests.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the status of the endpoint. Because the endpoint updates and
     * creation are asynchronous, so customers will need to wait for the endpoint to be
     * <code>Ready</code> status before making inference requests.</p>
     */
    inline void SetStatus(const EndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of the endpoint. Because the endpoint updates and
     * creation are asynchronous, so customers will need to wait for the endpoint to be
     * <code>Ready</code> status before making inference requests.</p>
     */
    inline void SetStatus(EndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the status of the endpoint. Because the endpoint updates and
     * creation are asynchronous, so customers will need to wait for the endpoint to be
     * <code>Ready</code> status before making inference requests.</p>
     */
    inline EndpointProperties& WithStatus(const EndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of the endpoint. Because the endpoint updates and
     * creation are asynchronous, so customers will need to wait for the endpoint to be
     * <code>Ready</code> status before making inference requests.</p>
     */
    inline EndpointProperties& WithStatus(EndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies a reason for failure in cases of <code>Failed</code> status.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Specifies a reason for failure in cases of <code>Failed</code> status.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Specifies a reason for failure in cases of <code>Failed</code> status.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Specifies a reason for failure in cases of <code>Failed</code> status.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Specifies a reason for failure in cases of <code>Failed</code> status.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Specifies a reason for failure in cases of <code>Failed</code> status.</p>
     */
    inline EndpointProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Specifies a reason for failure in cases of <code>Failed</code> status.</p>
     */
    inline EndpointProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Specifies a reason for failure in cases of <code>Failed</code> status.</p>
     */
    inline EndpointProperties& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline EndpointProperties& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline EndpointProperties& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline EndpointProperties& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>ARN of the new model to use for updating an existing endpoint. This ARN is
     * going to be different from the model ARN when the update is in progress</p>
     */
    inline const Aws::String& GetDesiredModelArn() const{ return m_desiredModelArn; }

    /**
     * <p>ARN of the new model to use for updating an existing endpoint. This ARN is
     * going to be different from the model ARN when the update is in progress</p>
     */
    inline bool DesiredModelArnHasBeenSet() const { return m_desiredModelArnHasBeenSet; }

    /**
     * <p>ARN of the new model to use for updating an existing endpoint. This ARN is
     * going to be different from the model ARN when the update is in progress</p>
     */
    inline void SetDesiredModelArn(const Aws::String& value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn = value; }

    /**
     * <p>ARN of the new model to use for updating an existing endpoint. This ARN is
     * going to be different from the model ARN when the update is in progress</p>
     */
    inline void SetDesiredModelArn(Aws::String&& value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn = std::move(value); }

    /**
     * <p>ARN of the new model to use for updating an existing endpoint. This ARN is
     * going to be different from the model ARN when the update is in progress</p>
     */
    inline void SetDesiredModelArn(const char* value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn.assign(value); }

    /**
     * <p>ARN of the new model to use for updating an existing endpoint. This ARN is
     * going to be different from the model ARN when the update is in progress</p>
     */
    inline EndpointProperties& WithDesiredModelArn(const Aws::String& value) { SetDesiredModelArn(value); return *this;}

    /**
     * <p>ARN of the new model to use for updating an existing endpoint. This ARN is
     * going to be different from the model ARN when the update is in progress</p>
     */
    inline EndpointProperties& WithDesiredModelArn(Aws::String&& value) { SetDesiredModelArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the new model to use for updating an existing endpoint. This ARN is
     * going to be different from the model ARN when the update is in progress</p>
     */
    inline EndpointProperties& WithDesiredModelArn(const char* value) { SetDesiredModelArn(value); return *this;}


    /**
     * <p>The desired number of inference units to be used by the model using this
     * endpoint. Each inference unit represents of a throughput of 100 characters per
     * second.</p>
     */
    inline int GetDesiredInferenceUnits() const{ return m_desiredInferenceUnits; }

    /**
     * <p>The desired number of inference units to be used by the model using this
     * endpoint. Each inference unit represents of a throughput of 100 characters per
     * second.</p>
     */
    inline bool DesiredInferenceUnitsHasBeenSet() const { return m_desiredInferenceUnitsHasBeenSet; }

    /**
     * <p>The desired number of inference units to be used by the model using this
     * endpoint. Each inference unit represents of a throughput of 100 characters per
     * second.</p>
     */
    inline void SetDesiredInferenceUnits(int value) { m_desiredInferenceUnitsHasBeenSet = true; m_desiredInferenceUnits = value; }

    /**
     * <p>The desired number of inference units to be used by the model using this
     * endpoint. Each inference unit represents of a throughput of 100 characters per
     * second.</p>
     */
    inline EndpointProperties& WithDesiredInferenceUnits(int value) { SetDesiredInferenceUnits(value); return *this;}


    /**
     * <p>The number of inference units currently used by the model using this
     * endpoint.</p>
     */
    inline int GetCurrentInferenceUnits() const{ return m_currentInferenceUnits; }

    /**
     * <p>The number of inference units currently used by the model using this
     * endpoint.</p>
     */
    inline bool CurrentInferenceUnitsHasBeenSet() const { return m_currentInferenceUnitsHasBeenSet; }

    /**
     * <p>The number of inference units currently used by the model using this
     * endpoint.</p>
     */
    inline void SetCurrentInferenceUnits(int value) { m_currentInferenceUnitsHasBeenSet = true; m_currentInferenceUnits = value; }

    /**
     * <p>The number of inference units currently used by the model using this
     * endpoint.</p>
     */
    inline EndpointProperties& WithCurrentInferenceUnits(int value) { SetCurrentInferenceUnits(value); return *this;}


    /**
     * <p>The creation date and time of the endpoint.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation date and time of the endpoint.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation date and time of the endpoint.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation date and time of the endpoint.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation date and time of the endpoint.</p>
     */
    inline EndpointProperties& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation date and time of the endpoint.</p>
     */
    inline EndpointProperties& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the endpoint was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the endpoint was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time that the endpoint was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the endpoint was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the endpoint was last modified.</p>
     */
    inline EndpointProperties& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the endpoint was last modified.</p>
     */
    inline EndpointProperties& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline EndpointProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline EndpointProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline EndpointProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>Data access role ARN to use in case the new model is encrypted with a
     * customer KMS key.</p>
     */
    inline const Aws::String& GetDesiredDataAccessRoleArn() const{ return m_desiredDataAccessRoleArn; }

    /**
     * <p>Data access role ARN to use in case the new model is encrypted with a
     * customer KMS key.</p>
     */
    inline bool DesiredDataAccessRoleArnHasBeenSet() const { return m_desiredDataAccessRoleArnHasBeenSet; }

    /**
     * <p>Data access role ARN to use in case the new model is encrypted with a
     * customer KMS key.</p>
     */
    inline void SetDesiredDataAccessRoleArn(const Aws::String& value) { m_desiredDataAccessRoleArnHasBeenSet = true; m_desiredDataAccessRoleArn = value; }

    /**
     * <p>Data access role ARN to use in case the new model is encrypted with a
     * customer KMS key.</p>
     */
    inline void SetDesiredDataAccessRoleArn(Aws::String&& value) { m_desiredDataAccessRoleArnHasBeenSet = true; m_desiredDataAccessRoleArn = std::move(value); }

    /**
     * <p>Data access role ARN to use in case the new model is encrypted with a
     * customer KMS key.</p>
     */
    inline void SetDesiredDataAccessRoleArn(const char* value) { m_desiredDataAccessRoleArnHasBeenSet = true; m_desiredDataAccessRoleArn.assign(value); }

    /**
     * <p>Data access role ARN to use in case the new model is encrypted with a
     * customer KMS key.</p>
     */
    inline EndpointProperties& WithDesiredDataAccessRoleArn(const Aws::String& value) { SetDesiredDataAccessRoleArn(value); return *this;}

    /**
     * <p>Data access role ARN to use in case the new model is encrypted with a
     * customer KMS key.</p>
     */
    inline EndpointProperties& WithDesiredDataAccessRoleArn(Aws::String&& value) { SetDesiredDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>Data access role ARN to use in case the new model is encrypted with a
     * customer KMS key.</p>
     */
    inline EndpointProperties& WithDesiredDataAccessRoleArn(const char* value) { SetDesiredDataAccessRoleArn(value); return *this;}

  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    EndpointStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_desiredModelArn;
    bool m_desiredModelArnHasBeenSet = false;

    int m_desiredInferenceUnits;
    bool m_desiredInferenceUnitsHasBeenSet = false;

    int m_currentInferenceUnits;
    bool m_currentInferenceUnitsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_desiredDataAccessRoleArn;
    bool m_desiredDataAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
