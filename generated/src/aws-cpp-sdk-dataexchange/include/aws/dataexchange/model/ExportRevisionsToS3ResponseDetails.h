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
    AWS_DATAEXCHANGE_API ExportRevisionsToS3ResponseDetails() = default;
    AWS_DATAEXCHANGE_API ExportRevisionsToS3ResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ExportRevisionsToS3ResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    ExportRevisionsToS3ResponseDetails& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption configuration of the export job.</p>
     */
    inline const ExportServerSideEncryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = ExportServerSideEncryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = ExportServerSideEncryption>
    ExportRevisionsToS3ResponseDetails& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination in Amazon S3 where the revision is exported.</p>
     */
    inline const Aws::Vector<RevisionDestinationEntry>& GetRevisionDestinations() const { return m_revisionDestinations; }
    inline bool RevisionDestinationsHasBeenSet() const { return m_revisionDestinationsHasBeenSet; }
    template<typename RevisionDestinationsT = Aws::Vector<RevisionDestinationEntry>>
    void SetRevisionDestinations(RevisionDestinationsT&& value) { m_revisionDestinationsHasBeenSet = true; m_revisionDestinations = std::forward<RevisionDestinationsT>(value); }
    template<typename RevisionDestinationsT = Aws::Vector<RevisionDestinationEntry>>
    ExportRevisionsToS3ResponseDetails& WithRevisionDestinations(RevisionDestinationsT&& value) { SetRevisionDestinations(std::forward<RevisionDestinationsT>(value)); return *this;}
    template<typename RevisionDestinationsT = RevisionDestinationEntry>
    ExportRevisionsToS3ResponseDetails& AddRevisionDestinations(RevisionDestinationsT&& value) { m_revisionDestinationsHasBeenSet = true; m_revisionDestinations.emplace_back(std::forward<RevisionDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the event action.</p>
     */
    inline const Aws::String& GetEventActionArn() const { return m_eventActionArn; }
    inline bool EventActionArnHasBeenSet() const { return m_eventActionArnHasBeenSet; }
    template<typename EventActionArnT = Aws::String>
    void SetEventActionArn(EventActionArnT&& value) { m_eventActionArnHasBeenSet = true; m_eventActionArn = std::forward<EventActionArnT>(value); }
    template<typename EventActionArnT = Aws::String>
    ExportRevisionsToS3ResponseDetails& WithEventActionArn(EventActionArnT&& value) { SetEventActionArn(std::forward<EventActionArnT>(value)); return *this;}
    ///@}
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
