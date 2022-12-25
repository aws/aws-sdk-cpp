/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
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
namespace IoT1ClickDevicesService
{
namespace Model
{

  class ResourceConflictException
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API ResourceConflictException();
    AWS_IOT1CLICKDEVICESSERVICE_API ResourceConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKDEVICESSERVICE_API ResourceConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKDEVICESSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>409</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>409</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>409</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>409</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>409</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>409</p>
     */
    inline ResourceConflictException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>409</p>
     */
    inline ResourceConflictException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>409</p>
     */
    inline ResourceConflictException& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>An error message explaining the error or its remedy.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>An error message explaining the error or its remedy.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>An error message explaining the error or its remedy.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>An error message explaining the error or its remedy.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>An error message explaining the error or its remedy.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>An error message explaining the error or its remedy.</p>
     */
    inline ResourceConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>An error message explaining the error or its remedy.</p>
     */
    inline ResourceConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>An error message explaining the error or its remedy.</p>
     */
    inline ResourceConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
