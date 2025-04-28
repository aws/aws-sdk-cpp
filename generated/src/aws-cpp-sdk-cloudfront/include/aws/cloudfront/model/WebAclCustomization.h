/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CustomizationActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The WAF web ACL customization specified for the distribution
   * tenant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/WebAclCustomization">AWS
   * API Reference</a></p>
   */
  class WebAclCustomization
  {
  public:
    AWS_CLOUDFRONT_API WebAclCustomization() = default;
    AWS_CLOUDFRONT_API WebAclCustomization(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API WebAclCustomization& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The action for the WAF web ACL customization. You can specify
     * <code>override</code> to specify a separate WAF web ACL for the distribution
     * tenant. If you specify <code>disable</code>, the distribution tenant won't have
     * WAF web ACL protections and won't inherit from the multi-tenant
     * distribution.</p>
     */
    inline CustomizationActionType GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(CustomizationActionType value) { m_actionHasBeenSet = true; m_action = value; }
    inline WebAclCustomization& WithAction(CustomizationActionType value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the WAF web ACL.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    WebAclCustomization& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    CustomizationActionType m_action{CustomizationActionType::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
