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
  class DeleteRelayRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API DeleteRelayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRelay"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique relay identifier.</p>
     */
    inline const Aws::String& GetRelayId() const{ return m_relayId; }

    /**
     * <p>The unique relay identifier.</p>
     */
    inline bool RelayIdHasBeenSet() const { return m_relayIdHasBeenSet; }

    /**
     * <p>The unique relay identifier.</p>
     */
    inline void SetRelayId(const Aws::String& value) { m_relayIdHasBeenSet = true; m_relayId = value; }

    /**
     * <p>The unique relay identifier.</p>
     */
    inline void SetRelayId(Aws::String&& value) { m_relayIdHasBeenSet = true; m_relayId = std::move(value); }

    /**
     * <p>The unique relay identifier.</p>
     */
    inline void SetRelayId(const char* value) { m_relayIdHasBeenSet = true; m_relayId.assign(value); }

    /**
     * <p>The unique relay identifier.</p>
     */
    inline DeleteRelayRequest& WithRelayId(const Aws::String& value) { SetRelayId(value); return *this;}

    /**
     * <p>The unique relay identifier.</p>
     */
    inline DeleteRelayRequest& WithRelayId(Aws::String&& value) { SetRelayId(std::move(value)); return *this;}

    /**
     * <p>The unique relay identifier.</p>
     */
    inline DeleteRelayRequest& WithRelayId(const char* value) { SetRelayId(value); return *this;}

  private:

    Aws::String m_relayId;
    bool m_relayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
