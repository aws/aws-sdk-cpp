/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfigdata/model/BadRequestReason.h>
#include <aws/appconfigdata/model/BadRequestDetails.h>
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
namespace AppConfigData
{
namespace Model
{

  /**
   * <p>The input fails to satisfy the constraints specified by the
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/BadRequestException">AWS
   * API Reference</a></p>
   */
  class BadRequestException
  {
  public:
    AWS_APPCONFIGDATA_API BadRequestException();
    AWS_APPCONFIGDATA_API BadRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIGDATA_API BadRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIGDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline BadRequestException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline BadRequestException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline BadRequestException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Code indicating the reason the request was invalid.</p>
     */
    inline const BadRequestReason& GetReason() const{ return m_reason; }

    /**
     * <p>Code indicating the reason the request was invalid.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Code indicating the reason the request was invalid.</p>
     */
    inline void SetReason(const BadRequestReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Code indicating the reason the request was invalid.</p>
     */
    inline void SetReason(BadRequestReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Code indicating the reason the request was invalid.</p>
     */
    inline BadRequestException& WithReason(const BadRequestReason& value) { SetReason(value); return *this;}

    /**
     * <p>Code indicating the reason the request was invalid.</p>
     */
    inline BadRequestException& WithReason(BadRequestReason&& value) { SetReason(std::move(value)); return *this;}


    /**
     * <p>Details describing why the request was invalid.</p>
     */
    inline const BadRequestDetails& GetDetails() const{ return m_details; }

    /**
     * <p>Details describing why the request was invalid.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>Details describing why the request was invalid.</p>
     */
    inline void SetDetails(const BadRequestDetails& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>Details describing why the request was invalid.</p>
     */
    inline void SetDetails(BadRequestDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>Details describing why the request was invalid.</p>
     */
    inline BadRequestException& WithDetails(const BadRequestDetails& value) { SetDetails(value); return *this;}

    /**
     * <p>Details describing why the request was invalid.</p>
     */
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
} // namespace AppConfigData
} // namespace Aws
