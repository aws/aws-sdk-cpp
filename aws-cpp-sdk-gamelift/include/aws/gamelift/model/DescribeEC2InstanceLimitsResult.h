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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/EC2InstanceLimit.h>
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
namespace GameLift
{
namespace Model
{
  /**
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeEC2InstanceLimitsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeEC2InstanceLimitsResult
  {
  public:
    DescribeEC2InstanceLimitsResult();
    DescribeEC2InstanceLimitsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEC2InstanceLimitsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Object that contains the maximum number of instances for the specified
     * instance type.</p>
     */
    inline const Aws::Vector<EC2InstanceLimit>& GetEC2InstanceLimits() const{ return m_eC2InstanceLimits; }

    /**
     * <p>Object that contains the maximum number of instances for the specified
     * instance type.</p>
     */
    inline void SetEC2InstanceLimits(const Aws::Vector<EC2InstanceLimit>& value) { m_eC2InstanceLimits = value; }

    /**
     * <p>Object that contains the maximum number of instances for the specified
     * instance type.</p>
     */
    inline void SetEC2InstanceLimits(Aws::Vector<EC2InstanceLimit>&& value) { m_eC2InstanceLimits = std::move(value); }

    /**
     * <p>Object that contains the maximum number of instances for the specified
     * instance type.</p>
     */
    inline DescribeEC2InstanceLimitsResult& WithEC2InstanceLimits(const Aws::Vector<EC2InstanceLimit>& value) { SetEC2InstanceLimits(value); return *this;}

    /**
     * <p>Object that contains the maximum number of instances for the specified
     * instance type.</p>
     */
    inline DescribeEC2InstanceLimitsResult& WithEC2InstanceLimits(Aws::Vector<EC2InstanceLimit>&& value) { SetEC2InstanceLimits(std::move(value)); return *this;}

    /**
     * <p>Object that contains the maximum number of instances for the specified
     * instance type.</p>
     */
    inline DescribeEC2InstanceLimitsResult& AddEC2InstanceLimits(const EC2InstanceLimit& value) { m_eC2InstanceLimits.push_back(value); return *this; }

    /**
     * <p>Object that contains the maximum number of instances for the specified
     * instance type.</p>
     */
    inline DescribeEC2InstanceLimitsResult& AddEC2InstanceLimits(EC2InstanceLimit&& value) { m_eC2InstanceLimits.push_back(std::move(value)); return *this; }

  private:
    Aws::Vector<EC2InstanceLimit> m_eC2InstanceLimits;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
