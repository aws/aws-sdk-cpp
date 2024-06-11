/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/InstanceStateChangeReasonCode.h>
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
   * <p>The details of the status change reason for the instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceStateChangeReason">AWS
   * API Reference</a></p>
   */
  class InstanceStateChangeReason
  {
  public:
    AWS_EMR_API InstanceStateChangeReason();
    AWS_EMR_API InstanceStateChangeReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceStateChangeReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The programmable code for the state change reason.</p>
     */
    inline const InstanceStateChangeReasonCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const InstanceStateChangeReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(InstanceStateChangeReasonCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline InstanceStateChangeReason& WithCode(const InstanceStateChangeReasonCode& value) { SetCode(value); return *this;}
    inline InstanceStateChangeReason& WithCode(InstanceStateChangeReasonCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status change reason description.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline InstanceStateChangeReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline InstanceStateChangeReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline InstanceStateChangeReason& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    InstanceStateChangeReasonCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
