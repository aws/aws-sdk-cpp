/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleBooleanEmailAttribute.h>
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
   * <p>The union type representing the allowed types of operands for a boolean
   * condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleBooleanToEvaluate">AWS
   * API Reference</a></p>
   */
  class RuleBooleanToEvaluate
  {
  public:
    AWS_MAILMANAGER_API RuleBooleanToEvaluate();
    AWS_MAILMANAGER_API RuleBooleanToEvaluate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleBooleanToEvaluate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The boolean type representing the allowed attribute types for an email.</p>
     */
    inline const RuleBooleanEmailAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The boolean type representing the allowed attribute types for an email.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The boolean type representing the allowed attribute types for an email.</p>
     */
    inline void SetAttribute(const RuleBooleanEmailAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The boolean type representing the allowed attribute types for an email.</p>
     */
    inline void SetAttribute(RuleBooleanEmailAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The boolean type representing the allowed attribute types for an email.</p>
     */
    inline RuleBooleanToEvaluate& WithAttribute(const RuleBooleanEmailAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The boolean type representing the allowed attribute types for an email.</p>
     */
    inline RuleBooleanToEvaluate& WithAttribute(RuleBooleanEmailAttribute&& value) { SetAttribute(std::move(value)); return *this;}

  private:

    RuleBooleanEmailAttribute m_attribute;
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
