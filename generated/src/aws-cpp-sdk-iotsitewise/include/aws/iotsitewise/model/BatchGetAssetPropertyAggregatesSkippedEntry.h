/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/BatchEntryCompletionStatus.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesErrorInfo.h>
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
   * <p>Contains information for an entry that has been processed by the previous <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_BatchGetAssetPropertyAggregates.html">BatchGetAssetPropertyAggregates</a>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyAggregatesSkippedEntry">AWS
   * API Reference</a></p>
   */
  class BatchGetAssetPropertyAggregatesSkippedEntry
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesSkippedEntry() = default;
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesSkippedEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesSkippedEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the entry.</p>
     */
    inline const Aws::String& GetEntryId() const { return m_entryId; }
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }
    template<typename EntryIdT = Aws::String>
    void SetEntryId(EntryIdT&& value) { m_entryIdHasBeenSet = true; m_entryId = std::forward<EntryIdT>(value); }
    template<typename EntryIdT = Aws::String>
    BatchGetAssetPropertyAggregatesSkippedEntry& WithEntryId(EntryIdT&& value) { SetEntryId(std::forward<EntryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion status of each entry that is associated with the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_BatchGetAssetPropertyAggregates.html">BatchGetAssetPropertyAggregates</a>
     * API.</p>
     */
    inline BatchEntryCompletionStatus GetCompletionStatus() const { return m_completionStatus; }
    inline bool CompletionStatusHasBeenSet() const { return m_completionStatusHasBeenSet; }
    inline void SetCompletionStatus(BatchEntryCompletionStatus value) { m_completionStatusHasBeenSet = true; m_completionStatus = value; }
    inline BatchGetAssetPropertyAggregatesSkippedEntry& WithCompletionStatus(BatchEntryCompletionStatus value) { SetCompletionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error information, such as the error code and the timestamp.</p>
     */
    inline const BatchGetAssetPropertyAggregatesErrorInfo& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = BatchGetAssetPropertyAggregatesErrorInfo>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = BatchGetAssetPropertyAggregatesErrorInfo>
    BatchGetAssetPropertyAggregatesSkippedEntry& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;

    BatchEntryCompletionStatus m_completionStatus{BatchEntryCompletionStatus::NOT_SET};
    bool m_completionStatusHasBeenSet = false;

    BatchGetAssetPropertyAggregatesErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
