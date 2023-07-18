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
  class AWS_ECS_API UpdateCapacityProviderResult
  {
  public:
    UpdateCapacityProviderResult();
    UpdateCapacityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateCapacityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the capacity provider.</p>
     */
    inline const CapacityProvider& GetCapacityProvider() const{ return m_capacityProvider; }

    /**
     * <p>Details about the capacity provider.</p>
     */
    inline void SetCapacityProvider(const CapacityProvider& value) { m_capacityProvider = value; }

    /**
     * <p>Details about the capacity provider.</p>
     */
    inline void SetCapacityProvider(CapacityProvider&& value) { m_capacityProvider = std::move(value); }

    /**
     * <p>Details about the capacity provider.</p>
     */
    inline UpdateCapacityProviderResult& WithCapacityProvider(const CapacityProvider& value) { SetCapacityProvider(value); return *this;}

    /**
     * <p>Details about the capacity provider.</p>
     */
    inline UpdateCapacityProviderResult& WithCapacityProvider(CapacityProvider&& value) { SetCapacityProvider(std::move(value)); return *this;}

  private:

    CapacityProvider m_capacityProvider;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
