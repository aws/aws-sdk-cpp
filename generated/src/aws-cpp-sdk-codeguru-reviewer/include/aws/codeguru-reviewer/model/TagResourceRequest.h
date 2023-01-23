/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public CodeGuruReviewerRequest
  {
  public:
    AWS_CODEGURUREVIEWER_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_CODEGURUREVIEWER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
     * object. You can retrieve this ARN by calling <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_ListRepositoryAssociations.html">ListRepositoryAssociations</a>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
     * object. You can retrieve this ARN by calling <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_ListRepositoryAssociations.html">ListRepositoryAssociations</a>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
     * object. You can retrieve this ARN by calling <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_ListRepositoryAssociations.html">ListRepositoryAssociations</a>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
     * object. You can retrieve this ARN by calling <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_ListRepositoryAssociations.html">ListRepositoryAssociations</a>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
     * object. You can retrieve this ARN by calling <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_ListRepositoryAssociations.html">ListRepositoryAssociations</a>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
     * object. You can retrieve this ARN by calling <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_ListRepositoryAssociations.html">ListRepositoryAssociations</a>.</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
     * object. You can retrieve this ARN by calling <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_ListRepositoryAssociations.html">ListRepositoryAssociations</a>.</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
     * object. You can retrieve this ARN by calling <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_ListRepositoryAssociations.html">ListRepositoryAssociations</a>.</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


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
    inline TagResourceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

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
    inline TagResourceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

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
    inline TagResourceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
    inline TagResourceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

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
    inline TagResourceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

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
    inline TagResourceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

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
    inline TagResourceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

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
    inline TagResourceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

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
    inline TagResourceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
