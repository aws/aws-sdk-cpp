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
    AWS_CLOUDFRONT_API TestResult();
    AWS_CLOUDFRONT_API TestResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API TestResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Contains configuration information and metadata about the CloudFront function
     * that was tested.</p>
     */
    inline const FunctionSummary& GetFunctionSummary() const{ return m_functionSummary; }

    /**
     * <p>Contains configuration information and metadata about the CloudFront function
     * that was tested.</p>
     */
    inline bool FunctionSummaryHasBeenSet() const { return m_functionSummaryHasBeenSet; }

    /**
     * <p>Contains configuration information and metadata about the CloudFront function
     * that was tested.</p>
     */
    inline void SetFunctionSummary(const FunctionSummary& value) { m_functionSummaryHasBeenSet = true; m_functionSummary = value; }

    /**
     * <p>Contains configuration information and metadata about the CloudFront function
     * that was tested.</p>
     */
    inline void SetFunctionSummary(FunctionSummary&& value) { m_functionSummaryHasBeenSet = true; m_functionSummary = std::move(value); }

    /**
     * <p>Contains configuration information and metadata about the CloudFront function
     * that was tested.</p>
     */
    inline TestResult& WithFunctionSummary(const FunctionSummary& value) { SetFunctionSummary(value); return *this;}

    /**
     * <p>Contains configuration information and metadata about the CloudFront function
     * that was tested.</p>
     */
    inline TestResult& WithFunctionSummary(FunctionSummary&& value) { SetFunctionSummary(std::move(value)); return *this;}


    /**
     * <p>The amount of time that the function took to run as a percentage of the
     * maximum allowed time. For example, a compute utilization of 35 means that the
     * function completed in 35% of the maximum allowed time.</p>
     */
    inline const Aws::String& GetComputeUtilization() const{ return m_computeUtilization; }

    /**
     * <p>The amount of time that the function took to run as a percentage of the
     * maximum allowed time. For example, a compute utilization of 35 means that the
     * function completed in 35% of the maximum allowed time.</p>
     */
    inline bool ComputeUtilizationHasBeenSet() const { return m_computeUtilizationHasBeenSet; }

    /**
     * <p>The amount of time that the function took to run as a percentage of the
     * maximum allowed time. For example, a compute utilization of 35 means that the
     * function completed in 35% of the maximum allowed time.</p>
     */
    inline void SetComputeUtilization(const Aws::String& value) { m_computeUtilizationHasBeenSet = true; m_computeUtilization = value; }

    /**
     * <p>The amount of time that the function took to run as a percentage of the
     * maximum allowed time. For example, a compute utilization of 35 means that the
     * function completed in 35% of the maximum allowed time.</p>
     */
    inline void SetComputeUtilization(Aws::String&& value) { m_computeUtilizationHasBeenSet = true; m_computeUtilization = std::move(value); }

    /**
     * <p>The amount of time that the function took to run as a percentage of the
     * maximum allowed time. For example, a compute utilization of 35 means that the
     * function completed in 35% of the maximum allowed time.</p>
     */
    inline void SetComputeUtilization(const char* value) { m_computeUtilizationHasBeenSet = true; m_computeUtilization.assign(value); }

    /**
     * <p>The amount of time that the function took to run as a percentage of the
     * maximum allowed time. For example, a compute utilization of 35 means that the
     * function completed in 35% of the maximum allowed time.</p>
     */
    inline TestResult& WithComputeUtilization(const Aws::String& value) { SetComputeUtilization(value); return *this;}

    /**
     * <p>The amount of time that the function took to run as a percentage of the
     * maximum allowed time. For example, a compute utilization of 35 means that the
     * function completed in 35% of the maximum allowed time.</p>
     */
    inline TestResult& WithComputeUtilization(Aws::String&& value) { SetComputeUtilization(std::move(value)); return *this;}

    /**
     * <p>The amount of time that the function took to run as a percentage of the
     * maximum allowed time. For example, a compute utilization of 35 means that the
     * function completed in 35% of the maximum allowed time.</p>
     */
    inline TestResult& WithComputeUtilization(const char* value) { SetComputeUtilization(value); return *this;}


    /**
     * <p>Contains the log lines that the function wrote (if any) when running the
     * test.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFunctionExecutionLogs() const{ return m_functionExecutionLogs; }

    /**
     * <p>Contains the log lines that the function wrote (if any) when running the
     * test.</p>
     */
    inline bool FunctionExecutionLogsHasBeenSet() const { return m_functionExecutionLogsHasBeenSet; }

    /**
     * <p>Contains the log lines that the function wrote (if any) when running the
     * test.</p>
     */
    inline void SetFunctionExecutionLogs(const Aws::Vector<Aws::String>& value) { m_functionExecutionLogsHasBeenSet = true; m_functionExecutionLogs = value; }

    /**
     * <p>Contains the log lines that the function wrote (if any) when running the
     * test.</p>
     */
    inline void SetFunctionExecutionLogs(Aws::Vector<Aws::String>&& value) { m_functionExecutionLogsHasBeenSet = true; m_functionExecutionLogs = std::move(value); }

    /**
     * <p>Contains the log lines that the function wrote (if any) when running the
     * test.</p>
     */
    inline TestResult& WithFunctionExecutionLogs(const Aws::Vector<Aws::String>& value) { SetFunctionExecutionLogs(value); return *this;}

    /**
     * <p>Contains the log lines that the function wrote (if any) when running the
     * test.</p>
     */
    inline TestResult& WithFunctionExecutionLogs(Aws::Vector<Aws::String>&& value) { SetFunctionExecutionLogs(std::move(value)); return *this;}

    /**
     * <p>Contains the log lines that the function wrote (if any) when running the
     * test.</p>
     */
    inline TestResult& AddFunctionExecutionLogs(const Aws::String& value) { m_functionExecutionLogsHasBeenSet = true; m_functionExecutionLogs.push_back(value); return *this; }

    /**
     * <p>Contains the log lines that the function wrote (if any) when running the
     * test.</p>
     */
    inline TestResult& AddFunctionExecutionLogs(Aws::String&& value) { m_functionExecutionLogsHasBeenSet = true; m_functionExecutionLogs.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains the log lines that the function wrote (if any) when running the
     * test.</p>
     */
    inline TestResult& AddFunctionExecutionLogs(const char* value) { m_functionExecutionLogsHasBeenSet = true; m_functionExecutionLogs.push_back(value); return *this; }


    /**
     * <p>If the result of testing the function was an error, this field contains the
     * error message.</p>
     */
    inline const Aws::String& GetFunctionErrorMessage() const{ return m_functionErrorMessage; }

    /**
     * <p>If the result of testing the function was an error, this field contains the
     * error message.</p>
     */
    inline bool FunctionErrorMessageHasBeenSet() const { return m_functionErrorMessageHasBeenSet; }

    /**
     * <p>If the result of testing the function was an error, this field contains the
     * error message.</p>
     */
    inline void SetFunctionErrorMessage(const Aws::String& value) { m_functionErrorMessageHasBeenSet = true; m_functionErrorMessage = value; }

    /**
     * <p>If the result of testing the function was an error, this field contains the
     * error message.</p>
     */
    inline void SetFunctionErrorMessage(Aws::String&& value) { m_functionErrorMessageHasBeenSet = true; m_functionErrorMessage = std::move(value); }

    /**
     * <p>If the result of testing the function was an error, this field contains the
     * error message.</p>
     */
    inline void SetFunctionErrorMessage(const char* value) { m_functionErrorMessageHasBeenSet = true; m_functionErrorMessage.assign(value); }

    /**
     * <p>If the result of testing the function was an error, this field contains the
     * error message.</p>
     */
    inline TestResult& WithFunctionErrorMessage(const Aws::String& value) { SetFunctionErrorMessage(value); return *this;}

    /**
     * <p>If the result of testing the function was an error, this field contains the
     * error message.</p>
     */
    inline TestResult& WithFunctionErrorMessage(Aws::String&& value) { SetFunctionErrorMessage(std::move(value)); return *this;}

    /**
     * <p>If the result of testing the function was an error, this field contains the
     * error message.</p>
     */
    inline TestResult& WithFunctionErrorMessage(const char* value) { SetFunctionErrorMessage(value); return *this;}


    /**
     * <p>The event object returned by the function. For more information about the
     * structure of the event object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/functions-event-structure.html">Event
     * object structure</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetFunctionOutput() const{ return m_functionOutput; }

    /**
     * <p>The event object returned by the function. For more information about the
     * structure of the event object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/functions-event-structure.html">Event
     * object structure</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool FunctionOutputHasBeenSet() const { return m_functionOutputHasBeenSet; }

    /**
     * <p>The event object returned by the function. For more information about the
     * structure of the event object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/functions-event-structure.html">Event
     * object structure</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetFunctionOutput(const Aws::String& value) { m_functionOutputHasBeenSet = true; m_functionOutput = value; }

    /**
     * <p>The event object returned by the function. For more information about the
     * structure of the event object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/functions-event-structure.html">Event
     * object structure</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetFunctionOutput(Aws::String&& value) { m_functionOutputHasBeenSet = true; m_functionOutput = std::move(value); }

    /**
     * <p>The event object returned by the function. For more information about the
     * structure of the event object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/functions-event-structure.html">Event
     * object structure</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetFunctionOutput(const char* value) { m_functionOutputHasBeenSet = true; m_functionOutput.assign(value); }

    /**
     * <p>The event object returned by the function. For more information about the
     * structure of the event object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/functions-event-structure.html">Event
     * object structure</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline TestResult& WithFunctionOutput(const Aws::String& value) { SetFunctionOutput(value); return *this;}

    /**
     * <p>The event object returned by the function. For more information about the
     * structure of the event object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/functions-event-structure.html">Event
     * object structure</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline TestResult& WithFunctionOutput(Aws::String&& value) { SetFunctionOutput(std::move(value)); return *this;}

    /**
     * <p>The event object returned by the function. For more information about the
     * structure of the event object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/functions-event-structure.html">Event
     * object structure</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline TestResult& WithFunctionOutput(const char* value) { SetFunctionOutput(value); return *this;}

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
