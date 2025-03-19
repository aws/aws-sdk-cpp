/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/SimplifiedApplication.h>
#include <aws/elasticmapreduce/model/OSRelease.h>
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
namespace EMR
{
namespace Model
{
  class DescribeReleaseLabelResult
  {
  public:
    AWS_EMR_API DescribeReleaseLabelResult() = default;
    AWS_EMR_API DescribeReleaseLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API DescribeReleaseLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The target release label described in the response.</p>
     */
    inline const Aws::String& GetReleaseLabel() const { return m_releaseLabel; }
    template<typename ReleaseLabelT = Aws::String>
    void SetReleaseLabel(ReleaseLabelT&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::forward<ReleaseLabelT>(value); }
    template<typename ReleaseLabelT = Aws::String>
    DescribeReleaseLabelResult& WithReleaseLabel(ReleaseLabelT&& value) { SetReleaseLabel(std::forward<ReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of applications available for the target release label.
     * <code>Name</code> is the name of the application. <code>Version</code> is the
     * concise version of the application.</p>
     */
    inline const Aws::Vector<SimplifiedApplication>& GetApplications() const { return m_applications; }
    template<typename ApplicationsT = Aws::Vector<SimplifiedApplication>>
    void SetApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications = std::forward<ApplicationsT>(value); }
    template<typename ApplicationsT = Aws::Vector<SimplifiedApplication>>
    DescribeReleaseLabelResult& WithApplications(ApplicationsT&& value) { SetApplications(std::forward<ApplicationsT>(value)); return *this;}
    template<typename ApplicationsT = SimplifiedApplication>
    DescribeReleaseLabelResult& AddApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications.emplace_back(std::forward<ApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token. Reserved for future use. Currently set to null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeReleaseLabelResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of available Amazon Linux release versions for an Amazon EMR
     * release. Contains a Label field that is formatted as shown in <a
     * href="https://docs.aws.amazon.com/AL2/latest/relnotes/relnotes-al2.html">
     * <i>Amazon Linux 2 Release Notes</i> </a>. For example, <a
     * href="https://docs.aws.amazon.com/AL2/latest/relnotes/relnotes-20220218.html">2.0.20220218.1</a>.</p>
     */
    inline const Aws::Vector<OSRelease>& GetAvailableOSReleases() const { return m_availableOSReleases; }
    template<typename AvailableOSReleasesT = Aws::Vector<OSRelease>>
    void SetAvailableOSReleases(AvailableOSReleasesT&& value) { m_availableOSReleasesHasBeenSet = true; m_availableOSReleases = std::forward<AvailableOSReleasesT>(value); }
    template<typename AvailableOSReleasesT = Aws::Vector<OSRelease>>
    DescribeReleaseLabelResult& WithAvailableOSReleases(AvailableOSReleasesT&& value) { SetAvailableOSReleases(std::forward<AvailableOSReleasesT>(value)); return *this;}
    template<typename AvailableOSReleasesT = OSRelease>
    DescribeReleaseLabelResult& AddAvailableOSReleases(AvailableOSReleasesT&& value) { m_availableOSReleasesHasBeenSet = true; m_availableOSReleases.emplace_back(std::forward<AvailableOSReleasesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReleaseLabelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    Aws::Vector<SimplifiedApplication> m_applications;
    bool m_applicationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<OSRelease> m_availableOSReleases;
    bool m_availableOSReleasesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
