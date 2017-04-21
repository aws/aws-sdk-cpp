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
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/CodeStarRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStar
{
namespace Model
{

  /**
   */
  class AWS_CODESTAR_API CreateProjectRequest : public CodeStarRequest
  {
  public:
    CreateProjectRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The friendly name for the project. This friendly name serves as the basis for
     * the names for resources associated with the project, such as a repository name
     * in AWS CodeCommit. The name is limited to 100 characters and cannot contain
     * certain restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name for the project. This friendly name serves as the basis for
     * the names for resources associated with the project, such as a repository name
     * in AWS CodeCommit. The name is limited to 100 characters and cannot contain
     * certain restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name for the project. This friendly name serves as the basis for
     * the names for resources associated with the project, such as a repository name
     * in AWS CodeCommit. The name is limited to 100 characters and cannot contain
     * certain restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name for the project. This friendly name serves as the basis for
     * the names for resources associated with the project, such as a repository name
     * in AWS CodeCommit. The name is limited to 100 characters and cannot contain
     * certain restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name for the project. This friendly name serves as the basis for
     * the names for resources associated with the project, such as a repository name
     * in AWS CodeCommit. The name is limited to 100 characters and cannot contain
     * certain restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline CreateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name for the project. This friendly name serves as the basis for
     * the names for resources associated with the project, such as a repository name
     * in AWS CodeCommit. The name is limited to 100 characters and cannot contain
     * certain restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline CreateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name for the project. This friendly name serves as the basis for
     * the names for resources associated with the project, such as a repository name
     * in AWS CodeCommit. The name is limited to 100 characters and cannot contain
     * certain restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline CreateProjectRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The ID for the AWS CodeStar project. Project IDs must be unique within an AWS
     * account. Project IDs cannot exceed 15 characters and cannot contain capital
     * letters and other restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for the AWS CodeStar project. Project IDs must be unique within an AWS
     * account. Project IDs cannot exceed 15 characters and cannot contain capital
     * letters and other restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for the AWS CodeStar project. Project IDs must be unique within an AWS
     * account. Project IDs cannot exceed 15 characters and cannot contain capital
     * letters and other restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for the AWS CodeStar project. Project IDs must be unique within an AWS
     * account. Project IDs cannot exceed 15 characters and cannot contain capital
     * letters and other restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for the AWS CodeStar project. Project IDs must be unique within an AWS
     * account. Project IDs cannot exceed 15 characters and cannot contain capital
     * letters and other restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline CreateProjectRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for the AWS CodeStar project. Project IDs must be unique within an AWS
     * account. Project IDs cannot exceed 15 characters and cannot contain capital
     * letters and other restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline CreateProjectRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for the AWS CodeStar project. Project IDs must be unique within an AWS
     * account. Project IDs cannot exceed 15 characters and cannot contain capital
     * letters and other restricted symbols. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeStar User Guide.</p>
     */
    inline CreateProjectRequest& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>Optional. The description for the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Optional. The description for the project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Optional. The description for the project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Optional. The description for the project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Optional. The description for the project.</p>
     */
    inline CreateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Optional. The description for the project.</p>
     */
    inline CreateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Optional. The description for the project.</p>
     */
    inline CreateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request. It can also be
     * used to identify which user or system made the request in DescribeProject and
     * ListProjects.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request. It can also be
     * used to identify which user or system made the request in DescribeProject and
     * ListProjects.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request. It can also be
     * used to identify which user or system made the request in DescribeProject and
     * ListProjects.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request. It can also be
     * used to identify which user or system made the request in DescribeProject and
     * ListProjects.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request. It can also be
     * used to identify which user or system made the request in DescribeProject and
     * ListProjects.</p>
     */
    inline CreateProjectRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request. It can also be
     * used to identify which user or system made the request in DescribeProject and
     * ListProjects.</p>
     */
    inline CreateProjectRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request. It can also be
     * used to identify which user or system made the request in DescribeProject and
     * ListProjects.</p>
     */
    inline CreateProjectRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
