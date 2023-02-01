/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
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
namespace MachineLearning
{
namespace Model
{

  /**
   * <p>The subscriber exceeded the maximum number of operations. This exception can
   * occur when listing objects such as <code>DataSource</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/LimitExceededException">AWS
   * API Reference</a></p>
   */
  class LimitExceededException
  {
  public:
    AWS_MACHINELEARNING_API LimitExceededException();
    AWS_MACHINELEARNING_API LimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API LimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline LimitExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline LimitExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline LimitExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline int GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline LimitExceededException& WithCode(int value) { SetCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_code;
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
