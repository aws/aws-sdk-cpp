/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
   * <p>Represents the output of a <code>ListApplicationRevisions</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplicationRevisionsOutput">AWS
   * API Reference</a></p>
   */
  class ListApplicationRevisionsResult
  {
  public:
    AWS_CODEDEPLOY_API ListApplicationRevisionsResult() = default;
    AWS_CODEDEPLOY_API ListApplicationRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API ListApplicationRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of locations that contain the matching revisions.</p>
     */
    inline const Aws::Vector<RevisionLocation>& GetRevisions() const { return m_revisions; }
    template<typename RevisionsT = Aws::Vector<RevisionLocation>>
    void SetRevisions(RevisionsT&& value) { m_revisionsHasBeenSet = true; m_revisions = std::forward<RevisionsT>(value); }
    template<typename RevisionsT = Aws::Vector<RevisionLocation>>
    ListApplicationRevisionsResult& WithRevisions(RevisionsT&& value) { SetRevisions(std::forward<RevisionsT>(value)); return *this;}
    template<typename RevisionsT = RevisionLocation>
    ListApplicationRevisionsResult& AddRevisions(RevisionsT&& value) { m_revisionsHasBeenSet = true; m_revisions.emplace_back(std::forward<RevisionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list application revisions call to return the
     * next set of application revisions in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationRevisionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationRevisionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RevisionLocation> m_revisions;
    bool m_revisionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
