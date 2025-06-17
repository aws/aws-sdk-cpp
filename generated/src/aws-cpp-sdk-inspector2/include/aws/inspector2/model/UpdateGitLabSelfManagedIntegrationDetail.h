/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains details required to update an integration with a self-managed GitLab
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateGitLabSelfManagedIntegrationDetail">AWS
   * API Reference</a></p>
   */
  class UpdateGitLabSelfManagedIntegrationDetail
  {
  public:
    AWS_INSPECTOR2_API UpdateGitLabSelfManagedIntegrationDetail() = default;
    AWS_INSPECTOR2_API UpdateGitLabSelfManagedIntegrationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API UpdateGitLabSelfManagedIntegrationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization code received from the self-managed GitLab instance to
     * update the integration.</p>
     */
    inline const Aws::String& GetAuthCode() const { return m_authCode; }
    inline bool AuthCodeHasBeenSet() const { return m_authCodeHasBeenSet; }
    template<typename AuthCodeT = Aws::String>
    void SetAuthCode(AuthCodeT&& value) { m_authCodeHasBeenSet = true; m_authCode = std::forward<AuthCodeT>(value); }
    template<typename AuthCodeT = Aws::String>
    UpdateGitLabSelfManagedIntegrationDetail& WithAuthCode(AuthCodeT&& value) { SetAuthCode(std::forward<AuthCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authCode;
    bool m_authCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
