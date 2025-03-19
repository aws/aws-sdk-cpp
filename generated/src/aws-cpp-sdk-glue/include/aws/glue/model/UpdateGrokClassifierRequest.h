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
   * <p>Specifies a grok classifier to update when passed to
   * <code>UpdateClassifier</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateGrokClassifierRequest">AWS
   * API Reference</a></p>
   */
  class UpdateGrokClassifierRequest
  {
  public:
    AWS_GLUE_API UpdateGrokClassifierRequest() = default;
    AWS_GLUE_API UpdateGrokClassifierRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UpdateGrokClassifierRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the <code>GrokClassifier</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateGrokClassifierRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, Amazon CloudWatch Logs, and so on.</p>
     */
    inline const Aws::String& GetClassification() const { return m_classification; }
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
    template<typename ClassificationT = Aws::String>
    void SetClassification(ClassificationT&& value) { m_classificationHasBeenSet = true; m_classification = std::forward<ClassificationT>(value); }
    template<typename ClassificationT = Aws::String>
    UpdateGrokClassifierRequest& WithClassification(ClassificationT&& value) { SetClassification(std::forward<ClassificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline const Aws::String& GetGrokPattern() const { return m_grokPattern; }
    inline bool GrokPatternHasBeenSet() const { return m_grokPatternHasBeenSet; }
    template<typename GrokPatternT = Aws::String>
    void SetGrokPattern(GrokPatternT&& value) { m_grokPatternHasBeenSet = true; m_grokPattern = std::forward<GrokPatternT>(value); }
    template<typename GrokPatternT = Aws::String>
    UpdateGrokClassifierRequest& WithGrokPattern(GrokPatternT&& value) { SetGrokPattern(std::forward<GrokPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional custom grok patterns used by this classifier.</p>
     */
    inline const Aws::String& GetCustomPatterns() const { return m_customPatterns; }
    inline bool CustomPatternsHasBeenSet() const { return m_customPatternsHasBeenSet; }
    template<typename CustomPatternsT = Aws::String>
    void SetCustomPatterns(CustomPatternsT&& value) { m_customPatternsHasBeenSet = true; m_customPatterns = std::forward<CustomPatternsT>(value); }
    template<typename CustomPatternsT = Aws::String>
    UpdateGrokClassifierRequest& WithCustomPatterns(CustomPatternsT&& value) { SetCustomPatterns(std::forward<CustomPatternsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::String m_grokPattern;
    bool m_grokPatternHasBeenSet = false;

    Aws::String m_customPatterns;
    bool m_customPatternsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
