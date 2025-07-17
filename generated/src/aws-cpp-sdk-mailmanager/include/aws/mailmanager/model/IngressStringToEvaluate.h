/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressStringEmailAttribute.h>
#include <aws/mailmanager/model/IngressAnalysis.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The union type representing the allowed types for the left hand side of a
   * string condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressStringToEvaluate">AWS
   * API Reference</a></p>
   */
  class IngressStringToEvaluate
  {
  public:
    AWS_MAILMANAGER_API IngressStringToEvaluate() = default;
    AWS_MAILMANAGER_API IngressStringToEvaluate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressStringToEvaluate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The enum type representing the allowed attribute types for a string
     * condition.</p>
     */
    inline IngressStringEmailAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(IngressStringEmailAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline IngressStringToEvaluate& WithAttribute(IngressStringEmailAttribute value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure type for a string condition stating the Add On ARN and its
     * returned value.</p>
     */
    inline const IngressAnalysis& GetAnalysis() const { return m_analysis; }
    inline bool AnalysisHasBeenSet() const { return m_analysisHasBeenSet; }
    template<typename AnalysisT = IngressAnalysis>
    void SetAnalysis(AnalysisT&& value) { m_analysisHasBeenSet = true; m_analysis = std::forward<AnalysisT>(value); }
    template<typename AnalysisT = IngressAnalysis>
    IngressStringToEvaluate& WithAnalysis(AnalysisT&& value) { SetAnalysis(std::forward<AnalysisT>(value)); return *this;}
    ///@}
  private:

    IngressStringEmailAttribute m_attribute{IngressStringEmailAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;

    IngressAnalysis m_analysis;
    bool m_analysisHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
