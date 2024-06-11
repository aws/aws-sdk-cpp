﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/Anomaly.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetAnomaliesResult
  {
  public:
    AWS_COSTEXPLORER_API GetAnomaliesResult();
    AWS_COSTEXPLORER_API GetAnomaliesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetAnomaliesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of cost anomalies. </p>
     */
    inline const Aws::Vector<Anomaly>& GetAnomalies() const{ return m_anomalies; }
    inline void SetAnomalies(const Aws::Vector<Anomaly>& value) { m_anomalies = value; }
    inline void SetAnomalies(Aws::Vector<Anomaly>&& value) { m_anomalies = std::move(value); }
    inline GetAnomaliesResult& WithAnomalies(const Aws::Vector<Anomaly>& value) { SetAnomalies(value); return *this;}
    inline GetAnomaliesResult& WithAnomalies(Aws::Vector<Anomaly>&& value) { SetAnomalies(std::move(value)); return *this;}
    inline GetAnomaliesResult& AddAnomalies(const Anomaly& value) { m_anomalies.push_back(value); return *this; }
    inline GetAnomaliesResult& AddAnomalies(Anomaly&& value) { m_anomalies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetAnomaliesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetAnomaliesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetAnomaliesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAnomaliesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAnomaliesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAnomaliesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Anomaly> m_anomalies;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
