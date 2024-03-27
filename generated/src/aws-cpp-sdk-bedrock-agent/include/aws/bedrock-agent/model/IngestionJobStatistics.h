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
   * <p>Contains the statistics for the ingestion job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/IngestionJobStatistics">AWS
   * API Reference</a></p>
   */
  class IngestionJobStatistics
  {
  public:
    AWS_BEDROCKAGENT_API IngestionJobStatistics();
    AWS_BEDROCKAGENT_API IngestionJobStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API IngestionJobStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of source documents that was deleted.</p>
     */
    inline long long GetNumberOfDocumentsDeleted() const{ return m_numberOfDocumentsDeleted; }

    /**
     * <p>The number of source documents that was deleted.</p>
     */
    inline bool NumberOfDocumentsDeletedHasBeenSet() const { return m_numberOfDocumentsDeletedHasBeenSet; }

    /**
     * <p>The number of source documents that was deleted.</p>
     */
    inline void SetNumberOfDocumentsDeleted(long long value) { m_numberOfDocumentsDeletedHasBeenSet = true; m_numberOfDocumentsDeleted = value; }

    /**
     * <p>The number of source documents that was deleted.</p>
     */
    inline IngestionJobStatistics& WithNumberOfDocumentsDeleted(long long value) { SetNumberOfDocumentsDeleted(value); return *this;}


    /**
     * <p>The number of source documents that failed to be ingested.</p>
     */
    inline long long GetNumberOfDocumentsFailed() const{ return m_numberOfDocumentsFailed; }

    /**
     * <p>The number of source documents that failed to be ingested.</p>
     */
    inline bool NumberOfDocumentsFailedHasBeenSet() const { return m_numberOfDocumentsFailedHasBeenSet; }

    /**
     * <p>The number of source documents that failed to be ingested.</p>
     */
    inline void SetNumberOfDocumentsFailed(long long value) { m_numberOfDocumentsFailedHasBeenSet = true; m_numberOfDocumentsFailed = value; }

    /**
     * <p>The number of source documents that failed to be ingested.</p>
     */
    inline IngestionJobStatistics& WithNumberOfDocumentsFailed(long long value) { SetNumberOfDocumentsFailed(value); return *this;}


    /**
     * <p>The total number of source documents that were scanned. Includes new,
     * updated, and unchanged documents.</p>
     */
    inline long long GetNumberOfDocumentsScanned() const{ return m_numberOfDocumentsScanned; }

    /**
     * <p>The total number of source documents that were scanned. Includes new,
     * updated, and unchanged documents.</p>
     */
    inline bool NumberOfDocumentsScannedHasBeenSet() const { return m_numberOfDocumentsScannedHasBeenSet; }

    /**
     * <p>The total number of source documents that were scanned. Includes new,
     * updated, and unchanged documents.</p>
     */
    inline void SetNumberOfDocumentsScanned(long long value) { m_numberOfDocumentsScannedHasBeenSet = true; m_numberOfDocumentsScanned = value; }

    /**
     * <p>The total number of source documents that were scanned. Includes new,
     * updated, and unchanged documents.</p>
     */
    inline IngestionJobStatistics& WithNumberOfDocumentsScanned(long long value) { SetNumberOfDocumentsScanned(value); return *this;}


    /**
     * <p>The number of metadata files that were updated or deleted.</p>
     */
    inline long long GetNumberOfMetadataDocumentsModified() const{ return m_numberOfMetadataDocumentsModified; }

    /**
     * <p>The number of metadata files that were updated or deleted.</p>
     */
    inline bool NumberOfMetadataDocumentsModifiedHasBeenSet() const { return m_numberOfMetadataDocumentsModifiedHasBeenSet; }

    /**
     * <p>The number of metadata files that were updated or deleted.</p>
     */
    inline void SetNumberOfMetadataDocumentsModified(long long value) { m_numberOfMetadataDocumentsModifiedHasBeenSet = true; m_numberOfMetadataDocumentsModified = value; }

    /**
     * <p>The number of metadata files that were updated or deleted.</p>
     */
    inline IngestionJobStatistics& WithNumberOfMetadataDocumentsModified(long long value) { SetNumberOfMetadataDocumentsModified(value); return *this;}


    /**
     * <p>The total number of metadata files that were scanned. Includes new, updated,
     * and unchanged files.</p>
     */
    inline long long GetNumberOfMetadataDocumentsScanned() const{ return m_numberOfMetadataDocumentsScanned; }

    /**
     * <p>The total number of metadata files that were scanned. Includes new, updated,
     * and unchanged files.</p>
     */
    inline bool NumberOfMetadataDocumentsScannedHasBeenSet() const { return m_numberOfMetadataDocumentsScannedHasBeenSet; }

    /**
     * <p>The total number of metadata files that were scanned. Includes new, updated,
     * and unchanged files.</p>
     */
    inline void SetNumberOfMetadataDocumentsScanned(long long value) { m_numberOfMetadataDocumentsScannedHasBeenSet = true; m_numberOfMetadataDocumentsScanned = value; }

    /**
     * <p>The total number of metadata files that were scanned. Includes new, updated,
     * and unchanged files.</p>
     */
    inline IngestionJobStatistics& WithNumberOfMetadataDocumentsScanned(long long value) { SetNumberOfMetadataDocumentsScanned(value); return *this;}


    /**
     * <p>The number of modified source documents in the data source that were
     * successfully indexed.</p>
     */
    inline long long GetNumberOfModifiedDocumentsIndexed() const{ return m_numberOfModifiedDocumentsIndexed; }

    /**
     * <p>The number of modified source documents in the data source that were
     * successfully indexed.</p>
     */
    inline bool NumberOfModifiedDocumentsIndexedHasBeenSet() const { return m_numberOfModifiedDocumentsIndexedHasBeenSet; }

    /**
     * <p>The number of modified source documents in the data source that were
     * successfully indexed.</p>
     */
    inline void SetNumberOfModifiedDocumentsIndexed(long long value) { m_numberOfModifiedDocumentsIndexedHasBeenSet = true; m_numberOfModifiedDocumentsIndexed = value; }

    /**
     * <p>The number of modified source documents in the data source that were
     * successfully indexed.</p>
     */
    inline IngestionJobStatistics& WithNumberOfModifiedDocumentsIndexed(long long value) { SetNumberOfModifiedDocumentsIndexed(value); return *this;}


    /**
     * <p>The number of new source documents in the data source that were successfully
     * indexed.</p>
     */
    inline long long GetNumberOfNewDocumentsIndexed() const{ return m_numberOfNewDocumentsIndexed; }

    /**
     * <p>The number of new source documents in the data source that were successfully
     * indexed.</p>
     */
    inline bool NumberOfNewDocumentsIndexedHasBeenSet() const { return m_numberOfNewDocumentsIndexedHasBeenSet; }

    /**
     * <p>The number of new source documents in the data source that were successfully
     * indexed.</p>
     */
    inline void SetNumberOfNewDocumentsIndexed(long long value) { m_numberOfNewDocumentsIndexedHasBeenSet = true; m_numberOfNewDocumentsIndexed = value; }

    /**
     * <p>The number of new source documents in the data source that were successfully
     * indexed.</p>
     */
    inline IngestionJobStatistics& WithNumberOfNewDocumentsIndexed(long long value) { SetNumberOfNewDocumentsIndexed(value); return *this;}

  private:

    long long m_numberOfDocumentsDeleted;
    bool m_numberOfDocumentsDeletedHasBeenSet = false;

    long long m_numberOfDocumentsFailed;
    bool m_numberOfDocumentsFailedHasBeenSet = false;

    long long m_numberOfDocumentsScanned;
    bool m_numberOfDocumentsScannedHasBeenSet = false;

    long long m_numberOfMetadataDocumentsModified;
    bool m_numberOfMetadataDocumentsModifiedHasBeenSet = false;

    long long m_numberOfMetadataDocumentsScanned;
    bool m_numberOfMetadataDocumentsScannedHasBeenSet = false;

    long long m_numberOfModifiedDocumentsIndexed;
    bool m_numberOfModifiedDocumentsIndexedHasBeenSet = false;

    long long m_numberOfNewDocumentsIndexed;
    bool m_numberOfNewDocumentsIndexedHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
