/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/PolicyTemplateName.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Parameters to define a mitigation action that adds a blank policy to restrict
   * permissions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ReplaceDefaultPolicyVersionParams">AWS
   * API Reference</a></p>
   */
  class ReplaceDefaultPolicyVersionParams
  {
  public:
    AWS_IOT_API ReplaceDefaultPolicyVersionParams() = default;
    AWS_IOT_API ReplaceDefaultPolicyVersionParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ReplaceDefaultPolicyVersionParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the template to be applied. The only supported value is
     * <code>BLANK_POLICY</code>.</p>
     */
    inline PolicyTemplateName GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(PolicyTemplateName value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline ReplaceDefaultPolicyVersionParams& WithTemplateName(PolicyTemplateName value) { SetTemplateName(value); return *this;}
    ///@}
  private:

    PolicyTemplateName m_templateName{PolicyTemplateName::NOT_SET};
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
