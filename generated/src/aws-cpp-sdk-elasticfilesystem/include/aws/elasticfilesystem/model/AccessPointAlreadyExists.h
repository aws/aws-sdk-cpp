/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Returned if the access point that you are trying to create already exists,
   * with the creation token you provided in the request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/AccessPointAlreadyExists">AWS
   * API Reference</a></p>
   */
  class AccessPointAlreadyExists
  {
  public:
    AWS_EFS_API AccessPointAlreadyExists();
    AWS_EFS_API AccessPointAlreadyExists(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API AccessPointAlreadyExists& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    
    inline AccessPointAlreadyExists& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    
    inline AccessPointAlreadyExists& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    
    inline AccessPointAlreadyExists& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline AccessPointAlreadyExists& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline AccessPointAlreadyExists& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline AccessPointAlreadyExists& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetAccessPointId() const{ return m_accessPointId; }

    
    inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }

    
    inline void SetAccessPointId(const Aws::String& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = value; }

    
    inline void SetAccessPointId(Aws::String&& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = std::move(value); }

    
    inline void SetAccessPointId(const char* value) { m_accessPointIdHasBeenSet = true; m_accessPointId.assign(value); }

    
    inline AccessPointAlreadyExists& WithAccessPointId(const Aws::String& value) { SetAccessPointId(value); return *this;}

    
    inline AccessPointAlreadyExists& WithAccessPointId(Aws::String&& value) { SetAccessPointId(std::move(value)); return *this;}

    
    inline AccessPointAlreadyExists& WithAccessPointId(const char* value) { SetAccessPointId(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_accessPointId;
    bool m_accessPointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
