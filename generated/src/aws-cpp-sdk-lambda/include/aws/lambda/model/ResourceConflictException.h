/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>The resource already exists, or another operation is in
   * progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ResourceConflictException">AWS
   * API Reference</a></p>
   */
  class ResourceConflictException
  {
  public:
    AWS_LAMBDA_API ResourceConflictException();
    AWS_LAMBDA_API ResourceConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API ResourceConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The exception type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The exception type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The exception type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The exception type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The exception type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The exception type.</p>
     */
    inline ResourceConflictException& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The exception type.</p>
     */
    inline ResourceConflictException& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The exception type.</p>
     */
    inline ResourceConflictException& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The exception message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The exception message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The exception message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The exception message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The exception message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The exception message.</p>
     */
    inline ResourceConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The exception message.</p>
     */
    inline ResourceConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The exception message.</p>
     */
    inline ResourceConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
