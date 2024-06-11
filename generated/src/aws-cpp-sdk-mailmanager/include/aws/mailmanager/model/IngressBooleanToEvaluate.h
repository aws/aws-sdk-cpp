﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
   * <p>The union type representing the allowed types of operands for a boolean
   * condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressBooleanToEvaluate">AWS
   * API Reference</a></p>
   */
  class IngressBooleanToEvaluate
  {
  public:
    AWS_MAILMANAGER_API IngressBooleanToEvaluate();
    AWS_MAILMANAGER_API IngressBooleanToEvaluate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressBooleanToEvaluate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The structure type for a boolean condition stating the Add On ARN and its
     * returned value.</p>
     */
    inline const IngressAnalysis& GetAnalysis() const{ return m_analysis; }
    inline bool AnalysisHasBeenSet() const { return m_analysisHasBeenSet; }
    inline void SetAnalysis(const IngressAnalysis& value) { m_analysisHasBeenSet = true; m_analysis = value; }
    inline void SetAnalysis(IngressAnalysis&& value) { m_analysisHasBeenSet = true; m_analysis = std::move(value); }
    inline IngressBooleanToEvaluate& WithAnalysis(const IngressAnalysis& value) { SetAnalysis(value); return *this;}
    inline IngressBooleanToEvaluate& WithAnalysis(IngressAnalysis&& value) { SetAnalysis(std::move(value)); return *this;}
    ///@}
  private:

    IngressAnalysis m_analysis;
    bool m_analysisHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
