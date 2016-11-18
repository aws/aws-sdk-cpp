﻿/*
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
#include <aws/elasticmapreduce/model/ClusterStateChangeReasonCode.h>
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
   * <p>The reason that the cluster changed to its current state.</p>
   */
  class AWS_EMR_API ClusterStateChangeReason
  {
  public:
    ClusterStateChangeReason();
    ClusterStateChangeReason(const Aws::Utils::Json::JsonValue& jsonValue);
    ClusterStateChangeReason& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The programmatic code for the state change reason.</p>
     */
    inline const ClusterStateChangeReasonCode& GetCode() const{ return m_code; }

    /**
     * <p>The programmatic code for the state change reason.</p>
     */
    inline void SetCode(const ClusterStateChangeReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The programmatic code for the state change reason.</p>
     */
    inline void SetCode(ClusterStateChangeReasonCode&& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The programmatic code for the state change reason.</p>
     */
    inline ClusterStateChangeReason& WithCode(const ClusterStateChangeReasonCode& value) { SetCode(value); return *this;}

    /**
     * <p>The programmatic code for the state change reason.</p>
     */
    inline ClusterStateChangeReason& WithCode(ClusterStateChangeReasonCode&& value) { SetCode(value); return *this;}

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline ClusterStateChangeReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline ClusterStateChangeReason& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>The descriptive message for the state change reason.</p>
     */
    inline ClusterStateChangeReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:
    ClusterStateChangeReasonCode m_code;
    bool m_codeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
