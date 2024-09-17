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
   * <p>A classifier that uses <code>grok</code> patterns.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GrokClassifier">AWS
   * API Reference</a></p>
   */
  class GrokClassifier
  {
  public:
    AWS_GLUE_API GrokClassifier();
    AWS_GLUE_API GrokClassifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API GrokClassifier& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline GrokClassifier& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GrokClassifier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GrokClassifier& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, and so on.</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }
    inline GrokClassifier& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}
    inline GrokClassifier& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}
    inline GrokClassifier& WithClassification(const char* value) { SetClassification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline GrokClassifier& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GrokClassifier& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }
    inline GrokClassifier& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}
    inline GrokClassifier& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of this classifier.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline GrokClassifier& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The grok pattern applied to a data store by this classifier. For more
     * information, see built-in patterns in <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifiers</a>.</p>
     */
    inline const Aws::String& GetGrokPattern() const{ return m_grokPattern; }
    inline bool GrokPatternHasBeenSet() const { return m_grokPatternHasBeenSet; }
    inline void SetGrokPattern(const Aws::String& value) { m_grokPatternHasBeenSet = true; m_grokPattern = value; }
    inline void SetGrokPattern(Aws::String&& value) { m_grokPatternHasBeenSet = true; m_grokPattern = std::move(value); }
    inline void SetGrokPattern(const char* value) { m_grokPatternHasBeenSet = true; m_grokPattern.assign(value); }
    inline GrokClassifier& WithGrokPattern(const Aws::String& value) { SetGrokPattern(value); return *this;}
    inline GrokClassifier& WithGrokPattern(Aws::String&& value) { SetGrokPattern(std::move(value)); return *this;}
    inline GrokClassifier& WithGrokPattern(const char* value) { SetGrokPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional custom grok patterns defined by this classifier. For more
     * information, see custom patterns in <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifiers</a>.</p>
     */
    inline const Aws::String& GetCustomPatterns() const{ return m_customPatterns; }
    inline bool CustomPatternsHasBeenSet() const { return m_customPatternsHasBeenSet; }
    inline void SetCustomPatterns(const Aws::String& value) { m_customPatternsHasBeenSet = true; m_customPatterns = value; }
    inline void SetCustomPatterns(Aws::String&& value) { m_customPatternsHasBeenSet = true; m_customPatterns = std::move(value); }
    inline void SetCustomPatterns(const char* value) { m_customPatternsHasBeenSet = true; m_customPatterns.assign(value); }
    inline GrokClassifier& WithCustomPatterns(const Aws::String& value) { SetCustomPatterns(value); return *this;}
    inline GrokClassifier& WithCustomPatterns(Aws::String&& value) { SetCustomPatterns(std::move(value)); return *this;}
    inline GrokClassifier& WithCustomPatterns(const char* value) { SetCustomPatterns(value); return *this;}
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

    Aws::String m_grokPattern;
    bool m_grokPatternHasBeenSet = false;

    Aws::String m_customPatterns;
    bool m_customPatternsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
