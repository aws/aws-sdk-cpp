/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/ResourceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/FindingStatus.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains details about the analyzed resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/AnalyzedResource">AWS
   * API Reference</a></p>
   */
  class AnalyzedResource
  {
  public:
    AWS_ACCESSANALYZER_API AnalyzedResource() = default;
    AWS_ACCESSANALYZER_API AnalyzedResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API AnalyzedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the resource that was analyzed.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    AnalyzedResource& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource that was analyzed.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline AnalyzedResource& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AnalyzedResource& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the resource was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedAt() const { return m_analyzedAt; }
    inline bool AnalyzedAtHasBeenSet() const { return m_analyzedAtHasBeenSet; }
    template<typename AnalyzedAtT = Aws::Utils::DateTime>
    void SetAnalyzedAt(AnalyzedAtT&& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = std::forward<AnalyzedAtT>(value); }
    template<typename AnalyzedAtT = Aws::Utils::DateTime>
    AnalyzedResource& WithAnalyzedAt(AnalyzedAtT&& value) { SetAnalyzedAt(std::forward<AnalyzedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AnalyzedResource& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the policy that generated the finding grants public access
     * to the resource.</p>
     */
    inline bool GetIsPublic() const { return m_isPublic; }
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }
    inline AnalyzedResource& WithIsPublic(bool value) { SetIsPublic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions that an external principal is granted permission to use by the
     * policy that generated the finding.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<Aws::String>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<Aws::String>>
    AnalyzedResource& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Aws::String>
    AnalyzedResource& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates how the access that generated the finding is granted. This is
     * populated for Amazon S3 bucket findings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedVia() const { return m_sharedVia; }
    inline bool SharedViaHasBeenSet() const { return m_sharedViaHasBeenSet; }
    template<typename SharedViaT = Aws::Vector<Aws::String>>
    void SetSharedVia(SharedViaT&& value) { m_sharedViaHasBeenSet = true; m_sharedVia = std::forward<SharedViaT>(value); }
    template<typename SharedViaT = Aws::Vector<Aws::String>>
    AnalyzedResource& WithSharedVia(SharedViaT&& value) { SetSharedVia(std::forward<SharedViaT>(value)); return *this;}
    template<typename SharedViaT = Aws::String>
    AnalyzedResource& AddSharedVia(SharedViaT&& value) { m_sharedViaHasBeenSet = true; m_sharedVia.emplace_back(std::forward<SharedViaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of the finding generated from the analyzed resource.</p>
     */
    inline FindingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FindingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AnalyzedResource& WithStatus(FindingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerAccount() const { return m_resourceOwnerAccount; }
    inline bool ResourceOwnerAccountHasBeenSet() const { return m_resourceOwnerAccountHasBeenSet; }
    template<typename ResourceOwnerAccountT = Aws::String>
    void SetResourceOwnerAccount(ResourceOwnerAccountT&& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = std::forward<ResourceOwnerAccountT>(value); }
    template<typename ResourceOwnerAccountT = Aws::String>
    AnalyzedResource& WithResourceOwnerAccount(ResourceOwnerAccountT&& value) { SetResourceOwnerAccount(std::forward<ResourceOwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    AnalyzedResource& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_analyzedAt{};
    bool m_analyzedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    bool m_isPublic{false};
    bool m_isPublicHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sharedVia;
    bool m_sharedViaHasBeenSet = false;

    FindingStatus m_status{FindingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_resourceOwnerAccount;
    bool m_resourceOwnerAccountHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
