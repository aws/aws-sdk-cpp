/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DEVICEFARM_API GetTestGridSessionResult
  {
  public:
    GetTestGridSessionResult();
    GetTestGridSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTestGridSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
