/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>

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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The metadata transfer job's progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/MetadataTransferJobProgress">AWS
   * API Reference</a></p>
   */
  class MetadataTransferJobProgress
  {
  public:
    AWS_IOTTWINMAKER_API MetadataTransferJobProgress() = default;
    AWS_IOTTWINMAKER_API MetadataTransferJobProgress(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API MetadataTransferJobProgress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total count. [of what]</p>
     */
    inline int GetTotalCount() const { return m_totalCount; }
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
    inline void SetTotalCount(int value) { m_totalCountHasBeenSet = true; m_totalCount = value; }
    inline MetadataTransferJobProgress& WithTotalCount(int value) { SetTotalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The succeeded count.</p>
     */
    inline int GetSucceededCount() const { return m_succeededCount; }
    inline bool SucceededCountHasBeenSet() const { return m_succeededCountHasBeenSet; }
    inline void SetSucceededCount(int value) { m_succeededCountHasBeenSet = true; m_succeededCount = value; }
    inline MetadataTransferJobProgress& WithSucceededCount(int value) { SetSucceededCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The skipped count.</p>
     */
    inline int GetSkippedCount() const { return m_skippedCount; }
    inline bool SkippedCountHasBeenSet() const { return m_skippedCountHasBeenSet; }
    inline void SetSkippedCount(int value) { m_skippedCountHasBeenSet = true; m_skippedCount = value; }
    inline MetadataTransferJobProgress& WithSkippedCount(int value) { SetSkippedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failed count.</p>
     */
    inline int GetFailedCount() const { return m_failedCount; }
    inline bool FailedCountHasBeenSet() const { return m_failedCountHasBeenSet; }
    inline void SetFailedCount(int value) { m_failedCountHasBeenSet = true; m_failedCount = value; }
    inline MetadataTransferJobProgress& WithFailedCount(int value) { SetFailedCount(value); return *this;}
    ///@}
  private:

    int m_totalCount{0};
    bool m_totalCountHasBeenSet = false;

    int m_succeededCount{0};
    bool m_succeededCountHasBeenSet = false;

    int m_skippedCount{0};
    bool m_skippedCountHasBeenSet = false;

    int m_failedCount{0};
    bool m_failedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
