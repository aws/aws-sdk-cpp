/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/ExportServerSideEncryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/model/RevisionDestinationEntry.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Details of the operation to be performed by the job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ExportRevisionsToS3RequestDetails">AWS
   * API Reference</a></p>
   */
  class ExportRevisionsToS3RequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API ExportRevisionsToS3RequestDetails();
    AWS_DATAEXCHANGE_API ExportRevisionsToS3RequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ExportRevisionsToS3RequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportRevisionsToS3RequestDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportRevisionsToS3RequestDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportRevisionsToS3RequestDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>Encryption configuration for the export job.</p>
     */
    inline const ExportServerSideEncryption& GetEncryption() const{ return m_encryption; }

    /**
     * <p>Encryption configuration for the export job.</p>
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * <p>Encryption configuration for the export job.</p>
     */
    inline void SetEncryption(const ExportServerSideEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * <p>Encryption configuration for the export job.</p>
     */
    inline void SetEncryption(ExportServerSideEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * <p>Encryption configuration for the export job.</p>
     */
    inline ExportRevisionsToS3RequestDetails& WithEncryption(const ExportServerSideEncryption& value) { SetEncryption(value); return *this;}

    /**
     * <p>Encryption configuration for the export job.</p>
     */
    inline ExportRevisionsToS3RequestDetails& WithEncryption(ExportServerSideEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * <p>The destination for the revision.</p>
     */
    inline const Aws::Vector<RevisionDestinationEntry>& GetRevisionDestinations() const{ return m_revisionDestinations; }

    /**
     * <p>The destination for the revision.</p>
     */
    inline bool RevisionDestinationsHasBeenSet() const { return m_revisionDestinationsHasBeenSet; }

    /**
     * <p>The destination for the revision.</p>
     */
    inline void SetRevisionDestinations(const Aws::Vector<RevisionDestinationEntry>& value) { m_revisionDestinationsHasBeenSet = true; m_revisionDestinations = value; }

    /**
     * <p>The destination for the revision.</p>
     */
    inline void SetRevisionDestinations(Aws::Vector<RevisionDestinationEntry>&& value) { m_revisionDestinationsHasBeenSet = true; m_revisionDestinations = std::move(value); }

    /**
     * <p>The destination for the revision.</p>
     */
    inline ExportRevisionsToS3RequestDetails& WithRevisionDestinations(const Aws::Vector<RevisionDestinationEntry>& value) { SetRevisionDestinations(value); return *this;}

    /**
     * <p>The destination for the revision.</p>
     */
    inline ExportRevisionsToS3RequestDetails& WithRevisionDestinations(Aws::Vector<RevisionDestinationEntry>&& value) { SetRevisionDestinations(std::move(value)); return *this;}

    /**
     * <p>The destination for the revision.</p>
     */
    inline ExportRevisionsToS3RequestDetails& AddRevisionDestinations(const RevisionDestinationEntry& value) { m_revisionDestinationsHasBeenSet = true; m_revisionDestinations.push_back(value); return *this; }

    /**
     * <p>The destination for the revision.</p>
     */
    inline ExportRevisionsToS3RequestDetails& AddRevisionDestinations(RevisionDestinationEntry&& value) { m_revisionDestinationsHasBeenSet = true; m_revisionDestinations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    ExportServerSideEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::Vector<RevisionDestinationEntry> m_revisionDestinations;
    bool m_revisionDestinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
