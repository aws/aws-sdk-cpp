/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateXMLClassifierRequest
  {
  public:
    AWS_GLUE_API UpdateXMLClassifierRequest() = default;
    AWS_GLUE_API UpdateXMLClassifierRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UpdateXMLClassifierRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the classifier.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateXMLClassifierRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline const Aws::String& GetClassification() const { return m_classification; }
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
    template<typename ClassificationT = Aws::String>
    void SetClassification(ClassificationT&& value) { m_classificationHasBeenSet = true; m_classification = std::forward<ClassificationT>(value); }
    template<typename ClassificationT = Aws::String>
    UpdateXMLClassifierRequest& WithClassification(ClassificationT&& value) { SetClassification(std::forward<ClassificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This cannot identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline const Aws::String& GetRowTag() const { return m_rowTag; }
    inline bool RowTagHasBeenSet() const { return m_rowTagHasBeenSet; }
    template<typename RowTagT = Aws::String>
    void SetRowTag(RowTagT&& value) { m_rowTagHasBeenSet = true; m_rowTag = std::forward<RowTagT>(value); }
    template<typename RowTagT = Aws::String>
    UpdateXMLClassifierRequest& WithRowTag(RowTagT&& value) { SetRowTag(std::forward<RowTagT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::String m_rowTag;
    bool m_rowTagHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
