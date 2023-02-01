/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> Indicates that the request has invalid or missing parameters for the field.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ValidationExceptionField">AWS
   * API Reference</a></p>
   */
  class ValidationExceptionField
  {
  public:
    AWS_AUDITMANAGER_API ValidationExceptionField();
    AWS_AUDITMANAGER_API ValidationExceptionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ValidationExceptionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the validation error. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the validation error. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the validation error. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the validation error. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the validation error. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the validation error. </p>
     */
    inline ValidationExceptionField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the validation error. </p>
     */
    inline ValidationExceptionField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the validation error. </p>
     */
    inline ValidationExceptionField& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The body of the error message. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p> The body of the error message. </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p> The body of the error message. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p> The body of the error message. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p> The body of the error message. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p> The body of the error message. </p>
     */
    inline ValidationExceptionField& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p> The body of the error message. </p>
     */
    inline ValidationExceptionField& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p> The body of the error message. </p>
     */
    inline ValidationExceptionField& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
