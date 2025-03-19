/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{
  class DisassociateServiceRoleFromAccountResult
  {
  public:
    AWS_GREENGRASS_API DisassociateServiceRoleFromAccountResult() = default;
    AWS_GREENGRASS_API DisassociateServiceRoleFromAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API DisassociateServiceRoleFromAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The time when the service role was disassociated from the account.
     */
    inline const Aws::String& GetDisassociatedAt() const { return m_disassociatedAt; }
    template<typename DisassociatedAtT = Aws::String>
    void SetDisassociatedAt(DisassociatedAtT&& value) { m_disassociatedAtHasBeenSet = true; m_disassociatedAt = std::forward<DisassociatedAtT>(value); }
    template<typename DisassociatedAtT = Aws::String>
    DisassociateServiceRoleFromAccountResult& WithDisassociatedAt(DisassociatedAtT&& value) { SetDisassociatedAt(std::forward<DisassociatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateServiceRoleFromAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_disassociatedAt;
    bool m_disassociatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
