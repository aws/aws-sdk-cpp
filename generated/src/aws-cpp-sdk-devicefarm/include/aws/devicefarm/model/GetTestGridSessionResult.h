/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/TestGridSession.h>
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
namespace DeviceFarm
{
namespace Model
{
  class GetTestGridSessionResult
  {
  public:
    AWS_DEVICEFARM_API GetTestGridSessionResult();
    AWS_DEVICEFARM_API GetTestGridSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetTestGridSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <a>TestGridSession</a> that was requested.</p>
     */
    inline const TestGridSession& GetTestGridSession() const{ return m_testGridSession; }

    /**
     * <p>The <a>TestGridSession</a> that was requested.</p>
     */
    inline void SetTestGridSession(const TestGridSession& value) { m_testGridSession = value; }

    /**
     * <p>The <a>TestGridSession</a> that was requested.</p>
     */
    inline void SetTestGridSession(TestGridSession&& value) { m_testGridSession = std::move(value); }

    /**
     * <p>The <a>TestGridSession</a> that was requested.</p>
     */
    inline GetTestGridSessionResult& WithTestGridSession(const TestGridSession& value) { SetTestGridSession(value); return *this;}

    /**
     * <p>The <a>TestGridSession</a> that was requested.</p>
     */
    inline GetTestGridSessionResult& WithTestGridSession(TestGridSession&& value) { SetTestGridSession(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTestGridSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTestGridSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTestGridSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TestGridSession m_testGridSession;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
