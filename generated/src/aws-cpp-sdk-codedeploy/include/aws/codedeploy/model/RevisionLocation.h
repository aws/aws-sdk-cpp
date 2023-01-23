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
    AWS_CODEDEPLOY_API RevisionLocation();
    AWS_CODEDEPLOY_API RevisionLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API RevisionLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of application revision:</p> <ul> <li> <p>S3: An application
     * revision stored in Amazon S3.</p> </li> <li> <p>GitHub: An application revision
     * stored in GitHub (EC2/On-premises deployments only).</p> </li> <li> <p>String: A
     * YAML-formatted or JSON-formatted string (Lambda deployments only).</p> </li>
     * <li> <p>AppSpecContent: An <code>AppSpecContent</code> object that contains the
     * contents of an AppSpec file for an Lambda or Amazon ECS deployment. The content
     * is formatted as JSON or YAML stored as a RawString.</p> </li> </ul>
     */
    inline const RevisionLocationType& GetRevisionType() const{ return m_revisionType; }

    /**
     * <p>The type of application revision:</p> <ul> <li> <p>S3: An application
     * revision stored in Amazon S3.</p> </li> <li> <p>GitHub: An application revision
     * stored in GitHub (EC2/On-premises deployments only).</p> </li> <li> <p>String: A
     * YAML-formatted or JSON-formatted string (Lambda deployments only).</p> </li>
     * <li> <p>AppSpecContent: An <code>AppSpecContent</code> object that contains the
     * contents of an AppSpec file for an Lambda or Amazon ECS deployment. The content
     * is formatted as JSON or YAML stored as a RawString.</p> </li> </ul>
     */
    inline bool RevisionTypeHasBeenSet() const { return m_revisionTypeHasBeenSet; }

    /**
     * <p>The type of application revision:</p> <ul> <li> <p>S3: An application
     * revision stored in Amazon S3.</p> </li> <li> <p>GitHub: An application revision
     * stored in GitHub (EC2/On-premises deployments only).</p> </li> <li> <p>String: A
     * YAML-formatted or JSON-formatted string (Lambda deployments only).</p> </li>
     * <li> <p>AppSpecContent: An <code>AppSpecContent</code> object that contains the
     * contents of an AppSpec file for an Lambda or Amazon ECS deployment. The content
     * is formatted as JSON or YAML stored as a RawString.</p> </li> </ul>
     */
    inline void SetRevisionType(const RevisionLocationType& value) { m_revisionTypeHasBeenSet = true; m_revisionType = value; }

    /**
     * <p>The type of application revision:</p> <ul> <li> <p>S3: An application
     * revision stored in Amazon S3.</p> </li> <li> <p>GitHub: An application revision
     * stored in GitHub (EC2/On-premises deployments only).</p> </li> <li> <p>String: A
     * YAML-formatted or JSON-formatted string (Lambda deployments only).</p> </li>
     * <li> <p>AppSpecContent: An <code>AppSpecContent</code> object that contains the
     * contents of an AppSpec file for an Lambda or Amazon ECS deployment. The content
     * is formatted as JSON or YAML stored as a RawString.</p> </li> </ul>
     */
    inline void SetRevisionType(RevisionLocationType&& value) { m_revisionTypeHasBeenSet = true; m_revisionType = std::move(value); }

    /**
     * <p>The type of application revision:</p> <ul> <li> <p>S3: An application
     * revision stored in Amazon S3.</p> </li> <li> <p>GitHub: An application revision
     * stored in GitHub (EC2/On-premises deployments only).</p> </li> <li> <p>String: A
     * YAML-formatted or JSON-formatted string (Lambda deployments only).</p> </li>
     * <li> <p>AppSpecContent: An <code>AppSpecContent</code> object that contains the
     * contents of an AppSpec file for an Lambda or Amazon ECS deployment. The content
     * is formatted as JSON or YAML stored as a RawString.</p> </li> </ul>
     */
    inline RevisionLocation& WithRevisionType(const RevisionLocationType& value) { SetRevisionType(value); return *this;}

    /**
     * <p>The type of application revision:</p> <ul> <li> <p>S3: An application
     * revision stored in Amazon S3.</p> </li> <li> <p>GitHub: An application revision
     * stored in GitHub (EC2/On-premises deployments only).</p> </li> <li> <p>String: A
     * YAML-formatted or JSON-formatted string (Lambda deployments only).</p> </li>
     * <li> <p>AppSpecContent: An <code>AppSpecContent</code> object that contains the
     * contents of an AppSpec file for an Lambda or Amazon ECS deployment. The content
     * is formatted as JSON or YAML stored as a RawString.</p> </li> </ul>
     */
    inline RevisionLocation& WithRevisionType(RevisionLocationType&& value) { SetRevisionType(std::move(value)); return *this;}


    /**
     * <p>Information about the location of a revision stored in Amazon S3. </p>
     */
    inline const S3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>Information about the location of a revision stored in Amazon S3. </p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>Information about the location of a revision stored in Amazon S3. </p>
     */
    inline void SetS3Location(const S3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>Information about the location of a revision stored in Amazon S3. </p>
     */
    inline void SetS3Location(S3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>Information about the location of a revision stored in Amazon S3. </p>
     */
    inline RevisionLocation& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>Information about the location of a revision stored in Amazon S3. </p>
     */
    inline RevisionLocation& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}


    /**
     * <p>Information about the location of application artifacts stored in GitHub.</p>
     */
    inline const GitHubLocation& GetGitHubLocation() const{ return m_gitHubLocation; }

    /**
     * <p>Information about the location of application artifacts stored in GitHub.</p>
     */
    inline bool GitHubLocationHasBeenSet() const { return m_gitHubLocationHasBeenSet; }

    /**
     * <p>Information about the location of application artifacts stored in GitHub.</p>
     */
    inline void SetGitHubLocation(const GitHubLocation& value) { m_gitHubLocationHasBeenSet = true; m_gitHubLocation = value; }

    /**
     * <p>Information about the location of application artifacts stored in GitHub.</p>
     */
    inline void SetGitHubLocation(GitHubLocation&& value) { m_gitHubLocationHasBeenSet = true; m_gitHubLocation = std::move(value); }

    /**
     * <p>Information about the location of application artifacts stored in GitHub.</p>
     */
    inline RevisionLocation& WithGitHubLocation(const GitHubLocation& value) { SetGitHubLocation(value); return *this;}

    /**
     * <p>Information about the location of application artifacts stored in GitHub.</p>
     */
    inline RevisionLocation& WithGitHubLocation(GitHubLocation&& value) { SetGitHubLocation(std::move(value)); return *this;}


    /**
     * <p>Information about the location of an Lambda deployment revision stored as a
     * RawString.</p>
     */
    inline const RawString& GetString() const{ return m_string; }

    /**
     * <p>Information about the location of an Lambda deployment revision stored as a
     * RawString.</p>
     */
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }

    /**
     * <p>Information about the location of an Lambda deployment revision stored as a
     * RawString.</p>
     */
    inline void SetString(const RawString& value) { m_stringHasBeenSet = true; m_string = value; }

    /**
     * <p>Information about the location of an Lambda deployment revision stored as a
     * RawString.</p>
     */
    inline void SetString(RawString&& value) { m_stringHasBeenSet = true; m_string = std::move(value); }

    /**
     * <p>Information about the location of an Lambda deployment revision stored as a
     * RawString.</p>
     */
    inline RevisionLocation& WithString(const RawString& value) { SetString(value); return *this;}

    /**
     * <p>Information about the location of an Lambda deployment revision stored as a
     * RawString.</p>
     */
    inline RevisionLocation& WithString(RawString&& value) { SetString(std::move(value)); return *this;}


    /**
     * <p> The content of an AppSpec file for an Lambda or Amazon ECS deployment. The
     * content is formatted as JSON or YAML and stored as a RawString. </p>
     */
    inline const AppSpecContent& GetAppSpecContent() const{ return m_appSpecContent; }

    /**
     * <p> The content of an AppSpec file for an Lambda or Amazon ECS deployment. The
     * content is formatted as JSON or YAML and stored as a RawString. </p>
     */
    inline bool AppSpecContentHasBeenSet() const { return m_appSpecContentHasBeenSet; }

    /**
     * <p> The content of an AppSpec file for an Lambda or Amazon ECS deployment. The
     * content is formatted as JSON or YAML and stored as a RawString. </p>
     */
    inline void SetAppSpecContent(const AppSpecContent& value) { m_appSpecContentHasBeenSet = true; m_appSpecContent = value; }

    /**
     * <p> The content of an AppSpec file for an Lambda or Amazon ECS deployment. The
     * content is formatted as JSON or YAML and stored as a RawString. </p>
     */
    inline void SetAppSpecContent(AppSpecContent&& value) { m_appSpecContentHasBeenSet = true; m_appSpecContent = std::move(value); }

    /**
     * <p> The content of an AppSpec file for an Lambda or Amazon ECS deployment. The
     * content is formatted as JSON or YAML and stored as a RawString. </p>
     */
    inline RevisionLocation& WithAppSpecContent(const AppSpecContent& value) { SetAppSpecContent(value); return *this;}

    /**
     * <p> The content of an AppSpec file for an Lambda or Amazon ECS deployment. The
     * content is formatted as JSON or YAML and stored as a RawString. </p>
     */
    inline RevisionLocation& WithAppSpecContent(AppSpecContent&& value) { SetAppSpecContent(std::move(value)); return *this;}

  private:

    RevisionLocationType m_revisionType;
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
