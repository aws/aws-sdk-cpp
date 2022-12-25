/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The inventory item size has exceeded the size limit.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ItemSizeLimitExceededException">AWS
   * API Reference</a></p>
   */
  class ItemSizeLimitExceededException
  {
  public:
    AWS_SSM_API ItemSizeLimitExceededException();
    AWS_SSM_API ItemSizeLimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ItemSizeLimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    
    inline ItemSizeLimitExceededException& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    
    inline ItemSizeLimitExceededException& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    
    inline ItemSizeLimitExceededException& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ItemSizeLimitExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ItemSizeLimitExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ItemSizeLimitExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
