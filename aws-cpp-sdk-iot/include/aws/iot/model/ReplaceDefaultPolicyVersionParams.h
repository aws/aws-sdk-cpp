/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API ReplaceDefaultPolicyVersionParams
  {
  public:
    ReplaceDefaultPolicyVersionParams();
    ReplaceDefaultPolicyVersionParams(Aws::Utils::Json::JsonView jsonValue);
    ReplaceDefaultPolicyVersionParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the template to be applied. The only supported value is
     * <code>BLANK_POLICY</code>.</p>
     */
    inline const PolicyTemplateName& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the template to be applied. The only supported value is
     * <code>BLANK_POLICY</code>.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the template to be applied. The only supported value is
     * <code>BLANK_POLICY</code>.</p>
     */
    inline void SetTemplateName(const PolicyTemplateName& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the template to be applied. The only supported value is
     * <code>BLANK_POLICY</code>.</p>
     */
    inline void SetTemplateName(PolicyTemplateName&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the template to be applied. The only supported value is
     * <code>BLANK_POLICY</code>.</p>
     */
    inline ReplaceDefaultPolicyVersionParams& WithTemplateName(const PolicyTemplateName& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the template to be applied. The only supported value is
     * <code>BLANK_POLICY</code>.</p>
     */
    inline ReplaceDefaultPolicyVersionParams& WithTemplateName(PolicyTemplateName&& value) { SetTemplateName(std::move(value)); return *this;}

  private:

    PolicyTemplateName m_templateName;
    bool m_templateNameHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
