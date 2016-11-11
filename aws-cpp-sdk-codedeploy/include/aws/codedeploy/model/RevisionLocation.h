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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/RevisionLocationType.h>
#include <aws/codedeploy/model/S3Location.h>
#include <aws/codedeploy/model/GitHubLocation.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about the location of an application revision.</p>
   */
  class AWS_CODEDEPLOY_API RevisionLocation
  {
  public:
    RevisionLocation();
    RevisionLocation(const Aws::Utils::Json::JsonValue& jsonValue);
    RevisionLocation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of application revision:</p> <ul> <li> <p>S3: An application
     * revision stored in Amazon S3.</p> </li> <li> <p>GitHub: An application revision
     * stored in GitHub.</p> </li> </ul>
     */
    inline const RevisionLocationType& GetRevisionType() const{ return m_revisionType; }

    /**
     * <p>The type of application revision:</p> <ul> <li> <p>S3: An application
     * revision stored in Amazon S3.</p> </li> <li> <p>GitHub: An application revision
     * stored in GitHub.</p> </li> </ul>
     */
    inline void SetRevisionType(const RevisionLocationType& value) { m_revisionTypeHasBeenSet = true; m_revisionType = value; }

    /**
     * <p>The type of application revision:</p> <ul> <li> <p>S3: An application
     * revision stored in Amazon S3.</p> </li> <li> <p>GitHub: An application revision
     * stored in GitHub.</p> </li> </ul>
     */
    inline void SetRevisionType(RevisionLocationType&& value) { m_revisionTypeHasBeenSet = true; m_revisionType = value; }

    /**
     * <p>The type of application revision:</p> <ul> <li> <p>S3: An application
     * revision stored in Amazon S3.</p> </li> <li> <p>GitHub: An application revision
     * stored in GitHub.</p> </li> </ul>
     */
    inline RevisionLocation& WithRevisionType(const RevisionLocationType& value) { SetRevisionType(value); return *this;}

    /**
     * <p>The type of application revision:</p> <ul> <li> <p>S3: An application
     * revision stored in Amazon S3.</p> </li> <li> <p>GitHub: An application revision
     * stored in GitHub.</p> </li> </ul>
     */
    inline RevisionLocation& WithRevisionType(RevisionLocationType&& value) { SetRevisionType(value); return *this;}

    
    inline const S3Location& GetS3Location() const{ return m_s3Location; }

    
    inline void SetS3Location(const S3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    
    inline void SetS3Location(S3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    
    inline RevisionLocation& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}

    
    inline RevisionLocation& WithS3Location(S3Location&& value) { SetS3Location(value); return *this;}

    
    inline const GitHubLocation& GetGitHubLocation() const{ return m_gitHubLocation; }

    
    inline void SetGitHubLocation(const GitHubLocation& value) { m_gitHubLocationHasBeenSet = true; m_gitHubLocation = value; }

    
    inline void SetGitHubLocation(GitHubLocation&& value) { m_gitHubLocationHasBeenSet = true; m_gitHubLocation = value; }

    
    inline RevisionLocation& WithGitHubLocation(const GitHubLocation& value) { SetGitHubLocation(value); return *this;}

    
    inline RevisionLocation& WithGitHubLocation(GitHubLocation&& value) { SetGitHubLocation(value); return *this;}

  private:
    RevisionLocationType m_revisionType;
    bool m_revisionTypeHasBeenSet;
    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet;
    GitHubLocation m_gitHubLocation;
    bool m_gitHubLocationHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
