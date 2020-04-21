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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ManagedScalingPolicy.h>
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
namespace EMR
{
namespace Model
{
  class AWS_EMR_API GetManagedScalingPolicyResult
  {
  public:
    GetManagedScalingPolicyResult();
    GetManagedScalingPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetManagedScalingPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Specifies the managed scaling policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline const ManagedScalingPolicy& GetManagedScalingPolicy() const{ return m_managedScalingPolicy; }

    /**
     * <p> Specifies the managed scaling policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline void SetManagedScalingPolicy(const ManagedScalingPolicy& value) { m_managedScalingPolicy = value; }

    /**
     * <p> Specifies the managed scaling policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline void SetManagedScalingPolicy(ManagedScalingPolicy&& value) { m_managedScalingPolicy = std::move(value); }

    /**
     * <p> Specifies the managed scaling policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline GetManagedScalingPolicyResult& WithManagedScalingPolicy(const ManagedScalingPolicy& value) { SetManagedScalingPolicy(value); return *this;}

    /**
     * <p> Specifies the managed scaling policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline GetManagedScalingPolicyResult& WithManagedScalingPolicy(ManagedScalingPolicy&& value) { SetManagedScalingPolicy(std::move(value)); return *this;}

  private:

    ManagedScalingPolicy m_managedScalingPolicy;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
