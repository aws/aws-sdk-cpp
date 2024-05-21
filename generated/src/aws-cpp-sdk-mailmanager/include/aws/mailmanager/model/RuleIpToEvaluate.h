/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleIpEmailAttribute.h>
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
   * <p>The IP address to evaluate for this condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleIpToEvaluate">AWS
   * API Reference</a></p>
   */
  class RuleIpToEvaluate
  {
  public:
    AWS_MAILMANAGER_API RuleIpToEvaluate();
    AWS_MAILMANAGER_API RuleIpToEvaluate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleIpToEvaluate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute of the email to evaluate.</p>
     */
    inline const RuleIpEmailAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute of the email to evaluate.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The attribute of the email to evaluate.</p>
     */
    inline void SetAttribute(const RuleIpEmailAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute of the email to evaluate.</p>
     */
    inline void SetAttribute(RuleIpEmailAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute of the email to evaluate.</p>
     */
    inline RuleIpToEvaluate& WithAttribute(const RuleIpEmailAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute of the email to evaluate.</p>
     */
    inline RuleIpToEvaluate& WithAttribute(RuleIpEmailAttribute&& value) { SetAttribute(std::move(value)); return *this;}

  private:

    RuleIpEmailAttribute m_attribute;
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
