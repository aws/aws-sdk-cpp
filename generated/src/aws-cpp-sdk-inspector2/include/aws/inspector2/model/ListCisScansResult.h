/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisScan.h>
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
namespace Inspector2
{
namespace Model
{
  class ListCisScansResult
  {
  public:
    AWS_INSPECTOR2_API ListCisScansResult();
    AWS_INSPECTOR2_API ListCisScansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListCisScansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The CIS scans.</p>
     */
    inline const Aws::Vector<CisScan>& GetScans() const{ return m_scans; }

    /**
     * <p>The CIS scans.</p>
     */
    inline void SetScans(const Aws::Vector<CisScan>& value) { m_scans = value; }

    /**
     * <p>The CIS scans.</p>
     */
    inline void SetScans(Aws::Vector<CisScan>&& value) { m_scans = std::move(value); }

    /**
     * <p>The CIS scans.</p>
     */
    inline ListCisScansResult& WithScans(const Aws::Vector<CisScan>& value) { SetScans(value); return *this;}

    /**
     * <p>The CIS scans.</p>
     */
    inline ListCisScansResult& WithScans(Aws::Vector<CisScan>&& value) { SetScans(std::move(value)); return *this;}

    /**
     * <p>The CIS scans.</p>
     */
    inline ListCisScansResult& AddScans(const CisScan& value) { m_scans.push_back(value); return *this; }

    /**
     * <p>The CIS scans.</p>
     */
    inline ListCisScansResult& AddScans(CisScan&& value) { m_scans.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCisScansResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCisScansResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCisScansResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<CisScan> m_scans;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
