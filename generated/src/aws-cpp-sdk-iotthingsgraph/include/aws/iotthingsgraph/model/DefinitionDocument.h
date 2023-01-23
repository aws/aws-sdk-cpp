/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/model/DefinitionLanguage.h>
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
namespace IoTThingsGraph
{
namespace Model
{

  /**
   * <p>A document that defines an entity. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DefinitionDocument">AWS
   * API Reference</a></p>
   */
  class DefinitionDocument
  {
  public:
    AWS_IOTTHINGSGRAPH_API DefinitionDocument();
    AWS_IOTTHINGSGRAPH_API DefinitionDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API DefinitionDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The language used to define the entity. <code>GRAPHQL</code> is the only
     * valid value.</p>
     */
    inline const DefinitionLanguage& GetLanguage() const{ return m_language; }

    /**
     * <p>The language used to define the entity. <code>GRAPHQL</code> is the only
     * valid value.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The language used to define the entity. <code>GRAPHQL</code> is the only
     * valid value.</p>
     */
    inline void SetLanguage(const DefinitionLanguage& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The language used to define the entity. <code>GRAPHQL</code> is the only
     * valid value.</p>
     */
    inline void SetLanguage(DefinitionLanguage&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The language used to define the entity. <code>GRAPHQL</code> is the only
     * valid value.</p>
     */
    inline DefinitionDocument& WithLanguage(const DefinitionLanguage& value) { SetLanguage(value); return *this;}

    /**
     * <p>The language used to define the entity. <code>GRAPHQL</code> is the only
     * valid value.</p>
     */
    inline DefinitionDocument& WithLanguage(DefinitionLanguage&& value) { SetLanguage(std::move(value)); return *this;}


    /**
     * <p>The GraphQL text that defines the entity.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The GraphQL text that defines the entity.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The GraphQL text that defines the entity.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The GraphQL text that defines the entity.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The GraphQL text that defines the entity.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The GraphQL text that defines the entity.</p>
     */
    inline DefinitionDocument& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The GraphQL text that defines the entity.</p>
     */
    inline DefinitionDocument& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The GraphQL text that defines the entity.</p>
     */
    inline DefinitionDocument& WithText(const char* value) { SetText(value); return *this;}

  private:

    DefinitionLanguage m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
