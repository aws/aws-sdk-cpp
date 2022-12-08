/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecatalyst/model/ProjectSummary.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class ListProjectsResult
  {
  public:
    AWS_CODECATALYST_API ListProjectsResult();
    AWS_CODECATALYST_API ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the projects.</p>
     */
    inline const Aws::Vector<ProjectSummary>& GetItems() const{ return m_items; }

    /**
     * <p>Information about the projects.</p>
     */
    inline void SetItems(const Aws::Vector<ProjectSummary>& value) { m_items = value; }

    /**
     * <p>Information about the projects.</p>
     */
    inline void SetItems(Aws::Vector<ProjectSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>Information about the projects.</p>
     */
    inline ListProjectsResult& WithItems(const Aws::Vector<ProjectSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>Information about the projects.</p>
     */
    inline ListProjectsResult& WithItems(Aws::Vector<ProjectSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Information about the projects.</p>
     */
    inline ListProjectsResult& AddItems(const ProjectSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Information about the projects.</p>
     */
    inline ListProjectsResult& AddItems(ProjectSummary&& value) { m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProjectSummary> m_items;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
