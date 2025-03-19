/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/BuildNotDeleted.h>
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
namespace CodeBuild
{
namespace Model
{
  class DeleteBuildBatchResult
  {
  public:
    AWS_CODEBUILD_API DeleteBuildBatchResult() = default;
    AWS_CODEBUILD_API DeleteBuildBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API DeleteBuildBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status code.</p>
     */
    inline const Aws::String& GetStatusCode() const { return m_statusCode; }
    template<typename StatusCodeT = Aws::String>
    void SetStatusCode(StatusCodeT&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::forward<StatusCodeT>(value); }
    template<typename StatusCodeT = Aws::String>
    DeleteBuildBatchResult& WithStatusCode(StatusCodeT&& value) { SetStatusCode(std::forward<StatusCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that contain the identifiers of the builds that were
     * deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuildsDeleted() const { return m_buildsDeleted; }
    template<typename BuildsDeletedT = Aws::Vector<Aws::String>>
    void SetBuildsDeleted(BuildsDeletedT&& value) { m_buildsDeletedHasBeenSet = true; m_buildsDeleted = std::forward<BuildsDeletedT>(value); }
    template<typename BuildsDeletedT = Aws::Vector<Aws::String>>
    DeleteBuildBatchResult& WithBuildsDeleted(BuildsDeletedT&& value) { SetBuildsDeleted(std::forward<BuildsDeletedT>(value)); return *this;}
    template<typename BuildsDeletedT = Aws::String>
    DeleteBuildBatchResult& AddBuildsDeleted(BuildsDeletedT&& value) { m_buildsDeletedHasBeenSet = true; m_buildsDeleted.emplace_back(std::forward<BuildsDeletedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>BuildNotDeleted</code> objects that specify the builds that
     * could not be deleted.</p>
     */
    inline const Aws::Vector<BuildNotDeleted>& GetBuildsNotDeleted() const { return m_buildsNotDeleted; }
    template<typename BuildsNotDeletedT = Aws::Vector<BuildNotDeleted>>
    void SetBuildsNotDeleted(BuildsNotDeletedT&& value) { m_buildsNotDeletedHasBeenSet = true; m_buildsNotDeleted = std::forward<BuildsNotDeletedT>(value); }
    template<typename BuildsNotDeletedT = Aws::Vector<BuildNotDeleted>>
    DeleteBuildBatchResult& WithBuildsNotDeleted(BuildsNotDeletedT&& value) { SetBuildsNotDeleted(std::forward<BuildsNotDeletedT>(value)); return *this;}
    template<typename BuildsNotDeletedT = BuildNotDeleted>
    DeleteBuildBatchResult& AddBuildsNotDeleted(BuildsNotDeletedT&& value) { m_buildsNotDeletedHasBeenSet = true; m_buildsNotDeleted.emplace_back(std::forward<BuildsNotDeletedT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteBuildBatchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_buildsDeleted;
    bool m_buildsDeletedHasBeenSet = false;

    Aws::Vector<BuildNotDeleted> m_buildsNotDeleted;
    bool m_buildsNotDeletedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
