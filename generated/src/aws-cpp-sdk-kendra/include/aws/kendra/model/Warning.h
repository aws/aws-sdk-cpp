/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/WarningCode.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>The warning code and message that explains a problem with a
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Warning">AWS API
   * Reference</a></p>
   */
  class Warning
  {
  public:
    AWS_KENDRA_API Warning();
    AWS_KENDRA_API Warning(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Warning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message that explains the problem with the query.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline Warning& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline Warning& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline Warning& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code used to show the type of warning for the query.</p>
     */
    inline const WarningCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const WarningCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(WarningCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline Warning& WithCode(const WarningCode& value) { SetCode(value); return *this;}
    inline Warning& WithCode(WarningCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    WarningCode m_code;
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
