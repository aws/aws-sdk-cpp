/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisScanResultDetails.h>
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
  class GetCisScanResultDetailsResult
  {
  public:
    AWS_INSPECTOR2_API GetCisScanResultDetailsResult();
    AWS_INSPECTOR2_API GetCisScanResultDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetCisScanResultDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetCisScanResultDetailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline GetCisScanResultDetailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline GetCisScanResultDetailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The scan result details.</p>
     */
    inline const Aws::Vector<CisScanResultDetails>& GetScanResultDetails() const{ return m_scanResultDetails; }

    /**
     * <p>The scan result details.</p>
     */
    inline void SetScanResultDetails(const Aws::Vector<CisScanResultDetails>& value) { m_scanResultDetails = value; }

    /**
     * <p>The scan result details.</p>
     */
    inline void SetScanResultDetails(Aws::Vector<CisScanResultDetails>&& value) { m_scanResultDetails = std::move(value); }

    /**
     * <p>The scan result details.</p>
     */
    inline GetCisScanResultDetailsResult& WithScanResultDetails(const Aws::Vector<CisScanResultDetails>& value) { SetScanResultDetails(value); return *this;}

    /**
     * <p>The scan result details.</p>
     */
    inline GetCisScanResultDetailsResult& WithScanResultDetails(Aws::Vector<CisScanResultDetails>&& value) { SetScanResultDetails(std::move(value)); return *this;}

    /**
     * <p>The scan result details.</p>
     */
    inline GetCisScanResultDetailsResult& AddScanResultDetails(const CisScanResultDetails& value) { m_scanResultDetails.push_back(value); return *this; }

    /**
     * <p>The scan result details.</p>
     */
    inline GetCisScanResultDetailsResult& AddScanResultDetails(CisScanResultDetails&& value) { m_scanResultDetails.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCisScanResultDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCisScanResultDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCisScanResultDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<CisScanResultDetails> m_scanResultDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
