/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Indicates that something is wrong with the input to the request. For example,
   * a required parameter may be missing or out of range.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/InvalidRequestException">AWS
   * API Reference</a></p>
   */
  class InvalidRequestException
  {
  public:
    AWS_ATHENA_API InvalidRequestException();
    AWS_ATHENA_API InvalidRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API InvalidRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAthenaErrorCode() const{ return m_athenaErrorCode; }

    
    inline bool AthenaErrorCodeHasBeenSet() const { return m_athenaErrorCodeHasBeenSet; }

    
    inline void SetAthenaErrorCode(const Aws::String& value) { m_athenaErrorCodeHasBeenSet = true; m_athenaErrorCode = value; }

    
    inline void SetAthenaErrorCode(Aws::String&& value) { m_athenaErrorCodeHasBeenSet = true; m_athenaErrorCode = std::move(value); }

    
    inline void SetAthenaErrorCode(const char* value) { m_athenaErrorCodeHasBeenSet = true; m_athenaErrorCode.assign(value); }

    
    inline InvalidRequestException& WithAthenaErrorCode(const Aws::String& value) { SetAthenaErrorCode(value); return *this;}

    
    inline InvalidRequestException& WithAthenaErrorCode(Aws::String&& value) { SetAthenaErrorCode(std::move(value)); return *this;}

    
    inline InvalidRequestException& WithAthenaErrorCode(const char* value) { SetAthenaErrorCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidRequestException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidRequestException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidRequestException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_athenaErrorCode;
    bool m_athenaErrorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
