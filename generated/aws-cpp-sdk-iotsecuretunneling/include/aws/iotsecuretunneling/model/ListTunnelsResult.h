/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsecuretunneling/model/TunnelSummary.h>
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
namespace IoTSecureTunneling
{
namespace Model
{
  class AWS_IOTSECURETUNNELING_API ListTunnelsResult
  {
  public:
    ListTunnelsResult();
    ListTunnelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTunnelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A short description of the tunnels in an AWS account.</p>
     */
    inline const Aws::Vector<TunnelSummary>& GetTunnelSummaries() const{ return m_tunnelSummaries; }

    /**
     * <p>A short description of the tunnels in an AWS account.</p>
     */
    inline void SetTunnelSummaries(const Aws::Vector<TunnelSummary>& value) { m_tunnelSummaries = value; }

    /**
     * <p>A short description of the tunnels in an AWS account.</p>
     */
    inline void SetTunnelSummaries(Aws::Vector<TunnelSummary>&& value) { m_tunnelSummaries = std::move(value); }

    /**
     * <p>A short description of the tunnels in an AWS account.</p>
     */
    inline ListTunnelsResult& WithTunnelSummaries(const Aws::Vector<TunnelSummary>& value) { SetTunnelSummaries(value); return *this;}

    /**
     * <p>A short description of the tunnels in an AWS account.</p>
     */
    inline ListTunnelsResult& WithTunnelSummaries(Aws::Vector<TunnelSummary>&& value) { SetTunnelSummaries(std::move(value)); return *this;}

    /**
     * <p>A short description of the tunnels in an AWS account.</p>
     */
    inline ListTunnelsResult& AddTunnelSummaries(const TunnelSummary& value) { m_tunnelSummaries.push_back(value); return *this; }

    /**
     * <p>A short description of the tunnels in an AWS account.</p>
     */
    inline ListTunnelsResult& AddTunnelSummaries(TunnelSummary&& value) { m_tunnelSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to used to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to used to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to used to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to used to retrieve the next set of results.</p>
     */
    inline ListTunnelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to used to retrieve the next set of results.</p>
     */
    inline ListTunnelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to used to retrieve the next set of results.</p>
     */
    inline ListTunnelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TunnelSummary> m_tunnelSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
