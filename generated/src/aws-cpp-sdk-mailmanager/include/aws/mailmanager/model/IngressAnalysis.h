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
   * <p>The Add On ARN and its returned value that is evaluated in a policy
   * statement's conditional expression to either deny or block the incoming
   * email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressAnalysis">AWS
   * API Reference</a></p>
   */
  class IngressAnalysis
  {
  public:
    AWS_MAILMANAGER_API IngressAnalysis();
    AWS_MAILMANAGER_API IngressAnalysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Add On.</p>
     */
    inline const Aws::String& GetAnalyzer() const{ return m_analyzer; }
    inline bool AnalyzerHasBeenSet() const { return m_analyzerHasBeenSet; }
    inline void SetAnalyzer(const Aws::String& value) { m_analyzerHasBeenSet = true; m_analyzer = value; }
    inline void SetAnalyzer(Aws::String&& value) { m_analyzerHasBeenSet = true; m_analyzer = std::move(value); }
    inline void SetAnalyzer(const char* value) { m_analyzerHasBeenSet = true; m_analyzer.assign(value); }
    inline IngressAnalysis& WithAnalyzer(const Aws::String& value) { SetAnalyzer(value); return *this;}
    inline IngressAnalysis& WithAnalyzer(Aws::String&& value) { SetAnalyzer(std::move(value)); return *this;}
    inline IngressAnalysis& WithAnalyzer(const char* value) { SetAnalyzer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned value from an Add On.</p>
     */
    inline const Aws::String& GetResultField() const{ return m_resultField; }
    inline bool ResultFieldHasBeenSet() const { return m_resultFieldHasBeenSet; }
    inline void SetResultField(const Aws::String& value) { m_resultFieldHasBeenSet = true; m_resultField = value; }
    inline void SetResultField(Aws::String&& value) { m_resultFieldHasBeenSet = true; m_resultField = std::move(value); }
    inline void SetResultField(const char* value) { m_resultFieldHasBeenSet = true; m_resultField.assign(value); }
    inline IngressAnalysis& WithResultField(const Aws::String& value) { SetResultField(value); return *this;}
    inline IngressAnalysis& WithResultField(Aws::String&& value) { SetResultField(std::move(value)); return *this;}
    inline IngressAnalysis& WithResultField(const char* value) { SetResultField(value); return *this;}
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
