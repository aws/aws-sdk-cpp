/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/Build.h>
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
  class BatchGetBuildsResult
  {
  public:
    AWS_CODEBUILD_API BatchGetBuildsResult() = default;
    AWS_CODEBUILD_API BatchGetBuildsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetBuildsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the requested builds.</p>
     */
    inline const Aws::Vector<Build>& GetBuilds() const { return m_builds; }
    template<typename BuildsT = Aws::Vector<Build>>
    void SetBuilds(BuildsT&& value) { m_buildsHasBeenSet = true; m_builds = std::forward<BuildsT>(value); }
    template<typename BuildsT = Aws::Vector<Build>>
    BatchGetBuildsResult& WithBuilds(BuildsT&& value) { SetBuilds(std::forward<BuildsT>(value)); return *this;}
    template<typename BuildsT = Build>
    BatchGetBuildsResult& AddBuilds(BuildsT&& value) { m_buildsHasBeenSet = true; m_builds.emplace_back(std::forward<BuildsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of builds for which information could not be found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuildsNotFound() const { return m_buildsNotFound; }
    template<typename BuildsNotFoundT = Aws::Vector<Aws::String>>
    void SetBuildsNotFound(BuildsNotFoundT&& value) { m_buildsNotFoundHasBeenSet = true; m_buildsNotFound = std::forward<BuildsNotFoundT>(value); }
    template<typename BuildsNotFoundT = Aws::Vector<Aws::String>>
    BatchGetBuildsResult& WithBuildsNotFound(BuildsNotFoundT&& value) { SetBuildsNotFound(std::forward<BuildsNotFoundT>(value)); return *this;}
    template<typename BuildsNotFoundT = Aws::String>
    BatchGetBuildsResult& AddBuildsNotFound(BuildsNotFoundT&& value) { m_buildsNotFoundHasBeenSet = true; m_buildsNotFound.emplace_back(std::forward<BuildsNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetBuildsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Build> m_builds;
    bool m_buildsHasBeenSet = false;

    Aws::Vector<Aws::String> m_buildsNotFound;
    bool m_buildsNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
