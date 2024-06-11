/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>Provides the error of the batch create variable API.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/BatchCreateVariableError">AWS
   * API Reference</a></p>
   */
  class BatchCreateVariableError
  {
  public:
    AWS_FRAUDDETECTOR_API BatchCreateVariableError();
    AWS_FRAUDDETECTOR_API BatchCreateVariableError(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API BatchCreateVariableError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline BatchCreateVariableError& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline BatchCreateVariableError& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline BatchCreateVariableError& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code. </p>
     */
    inline int GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }
    inline BatchCreateVariableError& WithCode(int value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline BatchCreateVariableError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline BatchCreateVariableError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline BatchCreateVariableError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
