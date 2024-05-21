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
    AWS_MAILMANAGER_API Analysis();
    AWS_MAILMANAGER_API Analysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Analysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of an Add On.</p>
     */
    inline const Aws::String& GetAnalyzer() const{ return m_analyzer; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Add On.</p>
     */
    inline bool AnalyzerHasBeenSet() const { return m_analyzerHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Add On.</p>
     */
    inline void SetAnalyzer(const Aws::String& value) { m_analyzerHasBeenSet = true; m_analyzer = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Add On.</p>
     */
    inline void SetAnalyzer(Aws::String&& value) { m_analyzerHasBeenSet = true; m_analyzer = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Add On.</p>
     */
    inline void SetAnalyzer(const char* value) { m_analyzerHasBeenSet = true; m_analyzer.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Add On.</p>
     */
    inline Analysis& WithAnalyzer(const Aws::String& value) { SetAnalyzer(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Add On.</p>
     */
    inline Analysis& WithAnalyzer(Aws::String&& value) { SetAnalyzer(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Add On.</p>
     */
    inline Analysis& WithAnalyzer(const char* value) { SetAnalyzer(value); return *this;}


    /**
     * <p>The returned value from an Add On.</p>
     */
    inline const Aws::String& GetResultField() const{ return m_resultField; }

    /**
     * <p>The returned value from an Add On.</p>
     */
    inline bool ResultFieldHasBeenSet() const { return m_resultFieldHasBeenSet; }

    /**
     * <p>The returned value from an Add On.</p>
     */
    inline void SetResultField(const Aws::String& value) { m_resultFieldHasBeenSet = true; m_resultField = value; }

    /**
     * <p>The returned value from an Add On.</p>
     */
    inline void SetResultField(Aws::String&& value) { m_resultFieldHasBeenSet = true; m_resultField = std::move(value); }

    /**
     * <p>The returned value from an Add On.</p>
     */
    inline void SetResultField(const char* value) { m_resultFieldHasBeenSet = true; m_resultField.assign(value); }

    /**
     * <p>The returned value from an Add On.</p>
     */
    inline Analysis& WithResultField(const Aws::String& value) { SetResultField(value); return *this;}

    /**
     * <p>The returned value from an Add On.</p>
     */
    inline Analysis& WithResultField(Aws::String&& value) { SetResultField(std::move(value)); return *this;}

    /**
     * <p>The returned value from an Add On.</p>
     */
    inline Analysis& WithResultField(const char* value) { SetResultField(value); return *this;}

  private:

    Aws::String m_analyzer;
    bool m_analyzerHasBeenSet = false;

    Aws::String m_resultField;
    bool m_resultFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
