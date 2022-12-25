/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkMail
{
namespace Model
{

  /**
   * <p>Describes an EWS based availability provider. This is only used as input to
   * the service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/EwsAvailabilityProvider">AWS
   * API Reference</a></p>
   */
  class EwsAvailabilityProvider
  {
  public:
    AWS_WORKMAIL_API EwsAvailabilityProvider();
    AWS_WORKMAIL_API EwsAvailabilityProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API EwsAvailabilityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint of the remote EWS server.</p>
     */
    inline const Aws::String& GetEwsEndpoint() const{ return m_ewsEndpoint; }

    /**
     * <p>The endpoint of the remote EWS server.</p>
     */
    inline bool EwsEndpointHasBeenSet() const { return m_ewsEndpointHasBeenSet; }

    /**
     * <p>The endpoint of the remote EWS server.</p>
     */
    inline void SetEwsEndpoint(const Aws::String& value) { m_ewsEndpointHasBeenSet = true; m_ewsEndpoint = value; }

    /**
     * <p>The endpoint of the remote EWS server.</p>
     */
    inline void SetEwsEndpoint(Aws::String&& value) { m_ewsEndpointHasBeenSet = true; m_ewsEndpoint = std::move(value); }

    /**
     * <p>The endpoint of the remote EWS server.</p>
     */
    inline void SetEwsEndpoint(const char* value) { m_ewsEndpointHasBeenSet = true; m_ewsEndpoint.assign(value); }

    /**
     * <p>The endpoint of the remote EWS server.</p>
     */
    inline EwsAvailabilityProvider& WithEwsEndpoint(const Aws::String& value) { SetEwsEndpoint(value); return *this;}

    /**
     * <p>The endpoint of the remote EWS server.</p>
     */
    inline EwsAvailabilityProvider& WithEwsEndpoint(Aws::String&& value) { SetEwsEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint of the remote EWS server.</p>
     */
    inline EwsAvailabilityProvider& WithEwsEndpoint(const char* value) { SetEwsEndpoint(value); return *this;}


    /**
     * <p>The username used to authenticate the remote EWS server.</p>
     */
    inline const Aws::String& GetEwsUsername() const{ return m_ewsUsername; }

    /**
     * <p>The username used to authenticate the remote EWS server.</p>
     */
    inline bool EwsUsernameHasBeenSet() const { return m_ewsUsernameHasBeenSet; }

    /**
     * <p>The username used to authenticate the remote EWS server.</p>
     */
    inline void SetEwsUsername(const Aws::String& value) { m_ewsUsernameHasBeenSet = true; m_ewsUsername = value; }

    /**
     * <p>The username used to authenticate the remote EWS server.</p>
     */
    inline void SetEwsUsername(Aws::String&& value) { m_ewsUsernameHasBeenSet = true; m_ewsUsername = std::move(value); }

    /**
     * <p>The username used to authenticate the remote EWS server.</p>
     */
    inline void SetEwsUsername(const char* value) { m_ewsUsernameHasBeenSet = true; m_ewsUsername.assign(value); }

    /**
     * <p>The username used to authenticate the remote EWS server.</p>
     */
    inline EwsAvailabilityProvider& WithEwsUsername(const Aws::String& value) { SetEwsUsername(value); return *this;}

    /**
     * <p>The username used to authenticate the remote EWS server.</p>
     */
    inline EwsAvailabilityProvider& WithEwsUsername(Aws::String&& value) { SetEwsUsername(std::move(value)); return *this;}

    /**
     * <p>The username used to authenticate the remote EWS server.</p>
     */
    inline EwsAvailabilityProvider& WithEwsUsername(const char* value) { SetEwsUsername(value); return *this;}


    /**
     * <p>The password used to authenticate the remote EWS server.</p>
     */
    inline const Aws::String& GetEwsPassword() const{ return m_ewsPassword; }

    /**
     * <p>The password used to authenticate the remote EWS server.</p>
     */
    inline bool EwsPasswordHasBeenSet() const { return m_ewsPasswordHasBeenSet; }

    /**
     * <p>The password used to authenticate the remote EWS server.</p>
     */
    inline void SetEwsPassword(const Aws::String& value) { m_ewsPasswordHasBeenSet = true; m_ewsPassword = value; }

    /**
     * <p>The password used to authenticate the remote EWS server.</p>
     */
    inline void SetEwsPassword(Aws::String&& value) { m_ewsPasswordHasBeenSet = true; m_ewsPassword = std::move(value); }

    /**
     * <p>The password used to authenticate the remote EWS server.</p>
     */
    inline void SetEwsPassword(const char* value) { m_ewsPasswordHasBeenSet = true; m_ewsPassword.assign(value); }

    /**
     * <p>The password used to authenticate the remote EWS server.</p>
     */
    inline EwsAvailabilityProvider& WithEwsPassword(const Aws::String& value) { SetEwsPassword(value); return *this;}

    /**
     * <p>The password used to authenticate the remote EWS server.</p>
     */
    inline EwsAvailabilityProvider& WithEwsPassword(Aws::String&& value) { SetEwsPassword(std::move(value)); return *this;}

    /**
     * <p>The password used to authenticate the remote EWS server.</p>
     */
    inline EwsAvailabilityProvider& WithEwsPassword(const char* value) { SetEwsPassword(value); return *this;}

  private:

    Aws::String m_ewsEndpoint;
    bool m_ewsEndpointHasBeenSet = false;

    Aws::String m_ewsUsername;
    bool m_ewsUsernameHasBeenSet = false;

    Aws::String m_ewsPassword;
    bool m_ewsPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
