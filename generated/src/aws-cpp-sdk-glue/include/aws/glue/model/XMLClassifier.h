/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class XMLClassifier
  {
  public:
    AWS_GLUE_API XMLClassifier();
    AWS_GLUE_API XMLClassifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API XMLClassifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the classifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline XMLClassifier& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline XMLClassifier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline XMLClassifier& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }
    inline XMLClassifier& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}
    inline XMLClassifier& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}
    inline XMLClassifier& WithClassification(const char* value) { SetClassification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline XMLClassifier& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline XMLClassifier& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }
    inline XMLClassifier& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}
    inline XMLClassifier& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of this classifier.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline XMLClassifier& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. This can't identify a self-closing element (closed by
     * <code>/&gt;</code>). An empty row element that contains only attributes can be
     * parsed as long as it ends with a closing tag (for example, <code>&lt;row
     * item_a="A" item_b="B"&gt;&lt;/row&gt;</code> is okay, but <code>&lt;row
     * item_a="A" item_b="B" /&gt;</code> is not).</p>
     */
    inline const Aws::String& GetRowTag() const{ return m_rowTag; }
    inline bool RowTagHasBeenSet() const { return m_rowTagHasBeenSet; }
    inline void SetRowTag(const Aws::String& value) { m_rowTagHasBeenSet = true; m_rowTag = value; }
    inline void SetRowTag(Aws::String&& value) { m_rowTagHasBeenSet = true; m_rowTag = std::move(value); }
    inline void SetRowTag(const char* value) { m_rowTagHasBeenSet = true; m_rowTag.assign(value); }
    inline XMLClassifier& WithRowTag(const Aws::String& value) { SetRowTag(value); return *this;}
    inline XMLClassifier& WithRowTag(Aws::String&& value) { SetRowTag(std::move(value)); return *this;}
    inline XMLClassifier& WithRowTag(const char* value) { SetRowTag(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    long long m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_rowTag;
    bool m_rowTagHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
