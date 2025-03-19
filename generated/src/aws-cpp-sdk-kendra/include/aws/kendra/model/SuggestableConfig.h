/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information for a document field/attribute that
   * you want to base query suggestions on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SuggestableConfig">AWS
   * API Reference</a></p>
   */
  class SuggestableConfig
  {
  public:
    AWS_KENDRA_API SuggestableConfig() = default;
    AWS_KENDRA_API SuggestableConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SuggestableConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the document field/attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    SuggestableConfig& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> means the document field/attribute is suggestible, so the
     * contents within the field can be used for query suggestions.</p>
     */
    inline bool GetSuggestable() const { return m_suggestable; }
    inline bool SuggestableHasBeenSet() const { return m_suggestableHasBeenSet; }
    inline void SetSuggestable(bool value) { m_suggestableHasBeenSet = true; m_suggestable = value; }
    inline SuggestableConfig& WithSuggestable(bool value) { SetSuggestable(value); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    bool m_suggestable{false};
    bool m_suggestableHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
