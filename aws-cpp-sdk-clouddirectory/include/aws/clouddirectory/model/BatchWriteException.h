/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/BatchWriteExceptionType.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>A <code>BatchWrite</code> exception has occurred.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchWriteException">AWS
   * API Reference</a></p>
   */
  class BatchWriteException
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchWriteException();
    AWS_CLOUDDIRECTORY_API BatchWriteException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchWriteException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetIndex() const{ return m_index; }

    
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }

    
    inline BatchWriteException& WithIndex(int value) { SetIndex(value); return *this;}


    
    inline const BatchWriteExceptionType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const BatchWriteExceptionType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(BatchWriteExceptionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline BatchWriteException& WithType(const BatchWriteExceptionType& value) { SetType(value); return *this;}

    
    inline BatchWriteException& WithType(BatchWriteExceptionType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline BatchWriteException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline BatchWriteException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline BatchWriteException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    int m_index;
    bool m_indexHasBeenSet = false;

    BatchWriteExceptionType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
