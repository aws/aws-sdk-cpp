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
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that defines the email template to use for an email message, and
   * the values to use for any message variables in that template. An <i>email
   * template</i> is a type of message template that contains content that you want
   * to define, save, and reuse in email messages that you send.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Template">AWS API
   * Reference</a></p>
   */
  class AWS_SESV2_API Template
  {
  public:
    Template();
    Template(Aws::Utils::Json::JsonView jsonValue);
    Template& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline Template& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline Template& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline Template& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline const Aws::String& GetTemplateData() const{ return m_templateData; }

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline bool TemplateDataHasBeenSet() const { return m_templateDataHasBeenSet; }

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline void SetTemplateData(const Aws::String& value) { m_templateDataHasBeenSet = true; m_templateData = value; }

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline void SetTemplateData(Aws::String&& value) { m_templateDataHasBeenSet = true; m_templateData = std::move(value); }

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline void SetTemplateData(const char* value) { m_templateDataHasBeenSet = true; m_templateData.assign(value); }

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline Template& WithTemplateData(const Aws::String& value) { SetTemplateData(value); return *this;}

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline Template& WithTemplateData(Aws::String&& value) { SetTemplateData(std::move(value)); return *this;}

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline Template& WithTemplateData(const char* value) { SetTemplateData(value); return *this;}

  private:

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet;

    Aws::String m_templateData;
    bool m_templateDataHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
