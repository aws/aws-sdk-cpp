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
    AWS_GLUE_API GrokClassifier() = default;
    AWS_GLUE_API GrokClassifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API GrokClassifier& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    GrokClassifier& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, and so on.</p>
     */
    inline const Aws::String& GetClassification() const { return m_classification; }
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
    template<typename ClassificationT = Aws::String>
    void SetClassification(ClassificationT&& value) { m_classificationHasBeenSet = true; m_classification = std::forward<ClassificationT>(value); }
    template<typename ClassificationT = Aws::String>
    GrokClassifier& WithClassification(ClassificationT&& value) { SetClassification(std::forward<ClassificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GrokClassifier& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    GrokClassifier& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of this classifier.</p>
     */
    inline long long GetVersion() const { return m_version; }
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
    inline const Aws::String& GetGrokPattern() const { return m_grokPattern; }
    inline bool GrokPatternHasBeenSet() const { return m_grokPatternHasBeenSet; }
    template<typename GrokPatternT = Aws::String>
    void SetGrokPattern(GrokPatternT&& value) { m_grokPatternHasBeenSet = true; m_grokPattern = std::forward<GrokPatternT>(value); }
    template<typename GrokPatternT = Aws::String>
    GrokClassifier& WithGrokPattern(GrokPatternT&& value) { SetGrokPattern(std::forward<GrokPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional custom grok patterns defined by this classifier. For more
     * information, see custom patterns in <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifiers</a>.</p>
     */
    inline const Aws::String& GetCustomPatterns() const { return m_customPatterns; }
    inline bool CustomPatternsHasBeenSet() const { return m_customPatternsHasBeenSet; }
    template<typename CustomPatternsT = Aws::String>
    void SetCustomPatterns(CustomPatternsT&& value) { m_customPatternsHasBeenSet = true; m_customPatterns = std::forward<CustomPatternsT>(value); }
    template<typename CustomPatternsT = Aws::String>
    GrokClassifier& WithCustomPatterns(CustomPatternsT&& value) { SetCustomPatterns(std::forward<CustomPatternsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::String m_grokPattern;
    bool m_grokPatternHasBeenSet = false;

    Aws::String m_customPatterns;
    bool m_customPatternsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
