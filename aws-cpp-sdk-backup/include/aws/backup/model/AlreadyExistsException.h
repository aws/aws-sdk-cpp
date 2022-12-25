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
   * <p>The required resource already exists.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/AlreadyExistsException">AWS
   * API Reference</a></p>
   */
  class AlreadyExistsException
  {
  public:
    AWS_BACKUP_API AlreadyExistsException();
    AWS_BACKUP_API AlreadyExistsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API AlreadyExistsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline AlreadyExistsException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline AlreadyExistsException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline AlreadyExistsException& WithCode(const char* value) { SetCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline AlreadyExistsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline AlreadyExistsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline AlreadyExistsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p/>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p/>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p/>
     */
    inline AlreadyExistsException& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p/>
     */
    inline AlreadyExistsException& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AlreadyExistsException& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p/>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p/>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p/>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p/>
     */
    inline AlreadyExistsException& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p/>
     */
    inline AlreadyExistsException& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AlreadyExistsException& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline AlreadyExistsException& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p/>
     */
    inline AlreadyExistsException& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AlreadyExistsException& WithType(const char* value) { SetType(value); return *this;}


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
    inline AlreadyExistsException& WithContext(const Aws::String& value) { SetContext(value); return *this;}

    /**
     * <p/>
     */
    inline AlreadyExistsException& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AlreadyExistsException& WithContext(const char* value) { SetContext(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
