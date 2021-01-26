/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Exception that indicates that the operation would exceed a limit.</p> <p>
   * <code>Type</code> is the type of limit that would be exceeded.</p> <p>
   * <code>Limit</code> is the threshold that would be exceeded.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/LimitsExceededException">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API LimitsExceededException
  {
  public:
    LimitsExceededException();
    LimitsExceededException(Aws::Utils::Json::JsonView jsonValue);
    LimitsExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline LimitsExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline LimitsExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline LimitsExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    
    inline LimitsExceededException& WithType(const Aws::String& value) { SetType(value); return *this;}

    
    inline LimitsExceededException& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    
    inline LimitsExceededException& WithType(const char* value) { SetType(value); return *this;}


    
    inline long long GetLimit() const{ return m_limit; }

    
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    
    inline void SetLimit(long long value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline LimitsExceededException& WithLimit(long long value) { SetLimit(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    long long m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
