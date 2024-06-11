﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/LightsailDistribution.h>
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
namespace Lightsail
{
namespace Model
{
  class GetDistributionsResult
  {
  public:
    AWS_LIGHTSAIL_API GetDistributionsResult();
    AWS_LIGHTSAIL_API GetDistributionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetDistributionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe your distributions.</p>
     */
    inline const Aws::Vector<LightsailDistribution>& GetDistributions() const{ return m_distributions; }
    inline void SetDistributions(const Aws::Vector<LightsailDistribution>& value) { m_distributions = value; }
    inline void SetDistributions(Aws::Vector<LightsailDistribution>&& value) { m_distributions = std::move(value); }
    inline GetDistributionsResult& WithDistributions(const Aws::Vector<LightsailDistribution>& value) { SetDistributions(value); return *this;}
    inline GetDistributionsResult& WithDistributions(Aws::Vector<LightsailDistribution>&& value) { SetDistributions(std::move(value)); return *this;}
    inline GetDistributionsResult& AddDistributions(const LightsailDistribution& value) { m_distributions.push_back(value); return *this; }
    inline GetDistributionsResult& AddDistributions(LightsailDistribution&& value) { m_distributions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetDistributions</code> request and specify the next page token using the
     * <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetDistributionsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetDistributionsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetDistributionsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDistributionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDistributionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDistributionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LightsailDistribution> m_distributions;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
