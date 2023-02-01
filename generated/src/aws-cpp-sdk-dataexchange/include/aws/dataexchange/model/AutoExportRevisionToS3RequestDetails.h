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
    AWS_DATAEXCHANGE_API AutoExportRevisionToS3RequestDetails();
    AWS_DATAEXCHANGE_API AutoExportRevisionToS3RequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API AutoExportRevisionToS3RequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Encryption configuration for the auto export job.</p>
     */
    inline const ExportServerSideEncryption& GetEncryption() const{ return m_encryption; }

    /**
     * <p>Encryption configuration for the auto export job.</p>
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * <p>Encryption configuration for the auto export job.</p>
     */
    inline void SetEncryption(const ExportServerSideEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * <p>Encryption configuration for the auto export job.</p>
     */
    inline void SetEncryption(ExportServerSideEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * <p>Encryption configuration for the auto export job.</p>
     */
    inline AutoExportRevisionToS3RequestDetails& WithEncryption(const ExportServerSideEncryption& value) { SetEncryption(value); return *this;}

    /**
     * <p>Encryption configuration for the auto export job.</p>
     */
    inline AutoExportRevisionToS3RequestDetails& WithEncryption(ExportServerSideEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * <p>A revision destination is the Amazon S3 bucket folder destination to where
     * the export will be sent.</p>
     */
    inline const AutoExportRevisionDestinationEntry& GetRevisionDestination() const{ return m_revisionDestination; }

    /**
     * <p>A revision destination is the Amazon S3 bucket folder destination to where
     * the export will be sent.</p>
     */
    inline bool RevisionDestinationHasBeenSet() const { return m_revisionDestinationHasBeenSet; }

    /**
     * <p>A revision destination is the Amazon S3 bucket folder destination to where
     * the export will be sent.</p>
     */
    inline void SetRevisionDestination(const AutoExportRevisionDestinationEntry& value) { m_revisionDestinationHasBeenSet = true; m_revisionDestination = value; }

    /**
     * <p>A revision destination is the Amazon S3 bucket folder destination to where
     * the export will be sent.</p>
     */
    inline void SetRevisionDestination(AutoExportRevisionDestinationEntry&& value) { m_revisionDestinationHasBeenSet = true; m_revisionDestination = std::move(value); }

    /**
     * <p>A revision destination is the Amazon S3 bucket folder destination to where
     * the export will be sent.</p>
     */
    inline AutoExportRevisionToS3RequestDetails& WithRevisionDestination(const AutoExportRevisionDestinationEntry& value) { SetRevisionDestination(value); return *this;}

    /**
     * <p>A revision destination is the Amazon S3 bucket folder destination to where
     * the export will be sent.</p>
     */
    inline AutoExportRevisionToS3RequestDetails& WithRevisionDestination(AutoExportRevisionDestinationEntry&& value) { SetRevisionDestination(std::move(value)); return *this;}

  private:

    ExportServerSideEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    AutoExportRevisionDestinationEntry m_revisionDestination;
    bool m_revisionDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
