/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/ApplicationVersionSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListApplicationVersionsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListApplicationVersionsResult();
    AWS_MAINFRAMEMODERNIZATION_API ListApplicationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListApplicationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of application versions.</p>
     */
    inline const Aws::Vector<ApplicationVersionSummary>& GetApplicationVersions() const{ return m_applicationVersions; }

    /**
     * <p>The list of application versions.</p>
     */
    inline void SetApplicationVersions(const Aws::Vector<ApplicationVersionSummary>& value) { m_applicationVersions = value; }

    /**
     * <p>The list of application versions.</p>
     */
    inline void SetApplicationVersions(Aws::Vector<ApplicationVersionSummary>&& value) { m_applicationVersions = std::move(value); }

    /**
     * <p>The list of application versions.</p>
     */
    inline ListApplicationVersionsResult& WithApplicationVersions(const Aws::Vector<ApplicationVersionSummary>& value) { SetApplicationVersions(value); return *this;}

    /**
     * <p>The list of application versions.</p>
     */
    inline ListApplicationVersionsResult& WithApplicationVersions(Aws::Vector<ApplicationVersionSummary>&& value) { SetApplicationVersions(std::move(value)); return *this;}

    /**
     * <p>The list of application versions.</p>
     */
    inline ListApplicationVersionsResult& AddApplicationVersions(const ApplicationVersionSummary& value) { m_applicationVersions.push_back(value); return *this; }

    /**
     * <p>The list of application versions.</p>
     */
    inline ListApplicationVersionsResult& AddApplicationVersions(ApplicationVersionSummary&& value) { m_applicationVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListApplicationVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListApplicationVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListApplicationVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationVersionSummary> m_applicationVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
