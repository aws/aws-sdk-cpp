/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopStatus.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopOutput.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AugmentedAIRuntime
{
namespace Model
{
  class DescribeHumanLoopResult
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API DescribeHumanLoopResult();
    AWS_AUGMENTEDAIRUNTIME_API DescribeHumanLoopResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUGMENTEDAIRUNTIME_API DescribeHumanLoopResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The creation time when Amazon Augmented AI created the human loop.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time when Amazon Augmented AI created the human loop.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The creation time when Amazon Augmented AI created the human loop.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The creation time when Amazon Augmented AI created the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time when Amazon Augmented AI created the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The reason why a human loop failed. The failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason why a human loop failed. The failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The reason why a human loop failed. The failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The reason why a human loop failed. The failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The reason why a human loop failed. The failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline DescribeHumanLoopResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason why a human loop failed. The failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline DescribeHumanLoopResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason why a human loop failed. The failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline DescribeHumanLoopResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>A failure code that identifies the type of failure.</p> <p>Possible values:
     * <code>ValidationError</code>, <code>Expired</code>, <code>InternalError</code>
     * </p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>A failure code that identifies the type of failure.</p> <p>Possible values:
     * <code>ValidationError</code>, <code>Expired</code>, <code>InternalError</code>
     * </p>
     */
    inline void SetFailureCode(const Aws::String& value) { m_failureCode = value; }

    /**
     * <p>A failure code that identifies the type of failure.</p> <p>Possible values:
     * <code>ValidationError</code>, <code>Expired</code>, <code>InternalError</code>
     * </p>
     */
    inline void SetFailureCode(Aws::String&& value) { m_failureCode = std::move(value); }

    /**
     * <p>A failure code that identifies the type of failure.</p> <p>Possible values:
     * <code>ValidationError</code>, <code>Expired</code>, <code>InternalError</code>
     * </p>
     */
    inline void SetFailureCode(const char* value) { m_failureCode.assign(value); }

    /**
     * <p>A failure code that identifies the type of failure.</p> <p>Possible values:
     * <code>ValidationError</code>, <code>Expired</code>, <code>InternalError</code>
     * </p>
     */
    inline DescribeHumanLoopResult& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}

    /**
     * <p>A failure code that identifies the type of failure.</p> <p>Possible values:
     * <code>ValidationError</code>, <code>Expired</code>, <code>InternalError</code>
     * </p>
     */
    inline DescribeHumanLoopResult& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}

    /**
     * <p>A failure code that identifies the type of failure.</p> <p>Possible values:
     * <code>ValidationError</code>, <code>Expired</code>, <code>InternalError</code>
     * </p>
     */
    inline DescribeHumanLoopResult& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}


    /**
     * <p>The status of the human loop. </p>
     */
    inline const HumanLoopStatus& GetHumanLoopStatus() const{ return m_humanLoopStatus; }

    /**
     * <p>The status of the human loop. </p>
     */
    inline void SetHumanLoopStatus(const HumanLoopStatus& value) { m_humanLoopStatus = value; }

    /**
     * <p>The status of the human loop. </p>
     */
    inline void SetHumanLoopStatus(HumanLoopStatus&& value) { m_humanLoopStatus = std::move(value); }

    /**
     * <p>The status of the human loop. </p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopStatus(const HumanLoopStatus& value) { SetHumanLoopStatus(value); return *this;}

    /**
     * <p>The status of the human loop. </p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopStatus(HumanLoopStatus&& value) { SetHumanLoopStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the human loop. The name must be lowercase, unique within the
     * Region in your account, and can have up to 63 characters. Valid characters: a-z,
     * 0-9, and - (hyphen).</p>
     */
    inline const Aws::String& GetHumanLoopName() const{ return m_humanLoopName; }

    /**
     * <p>The name of the human loop. The name must be lowercase, unique within the
     * Region in your account, and can have up to 63 characters. Valid characters: a-z,
     * 0-9, and - (hyphen).</p>
     */
    inline void SetHumanLoopName(const Aws::String& value) { m_humanLoopName = value; }

    /**
     * <p>The name of the human loop. The name must be lowercase, unique within the
     * Region in your account, and can have up to 63 characters. Valid characters: a-z,
     * 0-9, and - (hyphen).</p>
     */
    inline void SetHumanLoopName(Aws::String&& value) { m_humanLoopName = std::move(value); }

    /**
     * <p>The name of the human loop. The name must be lowercase, unique within the
     * Region in your account, and can have up to 63 characters. Valid characters: a-z,
     * 0-9, and - (hyphen).</p>
     */
    inline void SetHumanLoopName(const char* value) { m_humanLoopName.assign(value); }

    /**
     * <p>The name of the human loop. The name must be lowercase, unique within the
     * Region in your account, and can have up to 63 characters. Valid characters: a-z,
     * 0-9, and - (hyphen).</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopName(const Aws::String& value) { SetHumanLoopName(value); return *this;}

    /**
     * <p>The name of the human loop. The name must be lowercase, unique within the
     * Region in your account, and can have up to 63 characters. Valid characters: a-z,
     * 0-9, and - (hyphen).</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopName(Aws::String&& value) { SetHumanLoopName(std::move(value)); return *this;}

    /**
     * <p>The name of the human loop. The name must be lowercase, unique within the
     * Region in your account, and can have up to 63 characters. Valid characters: a-z,
     * 0-9, and - (hyphen).</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopName(const char* value) { SetHumanLoopName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline const Aws::String& GetHumanLoopArn() const{ return m_humanLoopArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline void SetHumanLoopArn(const Aws::String& value) { m_humanLoopArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline void SetHumanLoopArn(Aws::String&& value) { m_humanLoopArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline void SetHumanLoopArn(const char* value) { m_humanLoopArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopArn(const Aws::String& value) { SetHumanLoopArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopArn(Aws::String&& value) { SetHumanLoopArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopArn(const char* value) { SetHumanLoopArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline DescribeHumanLoopResult& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline DescribeHumanLoopResult& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline DescribeHumanLoopResult& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}


    /**
     * <p>An object that contains information about the output of the human loop.</p>
     */
    inline const HumanLoopOutput& GetHumanLoopOutput() const{ return m_humanLoopOutput; }

    /**
     * <p>An object that contains information about the output of the human loop.</p>
     */
    inline void SetHumanLoopOutput(const HumanLoopOutput& value) { m_humanLoopOutput = value; }

    /**
     * <p>An object that contains information about the output of the human loop.</p>
     */
    inline void SetHumanLoopOutput(HumanLoopOutput&& value) { m_humanLoopOutput = std::move(value); }

    /**
     * <p>An object that contains information about the output of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopOutput(const HumanLoopOutput& value) { SetHumanLoopOutput(value); return *this;}

    /**
     * <p>An object that contains information about the output of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopOutput(HumanLoopOutput&& value) { SetHumanLoopOutput(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_failureReason;

    Aws::String m_failureCode;

    HumanLoopStatus m_humanLoopStatus;

    Aws::String m_humanLoopName;

    Aws::String m_humanLoopArn;

    Aws::String m_flowDefinitionArn;

    HumanLoopOutput m_humanLoopOutput;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
