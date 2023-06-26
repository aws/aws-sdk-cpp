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


    /**
     * <p>The error code.</p>
     */
    inline const ErrorCode& GetCode() const{ return m_code; }

    /**
     * <p>The error code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(const ErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(ErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline ErrorDetails& WithCode(const ErrorCode& value) { SetCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline ErrorDetails& WithCode(ErrorCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message.</p>
     */
    inline ErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline ErrorDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline ErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p> A list of detailed errors. </p>
     */
    inline const Aws::Vector<DetailedError>& GetDetails() const{ return m_details; }

    /**
     * <p> A list of detailed errors. </p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p> A list of detailed errors. </p>
     */
    inline void SetDetails(const Aws::Vector<DetailedError>& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p> A list of detailed errors. </p>
     */
    inline void SetDetails(Aws::Vector<DetailedError>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p> A list of detailed errors. </p>
     */
    inline ErrorDetails& WithDetails(const Aws::Vector<DetailedError>& value) { SetDetails(value); return *this;}

    /**
     * <p> A list of detailed errors. </p>
     */
    inline ErrorDetails& WithDetails(Aws::Vector<DetailedError>&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p> A list of detailed errors. </p>
     */
    inline ErrorDetails& AddDetails(const DetailedError& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }

    /**
     * <p> A list of detailed errors. </p>
     */
    inline ErrorDetails& AddDetails(DetailedError&& value) { m_detailsHasBeenSet = true; m_details.push_back(std::move(value)); return *this; }

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
