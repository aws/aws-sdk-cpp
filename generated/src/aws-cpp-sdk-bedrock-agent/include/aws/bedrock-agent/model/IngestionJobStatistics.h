/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>

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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains the statistics for the data ingestion job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/IngestionJobStatistics">AWS
   * API Reference</a></p>
   */
  class IngestionJobStatistics
  {
  public:
    AWS_BEDROCKAGENT_API IngestionJobStatistics() = default;
    AWS_BEDROCKAGENT_API IngestionJobStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API IngestionJobStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of source documents that were scanned. Includes new,
     * updated, and unchanged documents.</p>
     */
    inline long long GetNumberOfDocumentsScanned() const { return m_numberOfDocumentsScanned; }
    inline bool NumberOfDocumentsScannedHasBeenSet() const { return m_numberOfDocumentsScannedHasBeenSet; }
    inline void SetNumberOfDocumentsScanned(long long value) { m_numberOfDocumentsScannedHasBeenSet = true; m_numberOfDocumentsScanned = value; }
    inline IngestionJobStatistics& WithNumberOfDocumentsScanned(long long value) { SetNumberOfDocumentsScanned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of metadata files that were scanned. Includes new, updated,
     * and unchanged files.</p>
     */
    inline long long GetNumberOfMetadataDocumentsScanned() const { return m_numberOfMetadataDocumentsScanned; }
    inline bool NumberOfMetadataDocumentsScannedHasBeenSet() const { return m_numberOfMetadataDocumentsScannedHasBeenSet; }
    inline void SetNumberOfMetadataDocumentsScanned(long long value) { m_numberOfMetadataDocumentsScannedHasBeenSet = true; m_numberOfMetadataDocumentsScanned = value; }
    inline IngestionJobStatistics& WithNumberOfMetadataDocumentsScanned(long long value) { SetNumberOfMetadataDocumentsScanned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of new source documents in the data source that were successfully
     * indexed.</p>
     */
    inline long long GetNumberOfNewDocumentsIndexed() const { return m_numberOfNewDocumentsIndexed; }
    inline bool NumberOfNewDocumentsIndexedHasBeenSet() const { return m_numberOfNewDocumentsIndexedHasBeenSet; }
    inline void SetNumberOfNewDocumentsIndexed(long long value) { m_numberOfNewDocumentsIndexedHasBeenSet = true; m_numberOfNewDocumentsIndexed = value; }
    inline IngestionJobStatistics& WithNumberOfNewDocumentsIndexed(long long value) { SetNumberOfNewDocumentsIndexed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of modified source documents in the data source that were
     * successfully indexed.</p>
     */
    inline long long GetNumberOfModifiedDocumentsIndexed() const { return m_numberOfModifiedDocumentsIndexed; }
    inline bool NumberOfModifiedDocumentsIndexedHasBeenSet() const { return m_numberOfModifiedDocumentsIndexedHasBeenSet; }
    inline void SetNumberOfModifiedDocumentsIndexed(long long value) { m_numberOfModifiedDocumentsIndexedHasBeenSet = true; m_numberOfModifiedDocumentsIndexed = value; }
    inline IngestionJobStatistics& WithNumberOfModifiedDocumentsIndexed(long long value) { SetNumberOfModifiedDocumentsIndexed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of metadata files that were updated or deleted.</p>
     */
    inline long long GetNumberOfMetadataDocumentsModified() const { return m_numberOfMetadataDocumentsModified; }
    inline bool NumberOfMetadataDocumentsModifiedHasBeenSet() const { return m_numberOfMetadataDocumentsModifiedHasBeenSet; }
    inline void SetNumberOfMetadataDocumentsModified(long long value) { m_numberOfMetadataDocumentsModifiedHasBeenSet = true; m_numberOfMetadataDocumentsModified = value; }
    inline IngestionJobStatistics& WithNumberOfMetadataDocumentsModified(long long value) { SetNumberOfMetadataDocumentsModified(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of source documents that were deleted.</p>
     */
    inline long long GetNumberOfDocumentsDeleted() const { return m_numberOfDocumentsDeleted; }
    inline bool NumberOfDocumentsDeletedHasBeenSet() const { return m_numberOfDocumentsDeletedHasBeenSet; }
    inline void SetNumberOfDocumentsDeleted(long long value) { m_numberOfDocumentsDeletedHasBeenSet = true; m_numberOfDocumentsDeleted = value; }
    inline IngestionJobStatistics& WithNumberOfDocumentsDeleted(long long value) { SetNumberOfDocumentsDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of source documents that failed to be ingested.</p>
     */
    inline long long GetNumberOfDocumentsFailed() const { return m_numberOfDocumentsFailed; }
    inline bool NumberOfDocumentsFailedHasBeenSet() const { return m_numberOfDocumentsFailedHasBeenSet; }
    inline void SetNumberOfDocumentsFailed(long long value) { m_numberOfDocumentsFailedHasBeenSet = true; m_numberOfDocumentsFailed = value; }
    inline IngestionJobStatistics& WithNumberOfDocumentsFailed(long long value) { SetNumberOfDocumentsFailed(value); return *this;}
    ///@}
  private:

    long long m_numberOfDocumentsScanned{0};
    bool m_numberOfDocumentsScannedHasBeenSet = false;

    long long m_numberOfMetadataDocumentsScanned{0};
    bool m_numberOfMetadataDocumentsScannedHasBeenSet = false;

    long long m_numberOfNewDocumentsIndexed{0};
    bool m_numberOfNewDocumentsIndexedHasBeenSet = false;

    long long m_numberOfModifiedDocumentsIndexed{0};
    bool m_numberOfModifiedDocumentsIndexedHasBeenSet = false;

    long long m_numberOfMetadataDocumentsModified{0};
    bool m_numberOfMetadataDocumentsModifiedHasBeenSet = false;

    long long m_numberOfDocumentsDeleted{0};
    bool m_numberOfDocumentsDeletedHasBeenSet = false;

    long long m_numberOfDocumentsFailed{0};
    bool m_numberOfDocumentsFailedHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
