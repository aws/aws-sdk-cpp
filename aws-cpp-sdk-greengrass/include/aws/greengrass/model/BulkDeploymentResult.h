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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/DeploymentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/ErrorDetail.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about an individual group deployment in a bulk deployment
   * operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/BulkDeploymentResult">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API BulkDeploymentResult
  {
  public:
    BulkDeploymentResult();
    BulkDeploymentResult(Aws::Utils::Json::JsonView jsonValue);
    BulkDeploymentResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline BulkDeploymentResult& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline BulkDeploymentResult& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline BulkDeploymentResult& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * The ARN of the group deployment.
     */
    inline const Aws::String& GetDeploymentArn() const{ return m_deploymentArn; }

    /**
     * The ARN of the group deployment.
     */
    inline bool DeploymentArnHasBeenSet() const { return m_deploymentArnHasBeenSet; }

    /**
     * The ARN of the group deployment.
     */
    inline void SetDeploymentArn(const Aws::String& value) { m_deploymentArnHasBeenSet = true; m_deploymentArn = value; }

    /**
     * The ARN of the group deployment.
     */
    inline void SetDeploymentArn(Aws::String&& value) { m_deploymentArnHasBeenSet = true; m_deploymentArn = std::move(value); }

    /**
     * The ARN of the group deployment.
     */
    inline void SetDeploymentArn(const char* value) { m_deploymentArnHasBeenSet = true; m_deploymentArn.assign(value); }

    /**
     * The ARN of the group deployment.
     */
    inline BulkDeploymentResult& WithDeploymentArn(const Aws::String& value) { SetDeploymentArn(value); return *this;}

    /**
     * The ARN of the group deployment.
     */
    inline BulkDeploymentResult& WithDeploymentArn(Aws::String&& value) { SetDeploymentArn(std::move(value)); return *this;}

    /**
     * The ARN of the group deployment.
     */
    inline BulkDeploymentResult& WithDeploymentArn(const char* value) { SetDeploymentArn(value); return *this;}


    /**
     * The ID of the group deployment.
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * The ID of the group deployment.
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * The ID of the group deployment.
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * The ID of the group deployment.
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * The ID of the group deployment.
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * The ID of the group deployment.
     */
    inline BulkDeploymentResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * The ID of the group deployment.
     */
    inline BulkDeploymentResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * The ID of the group deployment.
     */
    inline BulkDeploymentResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * The current status of the group deployment: ''InProgress'', ''Building'',
     * ''Success'', or ''Failure''.
     */
    inline const Aws::String& GetDeploymentStatus() const{ return m_deploymentStatus; }

    /**
     * The current status of the group deployment: ''InProgress'', ''Building'',
     * ''Success'', or ''Failure''.
     */
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }

    /**
     * The current status of the group deployment: ''InProgress'', ''Building'',
     * ''Success'', or ''Failure''.
     */
    inline void SetDeploymentStatus(const Aws::String& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }

    /**
     * The current status of the group deployment: ''InProgress'', ''Building'',
     * ''Success'', or ''Failure''.
     */
    inline void SetDeploymentStatus(Aws::String&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }

    /**
     * The current status of the group deployment: ''InProgress'', ''Building'',
     * ''Success'', or ''Failure''.
     */
    inline void SetDeploymentStatus(const char* value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus.assign(value); }

    /**
     * The current status of the group deployment: ''InProgress'', ''Building'',
     * ''Success'', or ''Failure''.
     */
    inline BulkDeploymentResult& WithDeploymentStatus(const Aws::String& value) { SetDeploymentStatus(value); return *this;}

    /**
     * The current status of the group deployment: ''InProgress'', ''Building'',
     * ''Success'', or ''Failure''.
     */
    inline BulkDeploymentResult& WithDeploymentStatus(Aws::String&& value) { SetDeploymentStatus(std::move(value)); return *this;}

    /**
     * The current status of the group deployment: ''InProgress'', ''Building'',
     * ''Success'', or ''Failure''.
     */
    inline BulkDeploymentResult& WithDeploymentStatus(const char* value) { SetDeploymentStatus(value); return *this;}


    /**
     * The type of the deployment.
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * The type of the deployment.
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * The type of the deployment.
     */
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * The type of the deployment.
     */
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * The type of the deployment.
     */
    inline BulkDeploymentResult& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * The type of the deployment.
     */
    inline BulkDeploymentResult& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * Details about the error.
     */
    inline const Aws::Vector<ErrorDetail>& GetErrorDetails() const{ return m_errorDetails; }

    /**
     * Details about the error.
     */
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }

    /**
     * Details about the error.
     */
    inline void SetErrorDetails(const Aws::Vector<ErrorDetail>& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }

    /**
     * Details about the error.
     */
    inline void SetErrorDetails(Aws::Vector<ErrorDetail>&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }

    /**
     * Details about the error.
     */
    inline BulkDeploymentResult& WithErrorDetails(const Aws::Vector<ErrorDetail>& value) { SetErrorDetails(value); return *this;}

    /**
     * Details about the error.
     */
    inline BulkDeploymentResult& WithErrorDetails(Aws::Vector<ErrorDetail>&& value) { SetErrorDetails(std::move(value)); return *this;}

    /**
     * Details about the error.
     */
    inline BulkDeploymentResult& AddErrorDetails(const ErrorDetail& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.push_back(value); return *this; }

    /**
     * Details about the error.
     */
    inline BulkDeploymentResult& AddErrorDetails(ErrorDetail&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.push_back(std::move(value)); return *this; }


    /**
     * The error message for a failed deployment
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * The error message for a failed deployment
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * The error message for a failed deployment
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * The error message for a failed deployment
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * The error message for a failed deployment
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * The error message for a failed deployment
     */
    inline BulkDeploymentResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * The error message for a failed deployment
     */
    inline BulkDeploymentResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * The error message for a failed deployment
     */
    inline BulkDeploymentResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * The ARN of the Greengrass group.
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }

    /**
     * The ARN of the Greengrass group.
     */
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }

    /**
     * The ARN of the Greengrass group.
     */
    inline void SetGroupArn(const Aws::String& value) { m_groupArnHasBeenSet = true; m_groupArn = value; }

    /**
     * The ARN of the Greengrass group.
     */
    inline void SetGroupArn(Aws::String&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::move(value); }

    /**
     * The ARN of the Greengrass group.
     */
    inline void SetGroupArn(const char* value) { m_groupArnHasBeenSet = true; m_groupArn.assign(value); }

    /**
     * The ARN of the Greengrass group.
     */
    inline BulkDeploymentResult& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}

    /**
     * The ARN of the Greengrass group.
     */
    inline BulkDeploymentResult& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}

    /**
     * The ARN of the Greengrass group.
     */
    inline BulkDeploymentResult& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}

  private:

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_deploymentArn;
    bool m_deploymentArnHasBeenSet;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::String m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet;

    DeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet;

    Aws::Vector<ErrorDetail> m_errorDetails;
    bool m_errorDetailsHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;

    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
