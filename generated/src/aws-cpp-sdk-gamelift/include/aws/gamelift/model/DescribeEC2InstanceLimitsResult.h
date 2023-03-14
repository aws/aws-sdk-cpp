/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeEC2InstanceLimitsResult
  {
  public:
    AWS_GAMELIFT_API DescribeEC2InstanceLimitsResult();
    AWS_GAMELIFT_API DescribeEC2InstanceLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeEC2InstanceLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The maximum number of instances for the specified instance type.</p>
     */
    inline const Aws::Vector<EC2InstanceLimit>& GetEC2InstanceLimits() const{ return m_eC2InstanceLimits; }

    /**
     * <p>The maximum number of instances for the specified instance type.</p>
     */
    inline void SetEC2InstanceLimits(const Aws::Vector<EC2InstanceLimit>& value) { m_eC2InstanceLimits = value; }

    /**
     * <p>The maximum number of instances for the specified instance type.</p>
     */
    inline void SetEC2InstanceLimits(Aws::Vector<EC2InstanceLimit>&& value) { m_eC2InstanceLimits = std::move(value); }

    /**
     * <p>The maximum number of instances for the specified instance type.</p>
     */
    inline DescribeEC2InstanceLimitsResult& WithEC2InstanceLimits(const Aws::Vector<EC2InstanceLimit>& value) { SetEC2InstanceLimits(value); return *this;}

    /**
     * <p>The maximum number of instances for the specified instance type.</p>
     */
    inline DescribeEC2InstanceLimitsResult& WithEC2InstanceLimits(Aws::Vector<EC2InstanceLimit>&& value) { SetEC2InstanceLimits(std::move(value)); return *this;}

    /**
     * <p>The maximum number of instances for the specified instance type.</p>
     */
    inline DescribeEC2InstanceLimitsResult& AddEC2InstanceLimits(const EC2InstanceLimit& value) { m_eC2InstanceLimits.push_back(value); return *this; }

    /**
     * <p>The maximum number of instances for the specified instance type.</p>
     */
    inline DescribeEC2InstanceLimitsResult& AddEC2InstanceLimits(EC2InstanceLimit&& value) { m_eC2InstanceLimits.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEC2InstanceLimitsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEC2InstanceLimitsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEC2InstanceLimitsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EC2InstanceLimit> m_eC2InstanceLimits;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
