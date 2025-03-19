/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/LifecyclePolicy.h>
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
namespace EFS
{
namespace Model
{
  class DescribeLifecycleConfigurationResult
  {
  public:
    AWS_EFS_API DescribeLifecycleConfigurationResult() = default;
    AWS_EFS_API DescribeLifecycleConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeLifecycleConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of lifecycle management policies. EFS supports a maximum of one
     * policy per file system.</p>
     */
    inline const Aws::Vector<LifecyclePolicy>& GetLifecyclePolicies() const { return m_lifecyclePolicies; }
    template<typename LifecyclePoliciesT = Aws::Vector<LifecyclePolicy>>
    void SetLifecyclePolicies(LifecyclePoliciesT&& value) { m_lifecyclePoliciesHasBeenSet = true; m_lifecyclePolicies = std::forward<LifecyclePoliciesT>(value); }
    template<typename LifecyclePoliciesT = Aws::Vector<LifecyclePolicy>>
    DescribeLifecycleConfigurationResult& WithLifecyclePolicies(LifecyclePoliciesT&& value) { SetLifecyclePolicies(std::forward<LifecyclePoliciesT>(value)); return *this;}
    template<typename LifecyclePoliciesT = LifecyclePolicy>
    DescribeLifecycleConfigurationResult& AddLifecyclePolicies(LifecyclePoliciesT&& value) { m_lifecyclePoliciesHasBeenSet = true; m_lifecyclePolicies.emplace_back(std::forward<LifecyclePoliciesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLifecycleConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LifecyclePolicy> m_lifecyclePolicies;
    bool m_lifecyclePoliciesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
