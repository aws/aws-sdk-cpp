/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Entitlement.h>
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
namespace AppStream
{
namespace Model
{
  class CreateEntitlementResult
  {
  public:
    AWS_APPSTREAM_API CreateEntitlementResult() = default;
    AWS_APPSTREAM_API CreateEntitlementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateEntitlementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The entitlement.</p>
     */
    inline const Entitlement& GetEntitlement() const { return m_entitlement; }
    template<typename EntitlementT = Entitlement>
    void SetEntitlement(EntitlementT&& value) { m_entitlementHasBeenSet = true; m_entitlement = std::forward<EntitlementT>(value); }
    template<typename EntitlementT = Entitlement>
    CreateEntitlementResult& WithEntitlement(EntitlementT&& value) { SetEntitlement(std::forward<EntitlementT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEntitlementResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Entitlement m_entitlement;
    bool m_entitlementHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
