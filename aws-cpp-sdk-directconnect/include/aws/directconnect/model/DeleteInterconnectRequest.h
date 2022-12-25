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
    AWS_DIRECTCONNECT_API DeleteInterconnectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInterconnect"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the interconnect.</p>
     */
    inline const Aws::String& GetInterconnectId() const{ return m_interconnectId; }

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline bool InterconnectIdHasBeenSet() const { return m_interconnectIdHasBeenSet; }

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline void SetInterconnectId(const Aws::String& value) { m_interconnectIdHasBeenSet = true; m_interconnectId = value; }

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline void SetInterconnectId(Aws::String&& value) { m_interconnectIdHasBeenSet = true; m_interconnectId = std::move(value); }

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline void SetInterconnectId(const char* value) { m_interconnectIdHasBeenSet = true; m_interconnectId.assign(value); }

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline DeleteInterconnectRequest& WithInterconnectId(const Aws::String& value) { SetInterconnectId(value); return *this;}

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline DeleteInterconnectRequest& WithInterconnectId(Aws::String&& value) { SetInterconnectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline DeleteInterconnectRequest& WithInterconnectId(const char* value) { SetInterconnectId(value); return *this;}

  private:

    Aws::String m_interconnectId;
    bool m_interconnectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
