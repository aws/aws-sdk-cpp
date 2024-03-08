/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxDataviewListEntry.h>
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
namespace finspace
{
namespace Model
{
  class ListKxDataviewsResult
  {
  public:
    AWS_FINSPACE_API ListKxDataviewsResult();
    AWS_FINSPACE_API ListKxDataviewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxDataviewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of kdb dataviews that are currently active for the given database.
     * </p>
     */
    inline const Aws::Vector<KxDataviewListEntry>& GetKxDataviews() const{ return m_kxDataviews; }

    /**
     * <p> The list of kdb dataviews that are currently active for the given database.
     * </p>
     */
    inline void SetKxDataviews(const Aws::Vector<KxDataviewListEntry>& value) { m_kxDataviews = value; }

    /**
     * <p> The list of kdb dataviews that are currently active for the given database.
     * </p>
     */
    inline void SetKxDataviews(Aws::Vector<KxDataviewListEntry>&& value) { m_kxDataviews = std::move(value); }

    /**
     * <p> The list of kdb dataviews that are currently active for the given database.
     * </p>
     */
    inline ListKxDataviewsResult& WithKxDataviews(const Aws::Vector<KxDataviewListEntry>& value) { SetKxDataviews(value); return *this;}

    /**
     * <p> The list of kdb dataviews that are currently active for the given database.
     * </p>
     */
    inline ListKxDataviewsResult& WithKxDataviews(Aws::Vector<KxDataviewListEntry>&& value) { SetKxDataviews(std::move(value)); return *this;}

    /**
     * <p> The list of kdb dataviews that are currently active for the given database.
     * </p>
     */
    inline ListKxDataviewsResult& AddKxDataviews(const KxDataviewListEntry& value) { m_kxDataviews.push_back(value); return *this; }

    /**
     * <p> The list of kdb dataviews that are currently active for the given database.
     * </p>
     */
    inline ListKxDataviewsResult& AddKxDataviews(KxDataviewListEntry&& value) { m_kxDataviews.push_back(std::move(value)); return *this; }


    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline ListKxDataviewsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline ListKxDataviewsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline ListKxDataviewsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKxDataviewsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKxDataviewsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKxDataviewsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<KxDataviewListEntry> m_kxDataviews;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
