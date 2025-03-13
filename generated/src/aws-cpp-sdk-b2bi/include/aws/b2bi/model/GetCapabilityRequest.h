/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class GetCapabilityRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API GetCapabilityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCapability"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies a system-assigned unique identifier for the capability.</p>
     */
    inline const Aws::String& GetCapabilityId() const { return m_capabilityId; }
    inline bool CapabilityIdHasBeenSet() const { return m_capabilityIdHasBeenSet; }
    template<typename CapabilityIdT = Aws::String>
    void SetCapabilityId(CapabilityIdT&& value) { m_capabilityIdHasBeenSet = true; m_capabilityId = std::forward<CapabilityIdT>(value); }
    template<typename CapabilityIdT = Aws::String>
    GetCapabilityRequest& WithCapabilityId(CapabilityIdT&& value) { SetCapabilityId(std::forward<CapabilityIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capabilityId;
    bool m_capabilityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
