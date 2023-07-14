﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ebs/model/AccessDeniedExceptionReason.h>
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
namespace EBS
{
namespace Model
{

  /**
   * <p>You do not have sufficient access to perform this action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/AccessDeniedException">AWS
   * API Reference</a></p>
   */
  class AWS_EBS_API AccessDeniedException
  {
  public:
    AccessDeniedException();
    AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
    AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline AccessDeniedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline AccessDeniedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline AccessDeniedException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The reason for the exception.</p>
     */
    inline const AccessDeniedExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the exception.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the exception.</p>
     */
    inline void SetReason(const AccessDeniedExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the exception.</p>
     */
    inline void SetReason(AccessDeniedExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the exception.</p>
     */
    inline AccessDeniedException& WithReason(const AccessDeniedExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the exception.</p>
     */
    inline AccessDeniedException& WithReason(AccessDeniedExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    AccessDeniedExceptionReason m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
