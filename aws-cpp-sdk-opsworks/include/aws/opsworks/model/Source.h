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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/model/SourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Contains the information required to retrieve an app or cookbook from a
   * repository. For more information, see <a
   * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Creating
   * Apps</a> or <a
   * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook.html">Custom
   * Recipes and Cookbooks</a>.</p>
   */
  class AWS_OPSWORKS_API Source
  {
  public:
    Source();
    Source(const Aws::Utils::Json::JsonValue& jsonValue);
    Source& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The repository type.</p>
     */
    inline const SourceType& GetType() const{ return m_type; }

    /**
     * <p>The repository type.</p>
     */
    inline void SetType(const SourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The repository type.</p>
     */
    inline void SetType(SourceType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The repository type.</p>
     */
    inline Source& WithType(const SourceType& value) { SetType(value); return *this;}

    /**
     * <p>The repository type.</p>
     */
    inline Source& WithType(SourceType&& value) { SetType(value); return *this;}

    /**
     * <p>The source URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The source URL.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The source URL.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The source URL.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The source URL.</p>
     */
    inline Source& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The source URL.</p>
     */
    inline Source& WithUrl(Aws::String&& value) { SetUrl(value); return *this;}

    /**
     * <p>The source URL.</p>
     */
    inline Source& WithUrl(const char* value) { SetUrl(value); return *this;}

    /**
     * <p>This parameter depends on the repository type.</p> <ul> <li> <p>For Amazon S3
     * bundles, set <code>Username</code> to the appropriate IAM access key ID.</p>
     * </li> <li> <p>For HTTP bundles, Git repositories, and Subversion repositories,
     * set <code>Username</code> to the user name.</p> </li> </ul>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>This parameter depends on the repository type.</p> <ul> <li> <p>For Amazon S3
     * bundles, set <code>Username</code> to the appropriate IAM access key ID.</p>
     * </li> <li> <p>For HTTP bundles, Git repositories, and Subversion repositories,
     * set <code>Username</code> to the user name.</p> </li> </ul>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>This parameter depends on the repository type.</p> <ul> <li> <p>For Amazon S3
     * bundles, set <code>Username</code> to the appropriate IAM access key ID.</p>
     * </li> <li> <p>For HTTP bundles, Git repositories, and Subversion repositories,
     * set <code>Username</code> to the user name.</p> </li> </ul>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>This parameter depends on the repository type.</p> <ul> <li> <p>For Amazon S3
     * bundles, set <code>Username</code> to the appropriate IAM access key ID.</p>
     * </li> <li> <p>For HTTP bundles, Git repositories, and Subversion repositories,
     * set <code>Username</code> to the user name.</p> </li> </ul>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>This parameter depends on the repository type.</p> <ul> <li> <p>For Amazon S3
     * bundles, set <code>Username</code> to the appropriate IAM access key ID.</p>
     * </li> <li> <p>For HTTP bundles, Git repositories, and Subversion repositories,
     * set <code>Username</code> to the user name.</p> </li> </ul>
     */
    inline Source& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>This parameter depends on the repository type.</p> <ul> <li> <p>For Amazon S3
     * bundles, set <code>Username</code> to the appropriate IAM access key ID.</p>
     * </li> <li> <p>For HTTP bundles, Git repositories, and Subversion repositories,
     * set <code>Username</code> to the user name.</p> </li> </ul>
     */
    inline Source& WithUsername(Aws::String&& value) { SetUsername(value); return *this;}

    /**
     * <p>This parameter depends on the repository type.</p> <ul> <li> <p>For Amazon S3
     * bundles, set <code>Username</code> to the appropriate IAM access key ID.</p>
     * </li> <li> <p>For HTTP bundles, Git repositories, and Subversion repositories,
     * set <code>Username</code> to the user name.</p> </li> </ul>
     */
    inline Source& WithUsername(const char* value) { SetUsername(value); return *this;}

    /**
     * <p>When included in a request, the parameter depends on the repository type.</p>
     * <ul> <li> <p>For Amazon S3 bundles, set <code>Password</code> to the appropriate
     * IAM secret access key.</p> </li> <li> <p>For HTTP bundles and Subversion
     * repositories, set <code>Password</code> to the password.</p> </li> </ul> <p>For
     * more information on how to safely handle IAM credentials, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html</a>.</p>
     * <p>In responses, AWS OpsWorks returns <code>*****FILTERED*****</code> instead of
     * the actual value.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>When included in a request, the parameter depends on the repository type.</p>
     * <ul> <li> <p>For Amazon S3 bundles, set <code>Password</code> to the appropriate
     * IAM secret access key.</p> </li> <li> <p>For HTTP bundles and Subversion
     * repositories, set <code>Password</code> to the password.</p> </li> </ul> <p>For
     * more information on how to safely handle IAM credentials, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html</a>.</p>
     * <p>In responses, AWS OpsWorks returns <code>*****FILTERED*****</code> instead of
     * the actual value.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>When included in a request, the parameter depends on the repository type.</p>
     * <ul> <li> <p>For Amazon S3 bundles, set <code>Password</code> to the appropriate
     * IAM secret access key.</p> </li> <li> <p>For HTTP bundles and Subversion
     * repositories, set <code>Password</code> to the password.</p> </li> </ul> <p>For
     * more information on how to safely handle IAM credentials, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html</a>.</p>
     * <p>In responses, AWS OpsWorks returns <code>*****FILTERED*****</code> instead of
     * the actual value.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>When included in a request, the parameter depends on the repository type.</p>
     * <ul> <li> <p>For Amazon S3 bundles, set <code>Password</code> to the appropriate
     * IAM secret access key.</p> </li> <li> <p>For HTTP bundles and Subversion
     * repositories, set <code>Password</code> to the password.</p> </li> </ul> <p>For
     * more information on how to safely handle IAM credentials, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html</a>.</p>
     * <p>In responses, AWS OpsWorks returns <code>*****FILTERED*****</code> instead of
     * the actual value.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>When included in a request, the parameter depends on the repository type.</p>
     * <ul> <li> <p>For Amazon S3 bundles, set <code>Password</code> to the appropriate
     * IAM secret access key.</p> </li> <li> <p>For HTTP bundles and Subversion
     * repositories, set <code>Password</code> to the password.</p> </li> </ul> <p>For
     * more information on how to safely handle IAM credentials, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html</a>.</p>
     * <p>In responses, AWS OpsWorks returns <code>*****FILTERED*****</code> instead of
     * the actual value.</p>
     */
    inline Source& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>When included in a request, the parameter depends on the repository type.</p>
     * <ul> <li> <p>For Amazon S3 bundles, set <code>Password</code> to the appropriate
     * IAM secret access key.</p> </li> <li> <p>For HTTP bundles and Subversion
     * repositories, set <code>Password</code> to the password.</p> </li> </ul> <p>For
     * more information on how to safely handle IAM credentials, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html</a>.</p>
     * <p>In responses, AWS OpsWorks returns <code>*****FILTERED*****</code> instead of
     * the actual value.</p>
     */
    inline Source& WithPassword(Aws::String&& value) { SetPassword(value); return *this;}

    /**
     * <p>When included in a request, the parameter depends on the repository type.</p>
     * <ul> <li> <p>For Amazon S3 bundles, set <code>Password</code> to the appropriate
     * IAM secret access key.</p> </li> <li> <p>For HTTP bundles and Subversion
     * repositories, set <code>Password</code> to the password.</p> </li> </ul> <p>For
     * more information on how to safely handle IAM credentials, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html</a>.</p>
     * <p>In responses, AWS OpsWorks returns <code>*****FILTERED*****</code> instead of
     * the actual value.</p>
     */
    inline Source& WithPassword(const char* value) { SetPassword(value); return *this;}

    /**
     * <p>In requests, the repository's SSH key.</p> <p>In responses, AWS OpsWorks
     * returns <code>*****FILTERED*****</code> instead of the actual value.</p>
     */
    inline const Aws::String& GetSshKey() const{ return m_sshKey; }

    /**
     * <p>In requests, the repository's SSH key.</p> <p>In responses, AWS OpsWorks
     * returns <code>*****FILTERED*****</code> instead of the actual value.</p>
     */
    inline void SetSshKey(const Aws::String& value) { m_sshKeyHasBeenSet = true; m_sshKey = value; }

    /**
     * <p>In requests, the repository's SSH key.</p> <p>In responses, AWS OpsWorks
     * returns <code>*****FILTERED*****</code> instead of the actual value.</p>
     */
    inline void SetSshKey(Aws::String&& value) { m_sshKeyHasBeenSet = true; m_sshKey = value; }

    /**
     * <p>In requests, the repository's SSH key.</p> <p>In responses, AWS OpsWorks
     * returns <code>*****FILTERED*****</code> instead of the actual value.</p>
     */
    inline void SetSshKey(const char* value) { m_sshKeyHasBeenSet = true; m_sshKey.assign(value); }

    /**
     * <p>In requests, the repository's SSH key.</p> <p>In responses, AWS OpsWorks
     * returns <code>*****FILTERED*****</code> instead of the actual value.</p>
     */
    inline Source& WithSshKey(const Aws::String& value) { SetSshKey(value); return *this;}

    /**
     * <p>In requests, the repository's SSH key.</p> <p>In responses, AWS OpsWorks
     * returns <code>*****FILTERED*****</code> instead of the actual value.</p>
     */
    inline Source& WithSshKey(Aws::String&& value) { SetSshKey(value); return *this;}

    /**
     * <p>In requests, the repository's SSH key.</p> <p>In responses, AWS OpsWorks
     * returns <code>*****FILTERED*****</code> instead of the actual value.</p>
     */
    inline Source& WithSshKey(const char* value) { SetSshKey(value); return *this;}

    /**
     * <p>The application's version. AWS OpsWorks enables you to easily deploy new
     * versions of an application. One of the simplest approaches is to have branches
     * or revisions in your repository that represent different versions that can
     * potentially be deployed.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p>The application's version. AWS OpsWorks enables you to easily deploy new
     * versions of an application. One of the simplest approaches is to have branches
     * or revisions in your repository that represent different versions that can
     * potentially be deployed.</p>
     */
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The application's version. AWS OpsWorks enables you to easily deploy new
     * versions of an application. One of the simplest approaches is to have branches
     * or revisions in your repository that represent different versions that can
     * potentially be deployed.</p>
     */
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The application's version. AWS OpsWorks enables you to easily deploy new
     * versions of an application. One of the simplest approaches is to have branches
     * or revisions in your repository that represent different versions that can
     * potentially be deployed.</p>
     */
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }

    /**
     * <p>The application's version. AWS OpsWorks enables you to easily deploy new
     * versions of an application. One of the simplest approaches is to have branches
     * or revisions in your repository that represent different versions that can
     * potentially be deployed.</p>
     */
    inline Source& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p>The application's version. AWS OpsWorks enables you to easily deploy new
     * versions of an application. One of the simplest approaches is to have branches
     * or revisions in your repository that represent different versions that can
     * potentially be deployed.</p>
     */
    inline Source& WithRevision(Aws::String&& value) { SetRevision(value); return *this;}

    /**
     * <p>The application's version. AWS OpsWorks enables you to easily deploy new
     * versions of an application. One of the simplest approaches is to have branches
     * or revisions in your repository that represent different versions that can
     * potentially be deployed.</p>
     */
    inline Source& WithRevision(const char* value) { SetRevision(value); return *this;}

  private:
    SourceType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_url;
    bool m_urlHasBeenSet;
    Aws::String m_username;
    bool m_usernameHasBeenSet;
    Aws::String m_password;
    bool m_passwordHasBeenSet;
    Aws::String m_sshKey;
    bool m_sshKeyHasBeenSet;
    Aws::String m_revision;
    bool m_revisionHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
