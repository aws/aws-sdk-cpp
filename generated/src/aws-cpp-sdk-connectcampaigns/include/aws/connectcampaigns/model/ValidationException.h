/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>The input fails to satisfy the constraints specified by an AWS
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_CONNECTCAMPAIGNS_API ValidationException();
    AWS_CONNECTCAMPAIGNS_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetXAmzErrorType() const{ return m_xAmzErrorType; }

    
    inline bool XAmzErrorTypeHasBeenSet() const { return m_xAmzErrorTypeHasBeenSet; }

    
    inline void SetXAmzErrorType(const Aws::String& value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType = value; }

    
    inline void SetXAmzErrorType(Aws::String&& value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType = std::move(value); }

    
    inline void SetXAmzErrorType(const char* value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType.assign(value); }

    
    inline ValidationException& WithXAmzErrorType(const Aws::String& value) { SetXAmzErrorType(value); return *this;}

    
    inline ValidationException& WithXAmzErrorType(Aws::String&& value) { SetXAmzErrorType(std::move(value)); return *this;}

    
    inline ValidationException& WithXAmzErrorType(const char* value) { SetXAmzErrorType(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_xAmzErrorType;
    bool m_xAmzErrorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
