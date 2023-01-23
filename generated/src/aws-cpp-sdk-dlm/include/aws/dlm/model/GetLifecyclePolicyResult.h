/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/LifecyclePolicy.h>
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
namespace DLM
{
namespace Model
{
  class GetLifecyclePolicyResult
  {
  public:
    AWS_DLM_API GetLifecyclePolicyResult();
    AWS_DLM_API GetLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DLM_API GetLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Detailed information about the lifecycle policy.</p>
     */
    inline const LifecyclePolicy& GetPolicy() const{ return m_policy; }

    /**
     * <p>Detailed information about the lifecycle policy.</p>
     */
    inline void SetPolicy(const LifecyclePolicy& value) { m_policy = value; }

    /**
     * <p>Detailed information about the lifecycle policy.</p>
     */
    inline void SetPolicy(LifecyclePolicy&& value) { m_policy = std::move(value); }

    /**
     * <p>Detailed information about the lifecycle policy.</p>
     */
    inline GetLifecyclePolicyResult& WithPolicy(const LifecyclePolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p>Detailed information about the lifecycle policy.</p>
     */
    inline GetLifecyclePolicyResult& WithPolicy(LifecyclePolicy&& value) { SetPolicy(std::move(value)); return *this;}

  private:

    LifecyclePolicy m_policy;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
