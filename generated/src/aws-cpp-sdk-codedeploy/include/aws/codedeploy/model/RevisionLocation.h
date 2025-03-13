/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/RevisionLocationType.h>
#include <aws/codedeploy/model/S3Location.h>
#include <aws/codedeploy/model/GitHubLocation.h>
#include <aws/codedeploy/model/RawString.h>
#include <aws/codedeploy/model/AppSpecContent.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about the location of an application revision.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RevisionLocation">AWS
   * API Reference</a></p>
   */
  class RevisionLocation
  {
  public:
    AWS_CODEDEPLOY_API RevisionLocation() = default;
    AWS_CODEDEPLOY_API RevisionLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API RevisionLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of application revision:</p> <ul> <li> <p>S3: An application
     * revision stored in Amazon S3.</p> </li> <li> <p>GitHub: An application revision
     * stored in GitHub (EC2/On-premises deployments only).</p> </li> <li> <p>String: A
     * YAML-formatted or JSON-formatted string (Lambda deployments only).</p> </li>
     * <li> <p>AppSpecContent: An <code>AppSpecContent</code> object that contains the
     * contents of an AppSpec file for an Lambda or Amazon ECS deployment. The content
     * is formatted as JSON or YAML stored as a RawString.</p> </li> </ul>
     */
    inline RevisionLocationType GetRevisionType() const { return m_revisionType; }
    inline bool RevisionTypeHasBeenSet() const { return m_revisionTypeHasBeenSet; }
    inline void SetRevisionType(RevisionLocationType value) { m_revisionTypeHasBeenSet = true; m_revisionType = value; }
    inline RevisionLocation& WithRevisionType(RevisionLocationType value) { SetRevisionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location of a revision stored in Amazon S3. </p>
     */
    inline const S3Location& GetS3Location() const { return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    template<typename S3LocationT = S3Location>
    void SetS3Location(S3LocationT&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::forward<S3LocationT>(value); }
    template<typename S3LocationT = S3Location>
    RevisionLocation& WithS3Location(S3LocationT&& value) { SetS3Location(std::forward<S3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location of application artifacts stored in GitHub.</p>
     */
    inline const GitHubLocation& GetGitHubLocation() const { return m_gitHubLocation; }
    inline bool GitHubLocationHasBeenSet() const { return m_gitHubLocationHasBeenSet; }
    template<typename GitHubLocationT = GitHubLocation>
    void SetGitHubLocation(GitHubLocationT&& value) { m_gitHubLocationHasBeenSet = true; m_gitHubLocation = std::forward<GitHubLocationT>(value); }
    template<typename GitHubLocationT = GitHubLocation>
    RevisionLocation& WithGitHubLocation(GitHubLocationT&& value) { SetGitHubLocation(std::forward<GitHubLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location of an Lambda deployment revision stored as a
     * RawString.</p>
     */
    inline const RawString& GetString() const { return m_string; }
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
    template<typename StringT = RawString>
    void SetString(StringT&& value) { m_stringHasBeenSet = true; m_string = std::forward<StringT>(value); }
    template<typename StringT = RawString>
    RevisionLocation& WithString(StringT&& value) { SetString(std::forward<StringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The content of an AppSpec file for an Lambda or Amazon ECS deployment. The
     * content is formatted as JSON or YAML and stored as a RawString. </p>
     */
    inline const AppSpecContent& GetAppSpecContent() const { return m_appSpecContent; }
    inline bool AppSpecContentHasBeenSet() const { return m_appSpecContentHasBeenSet; }
    template<typename AppSpecContentT = AppSpecContent>
    void SetAppSpecContent(AppSpecContentT&& value) { m_appSpecContentHasBeenSet = true; m_appSpecContent = std::forward<AppSpecContentT>(value); }
    template<typename AppSpecContentT = AppSpecContent>
    RevisionLocation& WithAppSpecContent(AppSpecContentT&& value) { SetAppSpecContent(std::forward<AppSpecContentT>(value)); return *this;}
    ///@}
  private:

    RevisionLocationType m_revisionType{RevisionLocationType::NOT_SET};
    bool m_revisionTypeHasBeenSet = false;

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;

    GitHubLocation m_gitHubLocation;
    bool m_gitHubLocationHasBeenSet = false;

    RawString m_string;
    bool m_stringHasBeenSet = false;

    AppSpecContent m_appSpecContent;
    bool m_appSpecContentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
