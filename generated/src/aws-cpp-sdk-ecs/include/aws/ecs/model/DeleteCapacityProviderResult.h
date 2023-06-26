/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/CapacityProvider.h>
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
namespace ECS
{
namespace Model
{
  class DeleteCapacityProviderResult
  {
  public:
    AWS_ECS_API DeleteCapacityProviderResult();
    AWS_ECS_API DeleteCapacityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DeleteCapacityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the capacity provider.</p>
     */
    inline const CapacityProvider& GetCapacityProvider() const{ return m_capacityProvider; }

    /**
     * <p>The details of the capacity provider.</p>
     */
    inline void SetCapacityProvider(const CapacityProvider& value) { m_capacityProvider = value; }

    /**
     * <p>The details of the capacity provider.</p>
     */
    inline void SetCapacityProvider(CapacityProvider&& value) { m_capacityProvider = std::move(value); }

    /**
     * <p>The details of the capacity provider.</p>
     */
    inline DeleteCapacityProviderResult& WithCapacityProvider(const CapacityProvider& value) { SetCapacityProvider(value); return *this;}

    /**
     * <p>The details of the capacity provider.</p>
     */
    inline DeleteCapacityProviderResult& WithCapacityProvider(CapacityProvider&& value) { SetCapacityProvider(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteCapacityProviderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteCapacityProviderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteCapacityProviderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CapacityProvider m_capacityProvider;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
