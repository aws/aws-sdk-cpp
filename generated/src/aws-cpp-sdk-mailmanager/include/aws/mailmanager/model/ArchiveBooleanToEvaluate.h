/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ArchiveBooleanEmailAttribute.h>
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
   * <p>The attribute to evaluate in a boolean expression.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ArchiveBooleanToEvaluate">AWS
   * API Reference</a></p>
   */
  class ArchiveBooleanToEvaluate
  {
  public:
    AWS_MAILMANAGER_API ArchiveBooleanToEvaluate() = default;
    AWS_MAILMANAGER_API ArchiveBooleanToEvaluate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ArchiveBooleanToEvaluate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the email attribute to evaluate.</p>
     */
    inline ArchiveBooleanEmailAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(ArchiveBooleanEmailAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline ArchiveBooleanToEvaluate& WithAttribute(ArchiveBooleanEmailAttribute value) { SetAttribute(value); return *this;}
    ///@}
  private:

    ArchiveBooleanEmailAttribute m_attribute{ArchiveBooleanEmailAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
