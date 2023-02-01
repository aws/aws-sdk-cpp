/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Suite.h>
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
   * <p>Represents the result of a get suite request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetSuiteResult">AWS
   * API Reference</a></p>
   */
  class GetSuiteResult
  {
  public:
    AWS_DEVICEFARM_API GetSuiteResult();
    AWS_DEVICEFARM_API GetSuiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetSuiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of one or more tests.</p>
     */
    inline const Suite& GetSuite() const{ return m_suite; }

    /**
     * <p>A collection of one or more tests.</p>
     */
    inline void SetSuite(const Suite& value) { m_suite = value; }

    /**
     * <p>A collection of one or more tests.</p>
     */
    inline void SetSuite(Suite&& value) { m_suite = std::move(value); }

    /**
     * <p>A collection of one or more tests.</p>
     */
    inline GetSuiteResult& WithSuite(const Suite& value) { SetSuite(value); return *this;}

    /**
     * <p>A collection of one or more tests.</p>
     */
    inline GetSuiteResult& WithSuite(Suite&& value) { SetSuite(std::move(value)); return *this;}

  private:

    Suite m_suite;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
