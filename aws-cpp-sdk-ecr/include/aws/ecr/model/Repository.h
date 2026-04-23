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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>An object representing a repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/Repository">AWS API
   * Reference</a></p>
   */
  class AWS_ECR_API Repository
  {
  public:
    Repository();
    Repository(Aws::Utils::Json::JsonView jsonValue);
    Repository& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, AWS account ID of the repository owner, repository namespace, and
     * repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline const Aws::String& GetRepositoryArn() const{ return m_repositoryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, AWS account ID of the repository owner, repository namespace, and
     * repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline bool RepositoryArnHasBeenSet() const { return m_repositoryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, AWS account ID of the repository owner, repository namespace, and
     * repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline void SetRepositoryArn(const Aws::String& value) { m_repositoryArnHasBeenSet = true; m_repositoryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, AWS account ID of the repository owner, repository namespace, and
     * repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline void SetRepositoryArn(Aws::String&& value) { m_repositoryArnHasBeenSet = true; m_repositoryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, AWS account ID of the repository owner, repository namespace, and
     * repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline void SetRepositoryArn(const char* value) { m_repositoryArnHasBeenSet = true; m_repositoryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, AWS account ID of the repository owner, repository namespace, and
     * repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline Repository& WithRepositoryArn(const Aws::String& value) { SetRepositoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, AWS account ID of the repository owner, repository namespace, and
     * repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline Repository& WithRepositoryArn(Aws::String&& value) { SetRepositoryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, AWS account ID of the repository owner, repository namespace, and
     * repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline Repository& WithRepositoryArn(const char* value) { SetRepositoryArn(value); return *this;}


    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline Repository& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline Repository& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline Repository& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline Repository& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline Repository& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline Repository& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * or <code>pull</code> operations.</p>
     */
    inline const Aws::String& GetRepositoryUri() const{ return m_repositoryUri; }

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * or <code>pull</code> operations.</p>
     */
    inline bool RepositoryUriHasBeenSet() const { return m_repositoryUriHasBeenSet; }

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * or <code>pull</code> operations.</p>
     */
    inline void SetRepositoryUri(const Aws::String& value) { m_repositoryUriHasBeenSet = true; m_repositoryUri = value; }

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * or <code>pull</code> operations.</p>
     */
    inline void SetRepositoryUri(Aws::String&& value) { m_repositoryUriHasBeenSet = true; m_repositoryUri = std::move(value); }

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * or <code>pull</code> operations.</p>
     */
    inline void SetRepositoryUri(const char* value) { m_repositoryUriHasBeenSet = true; m_repositoryUri.assign(value); }

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * or <code>pull</code> operations.</p>
     */
    inline Repository& WithRepositoryUri(const Aws::String& value) { SetRepositoryUri(value); return *this;}

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * or <code>pull</code> operations.</p>
     */
    inline Repository& WithRepositoryUri(Aws::String&& value) { SetRepositoryUri(std::move(value)); return *this;}

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * or <code>pull</code> operations.</p>
     */
    inline Repository& WithRepositoryUri(const char* value) { SetRepositoryUri(value); return *this;}


    /**
     * <p>The date and time, in JavaScript date format, when the repository was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time, in JavaScript date format, when the repository was
     * created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time, in JavaScript date format, when the repository was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time, in JavaScript date format, when the repository was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time, in JavaScript date format, when the repository was
     * created.</p>
     */
    inline Repository& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time, in JavaScript date format, when the repository was
     * created.</p>
     */
    inline Repository& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_repositoryArn;
    bool m_repositoryArnHasBeenSet;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_repositoryUri;
    bool m_repositoryUriHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
