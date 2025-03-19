/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the configuration settings for the form's style
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FormStyleConfig">AWS
   * API Reference</a></p>
   */
  class FormStyleConfig
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FormStyleConfig() = default;
    AWS_AMPLIFYUIBUILDER_API FormStyleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormStyleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to a design token to use to bind the form's style properties to
     * an existing theme.</p>
     */
    inline const Aws::String& GetTokenReference() const { return m_tokenReference; }
    inline bool TokenReferenceHasBeenSet() const { return m_tokenReferenceHasBeenSet; }
    template<typename TokenReferenceT = Aws::String>
    void SetTokenReference(TokenReferenceT&& value) { m_tokenReferenceHasBeenSet = true; m_tokenReference = std::forward<TokenReferenceT>(value); }
    template<typename TokenReferenceT = Aws::String>
    FormStyleConfig& WithTokenReference(TokenReferenceT&& value) { SetTokenReference(std::forward<TokenReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the style setting.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    FormStyleConfig& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tokenReference;
    bool m_tokenReferenceHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
