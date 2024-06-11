﻿/**
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
    AWS_EFS_API DescribeLifecycleConfigurationResult();
    AWS_EFS_API DescribeLifecycleConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeLifecycleConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of lifecycle management policies. EFS supports a maximum of one
     * policy per file system.</p>
     */
    inline const Aws::Vector<LifecyclePolicy>& GetLifecyclePolicies() const{ return m_lifecyclePolicies; }
    inline void SetLifecyclePolicies(const Aws::Vector<LifecyclePolicy>& value) { m_lifecyclePolicies = value; }
    inline void SetLifecyclePolicies(Aws::Vector<LifecyclePolicy>&& value) { m_lifecyclePolicies = std::move(value); }
    inline DescribeLifecycleConfigurationResult& WithLifecyclePolicies(const Aws::Vector<LifecyclePolicy>& value) { SetLifecyclePolicies(value); return *this;}
    inline DescribeLifecycleConfigurationResult& WithLifecyclePolicies(Aws::Vector<LifecyclePolicy>&& value) { SetLifecyclePolicies(std::move(value)); return *this;}
    inline DescribeLifecycleConfigurationResult& AddLifecyclePolicies(const LifecyclePolicy& value) { m_lifecyclePolicies.push_back(value); return *this; }
    inline DescribeLifecycleConfigurationResult& AddLifecyclePolicies(LifecyclePolicy&& value) { m_lifecyclePolicies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLifecycleConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLifecycleConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLifecycleConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LifecyclePolicy> m_lifecyclePolicies;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
