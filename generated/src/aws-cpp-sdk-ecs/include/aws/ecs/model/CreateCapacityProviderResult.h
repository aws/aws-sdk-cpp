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
  class CreateCapacityProviderResult
  {
  public:
    AWS_ECS_API CreateCapacityProviderResult() = default;
    AWS_ECS_API CreateCapacityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API CreateCapacityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full description of the new capacity provider.</p>
     */
    inline const CapacityProvider& GetCapacityProvider() const { return m_capacityProvider; }
    template<typename CapacityProviderT = CapacityProvider>
    void SetCapacityProvider(CapacityProviderT&& value) { m_capacityProviderHasBeenSet = true; m_capacityProvider = std::forward<CapacityProviderT>(value); }
    template<typename CapacityProviderT = CapacityProvider>
    CreateCapacityProviderResult& WithCapacityProvider(CapacityProviderT&& value) { SetCapacityProvider(std::forward<CapacityProviderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCapacityProviderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CapacityProvider m_capacityProvider;
    bool m_capacityProviderHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
