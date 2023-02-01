/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutvision/model/ProjectMetadata.h>
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
namespace LookoutforVision
{
namespace Model
{
  class ListProjectsResult
  {
  public:
    AWS_LOOKOUTFORVISION_API ListProjectsResult();
    AWS_LOOKOUTFORVISION_API ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of projects in your AWS account.</p>
     */
    inline const Aws::Vector<ProjectMetadata>& GetProjects() const{ return m_projects; }

    /**
     * <p>A list of projects in your AWS account.</p>
     */
    inline void SetProjects(const Aws::Vector<ProjectMetadata>& value) { m_projects = value; }

    /**
     * <p>A list of projects in your AWS account.</p>
     */
    inline void SetProjects(Aws::Vector<ProjectMetadata>&& value) { m_projects = std::move(value); }

    /**
     * <p>A list of projects in your AWS account.</p>
     */
    inline ListProjectsResult& WithProjects(const Aws::Vector<ProjectMetadata>& value) { SetProjects(value); return *this;}

    /**
     * <p>A list of projects in your AWS account.</p>
     */
    inline ListProjectsResult& WithProjects(Aws::Vector<ProjectMetadata>&& value) { SetProjects(std::move(value)); return *this;}

    /**
     * <p>A list of projects in your AWS account.</p>
     */
    inline ListProjectsResult& AddProjects(const ProjectMetadata& value) { m_projects.push_back(value); return *this; }

    /**
     * <p>A list of projects in your AWS account.</p>
     */
    inline ListProjectsResult& AddProjects(ProjectMetadata&& value) { m_projects.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * projects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * projects.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * projects.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * projects.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * projects.</p>
     */
    inline ListProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * projects.</p>
     */
    inline ListProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * projects.</p>
     */
    inline ListProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProjectMetadata> m_projects;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
