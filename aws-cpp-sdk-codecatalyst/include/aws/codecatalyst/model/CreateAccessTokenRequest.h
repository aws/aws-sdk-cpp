/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class CreateAccessTokenRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API CreateAccessTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessToken"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;


    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline CreateAccessTokenRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline CreateAccessTokenRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline CreateAccessTokenRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The date and time the personal access token expires, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresTime() const{ return m_expiresTime; }

    /**
     * <p>The date and time the personal access token expires, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline bool ExpiresTimeHasBeenSet() const { return m_expiresTimeHasBeenSet; }

    /**
     * <p>The date and time the personal access token expires, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetExpiresTime(const Aws::Utils::DateTime& value) { m_expiresTimeHasBeenSet = true; m_expiresTime = value; }

    /**
     * <p>The date and time the personal access token expires, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetExpiresTime(Aws::Utils::DateTime&& value) { m_expiresTimeHasBeenSet = true; m_expiresTime = std::move(value); }

    /**
     * <p>The date and time the personal access token expires, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline CreateAccessTokenRequest& WithExpiresTime(const Aws::Utils::DateTime& value) { SetExpiresTime(value); return *this;}

    /**
     * <p>The date and time the personal access token expires, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline CreateAccessTokenRequest& WithExpiresTime(Aws::Utils::DateTime&& value) { SetExpiresTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_expiresTime;
    bool m_expiresTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
