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
    AWS_ACCESSANALYZER_API FindingSummaryV2();
    AWS_ACCESSANALYZER_API FindingSummaryV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API FindingSummaryV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedAt() const{ return m_analyzedAt; }
    inline bool AnalyzedAtHasBeenSet() const { return m_analyzedAtHasBeenSet; }
    inline void SetAnalyzedAt(const Aws::Utils::DateTime& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = value; }
    inline void SetAnalyzedAt(Aws::Utils::DateTime&& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = std::move(value); }
    inline FindingSummaryV2& WithAnalyzedAt(const Aws::Utils::DateTime& value) { SetAnalyzedAt(value); return *this;}
    inline FindingSummaryV2& WithAnalyzedAt(Aws::Utils::DateTime&& value) { SetAnalyzedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline FindingSummaryV2& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline FindingSummaryV2& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline FindingSummaryV2& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline FindingSummaryV2& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline FindingSummaryV2& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline FindingSummaryV2& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline FindingSummaryV2& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline FindingSummaryV2& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline FindingSummaryV2& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline FindingSummaryV2& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline FindingSummaryV2& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline FindingSummaryV2& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline FindingSummaryV2& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerAccount() const{ return m_resourceOwnerAccount; }
    inline bool ResourceOwnerAccountHasBeenSet() const { return m_resourceOwnerAccountHasBeenSet; }
    inline void SetResourceOwnerAccount(const Aws::String& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = value; }
    inline void SetResourceOwnerAccount(Aws::String&& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = std::move(value); }
    inline void SetResourceOwnerAccount(const char* value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount.assign(value); }
    inline FindingSummaryV2& WithResourceOwnerAccount(const Aws::String& value) { SetResourceOwnerAccount(value); return *this;}
    inline FindingSummaryV2& WithResourceOwnerAccount(Aws::String&& value) { SetResourceOwnerAccount(std::move(value)); return *this;}
    inline FindingSummaryV2& WithResourceOwnerAccount(const char* value) { SetResourceOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the finding.</p>
     */
    inline const FindingStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FindingStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FindingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline FindingSummaryV2& WithStatus(const FindingStatus& value) { SetStatus(value); return *this;}
    inline FindingSummaryV2& WithStatus(FindingStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline FindingSummaryV2& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline FindingSummaryV2& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the external access or unused access finding.</p>
     */
    inline const FindingType& GetFindingType() const{ return m_findingType; }
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
    inline void SetFindingType(const FindingType& value) { m_findingTypeHasBeenSet = true; m_findingType = value; }
    inline void SetFindingType(FindingType&& value) { m_findingTypeHasBeenSet = true; m_findingType = std::move(value); }
    inline FindingSummaryV2& WithFindingType(const FindingType& value) { SetFindingType(value); return *this;}
    inline FindingSummaryV2& WithFindingType(FindingType&& value) { SetFindingType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_analyzedAt;
    bool m_analyzedAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceOwnerAccount;
    bool m_resourceOwnerAccountHasBeenSet = false;

    FindingStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    FindingType m_findingType;
    bool m_findingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
