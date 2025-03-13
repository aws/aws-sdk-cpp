/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FunctionSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>Contains the result of testing a CloudFront function with
   * <code>TestFunction</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/TestResult">AWS
   * API Reference</a></p>
   */
  class TestResult
  {
  public:
    AWS_CLOUDFRONT_API TestResult() = default;
    AWS_CLOUDFRONT_API TestResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API TestResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Contains configuration information and metadata about the CloudFront function
     * that was tested.</p>
     */
    inline const FunctionSummary& GetFunctionSummary() const { return m_functionSummary; }
    inline bool FunctionSummaryHasBeenSet() const { return m_functionSummaryHasBeenSet; }
    template<typename FunctionSummaryT = FunctionSummary>
    void SetFunctionSummary(FunctionSummaryT&& value) { m_functionSummaryHasBeenSet = true; m_functionSummary = std::forward<FunctionSummaryT>(value); }
    template<typename FunctionSummaryT = FunctionSummary>
    TestResult& WithFunctionSummary(FunctionSummaryT&& value) { SetFunctionSummary(std::forward<FunctionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that the function took to run as a percentage of the
     * maximum allowed time. For example, a compute utilization of 35 means that the
     * function completed in 35% of the maximum allowed time.</p>
     */
    inline const Aws::String& GetComputeUtilization() const { return m_computeUtilization; }
    inline bool ComputeUtilizationHasBeenSet() const { return m_computeUtilizationHasBeenSet; }
    template<typename ComputeUtilizationT = Aws::String>
    void SetComputeUtilization(ComputeUtilizationT&& value) { m_computeUtilizationHasBeenSet = true; m_computeUtilization = std::forward<ComputeUtilizationT>(value); }
    template<typename ComputeUtilizationT = Aws::String>
    TestResult& WithComputeUtilization(ComputeUtilizationT&& value) { SetComputeUtilization(std::forward<ComputeUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the log lines that the function wrote (if any) when running the
     * test.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFunctionExecutionLogs() const { return m_functionExecutionLogs; }
    inline bool FunctionExecutionLogsHasBeenSet() const { return m_functionExecutionLogsHasBeenSet; }
    template<typename FunctionExecutionLogsT = Aws::Vector<Aws::String>>
    void SetFunctionExecutionLogs(FunctionExecutionLogsT&& value) { m_functionExecutionLogsHasBeenSet = true; m_functionExecutionLogs = std::forward<FunctionExecutionLogsT>(value); }
    template<typename FunctionExecutionLogsT = Aws::Vector<Aws::String>>
    TestResult& WithFunctionExecutionLogs(FunctionExecutionLogsT&& value) { SetFunctionExecutionLogs(std::forward<FunctionExecutionLogsT>(value)); return *this;}
    template<typename FunctionExecutionLogsT = Aws::String>
    TestResult& AddFunctionExecutionLogs(FunctionExecutionLogsT&& value) { m_functionExecutionLogsHasBeenSet = true; m_functionExecutionLogs.emplace_back(std::forward<FunctionExecutionLogsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result of testing the function was an error, this field contains the
     * error message.</p>
     */
    inline const Aws::String& GetFunctionErrorMessage() const { return m_functionErrorMessage; }
    inline bool FunctionErrorMessageHasBeenSet() const { return m_functionErrorMessageHasBeenSet; }
    template<typename FunctionErrorMessageT = Aws::String>
    void SetFunctionErrorMessage(FunctionErrorMessageT&& value) { m_functionErrorMessageHasBeenSet = true; m_functionErrorMessage = std::forward<FunctionErrorMessageT>(value); }
    template<typename FunctionErrorMessageT = Aws::String>
    TestResult& WithFunctionErrorMessage(FunctionErrorMessageT&& value) { SetFunctionErrorMessage(std::forward<FunctionErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event object returned by the function. For more information about the
     * structure of the event object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/functions-event-structure.html">Event
     * object structure</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetFunctionOutput() const { return m_functionOutput; }
    inline bool FunctionOutputHasBeenSet() const { return m_functionOutputHasBeenSet; }
    template<typename FunctionOutputT = Aws::String>
    void SetFunctionOutput(FunctionOutputT&& value) { m_functionOutputHasBeenSet = true; m_functionOutput = std::forward<FunctionOutputT>(value); }
    template<typename FunctionOutputT = Aws::String>
    TestResult& WithFunctionOutput(FunctionOutputT&& value) { SetFunctionOutput(std::forward<FunctionOutputT>(value)); return *this;}
    ///@}
  private:

    FunctionSummary m_functionSummary;
    bool m_functionSummaryHasBeenSet = false;

    Aws::String m_computeUtilization;
    bool m_computeUtilizationHasBeenSet = false;

    Aws::Vector<Aws::String> m_functionExecutionLogs;
    bool m_functionExecutionLogsHasBeenSet = false;

    Aws::String m_functionErrorMessage;
    bool m_functionErrorMessageHasBeenSet = false;

    Aws::String m_functionOutput;
    bool m_functionOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
