/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/InvalidRequestReason.h>
#include <aws/comprehend/model/InvalidRequestDetail.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>The request is invalid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/InvalidRequestException">AWS
   * API Reference</a></p>
   */
  class InvalidRequestException
  {
  public:
    AWS_COMPREHEND_API InvalidRequestException();
    AWS_COMPREHEND_API InvalidRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API InvalidRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidRequestException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidRequestException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidRequestException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const InvalidRequestReason& GetReason() const{ return m_reason; }

    
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    
    inline void SetReason(const InvalidRequestReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    
    inline void SetReason(InvalidRequestReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    
    inline InvalidRequestException& WithReason(const InvalidRequestReason& value) { SetReason(value); return *this;}

    
    inline InvalidRequestException& WithReason(InvalidRequestReason&& value) { SetReason(std::move(value)); return *this;}


    
    inline const InvalidRequestDetail& GetDetail() const{ return m_detail; }

    
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }

    
    inline void SetDetail(const InvalidRequestDetail& value) { m_detailHasBeenSet = true; m_detail = value; }

    
    inline void SetDetail(InvalidRequestDetail&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }

    
    inline InvalidRequestException& WithDetail(const InvalidRequestDetail& value) { SetDetail(value); return *this;}

    
    inline InvalidRequestException& WithDetail(InvalidRequestDetail&& value) { SetDetail(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    InvalidRequestReason m_reason;
    bool m_reasonHasBeenSet = false;

    InvalidRequestDetail m_detail;
    bool m_detailHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
