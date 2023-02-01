/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/BatchItemErrorCode.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains the batch request error details associated with the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchItemError">AWS
   * API Reference</a></p>
   */
  class BatchItemError
  {
  public:
    AWS_LOCATIONSERVICE_API BatchItemError();
    AWS_LOCATIONSERVICE_API BatchItemError(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API BatchItemError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code associated with the batch request error.</p>
     */
    inline const BatchItemErrorCode& GetCode() const{ return m_code; }

    /**
     * <p>The error code associated with the batch request error.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code associated with the batch request error.</p>
     */
    inline void SetCode(const BatchItemErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code associated with the batch request error.</p>
     */
    inline void SetCode(BatchItemErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code associated with the batch request error.</p>
     */
    inline BatchItemError& WithCode(const BatchItemErrorCode& value) { SetCode(value); return *this;}

    /**
     * <p>The error code associated with the batch request error.</p>
     */
    inline BatchItemError& WithCode(BatchItemErrorCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A message with the reason for the batch request error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message with the reason for the batch request error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message with the reason for the batch request error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message with the reason for the batch request error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message with the reason for the batch request error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message with the reason for the batch request error.</p>
     */
    inline BatchItemError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message with the reason for the batch request error.</p>
     */
    inline BatchItemError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message with the reason for the batch request error.</p>
     */
    inline BatchItemError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    BatchItemErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
