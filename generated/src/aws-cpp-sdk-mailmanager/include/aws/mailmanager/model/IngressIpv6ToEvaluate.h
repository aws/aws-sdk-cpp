/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressIpv6Attribute.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The structure for an IPv6 based condition matching on the incoming
   * mail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressIpv6ToEvaluate">AWS
   * API Reference</a></p>
   */
  class IngressIpv6ToEvaluate
  {
  public:
    AWS_MAILMANAGER_API IngressIpv6ToEvaluate() = default;
    AWS_MAILMANAGER_API IngressIpv6ToEvaluate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressIpv6ToEvaluate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An enum type representing the allowed attribute types for an IPv6
     * condition.</p>
     */
    inline IngressIpv6Attribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(IngressIpv6Attribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline IngressIpv6ToEvaluate& WithAttribute(IngressIpv6Attribute value) { SetAttribute(value); return *this;}
    ///@}
  private:

    IngressIpv6Attribute m_attribute{IngressIpv6Attribute::NOT_SET};
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
