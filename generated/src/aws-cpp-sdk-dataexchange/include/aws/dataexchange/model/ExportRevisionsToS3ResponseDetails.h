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
   * <p>Details about the export revisions to Amazon S3 response.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ExportRevisionsToS3ResponseDetails">AWS
   * API Reference</a></p>
   */
  class ExportRevisionsToS3ResponseDetails
  {
  public:
    AWS_DATAEXCHANGE_API ExportRevisionsToS3ResponseDetails();
    AWS_DATAEXCHANGE_API ExportRevisionsToS3ResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ExportRevisionsToS3ResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ExportRevisionsToS3ResponseDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportRevisionsToS3ResponseDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportRevisionsToS3ResponseDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>Encryption configuration of the export job.</p>
     */
    inline const ExportServerSideEncryption& GetEncryption() const{ return m_encryption; }

    /**
     * <p>Encryption configuration of the export job.</p>
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * <p>Encryption configuration of the export job.</p>
     */
    inline void SetEncryption(const ExportServerSideEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * <p>Encryption configuration of the export job.</p>
     */
    inline void SetEncryption(ExportServerSideEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * <p>Encryption configuration of the export job.</p>
     */
    inline ExportRevisionsToS3ResponseDetails& WithEncryption(const ExportServerSideEncryption& value) { SetEncryption(value); return *this;}

    /**
     * <p>Encryption configuration of the export job.</p>
     */
    inline ExportRevisionsToS3ResponseDetails& WithEncryption(ExportServerSideEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * <p>The destination in Amazon S3 where the revision is exported.</p>
     */
    inline const Aws::Vector<RevisionDestinationEntry>& GetRevisionDestinations() const{ return m_revisionDestinations; }

    /**
     * <p>The destination in Amazon S3 where the revision is exported.</p>
     */
    inline bool RevisionDestinationsHasBeenSet() const { return m_revisionDestinationsHasBeenSet; }

    /**
     * <p>The destination in Amazon S3 where the revision is exported.</p>
     */
    inline void SetRevisionDestinations(const Aws::Vector<RevisionDestinationEntry>& value) { m_revisionDestinationsHasBeenSet = true; m_revisionDestinations = value; }

    /**
     * <p>The destination in Amazon S3 where the revision is exported.</p>
     */
    inline void SetRevisionDestinations(Aws::Vector<RevisionDestinationEntry>&& value) { m_revisionDestinationsHasBeenSet = true; m_revisionDestinations = std::move(value); }

    /**
     * <p>The destination in Amazon S3 where the revision is exported.</p>
     */
    inline ExportRevisionsToS3ResponseDetails& WithRevisionDestinations(const Aws::Vector<RevisionDestinationEntry>& value) { SetRevisionDestinations(value); return *this;}

    /**
     * <p>The destination in Amazon S3 where the revision is exported.</p>
     */
    inline ExportRevisionsToS3ResponseDetails& WithRevisionDestinations(Aws::Vector<RevisionDestinationEntry>&& value) { SetRevisionDestinations(std::move(value)); return *this;}

    /**
     * <p>The destination in Amazon S3 where the revision is exported.</p>
     */
    inline ExportRevisionsToS3ResponseDetails& AddRevisionDestinations(const RevisionDestinationEntry& value) { m_revisionDestinationsHasBeenSet = true; m_revisionDestinations.push_back(value); return *this; }

    /**
     * <p>The destination in Amazon S3 where the revision is exported.</p>
     */
    inline ExportRevisionsToS3ResponseDetails& AddRevisionDestinations(RevisionDestinationEntry&& value) { m_revisionDestinationsHasBeenSet = true; m_revisionDestinations.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the event action.</p>
     */
    inline const Aws::String& GetEventActionArn() const{ return m_eventActionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event action.</p>
     */
    inline bool EventActionArnHasBeenSet() const { return m_eventActionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event action.</p>
     */
    inline void SetEventActionArn(const Aws::String& value) { m_eventActionArnHasBeenSet = true; m_eventActionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event action.</p>
     */
    inline void SetEventActionArn(Aws::String&& value) { m_eventActionArnHasBeenSet = true; m_eventActionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event action.</p>
     */
    inline void SetEventActionArn(const char* value) { m_eventActionArnHasBeenSet = true; m_eventActionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event action.</p>
     */
    inline ExportRevisionsToS3ResponseDetails& WithEventActionArn(const Aws::String& value) { SetEventActionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event action.</p>
     */
    inline ExportRevisionsToS3ResponseDetails& WithEventActionArn(Aws::String&& value) { SetEventActionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event action.</p>
     */
    inline ExportRevisionsToS3ResponseDetails& WithEventActionArn(const char* value) { SetEventActionArn(value); return *this;}

  private:

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    ExportServerSideEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::Vector<RevisionDestinationEntry> m_revisionDestinations;
    bool m_revisionDestinationsHasBeenSet = false;

    Aws::String m_eventActionArn;
    bool m_eventActionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
