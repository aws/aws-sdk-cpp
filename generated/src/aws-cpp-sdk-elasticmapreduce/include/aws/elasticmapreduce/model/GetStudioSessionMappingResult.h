/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/SessionMappingDetail.h>
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
namespace EMR
{
namespace Model
{
  class GetStudioSessionMappingResult
  {
  public:
    AWS_EMR_API GetStudioSessionMappingResult() = default;
    AWS_EMR_API GetStudioSessionMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API GetStudioSessionMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The session mapping details for the specified Amazon EMR Studio and identity,
     * including session policy ARN and creation time.</p>
     */
    inline const SessionMappingDetail& GetSessionMapping() const { return m_sessionMapping; }
    template<typename SessionMappingT = SessionMappingDetail>
    void SetSessionMapping(SessionMappingT&& value) { m_sessionMappingHasBeenSet = true; m_sessionMapping = std::forward<SessionMappingT>(value); }
    template<typename SessionMappingT = SessionMappingDetail>
    GetStudioSessionMappingResult& WithSessionMapping(SessionMappingT&& value) { SetSessionMapping(std::forward<SessionMappingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetStudioSessionMappingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SessionMappingDetail m_sessionMapping;
    bool m_sessionMappingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
