/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

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
    inline CreateRepositoryRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline CreateRepositoryRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}

  private:
    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
