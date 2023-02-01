/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/ConnectParticipantRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

  /**
   */
  class DisconnectParticipantRequest : public ConnectParticipantRequest
  {
  public:
    AWS_CONNECTPARTICIPANT_API DisconnectParticipantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisconnectParticipant"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline DisconnectParticipantRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline DisconnectParticipantRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline DisconnectParticipantRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline const Aws::String& GetConnectionToken() const{ return m_connectionToken; }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline void SetConnectionToken(const Aws::String& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = value; }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline void SetConnectionToken(Aws::String&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::move(value); }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline void SetConnectionToken(const char* value) { m_connectionTokenHasBeenSet = true; m_connectionToken.assign(value); }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline DisconnectParticipantRequest& WithConnectionToken(const Aws::String& value) { SetConnectionToken(value); return *this;}

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline DisconnectParticipantRequest& WithConnectionToken(Aws::String&& value) { SetConnectionToken(std::move(value)); return *this;}

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline DisconnectParticipantRequest& WithConnectionToken(const char* value) { SetConnectionToken(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
