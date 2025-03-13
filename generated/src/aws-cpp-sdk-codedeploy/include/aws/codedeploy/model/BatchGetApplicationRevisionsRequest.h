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
    AWS_CODEDEPLOY_API BatchGetApplicationRevisionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetApplicationRevisions"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of an CodeDeploy application about which to get revision
     * information.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    BatchGetApplicationRevisionsRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>RevisionLocation</code> objects that specify information to
     * get about the application revisions, including type and location. The maximum
     * number of <code>RevisionLocation</code> objects you can specify is 25.</p>
     */
    inline const Aws::Vector<RevisionLocation>& GetRevisions() const { return m_revisions; }
    inline bool RevisionsHasBeenSet() const { return m_revisionsHasBeenSet; }
    template<typename RevisionsT = Aws::Vector<RevisionLocation>>
    void SetRevisions(RevisionsT&& value) { m_revisionsHasBeenSet = true; m_revisions = std::forward<RevisionsT>(value); }
    template<typename RevisionsT = Aws::Vector<RevisionLocation>>
    BatchGetApplicationRevisionsRequest& WithRevisions(RevisionsT&& value) { SetRevisions(std::forward<RevisionsT>(value)); return *this;}
    template<typename RevisionsT = RevisionLocation>
    BatchGetApplicationRevisionsRequest& AddRevisions(RevisionsT&& value) { m_revisionsHasBeenSet = true; m_revisions.emplace_back(std::forward<RevisionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::Vector<RevisionLocation> m_revisions;
    bool m_revisionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
