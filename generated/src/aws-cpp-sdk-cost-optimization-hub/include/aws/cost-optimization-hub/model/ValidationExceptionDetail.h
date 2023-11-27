/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The input failed to meet the constraints specified by the Amazon Web Services
   * service in a specified field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ValidationExceptionDetail">AWS
   * API Reference</a></p>
   */
  class ValidationExceptionDetail
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ValidationExceptionDetail();
    AWS_COSTOPTIMIZATIONHUB_API ValidationExceptionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API ValidationExceptionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field name where the invalid entry was detected.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The field name where the invalid entry was detected.</p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>The field name where the invalid entry was detected.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The field name where the invalid entry was detected.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The field name where the invalid entry was detected.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>The field name where the invalid entry was detected.</p>
     */
    inline ValidationExceptionDetail& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>The field name where the invalid entry was detected.</p>
     */
    inline ValidationExceptionDetail& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>The field name where the invalid entry was detected.</p>
     */
    inline ValidationExceptionDetail& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    /**
     * <p>A message with the reason for the validation exception error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message with the reason for the validation exception error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message with the reason for the validation exception error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message with the reason for the validation exception error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message with the reason for the validation exception error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message with the reason for the validation exception error.</p>
     */
    inline ValidationExceptionDetail& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message with the reason for the validation exception error.</p>
     */
    inline ValidationExceptionDetail& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message with the reason for the validation exception error.</p>
     */
    inline ValidationExceptionDetail& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
