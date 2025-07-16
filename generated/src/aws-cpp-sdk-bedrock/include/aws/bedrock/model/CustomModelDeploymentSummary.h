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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains summary information about a custom model deployment, including its
   * ARN, name, status, and associated custom model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CustomModelDeploymentSummary">AWS
   * API Reference</a></p>
   */
  class CustomModelDeploymentSummary
  {
  public:
    AWS_BEDROCK_API CustomModelDeploymentSummary() = default;
    AWS_BEDROCK_API CustomModelDeploymentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API CustomModelDeploymentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom model deployment.</p>
     */
    inline const Aws::String& GetCustomModelDeploymentArn() const { return m_customModelDeploymentArn; }
    inline bool CustomModelDeploymentArnHasBeenSet() const { return m_customModelDeploymentArnHasBeenSet; }
    template<typename CustomModelDeploymentArnT = Aws::String>
    void SetCustomModelDeploymentArn(CustomModelDeploymentArnT&& value) { m_customModelDeploymentArnHasBeenSet = true; m_customModelDeploymentArn = std::forward<CustomModelDeploymentArnT>(value); }
    template<typename CustomModelDeploymentArnT = Aws::String>
    CustomModelDeploymentSummary& WithCustomModelDeploymentArn(CustomModelDeploymentArnT&& value) { SetCustomModelDeploymentArn(std::forward<CustomModelDeploymentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom model deployment.</p>
     */
    inline const Aws::String& GetCustomModelDeploymentName() const { return m_customModelDeploymentName; }
    inline bool CustomModelDeploymentNameHasBeenSet() const { return m_customModelDeploymentNameHasBeenSet; }
    template<typename CustomModelDeploymentNameT = Aws::String>
    void SetCustomModelDeploymentName(CustomModelDeploymentNameT&& value) { m_customModelDeploymentNameHasBeenSet = true; m_customModelDeploymentName = std::forward<CustomModelDeploymentNameT>(value); }
    template<typename CustomModelDeploymentNameT = Aws::String>
    CustomModelDeploymentSummary& WithCustomModelDeploymentName(CustomModelDeploymentNameT&& value) { SetCustomModelDeploymentName(std::forward<CustomModelDeploymentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom model associated with this
     * deployment.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    CustomModelDeploymentSummary& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the custom model deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CustomModelDeploymentSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the custom model deployment. Possible values are
     * <code>CREATING</code>, <code>ACTIVE</code>, and <code>FAILED</code>.</p>
     */
    inline CustomModelDeploymentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CustomModelDeploymentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CustomModelDeploymentSummary& WithStatus(CustomModelDeploymentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the custom model deployment was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    CustomModelDeploymentSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the deployment status is <code>FAILED</code>, this field contains a
     * message describing the failure reason.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    CustomModelDeploymentSummary& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customModelDeploymentArn;
    bool m_customModelDeploymentArnHasBeenSet = false;

    Aws::String m_customModelDeploymentName;
    bool m_customModelDeploymentNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    CustomModelDeploymentStatus m_status{CustomModelDeploymentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
