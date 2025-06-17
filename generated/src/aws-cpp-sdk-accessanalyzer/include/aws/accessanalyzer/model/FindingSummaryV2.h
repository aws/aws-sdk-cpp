/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/ResourceType.h>
#include <aws/accessanalyzer/model/FindingStatus.h>
#include <aws/accessanalyzer/model/FindingType.h>
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
   * <p>Contains information about a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/FindingSummaryV2">AWS
   * API Reference</a></p>
   */
  class FindingSummaryV2
  {
  public:
    AWS_ACCESSANALYZER_API FindingSummaryV2() = default;
    AWS_ACCESSANALYZER_API FindingSummaryV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API FindingSummaryV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedAt() const { return m_analyzedAt; }
    inline bool AnalyzedAtHasBeenSet() const { return m_analyzedAtHasBeenSet; }
    template<typename AnalyzedAtT = Aws::Utils::DateTime>
    void SetAnalyzedAt(AnalyzedAtT&& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = std::forward<AnalyzedAtT>(value); }
    template<typename AnalyzedAtT = Aws::Utils::DateTime>
    FindingSummaryV2& WithAnalyzedAt(AnalyzedAtT&& value) { SetAnalyzedAt(std::forward<AnalyzedAtT>(value)); return *this;}
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
    FindingSummaryV2& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    FindingSummaryV2& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the finding.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FindingSummaryV2& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    FindingSummaryV2& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline FindingSummaryV2& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
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
    FindingSummaryV2& WithResourceOwnerAccount(ResourceOwnerAccountT&& value) { SetResourceOwnerAccount(std::forward<ResourceOwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the finding.</p>
     */
    inline FindingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FindingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FindingSummaryV2& WithStatus(FindingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    FindingSummaryV2& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the access finding. For external access analyzers, the type is
     * <code>ExternalAccess</code>. For unused access analyzers, the type can be
     * <code>UnusedIAMRole</code>, <code>UnusedIAMUserAccessKey</code>,
     * <code>UnusedIAMUserPassword</code>, or <code>UnusedPermission</code>. For
     * internal access analyzers, the type is <code>InternalAccess</code>.</p>
     */
    inline FindingType GetFindingType() const { return m_findingType; }
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
    inline void SetFindingType(FindingType value) { m_findingTypeHasBeenSet = true; m_findingType = value; }
    inline FindingSummaryV2& WithFindingType(FindingType value) { SetFindingType(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_analyzedAt{};
    bool m_analyzedAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceOwnerAccount;
    bool m_resourceOwnerAccountHasBeenSet = false;

    FindingStatus m_status{FindingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    FindingType m_findingType{FindingType::NOT_SET};
    bool m_findingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
