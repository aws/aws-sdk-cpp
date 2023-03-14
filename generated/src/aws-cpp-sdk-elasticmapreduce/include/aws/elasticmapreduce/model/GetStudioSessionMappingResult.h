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
    AWS_EMR_API GetStudioSessionMappingResult();
    AWS_EMR_API GetStudioSessionMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API GetStudioSessionMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The session mapping details for the specified Amazon EMR Studio and identity,
     * including session policy ARN and creation time.</p>
     */
    inline const SessionMappingDetail& GetSessionMapping() const{ return m_sessionMapping; }

    /**
     * <p>The session mapping details for the specified Amazon EMR Studio and identity,
     * including session policy ARN and creation time.</p>
     */
    inline void SetSessionMapping(const SessionMappingDetail& value) { m_sessionMapping = value; }

    /**
     * <p>The session mapping details for the specified Amazon EMR Studio and identity,
     * including session policy ARN and creation time.</p>
     */
    inline void SetSessionMapping(SessionMappingDetail&& value) { m_sessionMapping = std::move(value); }

    /**
     * <p>The session mapping details for the specified Amazon EMR Studio and identity,
     * including session policy ARN and creation time.</p>
     */
    inline GetStudioSessionMappingResult& WithSessionMapping(const SessionMappingDetail& value) { SetSessionMapping(value); return *this;}

    /**
     * <p>The session mapping details for the specified Amazon EMR Studio and identity,
     * including session policy ARN and creation time.</p>
     */
    inline GetStudioSessionMappingResult& WithSessionMapping(SessionMappingDetail&& value) { SetSessionMapping(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetStudioSessionMappingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetStudioSessionMappingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetStudioSessionMappingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SessionMappingDetail m_sessionMapping;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
