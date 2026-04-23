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
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_EFS_API DescribeLifecycleConfigurationResult
  {
  public:
    DescribeLifecycleConfigurationResult();
    DescribeLifecycleConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLifecycleConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of lifecycle management policies. Currently, EFS supports a maximum
     * of one policy per file system.</p>
     */
    inline const Aws::Vector<LifecyclePolicy>& GetLifecyclePolicies() const{ return m_lifecyclePolicies; }

    /**
     * <p>An array of lifecycle management policies. Currently, EFS supports a maximum
     * of one policy per file system.</p>
     */
    inline void SetLifecyclePolicies(const Aws::Vector<LifecyclePolicy>& value) { m_lifecyclePolicies = value; }

    /**
     * <p>An array of lifecycle management policies. Currently, EFS supports a maximum
     * of one policy per file system.</p>
     */
    inline void SetLifecyclePolicies(Aws::Vector<LifecyclePolicy>&& value) { m_lifecyclePolicies = std::move(value); }

    /**
     * <p>An array of lifecycle management policies. Currently, EFS supports a maximum
     * of one policy per file system.</p>
     */
    inline DescribeLifecycleConfigurationResult& WithLifecyclePolicies(const Aws::Vector<LifecyclePolicy>& value) { SetLifecyclePolicies(value); return *this;}

    /**
     * <p>An array of lifecycle management policies. Currently, EFS supports a maximum
     * of one policy per file system.</p>
     */
    inline DescribeLifecycleConfigurationResult& WithLifecyclePolicies(Aws::Vector<LifecyclePolicy>&& value) { SetLifecyclePolicies(std::move(value)); return *this;}

    /**
     * <p>An array of lifecycle management policies. Currently, EFS supports a maximum
     * of one policy per file system.</p>
     */
    inline DescribeLifecycleConfigurationResult& AddLifecyclePolicies(const LifecyclePolicy& value) { m_lifecyclePolicies.push_back(value); return *this; }

    /**
     * <p>An array of lifecycle management policies. Currently, EFS supports a maximum
     * of one policy per file system.</p>
     */
    inline DescribeLifecycleConfigurationResult& AddLifecyclePolicies(LifecyclePolicy&& value) { m_lifecyclePolicies.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LifecyclePolicy> m_lifecyclePolicies;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
