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


    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedAt() const{ return m_analyzedAt; }

    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline bool AnalyzedAtHasBeenSet() const { return m_analyzedAtHasBeenSet; }

    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline void SetAnalyzedAt(const Aws::Utils::DateTime& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = value; }

    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline void SetAnalyzedAt(Aws::Utils::DateTime&& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = std::move(value); }

    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline FindingSummaryV2& WithAnalyzedAt(const Aws::Utils::DateTime& value) { SetAnalyzedAt(value); return *this;}

    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline FindingSummaryV2& WithAnalyzedAt(Aws::Utils::DateTime&& value) { SetAnalyzedAt(std::move(value)); return *this;}


    /**
     * <p>The time at which the finding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline FindingSummaryV2& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline FindingSummaryV2& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline FindingSummaryV2& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline FindingSummaryV2& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline FindingSummaryV2& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>The ID of the finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the finding.</p>
     */
    inline FindingSummaryV2& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the finding.</p>
     */
    inline FindingSummaryV2& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the finding.</p>
     */
    inline FindingSummaryV2& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline FindingSummaryV2& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline FindingSummaryV2& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline FindingSummaryV2& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline FindingSummaryV2& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline FindingSummaryV2& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerAccount() const{ return m_resourceOwnerAccount; }

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline bool ResourceOwnerAccountHasBeenSet() const { return m_resourceOwnerAccountHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline void SetResourceOwnerAccount(const Aws::String& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = value; }

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline void SetResourceOwnerAccount(Aws::String&& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline void SetResourceOwnerAccount(const char* value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount.assign(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline FindingSummaryV2& WithResourceOwnerAccount(const Aws::String& value) { SetResourceOwnerAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline FindingSummaryV2& WithResourceOwnerAccount(Aws::String&& value) { SetResourceOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline FindingSummaryV2& WithResourceOwnerAccount(const char* value) { SetResourceOwnerAccount(value); return *this;}


    /**
     * <p>The status of the finding.</p>
     */
    inline const FindingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the finding.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the finding.</p>
     */
    inline void SetStatus(const FindingStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the finding.</p>
     */
    inline void SetStatus(FindingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the finding.</p>
     */
    inline FindingSummaryV2& WithStatus(const FindingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the finding.</p>
     */
    inline FindingSummaryV2& WithStatus(FindingStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline FindingSummaryV2& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline FindingSummaryV2& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The type of the external access or unused access finding.</p>
     */
    inline const FindingType& GetFindingType() const{ return m_findingType; }

    /**
     * <p>The type of the external access or unused access finding.</p>
     */
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }

    /**
     * <p>The type of the external access or unused access finding.</p>
     */
    inline void SetFindingType(const FindingType& value) { m_findingTypeHasBeenSet = true; m_findingType = value; }

    /**
     * <p>The type of the external access or unused access finding.</p>
     */
    inline void SetFindingType(FindingType&& value) { m_findingTypeHasBeenSet = true; m_findingType = std::move(value); }

    /**
     * <p>The type of the external access or unused access finding.</p>
     */
    inline FindingSummaryV2& WithFindingType(const FindingType& value) { SetFindingType(value); return *this;}

    /**
     * <p>The type of the external access or unused access finding.</p>
     */
    inline FindingSummaryV2& WithFindingType(FindingType&& value) { SetFindingType(std::move(value)); return *this;}

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
