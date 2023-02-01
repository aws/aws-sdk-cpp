/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/BadRequestReason.h>
#include <aws/appsync/model/BadRequestDetail.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>The request is not well formed. For example, a value is invalid or a required
   * field is missing. Check the field values, and then try again.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/BadRequestException">AWS
   * API Reference</a></p>
   */
  class BadRequestException
  {
  public:
    AWS_APPSYNC_API BadRequestException();
    AWS_APPSYNC_API BadRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API BadRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    
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


    
    inline const BadRequestDetail& GetDetail() const{ return m_detail; }

    
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }

    
    inline void SetDetail(const BadRequestDetail& value) { m_detailHasBeenSet = true; m_detail = value; }

    
    inline void SetDetail(BadRequestDetail&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }

    
    inline BadRequestException& WithDetail(const BadRequestDetail& value) { SetDetail(value); return *this;}

    
    inline BadRequestException& WithDetail(BadRequestDetail&& value) { SetDetail(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    BadRequestReason m_reason;
    bool m_reasonHasBeenSet = false;

    BadRequestDetail m_detail;
    bool m_detailHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
