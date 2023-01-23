/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/CapacityProvider.h>
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
namespace ECS
{
namespace Model
{
  class CreateCapacityProviderResult
  {
  public:
    AWS_ECS_API CreateCapacityProviderResult();
    AWS_ECS_API CreateCapacityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API CreateCapacityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of the new capacity provider.</p>
     */
    inline const CapacityProvider& GetCapacityProvider() const{ return m_capacityProvider; }

    /**
     * <p>The full description of the new capacity provider.</p>
     */
    inline void SetCapacityProvider(const CapacityProvider& value) { m_capacityProvider = value; }

    /**
     * <p>The full description of the new capacity provider.</p>
     */
    inline void SetCapacityProvider(CapacityProvider&& value) { m_capacityProvider = std::move(value); }

    /**
     * <p>The full description of the new capacity provider.</p>
     */
    inline CreateCapacityProviderResult& WithCapacityProvider(const CapacityProvider& value) { SetCapacityProvider(value); return *this;}

    /**
     * <p>The full description of the new capacity provider.</p>
     */
    inline CreateCapacityProviderResult& WithCapacityProvider(CapacityProvider&& value) { SetCapacityProvider(std::move(value)); return *this;}

  private:

    CapacityProvider m_capacityProvider;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
