/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/RevisionInfo.h>
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
   * <p>Represents the output of a <code>BatchGetApplicationRevisions</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplicationRevisionsOutput">AWS
   * API Reference</a></p>
   */
  class BatchGetApplicationRevisionsResult
  {
  public:
    AWS_CODEDEPLOY_API BatchGetApplicationRevisionsResult();
    AWS_CODEDEPLOY_API BatchGetApplicationRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API BatchGetApplicationRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the application that corresponds to the revisions.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }
    inline BatchGetApplicationRevisionsResult& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline BatchGetApplicationRevisionsResult& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline BatchGetApplicationRevisionsResult& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline BatchGetApplicationRevisionsResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline BatchGetApplicationRevisionsResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline BatchGetApplicationRevisionsResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the revisions, including the type and
     * location.</p>
     */
    inline const Aws::Vector<RevisionInfo>& GetRevisions() const{ return m_revisions; }
    inline void SetRevisions(const Aws::Vector<RevisionInfo>& value) { m_revisions = value; }
    inline void SetRevisions(Aws::Vector<RevisionInfo>&& value) { m_revisions = std::move(value); }
    inline BatchGetApplicationRevisionsResult& WithRevisions(const Aws::Vector<RevisionInfo>& value) { SetRevisions(value); return *this;}
    inline BatchGetApplicationRevisionsResult& WithRevisions(Aws::Vector<RevisionInfo>&& value) { SetRevisions(std::move(value)); return *this;}
    inline BatchGetApplicationRevisionsResult& AddRevisions(const RevisionInfo& value) { m_revisions.push_back(value); return *this; }
    inline BatchGetApplicationRevisionsResult& AddRevisions(RevisionInfo&& value) { m_revisions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetApplicationRevisionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetApplicationRevisionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetApplicationRevisionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;

    Aws::String m_errorMessage;

    Aws::Vector<RevisionInfo> m_revisions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
