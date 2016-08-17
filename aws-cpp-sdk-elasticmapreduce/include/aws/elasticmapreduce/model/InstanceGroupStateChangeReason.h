/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/InstanceGroupStateChangeReasonCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>The status change reason details for the instance group.</p>
   */
  class AWS_EMR_API InstanceGroupStateChangeReason
  {
  public:
    InstanceGroupStateChangeReason();
    InstanceGroupStateChangeReason(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceGroupStateChangeReason& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The programmable code for the state change reason.</p>
     */
    inline const InstanceGroupStateChangeReasonCode& GetCode() const{ return m_code; }

    /**
     * <p>The programmable code for the state change reason.</p>
     */
    inline void SetCode(const InstanceGroupStateChangeReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The programmable code for the state change reason.</p>
     */
    inline void SetCode(InstanceGroupStateChangeReasonCode&& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The programmable code for the state change reason.</p>
     */
    inline InstanceGroupStateChangeReason& WithCode(const InstanceGroupStateChangeReasonCode& value) { SetCode(value); return *this;}

    /**
     * <p>The programmable code for the state change reason.</p>
     */
    inline InstanceGroupStateChangeReason& WithCode(InstanceGroupStateChangeReasonCode&& value) { SetCode(value); return *this;}

    /**
     * <p>The status change reason description.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The status change reason description.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The status change reason description.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The status change reason description.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The status change reason description.</p>
     */
    inline InstanceGroupStateChangeReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The status change reason description.</p>
     */
    inline InstanceGroupStateChangeReason& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>The status change reason description.</p>
     */
    inline InstanceGroupStateChangeReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:
    InstanceGroupStateChangeReasonCode m_code;
    bool m_codeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
