/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/detective/model/Indicator.h>
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
  class ListIndicatorsResult
  {
  public:
    AWS_DETECTIVE_API ListIndicatorsResult();
    AWS_DETECTIVE_API ListIndicatorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API ListIndicatorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }
    inline void SetGraphArn(const Aws::String& value) { m_graphArn = value; }
    inline void SetGraphArn(Aws::String&& value) { m_graphArn = std::move(value); }
    inline void SetGraphArn(const char* value) { m_graphArn.assign(value); }
    inline ListIndicatorsResult& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}
    inline ListIndicatorsResult& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}
    inline ListIndicatorsResult& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline const Aws::String& GetInvestigationId() const{ return m_investigationId; }
    inline void SetInvestigationId(const Aws::String& value) { m_investigationId = value; }
    inline void SetInvestigationId(Aws::String&& value) { m_investigationId = std::move(value); }
    inline void SetInvestigationId(const char* value) { m_investigationId.assign(value); }
    inline ListIndicatorsResult& WithInvestigationId(const Aws::String& value) { SetInvestigationId(value); return *this;}
    inline ListIndicatorsResult& WithInvestigationId(Aws::String&& value) { SetInvestigationId(std::move(value)); return *this;}
    inline ListIndicatorsResult& WithInvestigationId(const char* value) { SetInvestigationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIndicatorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIndicatorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIndicatorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the indicators of compromise.</p>
     */
    inline const Aws::Vector<Indicator>& GetIndicators() const{ return m_indicators; }
    inline void SetIndicators(const Aws::Vector<Indicator>& value) { m_indicators = value; }
    inline void SetIndicators(Aws::Vector<Indicator>&& value) { m_indicators = std::move(value); }
    inline ListIndicatorsResult& WithIndicators(const Aws::Vector<Indicator>& value) { SetIndicators(value); return *this;}
    inline ListIndicatorsResult& WithIndicators(Aws::Vector<Indicator>&& value) { SetIndicators(std::move(value)); return *this;}
    inline ListIndicatorsResult& AddIndicators(const Indicator& value) { m_indicators.push_back(value); return *this; }
    inline ListIndicatorsResult& AddIndicators(Indicator&& value) { m_indicators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIndicatorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIndicatorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIndicatorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_graphArn;

    Aws::String m_investigationId;

    Aws::String m_nextToken;

    Aws::Vector<Indicator> m_indicators;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
