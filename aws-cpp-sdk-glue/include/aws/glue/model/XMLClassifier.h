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
#include <aws/core/utils/DateTime.h>
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
   * <p>A classifier for <code>XML</code> content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/XMLClassifier">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API XMLClassifier
  {
  public:
    XMLClassifier();
    XMLClassifier(Aws::Utils::Json::JsonView jsonValue);
    XMLClassifier& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline XMLClassifier& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline XMLClassifier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline XMLClassifier& WithName(const char* value) { SetName(value); return *this;}


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
    inline XMLClassifier& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline XMLClassifier& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline XMLClassifier& WithClassification(const char* value) { SetClassification(value); return *this;}


    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline XMLClassifier& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline XMLClassifier& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline XMLClassifier& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline XMLClassifier& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The version of this classifier.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version of this classifier.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of this classifier.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of this classifier.</p>
     */
    inline XMLClassifier& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This can't identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline const Aws::String& GetRowTag() const{ return m_rowTag; }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This can't identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline bool RowTagHasBeenSet() const { return m_rowTagHasBeenSet; }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This can't identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline void SetRowTag(const Aws::String& value) { m_rowTagHasBeenSet = true; m_rowTag = value; }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This can't identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline void SetRowTag(Aws::String&& value) { m_rowTagHasBeenSet = true; m_rowTag = std::move(value); }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This can't identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline void SetRowTag(const char* value) { m_rowTagHasBeenSet = true; m_rowTag.assign(value); }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This can't identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline XMLClassifier& WithRowTag(const Aws::String& value) { SetRowTag(value); return *this;}

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This can't identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline XMLClassifier& WithRowTag(Aws::String&& value) { SetRowTag(std::move(value)); return *this;}

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This can't identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline XMLClassifier& WithRowTag(const char* value) { SetRowTag(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_classification;
    bool m_classificationHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;

    long long m_version;
    bool m_versionHasBeenSet;

    Aws::String m_rowTag;
    bool m_rowTagHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
