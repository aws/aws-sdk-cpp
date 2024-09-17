/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A map of key-value pairs containing the patterns that need to be replaced in
   * a managed template job document schema. You can use the description of each key
   * as a guidance to specify the inputs during runtime when creating a job.</p>
   *  <p> <code>documentParameters</code> can only be used when creating jobs
   * from Amazon Web Services managed templates. This parameter can't be used with
   * custom job templates or to create jobs from them.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DocumentParameter">AWS
   * API Reference</a></p>
   */
  class DocumentParameter
  {
  public:
    AWS_IOT_API DocumentParameter();
    AWS_IOT_API DocumentParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DocumentParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Key of the map field containing the patterns that need to be replaced in a
     * managed template job document schema.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline DocumentParameter& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline DocumentParameter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline DocumentParameter& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the map field containing the patterns that need to be replaced
     * in a managed template job document schema.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DocumentParameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DocumentParameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DocumentParameter& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression of the patterns that need to be replaced in a managed
     * template job document schema.</p>
     */
    inline const Aws::String& GetRegex() const{ return m_regex; }
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }
    inline void SetRegex(const Aws::String& value) { m_regexHasBeenSet = true; m_regex = value; }
    inline void SetRegex(Aws::String&& value) { m_regexHasBeenSet = true; m_regex = std::move(value); }
    inline void SetRegex(const char* value) { m_regexHasBeenSet = true; m_regex.assign(value); }
    inline DocumentParameter& WithRegex(const Aws::String& value) { SetRegex(value); return *this;}
    inline DocumentParameter& WithRegex(Aws::String&& value) { SetRegex(std::move(value)); return *this;}
    inline DocumentParameter& WithRegex(const char* value) { SetRegex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An example illustrating a pattern that need to be replaced in a managed
     * template job document schema.</p>
     */
    inline const Aws::String& GetExample() const{ return m_example; }
    inline bool ExampleHasBeenSet() const { return m_exampleHasBeenSet; }
    inline void SetExample(const Aws::String& value) { m_exampleHasBeenSet = true; m_example = value; }
    inline void SetExample(Aws::String&& value) { m_exampleHasBeenSet = true; m_example = std::move(value); }
    inline void SetExample(const char* value) { m_exampleHasBeenSet = true; m_example.assign(value); }
    inline DocumentParameter& WithExample(const Aws::String& value) { SetExample(value); return *this;}
    inline DocumentParameter& WithExample(Aws::String&& value) { SetExample(std::move(value)); return *this;}
    inline DocumentParameter& WithExample(const char* value) { SetExample(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a pattern that needs to be replaced in a managed template
     * job document schema is optional or required.</p>
     */
    inline bool GetOptional() const{ return m_optional; }
    inline bool OptionalHasBeenSet() const { return m_optionalHasBeenSet; }
    inline void SetOptional(bool value) { m_optionalHasBeenSet = true; m_optional = value; }
    inline DocumentParameter& WithOptional(bool value) { SetOptional(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_regex;
    bool m_regexHasBeenSet = false;

    Aws::String m_example;
    bool m_exampleHasBeenSet = false;

    bool m_optional;
    bool m_optionalHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
