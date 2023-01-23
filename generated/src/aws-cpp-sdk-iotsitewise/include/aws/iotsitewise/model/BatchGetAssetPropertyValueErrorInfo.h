/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueErrorCode.h>
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
   * <p>The error information, such as the error code and the
   * timestamp.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyValueErrorInfo">AWS
   * API Reference</a></p>
   */
  class BatchGetAssetPropertyValueErrorInfo
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueErrorInfo();
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code.</p>
     */
    inline const BatchGetAssetPropertyValueErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const BatchGetAssetPropertyValueErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(BatchGetAssetPropertyValueErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline BatchGetAssetPropertyValueErrorInfo& WithErrorCode(const BatchGetAssetPropertyValueErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline BatchGetAssetPropertyValueErrorInfo& WithErrorCode(BatchGetAssetPropertyValueErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


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
    inline BatchGetAssetPropertyValueErrorInfo& WithErrorTimestamp(const Aws::Utils::DateTime& value) { SetErrorTimestamp(value); return *this;}

    /**
     * <p>The date the error occurred, in Unix epoch time.</p>
     */
    inline BatchGetAssetPropertyValueErrorInfo& WithErrorTimestamp(Aws::Utils::DateTime&& value) { SetErrorTimestamp(std::move(value)); return *this;}

  private:

    BatchGetAssetPropertyValueErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_errorTimestamp;
    bool m_errorTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
