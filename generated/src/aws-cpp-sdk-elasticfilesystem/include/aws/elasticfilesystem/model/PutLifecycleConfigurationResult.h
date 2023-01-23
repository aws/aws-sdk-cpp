/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PutLifecycleConfigurationResult
  {
  public:
    AWS_EFS_API PutLifecycleConfigurationResult();
    AWS_EFS_API PutLifecycleConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API PutLifecycleConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of lifecycle management policies. EFS supports a maximum of one
     * policy per file system.</p>
     */
    inline const Aws::Vector<LifecyclePolicy>& GetLifecyclePolicies() const{ return m_lifecyclePolicies; }

    /**
     * <p>An array of lifecycle management policies. EFS supports a maximum of one
     * policy per file system.</p>
     */
    inline void SetLifecyclePolicies(const Aws::Vector<LifecyclePolicy>& value) { m_lifecyclePolicies = value; }

    /**
     * <p>An array of lifecycle management policies. EFS supports a maximum of one
     * policy per file system.</p>
     */
    inline void SetLifecyclePolicies(Aws::Vector<LifecyclePolicy>&& value) { m_lifecyclePolicies = std::move(value); }

    /**
     * <p>An array of lifecycle management policies. EFS supports a maximum of one
     * policy per file system.</p>
     */
    inline PutLifecycleConfigurationResult& WithLifecyclePolicies(const Aws::Vector<LifecyclePolicy>& value) { SetLifecyclePolicies(value); return *this;}

    /**
     * <p>An array of lifecycle management policies. EFS supports a maximum of one
     * policy per file system.</p>
     */
    inline PutLifecycleConfigurationResult& WithLifecyclePolicies(Aws::Vector<LifecyclePolicy>&& value) { SetLifecyclePolicies(std::move(value)); return *this;}

    /**
     * <p>An array of lifecycle management policies. EFS supports a maximum of one
     * policy per file system.</p>
     */
    inline PutLifecycleConfigurationResult& AddLifecyclePolicies(const LifecyclePolicy& value) { m_lifecyclePolicies.push_back(value); return *this; }

    /**
     * <p>An array of lifecycle management policies. EFS supports a maximum of one
     * policy per file system.</p>
     */
    inline PutLifecycleConfigurationResult& AddLifecyclePolicies(LifecyclePolicy&& value) { m_lifecyclePolicies.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LifecyclePolicy> m_lifecyclePolicies;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
