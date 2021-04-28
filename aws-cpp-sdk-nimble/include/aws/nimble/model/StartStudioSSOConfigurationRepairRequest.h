/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class AWS_NIMBLESTUDIO_API StartStudioSSOConfigurationRepairRequest : public NimbleStudioRequest
  {
  public:
    StartStudioSSOConfigurationRepairRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartStudioSSOConfigurationRepair"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline StartStudioSSOConfigurationRepairRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline StartStudioSSOConfigurationRepairRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline StartStudioSSOConfigurationRepairRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The studio ID.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The studio ID.</p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The studio ID.</p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The studio ID.</p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The studio ID.</p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The studio ID.</p>
     */
    inline StartStudioSSOConfigurationRepairRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The studio ID.</p>
     */
    inline StartStudioSSOConfigurationRepairRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The studio ID.</p>
     */
    inline StartStudioSSOConfigurationRepairRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
