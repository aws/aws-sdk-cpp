/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/InstanceGroupStateChangeReasonCode.h>
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
   * <p>The status change reason details for the instance group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceGroupStateChangeReason">AWS
   * API Reference</a></p>
   */
  class InstanceGroupStateChangeReason
  {
  public:
    AWS_EMR_API InstanceGroupStateChangeReason() = default;
    AWS_EMR_API InstanceGroupStateChangeReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceGroupStateChangeReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The programmable code for the state change reason.</p>
     */
    inline InstanceGroupStateChangeReasonCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(InstanceGroupStateChangeReasonCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline InstanceGroupStateChangeReason& WithCode(InstanceGroupStateChangeReasonCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status change reason description.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InstanceGroupStateChangeReason& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    InstanceGroupStateChangeReasonCode m_code{InstanceGroupStateChangeReasonCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
