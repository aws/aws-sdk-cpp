/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/AuthenticationType.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes an authorization configuration. Use <code>AuthMode</code> to
   * specify the publishing and subscription authorization configuration for an Event
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/AuthMode">AWS
   * API Reference</a></p>
   */
  class AuthMode
  {
  public:
    AWS_APPSYNC_API AuthMode() = default;
    AWS_APPSYNC_API AuthMode(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API AuthMode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization type.</p>
     */
    inline AuthenticationType GetAuthType() const { return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(AuthenticationType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline AuthMode& WithAuthType(AuthenticationType value) { SetAuthType(value); return *this;}
    ///@}
  private:

    AuthenticationType m_authType{AuthenticationType::NOT_SET};
    bool m_authTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
