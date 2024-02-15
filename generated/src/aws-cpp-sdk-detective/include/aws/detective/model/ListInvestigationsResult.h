/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/InvestigationDetail.h>
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
namespace Detective
{
namespace Model
{
  class ListInvestigationsResult
  {
  public:
    AWS_DETECTIVE_API ListInvestigationsResult();
    AWS_DETECTIVE_API ListInvestigationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API ListInvestigationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the summary of uncommon behavior or malicious activity which indicates
     * a compromise.</p>
     */
    inline const Aws::Vector<InvestigationDetail>& GetInvestigationDetails() const{ return m_investigationDetails; }

    /**
     * <p>Lists the summary of uncommon behavior or malicious activity which indicates
     * a compromise.</p>
     */
    inline void SetInvestigationDetails(const Aws::Vector<InvestigationDetail>& value) { m_investigationDetails = value; }

    /**
     * <p>Lists the summary of uncommon behavior or malicious activity which indicates
     * a compromise.</p>
     */
    inline void SetInvestigationDetails(Aws::Vector<InvestigationDetail>&& value) { m_investigationDetails = std::move(value); }

    /**
     * <p>Lists the summary of uncommon behavior or malicious activity which indicates
     * a compromise.</p>
     */
    inline ListInvestigationsResult& WithInvestigationDetails(const Aws::Vector<InvestigationDetail>& value) { SetInvestigationDetails(value); return *this;}

    /**
     * <p>Lists the summary of uncommon behavior or malicious activity which indicates
     * a compromise.</p>
     */
    inline ListInvestigationsResult& WithInvestigationDetails(Aws::Vector<InvestigationDetail>&& value) { SetInvestigationDetails(std::move(value)); return *this;}

    /**
     * <p>Lists the summary of uncommon behavior or malicious activity which indicates
     * a compromise.</p>
     */
    inline ListInvestigationsResult& AddInvestigationDetails(const InvestigationDetail& value) { m_investigationDetails.push_back(value); return *this; }

    /**
     * <p>Lists the summary of uncommon behavior or malicious activity which indicates
     * a compromise.</p>
     */
    inline ListInvestigationsResult& AddInvestigationDetails(InvestigationDetail&& value) { m_investigationDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. </p>
     */
    inline ListInvestigationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. </p>
     */
    inline ListInvestigationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. </p>
     */
    inline ListInvestigationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListInvestigationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListInvestigationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListInvestigationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<InvestigationDetail> m_investigationDetails;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
