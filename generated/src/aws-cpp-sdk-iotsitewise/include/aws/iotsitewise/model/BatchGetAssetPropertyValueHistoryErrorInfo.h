/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistoryErrorCode.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyValueHistoryErrorInfo">AWS
   * API Reference</a></p>
   */
  class BatchGetAssetPropertyValueHistoryErrorInfo
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryErrorInfo() = default;
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code.</p>
     */
    inline BatchGetAssetPropertyValueHistoryErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(BatchGetAssetPropertyValueHistoryErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline BatchGetAssetPropertyValueHistoryErrorInfo& WithErrorCode(BatchGetAssetPropertyValueHistoryErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the error occurred, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetErrorTimestamp() const { return m_errorTimestamp; }
    inline bool ErrorTimestampHasBeenSet() const { return m_errorTimestampHasBeenSet; }
    template<typename ErrorTimestampT = Aws::Utils::DateTime>
    void SetErrorTimestamp(ErrorTimestampT&& value) { m_errorTimestampHasBeenSet = true; m_errorTimestamp = std::forward<ErrorTimestampT>(value); }
    template<typename ErrorTimestampT = Aws::Utils::DateTime>
    BatchGetAssetPropertyValueHistoryErrorInfo& WithErrorTimestamp(ErrorTimestampT&& value) { SetErrorTimestamp(std::forward<ErrorTimestampT>(value)); return *this;}
    ///@}
  private:

    BatchGetAssetPropertyValueHistoryErrorCode m_errorCode{BatchGetAssetPropertyValueHistoryErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_errorTimestamp{};
    bool m_errorTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
