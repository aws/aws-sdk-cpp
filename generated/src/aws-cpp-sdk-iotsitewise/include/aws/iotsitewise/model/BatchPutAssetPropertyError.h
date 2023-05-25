/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/BatchPutAssetPropertyValueErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/TimeInNanos.h>
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
   * <p>Contains error information from updating a batch of asset property
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchPutAssetPropertyError">AWS
   * API Reference</a></p>
   */
  class BatchPutAssetPropertyError
  {
  public:
    AWS_IOTSITEWISE_API BatchPutAssetPropertyError();
    AWS_IOTSITEWISE_API BatchPutAssetPropertyError(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchPutAssetPropertyError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code.</p>
     */
    inline const BatchPutAssetPropertyValueErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const BatchPutAssetPropertyValueErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(BatchPutAssetPropertyValueErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline BatchPutAssetPropertyError& WithErrorCode(const BatchPutAssetPropertyValueErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline BatchPutAssetPropertyError& WithErrorCode(BatchPutAssetPropertyValueErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The associated error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The associated error message.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The associated error message.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The associated error message.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The associated error message.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The associated error message.</p>
     */
    inline BatchPutAssetPropertyError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The associated error message.</p>
     */
    inline BatchPutAssetPropertyError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The associated error message.</p>
     */
    inline BatchPutAssetPropertyError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>A list of timestamps for each error, if any.</p>
     */
    inline const Aws::Vector<TimeInNanos>& GetTimestamps() const{ return m_timestamps; }

    /**
     * <p>A list of timestamps for each error, if any.</p>
     */
    inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }

    /**
     * <p>A list of timestamps for each error, if any.</p>
     */
    inline void SetTimestamps(const Aws::Vector<TimeInNanos>& value) { m_timestampsHasBeenSet = true; m_timestamps = value; }

    /**
     * <p>A list of timestamps for each error, if any.</p>
     */
    inline void SetTimestamps(Aws::Vector<TimeInNanos>&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::move(value); }

    /**
     * <p>A list of timestamps for each error, if any.</p>
     */
    inline BatchPutAssetPropertyError& WithTimestamps(const Aws::Vector<TimeInNanos>& value) { SetTimestamps(value); return *this;}

    /**
     * <p>A list of timestamps for each error, if any.</p>
     */
    inline BatchPutAssetPropertyError& WithTimestamps(Aws::Vector<TimeInNanos>&& value) { SetTimestamps(std::move(value)); return *this;}

    /**
     * <p>A list of timestamps for each error, if any.</p>
     */
    inline BatchPutAssetPropertyError& AddTimestamps(const TimeInNanos& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(value); return *this; }

    /**
     * <p>A list of timestamps for each error, if any.</p>
     */
    inline BatchPutAssetPropertyError& AddTimestamps(TimeInNanos&& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(std::move(value)); return *this; }

  private:

    BatchPutAssetPropertyValueErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Vector<TimeInNanos> m_timestamps;
    bool m_timestampsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
