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
    AWS_GAMELIFT_API DescribeEC2InstanceLimitsResult() = default;
    AWS_GAMELIFT_API DescribeEC2InstanceLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeEC2InstanceLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The maximum number of instances for the specified instance type.</p>
     */
    inline const Aws::Vector<EC2InstanceLimit>& GetEC2InstanceLimits() const { return m_eC2InstanceLimits; }
    template<typename EC2InstanceLimitsT = Aws::Vector<EC2InstanceLimit>>
    void SetEC2InstanceLimits(EC2InstanceLimitsT&& value) { m_eC2InstanceLimitsHasBeenSet = true; m_eC2InstanceLimits = std::forward<EC2InstanceLimitsT>(value); }
    template<typename EC2InstanceLimitsT = Aws::Vector<EC2InstanceLimit>>
    DescribeEC2InstanceLimitsResult& WithEC2InstanceLimits(EC2InstanceLimitsT&& value) { SetEC2InstanceLimits(std::forward<EC2InstanceLimitsT>(value)); return *this;}
    template<typename EC2InstanceLimitsT = EC2InstanceLimit>
    DescribeEC2InstanceLimitsResult& AddEC2InstanceLimits(EC2InstanceLimitsT&& value) { m_eC2InstanceLimitsHasBeenSet = true; m_eC2InstanceLimits.emplace_back(std::forward<EC2InstanceLimitsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEC2InstanceLimitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EC2InstanceLimit> m_eC2InstanceLimits;
    bool m_eC2InstanceLimitsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
