/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class StartContactStreamingResult
  {
  public:
    AWS_CONNECT_API StartContactStreamingResult();
    AWS_CONNECT_API StartContactStreamingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API StartContactStreamingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline const Aws::String& GetStreamingId() const{ return m_streamingId; }

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline void SetStreamingId(const Aws::String& value) { m_streamingId = value; }

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline void SetStreamingId(Aws::String&& value) { m_streamingId = std::move(value); }

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline void SetStreamingId(const char* value) { m_streamingId.assign(value); }

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline StartContactStreamingResult& WithStreamingId(const Aws::String& value) { SetStreamingId(value); return *this;}

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline StartContactStreamingResult& WithStreamingId(Aws::String&& value) { SetStreamingId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline StartContactStreamingResult& WithStreamingId(const char* value) { SetStreamingId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartContactStreamingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartContactStreamingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartContactStreamingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_streamingId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
