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
   * <p>Client authentication is already enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/InvalidClientAuthStatusException">AWS
   * API Reference</a></p>
   */
  class InvalidClientAuthStatusException
  {
  public:
    AWS_DIRECTORYSERVICE_API InvalidClientAuthStatusException();
    AWS_DIRECTORYSERVICE_API InvalidClientAuthStatusException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API InvalidClientAuthStatusException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidClientAuthStatusException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidClientAuthStatusException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidClientAuthStatusException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline InvalidClientAuthStatusException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline InvalidClientAuthStatusException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline InvalidClientAuthStatusException& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
