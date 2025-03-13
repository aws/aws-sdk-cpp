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
    AWS_IOT_API DocumentParameter() = default;
    AWS_IOT_API DocumentParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DocumentParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Key of the map field containing the patterns that need to be replaced in a
     * managed template job document schema.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    DocumentParameter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the map field containing the patterns that need to be replaced
     * in a managed template job document schema.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DocumentParameter& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression of the patterns that need to be replaced in a managed
     * template job document schema.</p>
     */
    inline const Aws::String& GetRegex() const { return m_regex; }
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }
    template<typename RegexT = Aws::String>
    void SetRegex(RegexT&& value) { m_regexHasBeenSet = true; m_regex = std::forward<RegexT>(value); }
    template<typename RegexT = Aws::String>
    DocumentParameter& WithRegex(RegexT&& value) { SetRegex(std::forward<RegexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An example illustrating a pattern that need to be replaced in a managed
     * template job document schema.</p>
     */
    inline const Aws::String& GetExample() const { return m_example; }
    inline bool ExampleHasBeenSet() const { return m_exampleHasBeenSet; }
    template<typename ExampleT = Aws::String>
    void SetExample(ExampleT&& value) { m_exampleHasBeenSet = true; m_example = std::forward<ExampleT>(value); }
    template<typename ExampleT = Aws::String>
    DocumentParameter& WithExample(ExampleT&& value) { SetExample(std::forward<ExampleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a pattern that needs to be replaced in a managed template
     * job document schema is optional or required.</p>
     */
    inline bool GetOptional() const { return m_optional; }
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

    bool m_optional{false};
    bool m_optionalHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
