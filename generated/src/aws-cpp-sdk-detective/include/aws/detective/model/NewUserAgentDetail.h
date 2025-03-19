/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details new user agents used either at the resource or account
   * level.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/NewUserAgentDetail">AWS
   * API Reference</a></p>
   */
  class NewUserAgentDetail
  {
  public:
    AWS_DETECTIVE_API NewUserAgentDetail() = default;
    AWS_DETECTIVE_API NewUserAgentDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API NewUserAgentDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>New user agent which accessed the resource.</p>
     */
    inline const Aws::String& GetUserAgent() const { return m_userAgent; }
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
    template<typename UserAgentT = Aws::String>
    void SetUserAgent(UserAgentT&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::forward<UserAgentT>(value); }
    template<typename UserAgentT = Aws::String>
    NewUserAgentDetail& WithUserAgent(UserAgentT&& value) { SetUserAgent(std::forward<UserAgentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks if the user agent is new for the entire account.</p>
     */
    inline bool GetIsNewForEntireAccount() const { return m_isNewForEntireAccount; }
    inline bool IsNewForEntireAccountHasBeenSet() const { return m_isNewForEntireAccountHasBeenSet; }
    inline void SetIsNewForEntireAccount(bool value) { m_isNewForEntireAccountHasBeenSet = true; m_isNewForEntireAccount = value; }
    inline NewUserAgentDetail& WithIsNewForEntireAccount(bool value) { SetIsNewForEntireAccount(value); return *this;}
    ///@}
  private:

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet = false;

    bool m_isNewForEntireAccount{false};
    bool m_isNewForEntireAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
