/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes a refresh token.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/RefreshTokenRequestBody">AWS
   * API Reference</a></p>
   */
  class RefreshTokenRequestBody
  {
  public:
    AWS_AMPLIFYUIBUILDER_API RefreshTokenRequestBody();
    AWS_AMPLIFYUIBUILDER_API RefreshTokenRequestBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API RefreshTokenRequestBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline RefreshTokenRequestBody& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline RefreshTokenRequestBody& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline RefreshTokenRequestBody& WithToken(const char* value) { SetToken(value); return *this;}

  private:

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
