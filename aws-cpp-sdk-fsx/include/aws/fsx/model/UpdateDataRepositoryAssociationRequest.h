/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/S3DataRepositoryConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class UpdateDataRepositoryAssociationRequest : public FSxRequest
  {
  public:
    AWS_FSX_API UpdateDataRepositoryAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataRepositoryAssociation"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the data repository association that you are updating.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of the data repository association that you are updating.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The ID of the data repository association that you are updating.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of the data repository association that you are updating.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID of the data repository association that you are updating.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID of the data repository association that you are updating.</p>
     */
    inline UpdateDataRepositoryAssociationRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the data repository association that you are updating.</p>
     */
    inline UpdateDataRepositoryAssociationRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data repository association that you are updating.</p>
     */
    inline UpdateDataRepositoryAssociationRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline UpdateDataRepositoryAssociationRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline UpdateDataRepositoryAssociationRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline UpdateDataRepositoryAssociationRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system.</p> <p>The
     * default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB (500
     * GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline int GetImportedFileChunkSize() const{ return m_importedFileChunkSize; }

    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system.</p> <p>The
     * default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB (500
     * GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline bool ImportedFileChunkSizeHasBeenSet() const { return m_importedFileChunkSizeHasBeenSet; }

    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system.</p> <p>The
     * default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB (500
     * GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline void SetImportedFileChunkSize(int value) { m_importedFileChunkSizeHasBeenSet = true; m_importedFileChunkSize = value; }

    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system.</p> <p>The
     * default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB (500
     * GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline UpdateDataRepositoryAssociationRequest& WithImportedFileChunkSize(int value) { SetImportedFileChunkSize(value); return *this;}


    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline const S3DataRepositoryConfiguration& GetS3() const{ return m_s3; }

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline void SetS3(const S3DataRepositoryConfiguration& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline void SetS3(S3DataRepositoryConfiguration&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline UpdateDataRepositoryAssociationRequest& WithS3(const S3DataRepositoryConfiguration& value) { SetS3(value); return *this;}

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline UpdateDataRepositoryAssociationRequest& WithS3(S3DataRepositoryConfiguration&& value) { SetS3(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    int m_importedFileChunkSize;
    bool m_importedFileChunkSizeHasBeenSet = false;

    S3DataRepositoryConfiguration m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
