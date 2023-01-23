/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>BatchGetApplicationRevisions</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplicationRevisionsInput">AWS
   * API Reference</a></p>
   */
  class BatchGetApplicationRevisionsRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API BatchGetApplicationRevisionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetApplicationRevisions"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an CodeDeploy application about which to get revision
     * information.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an CodeDeploy application about which to get revision
     * information.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of an CodeDeploy application about which to get revision
     * information.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an CodeDeploy application about which to get revision
     * information.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of an CodeDeploy application about which to get revision
     * information.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an CodeDeploy application about which to get revision
     * information.</p>
     */
    inline BatchGetApplicationRevisionsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an CodeDeploy application about which to get revision
     * information.</p>
     */
    inline BatchGetApplicationRevisionsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of an CodeDeploy application about which to get revision
     * information.</p>
     */
    inline BatchGetApplicationRevisionsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>An array of <code>RevisionLocation</code> objects that specify information to
     * get about the application revisions, including type and location. The maximum
     * number of <code>RevisionLocation</code> objects you can specify is 25.</p>
     */
    inline const Aws::Vector<RevisionLocation>& GetRevisions() const{ return m_revisions; }

    /**
     * <p>An array of <code>RevisionLocation</code> objects that specify information to
     * get about the application revisions, including type and location. The maximum
     * number of <code>RevisionLocation</code> objects you can specify is 25.</p>
     */
    inline bool RevisionsHasBeenSet() const { return m_revisionsHasBeenSet; }

    /**
     * <p>An array of <code>RevisionLocation</code> objects that specify information to
     * get about the application revisions, including type and location. The maximum
     * number of <code>RevisionLocation</code> objects you can specify is 25.</p>
     */
    inline void SetRevisions(const Aws::Vector<RevisionLocation>& value) { m_revisionsHasBeenSet = true; m_revisions = value; }

    /**
     * <p>An array of <code>RevisionLocation</code> objects that specify information to
     * get about the application revisions, including type and location. The maximum
     * number of <code>RevisionLocation</code> objects you can specify is 25.</p>
     */
    inline void SetRevisions(Aws::Vector<RevisionLocation>&& value) { m_revisionsHasBeenSet = true; m_revisions = std::move(value); }

    /**
     * <p>An array of <code>RevisionLocation</code> objects that specify information to
     * get about the application revisions, including type and location. The maximum
     * number of <code>RevisionLocation</code> objects you can specify is 25.</p>
     */
    inline BatchGetApplicationRevisionsRequest& WithRevisions(const Aws::Vector<RevisionLocation>& value) { SetRevisions(value); return *this;}

    /**
     * <p>An array of <code>RevisionLocation</code> objects that specify information to
     * get about the application revisions, including type and location. The maximum
     * number of <code>RevisionLocation</code> objects you can specify is 25.</p>
     */
    inline BatchGetApplicationRevisionsRequest& WithRevisions(Aws::Vector<RevisionLocation>&& value) { SetRevisions(std::move(value)); return *this;}

    /**
     * <p>An array of <code>RevisionLocation</code> objects that specify information to
     * get about the application revisions, including type and location. The maximum
     * number of <code>RevisionLocation</code> objects you can specify is 25.</p>
     */
    inline BatchGetApplicationRevisionsRequest& AddRevisions(const RevisionLocation& value) { m_revisionsHasBeenSet = true; m_revisions.push_back(value); return *this; }

    /**
     * <p>An array of <code>RevisionLocation</code> objects that specify information to
     * get about the application revisions, including type and location. The maximum
     * number of <code>RevisionLocation</code> objects you can specify is 25.</p>
     */
    inline BatchGetApplicationRevisionsRequest& AddRevisions(RevisionLocation&& value) { m_revisionsHasBeenSet = true; m_revisions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::Vector<RevisionLocation> m_revisions;
    bool m_revisionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
