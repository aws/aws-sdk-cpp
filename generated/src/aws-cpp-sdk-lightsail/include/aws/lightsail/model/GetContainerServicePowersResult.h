/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ContainerServicePower.h>
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
namespace Lightsail
{
namespace Model
{
  class GetContainerServicePowersResult
  {
  public:
    AWS_LIGHTSAIL_API GetContainerServicePowersResult() = default;
    AWS_LIGHTSAIL_API GetContainerServicePowersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetContainerServicePowersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe the powers that can be specified for a
     * container service.</p>
     */
    inline const Aws::Vector<ContainerServicePower>& GetPowers() const { return m_powers; }
    template<typename PowersT = Aws::Vector<ContainerServicePower>>
    void SetPowers(PowersT&& value) { m_powersHasBeenSet = true; m_powers = std::forward<PowersT>(value); }
    template<typename PowersT = Aws::Vector<ContainerServicePower>>
    GetContainerServicePowersResult& WithPowers(PowersT&& value) { SetPowers(std::forward<PowersT>(value)); return *this;}
    template<typename PowersT = ContainerServicePower>
    GetContainerServicePowersResult& AddPowers(PowersT&& value) { m_powersHasBeenSet = true; m_powers.emplace_back(std::forward<PowersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetContainerServicePowersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerServicePower> m_powers;
    bool m_powersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
