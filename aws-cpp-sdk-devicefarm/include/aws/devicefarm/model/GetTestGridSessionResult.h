/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/TestGridSession.h>
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

  private:

    TestGridSession m_testGridSession;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
