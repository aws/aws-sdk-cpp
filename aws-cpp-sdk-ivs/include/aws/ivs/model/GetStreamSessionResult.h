/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/StreamSession.h>
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
namespace IVS
{
namespace Model
{
  class GetStreamSessionResult
  {
  public:
    AWS_IVS_API GetStreamSessionResult();
    AWS_IVS_API GetStreamSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API GetStreamSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of stream details.</p>
     */
    inline const StreamSession& GetStreamSession() const{ return m_streamSession; }

    /**
     * <p>List of stream details.</p>
     */
    inline void SetStreamSession(const StreamSession& value) { m_streamSession = value; }

    /**
     * <p>List of stream details.</p>
     */
    inline void SetStreamSession(StreamSession&& value) { m_streamSession = std::move(value); }

    /**
     * <p>List of stream details.</p>
     */
    inline GetStreamSessionResult& WithStreamSession(const StreamSession& value) { SetStreamSession(value); return *this;}

    /**
     * <p>List of stream details.</p>
     */
    inline GetStreamSessionResult& WithStreamSession(StreamSession&& value) { SetStreamSession(std::move(value)); return *this;}

  private:

    StreamSession m_streamSession;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
