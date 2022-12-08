/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesErrorCode.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains the error code and the timestamp for an asset property aggregate
   * entry that is associated with the <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_BatchGetAssetPropertyAggregates.html">BatchGetAssetPropertyAggregates</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyAggregatesErrorInfo">AWS
   * API Reference</a></p>
   */
  class BatchGetAssetPropertyAggregatesErrorInfo
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesErrorInfo();
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code.</p>
     */
    inline const BatchGetAssetPropertyAggregatesErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const BatchGetAssetPropertyAggregatesErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(BatchGetAssetPropertyAggregatesErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline BatchGetAssetPropertyAggregatesErrorInfo& WithErrorCode(const BatchGetAssetPropertyAggregatesErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline BatchGetAssetPropertyAggregatesErrorInfo& WithErrorCode(BatchGetAssetPropertyAggregatesErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The date the error occurred, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetErrorTimestamp() const{ return m_errorTimestamp; }

    /**
     * <p>The date the error occurred, in Unix epoch time.</p>
     */
    inline bool ErrorTimestampHasBeenSet() const { return m_errorTimestampHasBeenSet; }

    /**
     * <p>The date the error occurred, in Unix epoch time.</p>
     */
    inline void SetErrorTimestamp(const Aws::Utils::DateTime& value) { m_errorTimestampHasBeenSet = true; m_errorTimestamp = value; }

    /**
     * <p>The date the error occurred, in Unix epoch time.</p>
     */
    inline void SetErrorTimestamp(Aws::Utils::DateTime&& value) { m_errorTimestampHasBeenSet = true; m_errorTimestamp = std::move(value); }

    /**
     * <p>The date the error occurred, in Unix epoch time.</p>
     */
    inline BatchGetAssetPropertyAggregatesErrorInfo& WithErrorTimestamp(const Aws::Utils::DateTime& value) { SetErrorTimestamp(value); return *this;}

    /**
     * <p>The date the error occurred, in Unix epoch time.</p>
     */
    inline BatchGetAssetPropertyAggregatesErrorInfo& WithErrorTimestamp(Aws::Utils::DateTime&& value) { SetErrorTimestamp(std::move(value)); return *this;}

  private:

    BatchGetAssetPropertyAggregatesErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_errorTimestamp;
    bool m_errorTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
