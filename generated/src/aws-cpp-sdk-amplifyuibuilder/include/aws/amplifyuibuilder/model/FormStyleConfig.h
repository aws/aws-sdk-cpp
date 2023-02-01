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
    AWS_AMPLIFYUIBUILDER_API FormStyleConfig();
    AWS_AMPLIFYUIBUILDER_API FormStyleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormStyleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to a design token to use to bind the form's style properties to
     * an existing theme.</p>
     */
    inline const Aws::String& GetTokenReference() const{ return m_tokenReference; }

    /**
     * <p>A reference to a design token to use to bind the form's style properties to
     * an existing theme.</p>
     */
    inline bool TokenReferenceHasBeenSet() const { return m_tokenReferenceHasBeenSet; }

    /**
     * <p>A reference to a design token to use to bind the form's style properties to
     * an existing theme.</p>
     */
    inline void SetTokenReference(const Aws::String& value) { m_tokenReferenceHasBeenSet = true; m_tokenReference = value; }

    /**
     * <p>A reference to a design token to use to bind the form's style properties to
     * an existing theme.</p>
     */
    inline void SetTokenReference(Aws::String&& value) { m_tokenReferenceHasBeenSet = true; m_tokenReference = std::move(value); }

    /**
     * <p>A reference to a design token to use to bind the form's style properties to
     * an existing theme.</p>
     */
    inline void SetTokenReference(const char* value) { m_tokenReferenceHasBeenSet = true; m_tokenReference.assign(value); }

    /**
     * <p>A reference to a design token to use to bind the form's style properties to
     * an existing theme.</p>
     */
    inline FormStyleConfig& WithTokenReference(const Aws::String& value) { SetTokenReference(value); return *this;}

    /**
     * <p>A reference to a design token to use to bind the form's style properties to
     * an existing theme.</p>
     */
    inline FormStyleConfig& WithTokenReference(Aws::String&& value) { SetTokenReference(std::move(value)); return *this;}

    /**
     * <p>A reference to a design token to use to bind the form's style properties to
     * an existing theme.</p>
     */
    inline FormStyleConfig& WithTokenReference(const char* value) { SetTokenReference(value); return *this;}


    /**
     * <p>The value of the style setting.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the style setting.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the style setting.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the style setting.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the style setting.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the style setting.</p>
     */
    inline FormStyleConfig& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the style setting.</p>
     */
    inline FormStyleConfig& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the style setting.</p>
     */
    inline FormStyleConfig& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_tokenReference;
    bool m_tokenReferenceHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
