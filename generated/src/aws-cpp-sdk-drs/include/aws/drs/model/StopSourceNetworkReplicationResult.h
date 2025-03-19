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
    AWS_DRS_API StopSourceNetworkReplicationResult() = default;
    AWS_DRS_API StopSourceNetworkReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API StopSourceNetworkReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Source Network which was requested to stop replication.</p>
     */
    inline const SourceNetwork& GetSourceNetwork() const { return m_sourceNetwork; }
    template<typename SourceNetworkT = SourceNetwork>
    void SetSourceNetwork(SourceNetworkT&& value) { m_sourceNetworkHasBeenSet = true; m_sourceNetwork = std::forward<SourceNetworkT>(value); }
    template<typename SourceNetworkT = SourceNetwork>
    StopSourceNetworkReplicationResult& WithSourceNetwork(SourceNetworkT&& value) { SetSourceNetwork(std::forward<SourceNetworkT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopSourceNetworkReplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SourceNetwork m_sourceNetwork;
    bool m_sourceNetworkHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
