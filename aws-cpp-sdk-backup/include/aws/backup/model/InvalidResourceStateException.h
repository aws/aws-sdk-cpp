/**
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
   * <p>AWS Backup is already performing an action on this recovery point. It can't
   * perform the action you requested until the first action finishes. Try again
   * later.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/InvalidResourceStateException">AWS
   * API Reference</a></p>
   */
  class AWS_BACKUP_API InvalidResourceStateException
  {
  public:
    InvalidResourceStateException();
    InvalidResourceStateException(Aws::Utils::Json::JsonView jsonValue);
    InvalidResourceStateException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline InvalidResourceStateException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline InvalidResourceStateException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline InvalidResourceStateException& WithCode(const char* value) { SetCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidResourceStateException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidResourceStateException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidResourceStateException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p/>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p/>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p/>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p/>
     */
    inline InvalidResourceStateException& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p/>
     */
    inline InvalidResourceStateException& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline InvalidResourceStateException& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetContext() const{ return m_context; }

    /**
     * <p/>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p/>
     */
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p/>
     */
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }

    /**
     * <p/>
     */
    inline InvalidResourceStateException& WithContext(const Aws::String& value) { SetContext(value); return *this;}

    /**
     * <p/>
     */
    inline InvalidResourceStateException& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline InvalidResourceStateException& WithContext(const char* value) { SetContext(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_context;
    bool m_contextHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
