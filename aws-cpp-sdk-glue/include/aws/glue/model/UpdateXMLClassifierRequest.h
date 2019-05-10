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
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an XML classifier to be updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateXMLClassifierRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API UpdateXMLClassifierRequest
  {
  public:
    UpdateXMLClassifierRequest();
    UpdateXMLClassifierRequest(Aws::Utils::Json::JsonView jsonValue);
    UpdateXMLClassifierRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the classifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the classifier.</p>
     */
    inline UpdateXMLClassifierRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline UpdateXMLClassifierRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline UpdateXMLClassifierRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline UpdateXMLClassifierRequest& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline UpdateXMLClassifierRequest& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline UpdateXMLClassifierRequest& WithClassification(const char* value) { SetClassification(value); return *this;}


    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This cannot identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline const Aws::String& GetRowTag() const{ return m_rowTag; }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This cannot identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline bool RowTagHasBeenSet() const { return m_rowTagHasBeenSet; }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This cannot identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline void SetRowTag(const Aws::String& value) { m_rowTagHasBeenSet = true; m_rowTag = value; }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This cannot identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline void SetRowTag(Aws::String&& value) { m_rowTagHasBeenSet = true; m_rowTag = std::move(value); }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This cannot identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline void SetRowTag(const char* value) { m_rowTagHasBeenSet = true; m_rowTag.assign(value); }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This cannot identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline UpdateXMLClassifierRequest& WithRowTag(const Aws::String& value) { SetRowTag(value); return *this;}

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This cannot identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline UpdateXMLClassifierRequest& WithRowTag(Aws::String&& value) { SetRowTag(std::move(value)); return *this;}

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This cannot identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline UpdateXMLClassifierRequest& WithRowTag(const char* value) { SetRowTag(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_classification;
    bool m_classificationHasBeenSet;

    Aws::String m_rowTag;
    bool m_rowTagHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
