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
   * <p>The document level statistics of an ingestion job</p><p><h3>See Also:</h3>  
   * <a
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
     * <p>Number of scanned documents</p>
     */
    inline long long GetNumberOfDocumentsScanned() const{ return m_numberOfDocumentsScanned; }

    /**
     * <p>Number of scanned documents</p>
     */
    inline bool NumberOfDocumentsScannedHasBeenSet() const { return m_numberOfDocumentsScannedHasBeenSet; }

    /**
     * <p>Number of scanned documents</p>
     */
    inline void SetNumberOfDocumentsScanned(long long value) { m_numberOfDocumentsScannedHasBeenSet = true; m_numberOfDocumentsScanned = value; }

    /**
     * <p>Number of scanned documents</p>
     */
    inline IngestionJobStatistics& WithNumberOfDocumentsScanned(long long value) { SetNumberOfDocumentsScanned(value); return *this;}


    /**
     * <p>Number of indexed documents</p>
     */
    inline long long GetNumberOfNewDocumentsIndexed() const{ return m_numberOfNewDocumentsIndexed; }

    /**
     * <p>Number of indexed documents</p>
     */
    inline bool NumberOfNewDocumentsIndexedHasBeenSet() const { return m_numberOfNewDocumentsIndexedHasBeenSet; }

    /**
     * <p>Number of indexed documents</p>
     */
    inline void SetNumberOfNewDocumentsIndexed(long long value) { m_numberOfNewDocumentsIndexedHasBeenSet = true; m_numberOfNewDocumentsIndexed = value; }

    /**
     * <p>Number of indexed documents</p>
     */
    inline IngestionJobStatistics& WithNumberOfNewDocumentsIndexed(long long value) { SetNumberOfNewDocumentsIndexed(value); return *this;}


    /**
     * <p>Number of modified documents indexed</p>
     */
    inline long long GetNumberOfModifiedDocumentsIndexed() const{ return m_numberOfModifiedDocumentsIndexed; }

    /**
     * <p>Number of modified documents indexed</p>
     */
    inline bool NumberOfModifiedDocumentsIndexedHasBeenSet() const { return m_numberOfModifiedDocumentsIndexedHasBeenSet; }

    /**
     * <p>Number of modified documents indexed</p>
     */
    inline void SetNumberOfModifiedDocumentsIndexed(long long value) { m_numberOfModifiedDocumentsIndexedHasBeenSet = true; m_numberOfModifiedDocumentsIndexed = value; }

    /**
     * <p>Number of modified documents indexed</p>
     */
    inline IngestionJobStatistics& WithNumberOfModifiedDocumentsIndexed(long long value) { SetNumberOfModifiedDocumentsIndexed(value); return *this;}


    /**
     * <p>Number of deleted documents</p>
     */
    inline long long GetNumberOfDocumentsDeleted() const{ return m_numberOfDocumentsDeleted; }

    /**
     * <p>Number of deleted documents</p>
     */
    inline bool NumberOfDocumentsDeletedHasBeenSet() const { return m_numberOfDocumentsDeletedHasBeenSet; }

    /**
     * <p>Number of deleted documents</p>
     */
    inline void SetNumberOfDocumentsDeleted(long long value) { m_numberOfDocumentsDeletedHasBeenSet = true; m_numberOfDocumentsDeleted = value; }

    /**
     * <p>Number of deleted documents</p>
     */
    inline IngestionJobStatistics& WithNumberOfDocumentsDeleted(long long value) { SetNumberOfDocumentsDeleted(value); return *this;}


    /**
     * <p>Number of failed documents</p>
     */
    inline long long GetNumberOfDocumentsFailed() const{ return m_numberOfDocumentsFailed; }

    /**
     * <p>Number of failed documents</p>
     */
    inline bool NumberOfDocumentsFailedHasBeenSet() const { return m_numberOfDocumentsFailedHasBeenSet; }

    /**
     * <p>Number of failed documents</p>
     */
    inline void SetNumberOfDocumentsFailed(long long value) { m_numberOfDocumentsFailedHasBeenSet = true; m_numberOfDocumentsFailed = value; }

    /**
     * <p>Number of failed documents</p>
     */
    inline IngestionJobStatistics& WithNumberOfDocumentsFailed(long long value) { SetNumberOfDocumentsFailed(value); return *this;}

  private:

    long long m_numberOfDocumentsScanned;
    bool m_numberOfDocumentsScannedHasBeenSet = false;

    long long m_numberOfNewDocumentsIndexed;
    bool m_numberOfNewDocumentsIndexedHasBeenSet = false;

    long long m_numberOfModifiedDocumentsIndexed;
    bool m_numberOfModifiedDocumentsIndexedHasBeenSet = false;

    long long m_numberOfDocumentsDeleted;
    bool m_numberOfDocumentsDeletedHasBeenSet = false;

    long long m_numberOfDocumentsFailed;
    bool m_numberOfDocumentsFailedHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
