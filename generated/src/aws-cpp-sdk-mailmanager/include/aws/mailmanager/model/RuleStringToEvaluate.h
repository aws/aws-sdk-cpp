/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleStringEmailAttribute.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The string to evaluate in a string condition expression.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleStringToEvaluate">AWS
   * API Reference</a></p>
   */
  class RuleStringToEvaluate
  {
  public:
    AWS_MAILMANAGER_API RuleStringToEvaluate() = default;
    AWS_MAILMANAGER_API RuleStringToEvaluate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleStringToEvaluate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email attribute to evaluate in a string condition expression.</p>
     */
    inline RuleStringEmailAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(RuleStringEmailAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline RuleStringToEvaluate& WithAttribute(RuleStringEmailAttribute value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email MIME X-Header attribute to evaluate in a string condition
     * expression.</p>
     */
    inline const Aws::String& GetMimeHeaderAttribute() const { return m_mimeHeaderAttribute; }
    inline bool MimeHeaderAttributeHasBeenSet() const { return m_mimeHeaderAttributeHasBeenSet; }
    template<typename MimeHeaderAttributeT = Aws::String>
    void SetMimeHeaderAttribute(MimeHeaderAttributeT&& value) { m_mimeHeaderAttributeHasBeenSet = true; m_mimeHeaderAttribute = std::forward<MimeHeaderAttributeT>(value); }
    template<typename MimeHeaderAttributeT = Aws::String>
    RuleStringToEvaluate& WithMimeHeaderAttribute(MimeHeaderAttributeT&& value) { SetMimeHeaderAttribute(std::forward<MimeHeaderAttributeT>(value)); return *this;}
    ///@}
  private:

    RuleStringEmailAttribute m_attribute{RuleStringEmailAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;

    Aws::String m_mimeHeaderAttribute;
    bool m_mimeHeaderAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
