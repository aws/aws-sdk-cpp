/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetManagedScalingPolicyResult
  {
  public:
    AWS_EMR_API GetManagedScalingPolicyResult();
    AWS_EMR_API GetManagedScalingPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API GetManagedScalingPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the managed scaling policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline const ManagedScalingPolicy& GetManagedScalingPolicy() const{ return m_managedScalingPolicy; }

    /**
     * <p>Specifies the managed scaling policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline void SetManagedScalingPolicy(const ManagedScalingPolicy& value) { m_managedScalingPolicy = value; }

    /**
     * <p>Specifies the managed scaling policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline void SetManagedScalingPolicy(ManagedScalingPolicy&& value) { m_managedScalingPolicy = std::move(value); }

    /**
     * <p>Specifies the managed scaling policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline GetManagedScalingPolicyResult& WithManagedScalingPolicy(const ManagedScalingPolicy& value) { SetManagedScalingPolicy(value); return *this;}

    /**
     * <p>Specifies the managed scaling policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline GetManagedScalingPolicyResult& WithManagedScalingPolicy(ManagedScalingPolicy&& value) { SetManagedScalingPolicy(std::move(value)); return *this;}

  private:

    ManagedScalingPolicy m_managedScalingPolicy;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
