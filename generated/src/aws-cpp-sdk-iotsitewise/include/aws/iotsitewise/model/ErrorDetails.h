/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/DetailedError.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains the details of an IoT SiteWise error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ErrorDetails">AWS
   * API Reference</a></p>
   */
  class ErrorDetails
  {
  public:
    AWS_IOTSITEWISE_API ErrorDetails();
    AWS_IOTSITEWISE_API ErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const ErrorCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const ErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(ErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline ErrorDetails& WithCode(const ErrorCode& value) { SetCode(value); return *this;}
    inline ErrorDetails& WithCode(ErrorCode&& value) { SetCode(std::move(value)); return *this;}
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
    inline ErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ErrorDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of detailed errors. </p>
     */
    inline const Aws::Vector<DetailedError>& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::Vector<DetailedError>& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::Vector<DetailedError>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline ErrorDetails& WithDetails(const Aws::Vector<DetailedError>& value) { SetDetails(value); return *this;}
    inline ErrorDetails& WithDetails(Aws::Vector<DetailedError>&& value) { SetDetails(std::move(value)); return *this;}
    inline ErrorDetails& AddDetails(const DetailedError& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }
    inline ErrorDetails& AddDetails(DetailedError&& value) { m_detailsHasBeenSet = true; m_details.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<DetailedError> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
