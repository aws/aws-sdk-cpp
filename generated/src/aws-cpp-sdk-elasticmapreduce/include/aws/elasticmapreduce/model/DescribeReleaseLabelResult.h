﻿/**
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
    AWS_EMR_API DescribeReleaseLabelResult();
    AWS_EMR_API DescribeReleaseLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API DescribeReleaseLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The target release label described in the response.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabel = value; }
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabel = std::move(value); }
    inline void SetReleaseLabel(const char* value) { m_releaseLabel.assign(value); }
    inline DescribeReleaseLabelResult& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}
    inline DescribeReleaseLabelResult& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}
    inline DescribeReleaseLabelResult& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of applications available for the target release label.
     * <code>Name</code> is the name of the application. <code>Version</code> is the
     * concise version of the application.</p>
     */
    inline const Aws::Vector<SimplifiedApplication>& GetApplications() const{ return m_applications; }
    inline void SetApplications(const Aws::Vector<SimplifiedApplication>& value) { m_applications = value; }
    inline void SetApplications(Aws::Vector<SimplifiedApplication>&& value) { m_applications = std::move(value); }
    inline DescribeReleaseLabelResult& WithApplications(const Aws::Vector<SimplifiedApplication>& value) { SetApplications(value); return *this;}
    inline DescribeReleaseLabelResult& WithApplications(Aws::Vector<SimplifiedApplication>&& value) { SetApplications(std::move(value)); return *this;}
    inline DescribeReleaseLabelResult& AddApplications(const SimplifiedApplication& value) { m_applications.push_back(value); return *this; }
    inline DescribeReleaseLabelResult& AddApplications(SimplifiedApplication&& value) { m_applications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token. Reserved for future use. Currently set to null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeReleaseLabelResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeReleaseLabelResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeReleaseLabelResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of available Amazon Linux release versions for an Amazon EMR
     * release. Contains a Label field that is formatted as shown in <a
     * href="https://docs.aws.amazon.com/AL2/latest/relnotes/relnotes-al2.html">
     * <i>Amazon Linux 2 Release Notes</i> </a>. For example, <a
     * href="https://docs.aws.amazon.com/AL2/latest/relnotes/relnotes-20220218.html">2.0.20220218.1</a>.</p>
     */
    inline const Aws::Vector<OSRelease>& GetAvailableOSReleases() const{ return m_availableOSReleases; }
    inline void SetAvailableOSReleases(const Aws::Vector<OSRelease>& value) { m_availableOSReleases = value; }
    inline void SetAvailableOSReleases(Aws::Vector<OSRelease>&& value) { m_availableOSReleases = std::move(value); }
    inline DescribeReleaseLabelResult& WithAvailableOSReleases(const Aws::Vector<OSRelease>& value) { SetAvailableOSReleases(value); return *this;}
    inline DescribeReleaseLabelResult& WithAvailableOSReleases(Aws::Vector<OSRelease>&& value) { SetAvailableOSReleases(std::move(value)); return *this;}
    inline DescribeReleaseLabelResult& AddAvailableOSReleases(const OSRelease& value) { m_availableOSReleases.push_back(value); return *this; }
    inline DescribeReleaseLabelResult& AddAvailableOSReleases(OSRelease&& value) { m_availableOSReleases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeReleaseLabelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeReleaseLabelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeReleaseLabelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_releaseLabel;

    Aws::Vector<SimplifiedApplication> m_applications;

    Aws::String m_nextToken;

    Aws::Vector<OSRelease> m_availableOSReleases;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
