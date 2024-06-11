﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Session.h>
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
namespace Glue
{
namespace Model
{
  class GetSessionResult
  {
  public:
    AWS_GLUE_API GetSessionResult();
    AWS_GLUE_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The session object is returned in the response.</p>
     */
    inline const Session& GetSession() const{ return m_session; }
    inline void SetSession(const Session& value) { m_session = value; }
    inline void SetSession(Session&& value) { m_session = std::move(value); }
    inline GetSessionResult& WithSession(const Session& value) { SetSession(value); return *this;}
    inline GetSessionResult& WithSession(Session&& value) { SetSession(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Session m_session;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
