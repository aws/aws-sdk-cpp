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
   * <p>Returned if a parameter of the request is incorrectly
   * specified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InvalidParameterValueException">AWS
   * API Reference</a></p>
   */
  class InvalidParameterValueException
  {
  public:
    AWS_GLACIER_API InvalidParameterValueException();
    AWS_GLACIER_API InvalidParameterValueException(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API InvalidParameterValueException& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline InvalidParameterValueException& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Client</p>
     */
    inline InvalidParameterValueException& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Client</p>
     */
    inline InvalidParameterValueException& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>400 Bad Request</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>400 Bad Request</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>400 Bad Request</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>400 Bad Request</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>400 Bad Request</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>400 Bad Request</p>
     */
    inline InvalidParameterValueException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>400 Bad Request</p>
     */
    inline InvalidParameterValueException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>400 Bad Request</p>
     */
    inline InvalidParameterValueException& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Returned if a parameter of the request is incorrectly specified.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Returned if a parameter of the request is incorrectly specified.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Returned if a parameter of the request is incorrectly specified.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Returned if a parameter of the request is incorrectly specified.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Returned if a parameter of the request is incorrectly specified.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Returned if a parameter of the request is incorrectly specified.</p>
     */
    inline InvalidParameterValueException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Returned if a parameter of the request is incorrectly specified.</p>
     */
    inline InvalidParameterValueException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Returned if a parameter of the request is incorrectly specified.</p>
     */
    inline InvalidParameterValueException& WithMessage(const char* value) { SetMessage(value); return *this;}

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
