/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/StepStateChangeReasonCode.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The details of the step state change reason.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StepStateChangeReason">AWS
   * API Reference</a></p>
   */
  class StepStateChangeReason
  {
  public:
    AWS_EMR_API StepStateChangeReason();
    AWS_EMR_API StepStateChangeReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API StepStateChangeReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The programmable code for the state change reason. Note: Currently, the
     * service provides no code for the state change.</p>
     */
    inline const StepStateChangeReasonCode& GetCode() const{ return m_code; }

    /**
     * <p>The programmable code for the state change reason. Note: Currently, the
     * service provides no code for the state change.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The programmable code for the state change reason. Note: Currently, the
     * service provides no code for the state change.</p>
     */
    inline void SetCode(const StepStateChangeReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The programmable code for the state change reason. Note: Currently, the
     * service provides no code for the state change.</p>
     */
    inline void SetCode(StepStateChangeReasonCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The programmable code for the state change reason. Note: Currently, the
     * service provides no code for the state change.</p>
     */
    inline StepStateChangeReason& WithCode(const StepStateChangeReasonCode& value) { SetCode(value); return *this;}

    /**
     * <p>The programmable code for the state change reason. Note: Currently, the
     * service provides no code for the state change.</p>
     */
    inline StepStateChangeReason& WithCode(StepStateChangeReasonCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline StepStateChangeReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline StepStateChangeReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline StepStateChangeReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    StepStateChangeReasonCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
