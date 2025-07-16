/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/CustomModelDeploymentStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{
  class GetCustomModelDeploymentResult
  {
  public:
    AWS_BEDROCK_API GetCustomModelDeploymentResult() = default;
    AWS_BEDROCK_API GetCustomModelDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetCustomModelDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom model deployment.</p>
     */
    inline const Aws::String& GetCustomModelDeploymentArn() const { return m_customModelDeploymentArn; }
    template<typename CustomModelDeploymentArnT = Aws::String>
    void SetCustomModelDeploymentArn(CustomModelDeploymentArnT&& value) { m_customModelDeploymentArnHasBeenSet = true; m_customModelDeploymentArn = std::forward<CustomModelDeploymentArnT>(value); }
    template<typename CustomModelDeploymentArnT = Aws::String>
    GetCustomModelDeploymentResult& WithCustomModelDeploymentArn(CustomModelDeploymentArnT&& value) { SetCustomModelDeploymentArn(std::forward<CustomModelDeploymentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom model deployment.</p>
     */
    inline const Aws::String& GetModelDeploymentName() const { return m_modelDeploymentName; }
    template<typename ModelDeploymentNameT = Aws::String>
    void SetModelDeploymentName(ModelDeploymentNameT&& value) { m_modelDeploymentNameHasBeenSet = true; m_modelDeploymentName = std::forward<ModelDeploymentNameT>(value); }
    template<typename ModelDeploymentNameT = Aws::String>
    GetCustomModelDeploymentResult& WithModelDeploymentName(ModelDeploymentNameT&& value) { SetModelDeploymentName(std::forward<ModelDeploymentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom model associated with this
     * deployment.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    GetCustomModelDeploymentResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the custom model deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetCustomModelDeploymentResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the custom model deployment. Possible values are:</p> <ul> <li>
     * <p> <code>CREATING</code> - The deployment is being set up and prepared for
     * inference.</p> </li> <li> <p> <code>ACTIVE</code> - The deployment is ready and
     * available for inference requests.</p> </li> <li> <p> <code>FAILED</code> - The
     * deployment failed to be created or became unavailable.</p> </li> </ul>
     */
    inline CustomModelDeploymentStatus GetStatus() const { return m_status; }
    inline void SetStatus(CustomModelDeploymentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetCustomModelDeploymentResult& WithStatus(CustomModelDeploymentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the custom model deployment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetCustomModelDeploymentResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the deployment status is <code>FAILED</code>, this field contains a
     * message describing the failure reason.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    GetCustomModelDeploymentResult& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the custom model deployment was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetCustomModelDeploymentResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCustomModelDeploymentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customModelDeploymentArn;
    bool m_customModelDeploymentArnHasBeenSet = false;

    Aws::String m_modelDeploymentName;
    bool m_modelDeploymentNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    CustomModelDeploymentStatus m_status{CustomModelDeploymentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
