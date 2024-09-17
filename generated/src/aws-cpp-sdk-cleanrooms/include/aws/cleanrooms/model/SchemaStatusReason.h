/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/SchemaStatusReasonCode.h>
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
   * <p>A reason why the schema status is set to its current value.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/SchemaStatusReason">AWS
   * API Reference</a></p>
   */
  class SchemaStatusReason
  {
  public:
    AWS_CLEANROOMS_API SchemaStatusReason();
    AWS_CLEANROOMS_API SchemaStatusReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API SchemaStatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema status reason code.</p>
     */
    inline const SchemaStatusReasonCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const SchemaStatusReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(SchemaStatusReasonCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline SchemaStatusReason& WithCode(const SchemaStatusReasonCode& value) { SetCode(value); return *this;}
    inline SchemaStatusReason& WithCode(SchemaStatusReasonCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An explanation of the schema status reason code.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline SchemaStatusReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline SchemaStatusReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline SchemaStatusReason& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    SchemaStatusReasonCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
