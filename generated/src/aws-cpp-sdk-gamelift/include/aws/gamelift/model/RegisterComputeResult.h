/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Compute.h>
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
namespace GameLift
{
namespace Model
{
  class RegisterComputeResult
  {
  public:
    AWS_GAMELIFT_API RegisterComputeResult();
    AWS_GAMELIFT_API RegisterComputeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API RegisterComputeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the compute resource you registered to the specified
     * fleet.</p>
     */
    inline const Compute& GetCompute() const{ return m_compute; }

    /**
     * <p>The details of the compute resource you registered to the specified
     * fleet.</p>
     */
    inline void SetCompute(const Compute& value) { m_compute = value; }

    /**
     * <p>The details of the compute resource you registered to the specified
     * fleet.</p>
     */
    inline void SetCompute(Compute&& value) { m_compute = std::move(value); }

    /**
     * <p>The details of the compute resource you registered to the specified
     * fleet.</p>
     */
    inline RegisterComputeResult& WithCompute(const Compute& value) { SetCompute(value); return *this;}

    /**
     * <p>The details of the compute resource you registered to the specified
     * fleet.</p>
     */
    inline RegisterComputeResult& WithCompute(Compute&& value) { SetCompute(std::move(value)); return *this;}

  private:

    Compute m_compute;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
