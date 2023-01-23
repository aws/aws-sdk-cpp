/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetTestResult
  {
  public:
    AWS_DEVICEFARM_API GetTestResult();
    AWS_DEVICEFARM_API GetTestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetTestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
