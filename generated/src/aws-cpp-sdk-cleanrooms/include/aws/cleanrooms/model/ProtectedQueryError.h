/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Details of errors thrown by the protected query.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryError">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryError
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryError();
    AWS_CLEANROOMS_API ProtectedQueryError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of why the query failed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of why the query failed.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of why the query failed.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of why the query failed.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of why the query failed.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of why the query failed.</p>
     */
    inline ProtectedQueryError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of why the query failed.</p>
     */
    inline ProtectedQueryError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of why the query failed.</p>
     */
    inline ProtectedQueryError& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>An error code for the error.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>An error code for the error.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>An error code for the error.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>An error code for the error.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>An error code for the error.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>An error code for the error.</p>
     */
    inline ProtectedQueryError& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>An error code for the error.</p>
     */
    inline ProtectedQueryError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>An error code for the error.</p>
     */
    inline ProtectedQueryError& WithCode(const char* value) { SetCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
