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
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class AWS_ECR_API CreateRepositoryRequest : public ECRRequest
  {
  public:
    CreateRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRepository"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline CreateRepositoryRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline CreateRepositoryRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline CreateRepositoryRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p/>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p/>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p/>
     */
    inline CreateRepositoryRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p/>
     */
    inline CreateRepositoryRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CreateRepositoryRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline CreateRepositoryRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
