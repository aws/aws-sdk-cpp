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
#include <aws/devicefarm/model/Test.h>
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
  /**
   * <p>Represents the result of a get test request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTestResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API GetTestResult
  {
  public:
    GetTestResult();
    GetTestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A test condition that is evaluated.</p>
     */
    inline const Test& GetTest() const{ return m_test; }

    /**
     * <p>A test condition that is evaluated.</p>
     */
    inline void SetTest(const Test& value) { m_test = value; }

    /**
     * <p>A test condition that is evaluated.</p>
     */
    inline void SetTest(Test&& value) { m_test = std::move(value); }

    /**
     * <p>A test condition that is evaluated.</p>
     */
    inline GetTestResult& WithTest(const Test& value) { SetTest(value); return *this;}

    /**
     * <p>A test condition that is evaluated.</p>
     */
    inline GetTestResult& WithTest(Test&& value) { SetTest(std::move(value)); return *this;}

  private:

    Test m_test;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
