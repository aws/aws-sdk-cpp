/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/AccessDeniedExceptionReason.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Caller does not have sufficient access to perform this action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AccessDeniedException">AWS
   * API Reference</a></p>
   */
  class AccessDeniedException
  {
  public:
    AWS_CLEANROOMS_API AccessDeniedException();
    AWS_CLEANROOMS_API AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline AccessDeniedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline AccessDeniedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline AccessDeniedException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>A reason code for the exception.</p>
     */
    inline const AccessDeniedExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>A reason code for the exception.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A reason code for the exception.</p>
     */
    inline void SetReason(const AccessDeniedExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A reason code for the exception.</p>
     */
    inline void SetReason(AccessDeniedExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A reason code for the exception.</p>
     */
    inline AccessDeniedException& WithReason(const AccessDeniedExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>A reason code for the exception.</p>
     */
    inline AccessDeniedException& WithReason(AccessDeniedExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    AccessDeniedExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
