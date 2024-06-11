﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>The request failed due to a temporary failure of the server.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ServiceUnavailableException">AWS
   * API Reference</a></p>
   */
  class ServiceUnavailableException
  {
  public:
    AWS_BACKUP_API ServiceUnavailableException();
    AWS_BACKUP_API ServiceUnavailableException(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ServiceUnavailableException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline ServiceUnavailableException& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline ServiceUnavailableException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline ServiceUnavailableException& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ServiceUnavailableException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ServiceUnavailableException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ServiceUnavailableException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ServiceUnavailableException& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ServiceUnavailableException& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ServiceUnavailableException& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }
    inline ServiceUnavailableException& WithContext(const Aws::String& value) { SetContext(value); return *this;}
    inline ServiceUnavailableException& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}
    inline ServiceUnavailableException& WithContext(const char* value) { SetContext(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
