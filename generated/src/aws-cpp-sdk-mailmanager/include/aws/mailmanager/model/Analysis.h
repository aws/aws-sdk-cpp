/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The result of an analysis can be used in conditions to trigger actions.
   * Analyses can inspect the email content and report a certain aspect of the
   * email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/Analysis">AWS
   * API Reference</a></p>
   */
  class Analysis
  {
  public:
    AWS_MAILMANAGER_API Analysis() = default;
    AWS_MAILMANAGER_API Analysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Analysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Add On.</p>
     */
    inline const Aws::String& GetAnalyzer() const { return m_analyzer; }
    inline bool AnalyzerHasBeenSet() const { return m_analyzerHasBeenSet; }
    template<typename AnalyzerT = Aws::String>
    void SetAnalyzer(AnalyzerT&& value) { m_analyzerHasBeenSet = true; m_analyzer = std::forward<AnalyzerT>(value); }
    template<typename AnalyzerT = Aws::String>
    Analysis& WithAnalyzer(AnalyzerT&& value) { SetAnalyzer(std::forward<AnalyzerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned value from an Add On.</p>
     */
    inline const Aws::String& GetResultField() const { return m_resultField; }
    inline bool ResultFieldHasBeenSet() const { return m_resultFieldHasBeenSet; }
    template<typename ResultFieldT = Aws::String>
    void SetResultField(ResultFieldT&& value) { m_resultFieldHasBeenSet = true; m_resultField = std::forward<ResultFieldT>(value); }
    template<typename ResultFieldT = Aws::String>
    Analysis& WithResultField(ResultFieldT&& value) { SetResultField(std::forward<ResultFieldT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_analyzer;
    bool m_analyzerHasBeenSet = false;

    Aws::String m_resultField;
    bool m_resultFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
