﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>The input fails to satisfy the constraints specified by an AWS
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ValidationException">AWS
   * API Reference</a></p>
   */
  class AWS_FINSPACEDATA_API ValidationException
  {
  public:
    ValidationException();
    ValidationException(Aws::Utils::Json::JsonView jsonValue);
    ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetReason() const{ return m_reason; }

    
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    
    inline ValidationException& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    
    inline ValidationException& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    
    inline ValidationException& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
