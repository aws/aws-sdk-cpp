﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/SignalCatalogSummary.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class ListSignalCatalogsResult
  {
  public:
    AWS_IOTFLEETWISE_API ListSignalCatalogsResult();
    AWS_IOTFLEETWISE_API ListSignalCatalogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListSignalCatalogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of information about each signal catalog. </p>
     */
    inline const Aws::Vector<SignalCatalogSummary>& GetSummaries() const{ return m_summaries; }
    inline void SetSummaries(const Aws::Vector<SignalCatalogSummary>& value) { m_summaries = value; }
    inline void SetSummaries(Aws::Vector<SignalCatalogSummary>&& value) { m_summaries = std::move(value); }
    inline ListSignalCatalogsResult& WithSummaries(const Aws::Vector<SignalCatalogSummary>& value) { SetSummaries(value); return *this;}
    inline ListSignalCatalogsResult& WithSummaries(Aws::Vector<SignalCatalogSummary>&& value) { SetSummaries(std::move(value)); return *this;}
    inline ListSignalCatalogsResult& AddSummaries(const SignalCatalogSummary& value) { m_summaries.push_back(value); return *this; }
    inline ListSignalCatalogsResult& AddSummaries(SignalCatalogSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSignalCatalogsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSignalCatalogsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSignalCatalogsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSignalCatalogsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSignalCatalogsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSignalCatalogsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SignalCatalogSummary> m_summaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
