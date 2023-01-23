/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
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
namespace DocDBElastic
{
namespace Model
{

  /**
   * <p>A specific field in which a given validation exception
   * occurred.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/ValidationExceptionField">AWS
   * API Reference</a></p>
   */
  class ValidationExceptionField
  {
  public:
    AWS_DOCDBELASTIC_API ValidationExceptionField();
    AWS_DOCDBELASTIC_API ValidationExceptionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API ValidationExceptionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An error message describing the validation exception in this field.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>An error message describing the validation exception in this field.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>An error message describing the validation exception in this field.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>An error message describing the validation exception in this field.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>An error message describing the validation exception in this field.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>An error message describing the validation exception in this field.</p>
     */
    inline ValidationExceptionField& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>An error message describing the validation exception in this field.</p>
     */
    inline ValidationExceptionField& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>An error message describing the validation exception in this field.</p>
     */
    inline ValidationExceptionField& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The name of the field where the validation exception occurred.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the field where the validation exception occurred.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the field where the validation exception occurred.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the field where the validation exception occurred.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the field where the validation exception occurred.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the field where the validation exception occurred.</p>
     */
    inline ValidationExceptionField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the field where the validation exception occurred.</p>
     */
    inline ValidationExceptionField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the field where the validation exception occurred.</p>
     */
    inline ValidationExceptionField& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
