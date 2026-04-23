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
   * <p>Represents the output of a BatchGetApplicationRevisions
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplicationRevisionsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API BatchGetApplicationRevisionsResult
  {
  public:
    BatchGetApplicationRevisionsResult();
    BatchGetApplicationRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetApplicationRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the application that corresponds to the revisions.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application that corresponds to the revisions.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }

    /**
     * <p>The name of the application that corresponds to the revisions.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationName = std::move(value); }

    /**
     * <p>The name of the application that corresponds to the revisions.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }

    /**
     * <p>The name of the application that corresponds to the revisions.</p>
     */
    inline BatchGetApplicationRevisionsResult& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application that corresponds to the revisions.</p>
     */
    inline BatchGetApplicationRevisionsResult& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application that corresponds to the revisions.</p>
     */
    inline BatchGetApplicationRevisionsResult& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline BatchGetApplicationRevisionsResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline BatchGetApplicationRevisionsResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline BatchGetApplicationRevisionsResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>Additional information about the revisions, including the type and
     * location.</p>
     */
    inline const Aws::Vector<RevisionInfo>& GetRevisions() const{ return m_revisions; }

    /**
     * <p>Additional information about the revisions, including the type and
     * location.</p>
     */
    inline void SetRevisions(const Aws::Vector<RevisionInfo>& value) { m_revisions = value; }

    /**
     * <p>Additional information about the revisions, including the type and
     * location.</p>
     */
    inline void SetRevisions(Aws::Vector<RevisionInfo>&& value) { m_revisions = std::move(value); }

    /**
     * <p>Additional information about the revisions, including the type and
     * location.</p>
     */
    inline BatchGetApplicationRevisionsResult& WithRevisions(const Aws::Vector<RevisionInfo>& value) { SetRevisions(value); return *this;}

    /**
     * <p>Additional information about the revisions, including the type and
     * location.</p>
     */
    inline BatchGetApplicationRevisionsResult& WithRevisions(Aws::Vector<RevisionInfo>&& value) { SetRevisions(std::move(value)); return *this;}

    /**
     * <p>Additional information about the revisions, including the type and
     * location.</p>
     */
    inline BatchGetApplicationRevisionsResult& AddRevisions(const RevisionInfo& value) { m_revisions.push_back(value); return *this; }

    /**
     * <p>Additional information about the revisions, including the type and
     * location.</p>
     */
    inline BatchGetApplicationRevisionsResult& AddRevisions(RevisionInfo&& value) { m_revisions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;

    Aws::String m_errorMessage;

    Aws::Vector<RevisionInfo> m_revisions;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
