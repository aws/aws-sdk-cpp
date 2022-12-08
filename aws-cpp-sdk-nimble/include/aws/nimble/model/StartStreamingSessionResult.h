/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StreamingSession.h>
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
namespace NimbleStudio
{
namespace Model
{
  class StartStreamingSessionResult
  {
  public:
    AWS_NIMBLESTUDIO_API StartStreamingSessionResult();
    AWS_NIMBLESTUDIO_API StartStreamingSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API StartStreamingSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const StreamingSession& GetSession() const{ return m_session; }

    
    inline void SetSession(const StreamingSession& value) { m_session = value; }

    
    inline void SetSession(StreamingSession&& value) { m_session = std::move(value); }

    
    inline StartStreamingSessionResult& WithSession(const StreamingSession& value) { SetSession(value); return *this;}

    
    inline StartStreamingSessionResult& WithSession(StreamingSession&& value) { SetSession(std::move(value)); return *this;}

  private:

    StreamingSession m_session;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
