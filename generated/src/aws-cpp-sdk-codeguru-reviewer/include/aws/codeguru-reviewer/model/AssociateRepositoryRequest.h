/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerRequest.h>
#include <aws/codeguru-reviewer/model/Repository.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codeguru-reviewer/model/KMSKeyDetails.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   */
  class AssociateRepositoryRequest : public CodeGuruReviewerRequest
  {
  public:
    AWS_CODEGURUREVIEWER_API AssociateRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateRepository"; }

    AWS_CODEGURUREVIEWER_API Aws::String SerializePayload() const override;


    /**
     * <p>The repository to associate.</p>
     */
    inline const Repository& GetRepository() const{ return m_repository; }

    /**
     * <p>The repository to associate.</p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p>The repository to associate.</p>
     */
    inline void SetRepository(const Repository& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p>The repository to associate.</p>
     */
    inline void SetRepository(Repository&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p>The repository to associate.</p>
     */
    inline AssociateRepositoryRequest& WithRepository(const Repository& value) { SetRepository(value); return *this;}

    /**
     * <p>The repository to associate.</p>
     */
    inline AssociateRepositoryRequest& WithRepository(Repository&& value) { SetRepository(std::move(value)); return *this;}


    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries.</p>
     */
    inline AssociateRepositoryRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries.</p>
     */
    inline AssociateRepositoryRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries.</p>
     */
    inline AssociateRepositoryRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline AssociateRepositoryRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline AssociateRepositoryRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline AssociateRepositoryRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline AssociateRepositoryRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline AssociateRepositoryRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline AssociateRepositoryRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline AssociateRepositoryRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline AssociateRepositoryRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline AssociateRepositoryRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline const KMSKeyDetails& GetKMSKeyDetails() const{ return m_kMSKeyDetails; }

    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline bool KMSKeyDetailsHasBeenSet() const { return m_kMSKeyDetailsHasBeenSet; }

    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline void SetKMSKeyDetails(const KMSKeyDetails& value) { m_kMSKeyDetailsHasBeenSet = true; m_kMSKeyDetails = value; }

    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline void SetKMSKeyDetails(KMSKeyDetails&& value) { m_kMSKeyDetailsHasBeenSet = true; m_kMSKeyDetails = std::move(value); }

    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline AssociateRepositoryRequest& WithKMSKeyDetails(const KMSKeyDetails& value) { SetKMSKeyDetails(value); return *this;}

    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline AssociateRepositoryRequest& WithKMSKeyDetails(KMSKeyDetails&& value) { SetKMSKeyDetails(std::move(value)); return *this;}

  private:

    Repository m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    KMSKeyDetails m_kMSKeyDetails;
    bool m_kMSKeyDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
