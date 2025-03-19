/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/WafStatus.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p>Describes the Firewall configuration for a hosted Amplify application.
   * Firewall support enables you to protect your web applications with a direct
   * integration with WAF. For more information about using WAF protections for an
   * Amplify application, see <a
   * href="https://docs.aws.amazon.com/amplify/latest/userguide/WAF-integration.html">Firewall
   * support for hosted sites</a> in the <i>Amplify User Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/WafConfiguration">AWS
   * API Reference</a></p>
   */
  class WafConfiguration
  {
  public:
    AWS_AMPLIFY_API WafConfiguration() = default;
    AWS_AMPLIFY_API WafConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API WafConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the web ACL associated with an Amplify
     * app.</p>
     */
    inline const Aws::String& GetWebAclArn() const { return m_webAclArn; }
    inline bool WebAclArnHasBeenSet() const { return m_webAclArnHasBeenSet; }
    template<typename WebAclArnT = Aws::String>
    void SetWebAclArn(WebAclArnT&& value) { m_webAclArnHasBeenSet = true; m_webAclArn = std::forward<WebAclArnT>(value); }
    template<typename WebAclArnT = Aws::String>
    WafConfiguration& WithWebAclArn(WebAclArnT&& value) { SetWebAclArn(std::forward<WebAclArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the process to associate or disassociate a web ACL to an
     * Amplify app.</p>
     */
    inline WafStatus GetWafStatus() const { return m_wafStatus; }
    inline bool WafStatusHasBeenSet() const { return m_wafStatusHasBeenSet; }
    inline void SetWafStatus(WafStatus value) { m_wafStatusHasBeenSet = true; m_wafStatus = value; }
    inline WafConfiguration& WithWafStatus(WafStatus value) { SetWafStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status of the Firewall configuration.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    WafConfiguration& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_webAclArn;
    bool m_webAclArnHasBeenSet = false;

    WafStatus m_wafStatus{WafStatus::NOT_SET};
    bool m_wafStatusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
