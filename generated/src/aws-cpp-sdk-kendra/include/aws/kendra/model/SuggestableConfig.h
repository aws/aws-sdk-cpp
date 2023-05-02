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
    AWS_KENDRA_API SuggestableConfig();
    AWS_KENDRA_API SuggestableConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SuggestableConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the document field/attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the document field/attribute.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the document field/attribute.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the document field/attribute.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the document field/attribute.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the document field/attribute.</p>
     */
    inline SuggestableConfig& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the document field/attribute.</p>
     */
    inline SuggestableConfig& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the document field/attribute.</p>
     */
    inline SuggestableConfig& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p> <code>TRUE</code> means the document field/attribute is suggestible, so the
     * contents within the field can be used for query suggestions.</p>
     */
    inline bool GetSuggestable() const{ return m_suggestable; }

    /**
     * <p> <code>TRUE</code> means the document field/attribute is suggestible, so the
     * contents within the field can be used for query suggestions.</p>
     */
    inline bool SuggestableHasBeenSet() const { return m_suggestableHasBeenSet; }

    /**
     * <p> <code>TRUE</code> means the document field/attribute is suggestible, so the
     * contents within the field can be used for query suggestions.</p>
     */
    inline void SetSuggestable(bool value) { m_suggestableHasBeenSet = true; m_suggestable = value; }

    /**
     * <p> <code>TRUE</code> means the document field/attribute is suggestible, so the
     * contents within the field can be used for query suggestions.</p>
     */
    inline SuggestableConfig& WithSuggestable(bool value) { SetSuggestable(value); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    bool m_suggestable;
    bool m_suggestableHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
