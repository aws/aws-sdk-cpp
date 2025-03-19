/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class GetRelayRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API GetRelayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRelay"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique relay identifier.</p>
     */
    inline const Aws::String& GetRelayId() const { return m_relayId; }
    inline bool RelayIdHasBeenSet() const { return m_relayIdHasBeenSet; }
    template<typename RelayIdT = Aws::String>
    void SetRelayId(RelayIdT&& value) { m_relayIdHasBeenSet = true; m_relayId = std::forward<RelayIdT>(value); }
    template<typename RelayIdT = Aws::String>
    GetRelayRequest& WithRelayId(RelayIdT&& value) { SetRelayId(std::forward<RelayIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_relayId;
    bool m_relayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
