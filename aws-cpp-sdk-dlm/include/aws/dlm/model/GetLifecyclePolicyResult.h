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
  class AWS_DLM_API GetLifecyclePolicyResult
  {
  public:
    GetLifecyclePolicyResult();
    GetLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
