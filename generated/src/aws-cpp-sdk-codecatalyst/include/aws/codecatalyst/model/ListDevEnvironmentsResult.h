/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecatalyst/model/DevEnvironmentSummary.h>
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
  class ListDevEnvironmentsResult
  {
  public:
    AWS_CODECATALYST_API ListDevEnvironmentsResult();
    AWS_CODECATALYST_API ListDevEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API ListDevEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Dev Environments in a project.</p>
     */
    inline const Aws::Vector<DevEnvironmentSummary>& GetItems() const{ return m_items; }

    /**
     * <p>Information about the Dev Environments in a project.</p>
     */
    inline void SetItems(const Aws::Vector<DevEnvironmentSummary>& value) { m_items = value; }

    /**
     * <p>Information about the Dev Environments in a project.</p>
     */
    inline void SetItems(Aws::Vector<DevEnvironmentSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>Information about the Dev Environments in a project.</p>
     */
    inline ListDevEnvironmentsResult& WithItems(const Aws::Vector<DevEnvironmentSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>Information about the Dev Environments in a project.</p>
     */
    inline ListDevEnvironmentsResult& WithItems(Aws::Vector<DevEnvironmentSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Information about the Dev Environments in a project.</p>
     */
    inline ListDevEnvironmentsResult& AddItems(const DevEnvironmentSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Information about the Dev Environments in a project.</p>
     */
    inline ListDevEnvironmentsResult& AddItems(DevEnvironmentSummary&& value) { m_items.push_back(std::move(value)); return *this; }


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
    inline ListDevEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListDevEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListDevEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DevEnvironmentSummary> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
