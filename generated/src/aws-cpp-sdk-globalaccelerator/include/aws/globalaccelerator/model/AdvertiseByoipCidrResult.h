/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/ByoipCidr.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class AdvertiseByoipCidrResult
  {
  public:
    AWS_GLOBALACCELERATOR_API AdvertiseByoipCidrResult() = default;
    AWS_GLOBALACCELERATOR_API AdvertiseByoipCidrResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API AdvertiseByoipCidrResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the address range.</p>
     */
    inline const ByoipCidr& GetByoipCidr() const { return m_byoipCidr; }
    template<typename ByoipCidrT = ByoipCidr>
    void SetByoipCidr(ByoipCidrT&& value) { m_byoipCidrHasBeenSet = true; m_byoipCidr = std::forward<ByoipCidrT>(value); }
    template<typename ByoipCidrT = ByoipCidr>
    AdvertiseByoipCidrResult& WithByoipCidr(ByoipCidrT&& value) { SetByoipCidr(std::forward<ByoipCidrT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AdvertiseByoipCidrResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ByoipCidr m_byoipCidr;
    bool m_byoipCidrHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
