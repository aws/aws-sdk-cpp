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
   * <p>Client authentication setup could not be completed because at least one valid
   * certificate must be registered in the system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/NoAvailableCertificateException">AWS
   * API Reference</a></p>
   */
  class NoAvailableCertificateException
  {
  public:
    AWS_DIRECTORYSERVICE_API NoAvailableCertificateException();
    AWS_DIRECTORYSERVICE_API NoAvailableCertificateException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API NoAvailableCertificateException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline NoAvailableCertificateException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline NoAvailableCertificateException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline NoAvailableCertificateException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline NoAvailableCertificateException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline NoAvailableCertificateException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline NoAvailableCertificateException& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
