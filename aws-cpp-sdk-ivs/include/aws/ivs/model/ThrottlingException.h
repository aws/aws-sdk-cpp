/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
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
namespace IVS
{
namespace Model
{

  class AWS_IVS_API ThrottlingException
  {
  public:
    ThrottlingException();
    ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
    ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Request was denied due to request throttling.</p>
     */
    inline const Aws::String& GetExceptionMessage() const{ return m_exceptionMessage; }

    /**
     * <p>Request was denied due to request throttling.</p>
     */
    inline bool ExceptionMessageHasBeenSet() const { return m_exceptionMessageHasBeenSet; }

    /**
     * <p>Request was denied due to request throttling.</p>
     */
    inline void SetExceptionMessage(const Aws::String& value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage = value; }

    /**
     * <p>Request was denied due to request throttling.</p>
     */
    inline void SetExceptionMessage(Aws::String&& value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage = std::move(value); }

    /**
     * <p>Request was denied due to request throttling.</p>
     */
    inline void SetExceptionMessage(const char* value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage.assign(value); }

    /**
     * <p>Request was denied due to request throttling.</p>
     */
    inline ThrottlingException& WithExceptionMessage(const Aws::String& value) { SetExceptionMessage(value); return *this;}

    /**
     * <p>Request was denied due to request throttling.</p>
     */
    inline ThrottlingException& WithExceptionMessage(Aws::String&& value) { SetExceptionMessage(std::move(value)); return *this;}

    /**
     * <p>Request was denied due to request throttling.</p>
     */
    inline ThrottlingException& WithExceptionMessage(const char* value) { SetExceptionMessage(value); return *this;}

  private:

    Aws::String m_exceptionMessage;
    bool m_exceptionMessageHasBeenSet;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
