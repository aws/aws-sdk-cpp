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
    AWS_AMPLIFY_API WafConfiguration();
    AWS_AMPLIFY_API WafConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API WafConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the web ACL associated with an Amplify
     * app.</p>
     */
    inline const Aws::String& GetWebAclArn() const{ return m_webAclArn; }
    inline bool WebAclArnHasBeenSet() const { return m_webAclArnHasBeenSet; }
    inline void SetWebAclArn(const Aws::String& value) { m_webAclArnHasBeenSet = true; m_webAclArn = value; }
    inline void SetWebAclArn(Aws::String&& value) { m_webAclArnHasBeenSet = true; m_webAclArn = std::move(value); }
    inline void SetWebAclArn(const char* value) { m_webAclArnHasBeenSet = true; m_webAclArn.assign(value); }
    inline WafConfiguration& WithWebAclArn(const Aws::String& value) { SetWebAclArn(value); return *this;}
    inline WafConfiguration& WithWebAclArn(Aws::String&& value) { SetWebAclArn(std::move(value)); return *this;}
    inline WafConfiguration& WithWebAclArn(const char* value) { SetWebAclArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the process to associate or disassociate a web ACL to an
     * Amplify app.</p>
     */
    inline const WafStatus& GetWafStatus() const{ return m_wafStatus; }
    inline bool WafStatusHasBeenSet() const { return m_wafStatusHasBeenSet; }
    inline void SetWafStatus(const WafStatus& value) { m_wafStatusHasBeenSet = true; m_wafStatus = value; }
    inline void SetWafStatus(WafStatus&& value) { m_wafStatusHasBeenSet = true; m_wafStatus = std::move(value); }
    inline WafConfiguration& WithWafStatus(const WafStatus& value) { SetWafStatus(value); return *this;}
    inline WafConfiguration& WithWafStatus(WafStatus&& value) { SetWafStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status of the Firewall configuration.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline WafConfiguration& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline WafConfiguration& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline WafConfiguration& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::String m_webAclArn;
    bool m_webAclArnHasBeenSet = false;

    WafStatus m_wafStatus;
    bool m_wafStatusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
