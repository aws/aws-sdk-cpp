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
   * <p>Returned if the specified resource (such as a vault, upload ID, or job ID)
   * doesn't exist.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_GLACIER_API ResourceNotFoundException();
    AWS_GLACIER_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Client</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Client</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Client</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Client</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Client</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Client</p>
     */
    inline ResourceNotFoundException& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Client</p>
     */
    inline ResourceNotFoundException& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Client</p>
     */
    inline ResourceNotFoundException& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>404 Not Found</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>404 Not Found</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>404 Not Found</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>404 Not Found</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>404 Not Found</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>404 Not Found</p>
     */
    inline ResourceNotFoundException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>404 Not Found</p>
     */
    inline ResourceNotFoundException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>404 Not Found</p>
     */
    inline ResourceNotFoundException& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Returned if the specified resource (such as a vault, upload ID, or job ID)
     * doesn't exist.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Returned if the specified resource (such as a vault, upload ID, or job ID)
     * doesn't exist.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Returned if the specified resource (such as a vault, upload ID, or job ID)
     * doesn't exist.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Returned if the specified resource (such as a vault, upload ID, or job ID)
     * doesn't exist.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Returned if the specified resource (such as a vault, upload ID, or job ID)
     * doesn't exist.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Returned if the specified resource (such as a vault, upload ID, or job ID)
     * doesn't exist.</p>
     */
    inline ResourceNotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Returned if the specified resource (such as a vault, upload ID, or job ID)
     * doesn't exist.</p>
     */
    inline ResourceNotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Returned if the specified resource (such as a vault, upload ID, or job ID)
     * doesn't exist.</p>
     */
    inline ResourceNotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}

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
