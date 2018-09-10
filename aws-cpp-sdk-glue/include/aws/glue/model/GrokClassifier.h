﻿/*
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
   * <p>A classifier that uses <code>grok</code> patterns.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GrokClassifier">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API GrokClassifier
  {
  public:
    GrokClassifier();
    GrokClassifier(Aws::Utils::Json::JsonView jsonValue);
    GrokClassifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the classifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

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
    inline GrokClassifier& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline GrokClassifier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline GrokClassifier& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, and so on.</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, and so on.</p>
     */
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, and so on.</p>
     */
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, and so on.</p>
     */
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, and so on.</p>
     */
    inline GrokClassifier& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, and so on.</p>
     */
    inline GrokClassifier& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, and so on.</p>
     */
    inline GrokClassifier& WithClassification(const char* value) { SetClassification(value); return *this;}


    /**
     * <p>The time this classifier was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time this classifier was registered.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time this classifier was registered.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time this classifier was registered.</p>
     */
    inline GrokClassifier& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time this classifier was registered.</p>
     */
    inline GrokClassifier& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time this classifier was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The time this classifier was last updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The time this classifier was last updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The time this classifier was last updated.</p>
     */
    inline GrokClassifier& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The time this classifier was last updated.</p>
     */
    inline GrokClassifier& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The version of this classifier.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version of this classifier.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of this classifier.</p>
     */
    inline GrokClassifier& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The grok pattern applied to a data store by this classifier. For more
     * information, see built-in patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline const Aws::String& GetGrokPattern() const{ return m_grokPattern; }

    /**
     * <p>The grok pattern applied to a data store by this classifier. For more
     * information, see built-in patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline void SetGrokPattern(const Aws::String& value) { m_grokPatternHasBeenSet = true; m_grokPattern = value; }

    /**
     * <p>The grok pattern applied to a data store by this classifier. For more
     * information, see built-in patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline void SetGrokPattern(Aws::String&& value) { m_grokPatternHasBeenSet = true; m_grokPattern = std::move(value); }

    /**
     * <p>The grok pattern applied to a data store by this classifier. For more
     * information, see built-in patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline void SetGrokPattern(const char* value) { m_grokPatternHasBeenSet = true; m_grokPattern.assign(value); }

    /**
     * <p>The grok pattern applied to a data store by this classifier. For more
     * information, see built-in patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline GrokClassifier& WithGrokPattern(const Aws::String& value) { SetGrokPattern(value); return *this;}

    /**
     * <p>The grok pattern applied to a data store by this classifier. For more
     * information, see built-in patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline GrokClassifier& WithGrokPattern(Aws::String&& value) { SetGrokPattern(std::move(value)); return *this;}

    /**
     * <p>The grok pattern applied to a data store by this classifier. For more
     * information, see built-in patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline GrokClassifier& WithGrokPattern(const char* value) { SetGrokPattern(value); return *this;}


    /**
     * <p>Optional custom grok patterns defined by this classifier. For more
     * information, see custom patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline const Aws::String& GetCustomPatterns() const{ return m_customPatterns; }

    /**
     * <p>Optional custom grok patterns defined by this classifier. For more
     * information, see custom patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline void SetCustomPatterns(const Aws::String& value) { m_customPatternsHasBeenSet = true; m_customPatterns = value; }

    /**
     * <p>Optional custom grok patterns defined by this classifier. For more
     * information, see custom patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline void SetCustomPatterns(Aws::String&& value) { m_customPatternsHasBeenSet = true; m_customPatterns = std::move(value); }

    /**
     * <p>Optional custom grok patterns defined by this classifier. For more
     * information, see custom patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline void SetCustomPatterns(const char* value) { m_customPatternsHasBeenSet = true; m_customPatterns.assign(value); }

    /**
     * <p>Optional custom grok patterns defined by this classifier. For more
     * information, see custom patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline GrokClassifier& WithCustomPatterns(const Aws::String& value) { SetCustomPatterns(value); return *this;}

    /**
     * <p>Optional custom grok patterns defined by this classifier. For more
     * information, see custom patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline GrokClassifier& WithCustomPatterns(Aws::String&& value) { SetCustomPatterns(std::move(value)); return *this;}

    /**
     * <p>Optional custom grok patterns defined by this classifier. For more
     * information, see custom patterns in <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html">Writing
     * Custom Classifers</a>.</p>
     */
    inline GrokClassifier& WithCustomPatterns(const char* value) { SetCustomPatterns(value); return *this;}

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

    Aws::String m_grokPattern;
    bool m_grokPatternHasBeenSet;

    Aws::String m_customPatterns;
    bool m_customPatternsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
