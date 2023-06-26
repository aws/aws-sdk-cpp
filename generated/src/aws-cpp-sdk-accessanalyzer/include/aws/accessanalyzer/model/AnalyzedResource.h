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
    AWS_ACCESSANALYZER_API AnalyzedResource();
    AWS_ACCESSANALYZER_API AnalyzedResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API AnalyzedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the resource that was analyzed.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the resource that was analyzed.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the resource that was analyzed.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the resource that was analyzed.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the resource that was analyzed.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the resource that was analyzed.</p>
     */
    inline AnalyzedResource& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the resource that was analyzed.</p>
     */
    inline AnalyzedResource& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource that was analyzed.</p>
     */
    inline AnalyzedResource& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The type of the resource that was analyzed.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource that was analyzed.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource that was analyzed.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource that was analyzed.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource that was analyzed.</p>
     */
    inline AnalyzedResource& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource that was analyzed.</p>
     */
    inline AnalyzedResource& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


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
    inline AnalyzedResource& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline AnalyzedResource& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time at which the resource was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedAt() const{ return m_analyzedAt; }

    /**
     * <p>The time at which the resource was analyzed.</p>
     */
    inline bool AnalyzedAtHasBeenSet() const { return m_analyzedAtHasBeenSet; }

    /**
     * <p>The time at which the resource was analyzed.</p>
     */
    inline void SetAnalyzedAt(const Aws::Utils::DateTime& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = value; }

    /**
     * <p>The time at which the resource was analyzed.</p>
     */
    inline void SetAnalyzedAt(Aws::Utils::DateTime&& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = std::move(value); }

    /**
     * <p>The time at which the resource was analyzed.</p>
     */
    inline AnalyzedResource& WithAnalyzedAt(const Aws::Utils::DateTime& value) { SetAnalyzedAt(value); return *this;}

    /**
     * <p>The time at which the resource was analyzed.</p>
     */
    inline AnalyzedResource& WithAnalyzedAt(Aws::Utils::DateTime&& value) { SetAnalyzedAt(std::move(value)); return *this;}


    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline AnalyzedResource& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline AnalyzedResource& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the policy that generated the finding grants public access
     * to the resource.</p>
     */
    inline bool GetIsPublic() const{ return m_isPublic; }

    /**
     * <p>Indicates whether the policy that generated the finding grants public access
     * to the resource.</p>
     */
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }

    /**
     * <p>Indicates whether the policy that generated the finding grants public access
     * to the resource.</p>
     */
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }

    /**
     * <p>Indicates whether the policy that generated the finding grants public access
     * to the resource.</p>
     */
    inline AnalyzedResource& WithIsPublic(bool value) { SetIsPublic(value); return *this;}


    /**
     * <p>The actions that an external principal is granted permission to use by the
     * policy that generated the finding.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions that an external principal is granted permission to use by the
     * policy that generated the finding.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions that an external principal is granted permission to use by the
     * policy that generated the finding.</p>
     */
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions that an external principal is granted permission to use by the
     * policy that generated the finding.</p>
     */
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions that an external principal is granted permission to use by the
     * policy that generated the finding.</p>
     */
    inline AnalyzedResource& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions that an external principal is granted permission to use by the
     * policy that generated the finding.</p>
     */
    inline AnalyzedResource& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions that an external principal is granted permission to use by the
     * policy that generated the finding.</p>
     */
    inline AnalyzedResource& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions that an external principal is granted permission to use by the
     * policy that generated the finding.</p>
     */
    inline AnalyzedResource& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions that an external principal is granted permission to use by the
     * policy that generated the finding.</p>
     */
    inline AnalyzedResource& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }


    /**
     * <p>Indicates how the access that generated the finding is granted. This is
     * populated for Amazon S3 bucket findings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedVia() const{ return m_sharedVia; }

    /**
     * <p>Indicates how the access that generated the finding is granted. This is
     * populated for Amazon S3 bucket findings.</p>
     */
    inline bool SharedViaHasBeenSet() const { return m_sharedViaHasBeenSet; }

    /**
     * <p>Indicates how the access that generated the finding is granted. This is
     * populated for Amazon S3 bucket findings.</p>
     */
    inline void SetSharedVia(const Aws::Vector<Aws::String>& value) { m_sharedViaHasBeenSet = true; m_sharedVia = value; }

    /**
     * <p>Indicates how the access that generated the finding is granted. This is
     * populated for Amazon S3 bucket findings.</p>
     */
    inline void SetSharedVia(Aws::Vector<Aws::String>&& value) { m_sharedViaHasBeenSet = true; m_sharedVia = std::move(value); }

    /**
     * <p>Indicates how the access that generated the finding is granted. This is
     * populated for Amazon S3 bucket findings.</p>
     */
    inline AnalyzedResource& WithSharedVia(const Aws::Vector<Aws::String>& value) { SetSharedVia(value); return *this;}

    /**
     * <p>Indicates how the access that generated the finding is granted. This is
     * populated for Amazon S3 bucket findings.</p>
     */
    inline AnalyzedResource& WithSharedVia(Aws::Vector<Aws::String>&& value) { SetSharedVia(std::move(value)); return *this;}

    /**
     * <p>Indicates how the access that generated the finding is granted. This is
     * populated for Amazon S3 bucket findings.</p>
     */
    inline AnalyzedResource& AddSharedVia(const Aws::String& value) { m_sharedViaHasBeenSet = true; m_sharedVia.push_back(value); return *this; }

    /**
     * <p>Indicates how the access that generated the finding is granted. This is
     * populated for Amazon S3 bucket findings.</p>
     */
    inline AnalyzedResource& AddSharedVia(Aws::String&& value) { m_sharedViaHasBeenSet = true; m_sharedVia.push_back(std::move(value)); return *this; }

    /**
     * <p>Indicates how the access that generated the finding is granted. This is
     * populated for Amazon S3 bucket findings.</p>
     */
    inline AnalyzedResource& AddSharedVia(const char* value) { m_sharedViaHasBeenSet = true; m_sharedVia.push_back(value); return *this; }


    /**
     * <p>The current status of the finding generated from the analyzed resource.</p>
     */
    inline const FindingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the finding generated from the analyzed resource.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the finding generated from the analyzed resource.</p>
     */
    inline void SetStatus(const FindingStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the finding generated from the analyzed resource.</p>
     */
    inline void SetStatus(FindingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the finding generated from the analyzed resource.</p>
     */
    inline AnalyzedResource& WithStatus(const FindingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the finding generated from the analyzed resource.</p>
     */
    inline AnalyzedResource& WithStatus(FindingStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline AnalyzedResource& WithResourceOwnerAccount(const Aws::String& value) { SetResourceOwnerAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline AnalyzedResource& WithResourceOwnerAccount(Aws::String&& value) { SetResourceOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline AnalyzedResource& WithResourceOwnerAccount(const char* value) { SetResourceOwnerAccount(value); return *this;}


    /**
     * <p>An error message.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>An error message.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>An error message.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>An error message.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>An error message.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>An error message.</p>
     */
    inline AnalyzedResource& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>An error message.</p>
     */
    inline AnalyzedResource& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>An error message.</p>
     */
    inline AnalyzedResource& WithError(const char* value) { SetError(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_analyzedAt;
    bool m_analyzedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    bool m_isPublic;
    bool m_isPublicHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sharedVia;
    bool m_sharedViaHasBeenSet = false;

    FindingStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_resourceOwnerAccount;
    bool m_resourceOwnerAccountHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
