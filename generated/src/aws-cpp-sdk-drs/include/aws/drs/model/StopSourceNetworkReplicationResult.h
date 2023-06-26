/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/SourceNetwork.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace drs
{
namespace Model
{
  class StopSourceNetworkReplicationResult
  {
  public:
    AWS_DRS_API StopSourceNetworkReplicationResult();
    AWS_DRS_API StopSourceNetworkReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API StopSourceNetworkReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Source Network which was requested to stop replication.</p>
     */
    inline const SourceNetwork& GetSourceNetwork() const{ return m_sourceNetwork; }

    /**
     * <p>Source Network which was requested to stop replication.</p>
     */
    inline void SetSourceNetwork(const SourceNetwork& value) { m_sourceNetwork = value; }

    /**
     * <p>Source Network which was requested to stop replication.</p>
     */
    inline void SetSourceNetwork(SourceNetwork&& value) { m_sourceNetwork = std::move(value); }

    /**
     * <p>Source Network which was requested to stop replication.</p>
     */
    inline StopSourceNetworkReplicationResult& WithSourceNetwork(const SourceNetwork& value) { SetSourceNetwork(value); return *this;}

    /**
     * <p>Source Network which was requested to stop replication.</p>
     */
    inline StopSourceNetworkReplicationResult& WithSourceNetwork(SourceNetwork&& value) { SetSourceNetwork(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopSourceNetworkReplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopSourceNetworkReplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopSourceNetworkReplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SourceNetwork m_sourceNetwork;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
