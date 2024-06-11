﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Lightsail
{
namespace Model
{
  class GetRelationalDatabaseLogStreamsResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogStreamsResult();
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object describing the result of your get relational database log streams
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogStreams() const{ return m_logStreams; }
    inline void SetLogStreams(const Aws::Vector<Aws::String>& value) { m_logStreams = value; }
    inline void SetLogStreams(Aws::Vector<Aws::String>&& value) { m_logStreams = std::move(value); }
    inline GetRelationalDatabaseLogStreamsResult& WithLogStreams(const Aws::Vector<Aws::String>& value) { SetLogStreams(value); return *this;}
    inline GetRelationalDatabaseLogStreamsResult& WithLogStreams(Aws::Vector<Aws::String>&& value) { SetLogStreams(std::move(value)); return *this;}
    inline GetRelationalDatabaseLogStreamsResult& AddLogStreams(const Aws::String& value) { m_logStreams.push_back(value); return *this; }
    inline GetRelationalDatabaseLogStreamsResult& AddLogStreams(Aws::String&& value) { m_logStreams.push_back(std::move(value)); return *this; }
    inline GetRelationalDatabaseLogStreamsResult& AddLogStreams(const char* value) { m_logStreams.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRelationalDatabaseLogStreamsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRelationalDatabaseLogStreamsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRelationalDatabaseLogStreamsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_logStreams;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
