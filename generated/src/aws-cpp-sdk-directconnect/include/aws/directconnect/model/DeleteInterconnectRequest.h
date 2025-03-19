/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class DeleteInterconnectRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API DeleteInterconnectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInterconnect"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the interconnect.</p>
     */
    inline const Aws::String& GetInterconnectId() const { return m_interconnectId; }
    inline bool InterconnectIdHasBeenSet() const { return m_interconnectIdHasBeenSet; }
    template<typename InterconnectIdT = Aws::String>
    void SetInterconnectId(InterconnectIdT&& value) { m_interconnectIdHasBeenSet = true; m_interconnectId = std::forward<InterconnectIdT>(value); }
    template<typename InterconnectIdT = Aws::String>
    DeleteInterconnectRequest& WithInterconnectId(InterconnectIdT&& value) { SetInterconnectId(std::forward<InterconnectIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_interconnectId;
    bool m_interconnectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
