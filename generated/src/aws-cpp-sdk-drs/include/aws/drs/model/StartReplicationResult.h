/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/SourceServer.h>
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
  class StartReplicationResult
  {
  public:
    AWS_DRS_API StartReplicationResult() = default;
    AWS_DRS_API StartReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API StartReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Source Server that this action was targeted on.</p>
     */
    inline const SourceServer& GetSourceServer() const { return m_sourceServer; }
    template<typename SourceServerT = SourceServer>
    void SetSourceServer(SourceServerT&& value) { m_sourceServerHasBeenSet = true; m_sourceServer = std::forward<SourceServerT>(value); }
    template<typename SourceServerT = SourceServer>
    StartReplicationResult& WithSourceServer(SourceServerT&& value) { SetSourceServer(std::forward<SourceServerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartReplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SourceServer m_sourceServer;
    bool m_sourceServerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
