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
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/model/RevisionEntry.h>
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
namespace DataExchange
{
namespace Model
{
  class AWS_DATAEXCHANGE_API ListDataSetRevisionsResult
  {
  public:
    ListDataSetRevisionsResult();
    ListDataSetRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDataSetRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListDataSetRevisionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListDataSetRevisionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListDataSetRevisionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline const Aws::Vector<RevisionEntry>& GetRevisions() const{ return m_revisions; }

    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline void SetRevisions(const Aws::Vector<RevisionEntry>& value) { m_revisions = value; }

    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline void SetRevisions(Aws::Vector<RevisionEntry>&& value) { m_revisions = std::move(value); }

    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline ListDataSetRevisionsResult& WithRevisions(const Aws::Vector<RevisionEntry>& value) { SetRevisions(value); return *this;}

    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline ListDataSetRevisionsResult& WithRevisions(Aws::Vector<RevisionEntry>&& value) { SetRevisions(std::move(value)); return *this;}

    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline ListDataSetRevisionsResult& AddRevisions(const RevisionEntry& value) { m_revisions.push_back(value); return *this; }

    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline ListDataSetRevisionsResult& AddRevisions(RevisionEntry&& value) { m_revisions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RevisionEntry> m_revisions;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
