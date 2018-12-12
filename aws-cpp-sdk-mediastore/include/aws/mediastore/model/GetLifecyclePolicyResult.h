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
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaStore
{
namespace Model
{
  class AWS_MEDIASTORE_API GetLifecyclePolicyResult
  {
  public:
    GetLifecyclePolicyResult();
    GetLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline const Aws::String& GetLifecyclePolicy() const{ return m_lifecyclePolicy; }

    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline void SetLifecyclePolicy(const Aws::String& value) { m_lifecyclePolicy = value; }

    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline void SetLifecyclePolicy(Aws::String&& value) { m_lifecyclePolicy = std::move(value); }

    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline void SetLifecyclePolicy(const char* value) { m_lifecyclePolicy.assign(value); }

    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline GetLifecyclePolicyResult& WithLifecyclePolicy(const Aws::String& value) { SetLifecyclePolicy(value); return *this;}

    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline GetLifecyclePolicyResult& WithLifecyclePolicy(Aws::String&& value) { SetLifecyclePolicy(std::move(value)); return *this;}

    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline GetLifecyclePolicyResult& WithLifecyclePolicy(const char* value) { SetLifecyclePolicy(value); return *this;}

  private:

    Aws::String m_lifecyclePolicy;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
