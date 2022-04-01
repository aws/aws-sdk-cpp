/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/AccessPreviewSummary.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class AWS_ACCESSANALYZER_API ListAccessPreviewsResult
  {
  public:
    ListAccessPreviewsResult();
    ListAccessPreviewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAccessPreviewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of access previews retrieved for the analyzer.</p>
     */
    inline const Aws::Vector<AccessPreviewSummary>& GetAccessPreviews() const{ return m_accessPreviews; }

    /**
     * <p>A list of access previews retrieved for the analyzer.</p>
     */
    inline void SetAccessPreviews(const Aws::Vector<AccessPreviewSummary>& value) { m_accessPreviews = value; }

    /**
     * <p>A list of access previews retrieved for the analyzer.</p>
     */
    inline void SetAccessPreviews(Aws::Vector<AccessPreviewSummary>&& value) { m_accessPreviews = std::move(value); }

    /**
     * <p>A list of access previews retrieved for the analyzer.</p>
     */
    inline ListAccessPreviewsResult& WithAccessPreviews(const Aws::Vector<AccessPreviewSummary>& value) { SetAccessPreviews(value); return *this;}

    /**
     * <p>A list of access previews retrieved for the analyzer.</p>
     */
    inline ListAccessPreviewsResult& WithAccessPreviews(Aws::Vector<AccessPreviewSummary>&& value) { SetAccessPreviews(std::move(value)); return *this;}

    /**
     * <p>A list of access previews retrieved for the analyzer.</p>
     */
    inline ListAccessPreviewsResult& AddAccessPreviews(const AccessPreviewSummary& value) { m_accessPreviews.push_back(value); return *this; }

    /**
     * <p>A list of access previews retrieved for the analyzer.</p>
     */
    inline ListAccessPreviewsResult& AddAccessPreviews(AccessPreviewSummary&& value) { m_accessPreviews.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAccessPreviewsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAccessPreviewsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAccessPreviewsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccessPreviewSummary> m_accessPreviews;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
