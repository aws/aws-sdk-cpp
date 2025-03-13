/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressTlsAttribute.h>
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
   * <p>The union type representing the allowed types for the left hand side of a TLS
   * condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressTlsProtocolToEvaluate">AWS
   * API Reference</a></p>
   */
  class IngressTlsProtocolToEvaluate
  {
  public:
    AWS_MAILMANAGER_API IngressTlsProtocolToEvaluate() = default;
    AWS_MAILMANAGER_API IngressTlsProtocolToEvaluate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressTlsProtocolToEvaluate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The enum type representing the allowed attribute types for the TLS
     * condition.</p>
     */
    inline IngressTlsAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(IngressTlsAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline IngressTlsProtocolToEvaluate& WithAttribute(IngressTlsAttribute value) { SetAttribute(value); return *this;}
    ///@}
  private:

    IngressTlsAttribute m_attribute{IngressTlsAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
