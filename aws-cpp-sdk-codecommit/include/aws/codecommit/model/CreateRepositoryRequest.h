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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Represents the input of a create repository operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateRepositoryInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API CreateRepositoryRequest : public CodeCommitRequest
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
     * <p>The name of the new repository to be created.</p> <note> <p>The repository
     * name must be unique across the calling AWS account. In addition, repository
     * names are limited to 100 alphanumeric, dash, and underscore characters, and
     * cannot include certain characters. For a full description of the limits on
     * repository names, see <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeCommit User Guide. The suffix ".git" is prohibited.</p> </note>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the new repository to be created.</p> <note> <p>The repository
     * name must be unique across the calling AWS account. In addition, repository
     * names are limited to 100 alphanumeric, dash, and underscore characters, and
     * cannot include certain characters. For a full description of the limits on
     * repository names, see <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeCommit User Guide. The suffix ".git" is prohibited.</p> </note>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the new repository to be created.</p> <note> <p>The repository
     * name must be unique across the calling AWS account. In addition, repository
     * names are limited to 100 alphanumeric, dash, and underscore characters, and
     * cannot include certain characters. For a full description of the limits on
     * repository names, see <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeCommit User Guide. The suffix ".git" is prohibited.</p> </note>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the new repository to be created.</p> <note> <p>The repository
     * name must be unique across the calling AWS account. In addition, repository
     * names are limited to 100 alphanumeric, dash, and underscore characters, and
     * cannot include certain characters. For a full description of the limits on
     * repository names, see <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeCommit User Guide. The suffix ".git" is prohibited.</p> </note>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the new repository to be created.</p> <note> <p>The repository
     * name must be unique across the calling AWS account. In addition, repository
     * names are limited to 100 alphanumeric, dash, and underscore characters, and
     * cannot include certain characters. For a full description of the limits on
     * repository names, see <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeCommit User Guide. The suffix ".git" is prohibited.</p> </note>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the new repository to be created.</p> <note> <p>The repository
     * name must be unique across the calling AWS account. In addition, repository
     * names are limited to 100 alphanumeric, dash, and underscore characters, and
     * cannot include certain characters. For a full description of the limits on
     * repository names, see <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeCommit User Guide. The suffix ".git" is prohibited.</p> </note>
     */
    inline CreateRepositoryRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the new repository to be created.</p> <note> <p>The repository
     * name must be unique across the calling AWS account. In addition, repository
     * names are limited to 100 alphanumeric, dash, and underscore characters, and
     * cannot include certain characters. For a full description of the limits on
     * repository names, see <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeCommit User Guide. The suffix ".git" is prohibited.</p> </note>
     */
    inline CreateRepositoryRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the new repository to be created.</p> <note> <p>The repository
     * name must be unique across the calling AWS account. In addition, repository
     * names are limited to 100 alphanumeric, dash, and underscore characters, and
     * cannot include certain characters. For a full description of the limits on
     * repository names, see <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
     * in the AWS CodeCommit User Guide. The suffix ".git" is prohibited.</p> </note>
     */
    inline CreateRepositoryRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>A comment or description about the new repository.</p> <note> <p>The
     * description field for a repository accepts all HTML characters and all valid
     * Unicode characters. Applications that do not HTML-encode the description and
     * display it in a web page could expose users to potentially malicious code. Make
     * sure that you HTML-encode the description field in any application that uses
     * this API to display the repository description on a web page.</p> </note>
     */
    inline const Aws::String& GetRepositoryDescription() const{ return m_repositoryDescription; }

    /**
     * <p>A comment or description about the new repository.</p> <note> <p>The
     * description field for a repository accepts all HTML characters and all valid
     * Unicode characters. Applications that do not HTML-encode the description and
     * display it in a web page could expose users to potentially malicious code. Make
     * sure that you HTML-encode the description field in any application that uses
     * this API to display the repository description on a web page.</p> </note>
     */
    inline bool RepositoryDescriptionHasBeenSet() const { return m_repositoryDescriptionHasBeenSet; }

    /**
     * <p>A comment or description about the new repository.</p> <note> <p>The
     * description field for a repository accepts all HTML characters and all valid
     * Unicode characters. Applications that do not HTML-encode the description and
     * display it in a web page could expose users to potentially malicious code. Make
     * sure that you HTML-encode the description field in any application that uses
     * this API to display the repository description on a web page.</p> </note>
     */
    inline void SetRepositoryDescription(const Aws::String& value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription = value; }

    /**
     * <p>A comment or description about the new repository.</p> <note> <p>The
     * description field for a repository accepts all HTML characters and all valid
     * Unicode characters. Applications that do not HTML-encode the description and
     * display it in a web page could expose users to potentially malicious code. Make
     * sure that you HTML-encode the description field in any application that uses
     * this API to display the repository description on a web page.</p> </note>
     */
    inline void SetRepositoryDescription(Aws::String&& value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription = std::move(value); }

    /**
     * <p>A comment or description about the new repository.</p> <note> <p>The
     * description field for a repository accepts all HTML characters and all valid
     * Unicode characters. Applications that do not HTML-encode the description and
     * display it in a web page could expose users to potentially malicious code. Make
     * sure that you HTML-encode the description field in any application that uses
     * this API to display the repository description on a web page.</p> </note>
     */
    inline void SetRepositoryDescription(const char* value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription.assign(value); }

    /**
     * <p>A comment or description about the new repository.</p> <note> <p>The
     * description field for a repository accepts all HTML characters and all valid
     * Unicode characters. Applications that do not HTML-encode the description and
     * display it in a web page could expose users to potentially malicious code. Make
     * sure that you HTML-encode the description field in any application that uses
     * this API to display the repository description on a web page.</p> </note>
     */
    inline CreateRepositoryRequest& WithRepositoryDescription(const Aws::String& value) { SetRepositoryDescription(value); return *this;}

    /**
     * <p>A comment or description about the new repository.</p> <note> <p>The
     * description field for a repository accepts all HTML characters and all valid
     * Unicode characters. Applications that do not HTML-encode the description and
     * display it in a web page could expose users to potentially malicious code. Make
     * sure that you HTML-encode the description field in any application that uses
     * this API to display the repository description on a web page.</p> </note>
     */
    inline CreateRepositoryRequest& WithRepositoryDescription(Aws::String&& value) { SetRepositoryDescription(std::move(value)); return *this;}

    /**
     * <p>A comment or description about the new repository.</p> <note> <p>The
     * description field for a repository accepts all HTML characters and all valid
     * Unicode characters. Applications that do not HTML-encode the description and
     * display it in a web page could expose users to potentially malicious code. Make
     * sure that you HTML-encode the description field in any application that uses
     * this API to display the repository description on a web page.</p> </note>
     */
    inline CreateRepositoryRequest& WithRepositoryDescription(const char* value) { SetRepositoryDescription(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_repositoryDescription;
    bool m_repositoryDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
