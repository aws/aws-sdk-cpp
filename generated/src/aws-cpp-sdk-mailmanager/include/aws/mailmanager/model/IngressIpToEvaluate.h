/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressIpv4Attribute.h>
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
   * <p>The structure for an IP based condition matching on the incoming
   * mail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressIpToEvaluate">AWS
   * API Reference</a></p>
   */
  class IngressIpToEvaluate
  {
  public:
    AWS_MAILMANAGER_API IngressIpToEvaluate() = default;
    AWS_MAILMANAGER_API IngressIpToEvaluate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressIpToEvaluate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An enum type representing the allowed attribute types for an IP
     * condition.</p>
     */
    inline IngressIpv4Attribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(IngressIpv4Attribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline IngressIpToEvaluate& WithAttribute(IngressIpv4Attribute value) { SetAttribute(value); return *this;}
    ///@}
  private:

    IngressIpv4Attribute m_attribute{IngressIpv4Attribute::NOT_SET};
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
