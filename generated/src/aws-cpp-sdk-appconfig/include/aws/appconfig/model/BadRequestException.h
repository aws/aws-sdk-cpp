/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/BadRequestReason.h>
#include <aws/appconfig/model/BadRequestDetails.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>The input fails to satisfy the constraints specified by an Amazon Web
   * Services service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/BadRequestException">AWS
   * API Reference</a></p>
   */
  class BadRequestException
  {
  public:
    AWS_APPCONFIG_API BadRequestException();
    AWS_APPCONFIG_API BadRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API BadRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline BadRequestException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline BadRequestException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline BadRequestException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const BadRequestReason& GetReason() const{ return m_reason; }

    
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    
    inline void SetReason(const BadRequestReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    
    inline void SetReason(BadRequestReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    
    inline BadRequestException& WithReason(const BadRequestReason& value) { SetReason(value); return *this;}

    
    inline BadRequestException& WithReason(BadRequestReason&& value) { SetReason(std::move(value)); return *this;}


    
    inline const BadRequestDetails& GetDetails() const{ return m_details; }

    
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    
    inline void SetDetails(const BadRequestDetails& value) { m_detailsHasBeenSet = true; m_details = value; }

    
    inline void SetDetails(BadRequestDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    
    inline BadRequestException& WithDetails(const BadRequestDetails& value) { SetDetails(value); return *this;}

    
    inline BadRequestException& WithDetails(BadRequestDetails&& value) { SetDetails(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    BadRequestReason m_reason;
    bool m_reasonHasBeenSet = false;

    BadRequestDetails m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
