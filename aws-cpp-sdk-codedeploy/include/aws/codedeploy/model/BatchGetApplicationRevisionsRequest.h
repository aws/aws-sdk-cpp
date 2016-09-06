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
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/RevisionLocation.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a batch get application revisions operation.</p>
   */
  class AWS_CODEDEPLOY_API BatchGetApplicationRevisionsRequest : public CodeDeployRequest
  {
  public:
    BatchGetApplicationRevisionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of an AWS CodeDeploy application about which to get revision
     * information.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an AWS CodeDeploy application about which to get revision
     * information.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application about which to get revision
     * information.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application about which to get revision
     * information.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an AWS CodeDeploy application about which to get revision
     * information.</p>
     */
    inline BatchGetApplicationRevisionsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application about which to get revision
     * information.</p>
     */
    inline BatchGetApplicationRevisionsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application about which to get revision
     * information.</p>
     */
    inline BatchGetApplicationRevisionsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>Information to get about the application revisions, including type and
     * location.</p>
     */
    inline const Aws::Vector<RevisionLocation>& GetRevisions() const{ return m_revisions; }

    /**
     * <p>Information to get about the application revisions, including type and
     * location.</p>
     */
    inline void SetRevisions(const Aws::Vector<RevisionLocation>& value) { m_revisionsHasBeenSet = true; m_revisions = value; }

    /**
     * <p>Information to get about the application revisions, including type and
     * location.</p>
     */
    inline void SetRevisions(Aws::Vector<RevisionLocation>&& value) { m_revisionsHasBeenSet = true; m_revisions = value; }

    /**
     * <p>Information to get about the application revisions, including type and
     * location.</p>
     */
    inline BatchGetApplicationRevisionsRequest& WithRevisions(const Aws::Vector<RevisionLocation>& value) { SetRevisions(value); return *this;}

    /**
     * <p>Information to get about the application revisions, including type and
     * location.</p>
     */
    inline BatchGetApplicationRevisionsRequest& WithRevisions(Aws::Vector<RevisionLocation>&& value) { SetRevisions(value); return *this;}

    /**
     * <p>Information to get about the application revisions, including type and
     * location.</p>
     */
    inline BatchGetApplicationRevisionsRequest& AddRevisions(const RevisionLocation& value) { m_revisionsHasBeenSet = true; m_revisions.push_back(value); return *this; }

    /**
     * <p>Information to get about the application revisions, including type and
     * location.</p>
     */
    inline BatchGetApplicationRevisionsRequest& AddRevisions(RevisionLocation&& value) { m_revisionsHasBeenSet = true; m_revisions.push_back(value); return *this; }

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::Vector<RevisionLocation> m_revisions;
    bool m_revisionsHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
