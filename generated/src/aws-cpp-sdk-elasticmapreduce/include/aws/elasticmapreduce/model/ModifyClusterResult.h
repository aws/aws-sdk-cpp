/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

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
  class ModifyClusterResult
  {
  public:
    AWS_EMR_API ModifyClusterResult();
    AWS_EMR_API ModifyClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ModifyClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of steps that can be executed concurrently.</p>
     */
    inline int GetStepConcurrencyLevel() const{ return m_stepConcurrencyLevel; }

    /**
     * <p>The number of steps that can be executed concurrently.</p>
     */
    inline void SetStepConcurrencyLevel(int value) { m_stepConcurrencyLevel = value; }

    /**
     * <p>The number of steps that can be executed concurrently.</p>
     */
    inline ModifyClusterResult& WithStepConcurrencyLevel(int value) { SetStepConcurrencyLevel(value); return *this;}

  private:

    int m_stepConcurrencyLevel;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
