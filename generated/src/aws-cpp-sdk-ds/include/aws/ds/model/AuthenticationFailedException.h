/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>An authentication error occurred.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AuthenticationFailedException">AWS
   * API Reference</a></p>
   */
  class AuthenticationFailedException
  {
  public:
    AWS_DIRECTORYSERVICE_API AuthenticationFailedException();
    AWS_DIRECTORYSERVICE_API AuthenticationFailedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API AuthenticationFailedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The textual message for the exception.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The textual message for the exception.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The textual message for the exception.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The textual message for the exception.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The textual message for the exception.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The textual message for the exception.</p>
     */
    inline AuthenticationFailedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The textual message for the exception.</p>
     */
    inline AuthenticationFailedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The textual message for the exception.</p>
     */
    inline AuthenticationFailedException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The identifier of the request that caused the exception.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The identifier of the request that caused the exception.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The identifier of the request that caused the exception.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The identifier of the request that caused the exception.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The identifier of the request that caused the exception.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The identifier of the request that caused the exception.</p>
     */
    inline AuthenticationFailedException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The identifier of the request that caused the exception.</p>
     */
    inline AuthenticationFailedException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the request that caused the exception.</p>
     */
    inline AuthenticationFailedException& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
