/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Returned if there is insufficient capacity to process this expedited request.
   * This error only applies to expedited retrievals and not to standard or bulk
   * retrievals.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InsufficientCapacityException">AWS
   * API Reference</a></p>
   */
  class InsufficientCapacityException
  {
  public:
    AWS_GLACIER_API InsufficientCapacityException();
    AWS_GLACIER_API InsufficientCapacityException(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API InsufficientCapacityException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    
    inline InsufficientCapacityException& WithType(const Aws::String& value) { SetType(value); return *this;}

    
    inline InsufficientCapacityException& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    
    inline InsufficientCapacityException& WithType(const char* value) { SetType(value); return *this;}


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline InsufficientCapacityException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline InsufficientCapacityException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline InsufficientCapacityException& WithCode(const char* value) { SetCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InsufficientCapacityException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InsufficientCapacityException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InsufficientCapacityException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
