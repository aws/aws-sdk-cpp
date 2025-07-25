/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>The iframe configuration for the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/IframeConfig">AWS
   * API Reference</a></p>
   */
  class IframeConfig
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API IframeConfig() = default;
    AWS_APPINTEGRATIONSSERVICE_API IframeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API IframeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of features that are allowed in the iframe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllow() const { return m_allow; }
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }
    template<typename AllowT = Aws::Vector<Aws::String>>
    void SetAllow(AllowT&& value) { m_allowHasBeenSet = true; m_allow = std::forward<AllowT>(value); }
    template<typename AllowT = Aws::Vector<Aws::String>>
    IframeConfig& WithAllow(AllowT&& value) { SetAllow(std::forward<AllowT>(value)); return *this;}
    template<typename AllowT = Aws::String>
    IframeConfig& AddAllow(AllowT&& value) { m_allowHasBeenSet = true; m_allow.emplace_back(std::forward<AllowT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of sandbox attributes for the iframe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSandbox() const { return m_sandbox; }
    inline bool SandboxHasBeenSet() const { return m_sandboxHasBeenSet; }
    template<typename SandboxT = Aws::Vector<Aws::String>>
    void SetSandbox(SandboxT&& value) { m_sandboxHasBeenSet = true; m_sandbox = std::forward<SandboxT>(value); }
    template<typename SandboxT = Aws::Vector<Aws::String>>
    IframeConfig& WithSandbox(SandboxT&& value) { SetSandbox(std::forward<SandboxT>(value)); return *this;}
    template<typename SandboxT = Aws::String>
    IframeConfig& AddSandbox(SandboxT&& value) { m_sandboxHasBeenSet = true; m_sandbox.emplace_back(std::forward<SandboxT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_allow;
    bool m_allowHasBeenSet = false;

    Aws::Vector<Aws::String> m_sandbox;
    bool m_sandboxHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
