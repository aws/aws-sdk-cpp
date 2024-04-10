/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The reasons for the validation results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisTemplateValidationStatusReason">AWS
   * API Reference</a></p>
   */
  class AnalysisTemplateValidationStatusReason
  {
  public:
    AWS_CLEANROOMS_API AnalysisTemplateValidationStatusReason();
    AWS_CLEANROOMS_API AnalysisTemplateValidationStatusReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisTemplateValidationStatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The validation message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The validation message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The validation message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The validation message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The validation message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The validation message.</p>
     */
    inline AnalysisTemplateValidationStatusReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The validation message.</p>
     */
    inline AnalysisTemplateValidationStatusReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The validation message.</p>
     */
    inline AnalysisTemplateValidationStatusReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
