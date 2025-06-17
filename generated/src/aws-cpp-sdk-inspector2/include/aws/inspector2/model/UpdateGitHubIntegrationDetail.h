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
   * <p>Contains details required to update an integration with GitHub.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateGitHubIntegrationDetail">AWS
   * API Reference</a></p>
   */
  class UpdateGitHubIntegrationDetail
  {
  public:
    AWS_INSPECTOR2_API UpdateGitHubIntegrationDetail() = default;
    AWS_INSPECTOR2_API UpdateGitHubIntegrationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API UpdateGitHubIntegrationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization code received from GitHub to update the integration.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    UpdateGitHubIntegrationDetail& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The installation ID of the GitHub App associated with the integration.</p>
     */
    inline const Aws::String& GetInstallationId() const { return m_installationId; }
    inline bool InstallationIdHasBeenSet() const { return m_installationIdHasBeenSet; }
    template<typename InstallationIdT = Aws::String>
    void SetInstallationId(InstallationIdT&& value) { m_installationIdHasBeenSet = true; m_installationId = std::forward<InstallationIdT>(value); }
    template<typename InstallationIdT = Aws::String>
    UpdateGitHubIntegrationDetail& WithInstallationId(InstallationIdT&& value) { SetInstallationId(std::forward<InstallationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_installationId;
    bool m_installationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
