/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/ExportServerSideEncryption.h>
#include <aws/dataexchange/model/AutoExportRevisionDestinationEntry.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/AutoExportRevisionToS3RequestDetails">AWS
   * API Reference</a></p>
   */
  class AutoExportRevisionToS3RequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API AutoExportRevisionToS3RequestDetails() = default;
    AWS_DATAEXCHANGE_API AutoExportRevisionToS3RequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API AutoExportRevisionToS3RequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Encryption configuration for the auto export job.</p>
     */
    inline const ExportServerSideEncryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = ExportServerSideEncryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = ExportServerSideEncryption>
    AutoExportRevisionToS3RequestDetails& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A revision destination is the Amazon S3 bucket folder destination to where
     * the export will be sent.</p>
     */
    inline const AutoExportRevisionDestinationEntry& GetRevisionDestination() const { return m_revisionDestination; }
    inline bool RevisionDestinationHasBeenSet() const { return m_revisionDestinationHasBeenSet; }
    template<typename RevisionDestinationT = AutoExportRevisionDestinationEntry>
    void SetRevisionDestination(RevisionDestinationT&& value) { m_revisionDestinationHasBeenSet = true; m_revisionDestination = std::forward<RevisionDestinationT>(value); }
    template<typename RevisionDestinationT = AutoExportRevisionDestinationEntry>
    AutoExportRevisionToS3RequestDetails& WithRevisionDestination(RevisionDestinationT&& value) { SetRevisionDestination(std::forward<RevisionDestinationT>(value)); return *this;}
    ///@}
  private:

    ExportServerSideEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    AutoExportRevisionDestinationEntry m_revisionDestination;
    bool m_revisionDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
