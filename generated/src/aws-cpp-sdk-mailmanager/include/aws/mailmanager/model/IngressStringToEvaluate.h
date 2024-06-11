/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressStringEmailAttribute.h>
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
   * <p>The union type representing the allowed types for the left hand side of a
   * string condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressStringToEvaluate">AWS
   * API Reference</a></p>
   */
  class IngressStringToEvaluate
  {
  public:
    AWS_MAILMANAGER_API IngressStringToEvaluate();
    AWS_MAILMANAGER_API IngressStringToEvaluate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressStringToEvaluate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The enum type representing the allowed attribute types for a string
     * condition.</p>
     */
    inline const IngressStringEmailAttribute& GetAttribute() const{ return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(const IngressStringEmailAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline void SetAttribute(IngressStringEmailAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }
    inline IngressStringToEvaluate& WithAttribute(const IngressStringEmailAttribute& value) { SetAttribute(value); return *this;}
    inline IngressStringToEvaluate& WithAttribute(IngressStringEmailAttribute&& value) { SetAttribute(std::move(value)); return *this;}
    ///@}
  private:

    IngressStringEmailAttribute m_attribute;
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
