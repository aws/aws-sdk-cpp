﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_IVSREALTIME_API ValidationException();
    AWS_IVSREALTIME_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input fails to satisfy the constraints specified by an Amazon Web
     * Services service.</p>
     */
    inline const Aws::String& GetExceptionMessage() const{ return m_exceptionMessage; }
    inline bool ExceptionMessageHasBeenSet() const { return m_exceptionMessageHasBeenSet; }
    inline void SetExceptionMessage(const Aws::String& value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage = value; }
    inline void SetExceptionMessage(Aws::String&& value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage = std::move(value); }
    inline void SetExceptionMessage(const char* value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage.assign(value); }
    inline ValidationException& WithExceptionMessage(const Aws::String& value) { SetExceptionMessage(value); return *this;}
    inline ValidationException& WithExceptionMessage(Aws::String&& value) { SetExceptionMessage(std::move(value)); return *this;}
    inline ValidationException& WithExceptionMessage(const char* value) { SetExceptionMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_exceptionMessage;
    bool m_exceptionMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
