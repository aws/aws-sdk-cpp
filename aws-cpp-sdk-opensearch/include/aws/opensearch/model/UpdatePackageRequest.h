/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/PackageSource.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for request parameters to the <code>UpdatePackage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdatePackageRequest">AWS
   * API Reference</a></p>
   */
  class UpdatePackageRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdatePackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackage"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the package.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }

    /**
     * <p>The unique identifier for the package.</p>
     */
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }

    /**
     * <p>The unique identifier for the package.</p>
     */
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }

    /**
     * <p>The unique identifier for the package.</p>
     */
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }

    /**
     * <p>The unique identifier for the package.</p>
     */
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }

    /**
     * <p>The unique identifier for the package.</p>
     */
    inline UpdatePackageRequest& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}

    /**
     * <p>The unique identifier for the package.</p>
     */
    inline UpdatePackageRequest& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the package.</p>
     */
    inline UpdatePackageRequest& WithPackageID(const char* value) { SetPackageID(value); return *this;}


    /**
     * <p>Amazon S3 bucket and key for the package.</p>
     */
    inline const PackageSource& GetPackageSource() const{ return m_packageSource; }

    /**
     * <p>Amazon S3 bucket and key for the package.</p>
     */
    inline bool PackageSourceHasBeenSet() const { return m_packageSourceHasBeenSet; }

    /**
     * <p>Amazon S3 bucket and key for the package.</p>
     */
    inline void SetPackageSource(const PackageSource& value) { m_packageSourceHasBeenSet = true; m_packageSource = value; }

    /**
     * <p>Amazon S3 bucket and key for the package.</p>
     */
    inline void SetPackageSource(PackageSource&& value) { m_packageSourceHasBeenSet = true; m_packageSource = std::move(value); }

    /**
     * <p>Amazon S3 bucket and key for the package.</p>
     */
    inline UpdatePackageRequest& WithPackageSource(const PackageSource& value) { SetPackageSource(value); return *this;}

    /**
     * <p>Amazon S3 bucket and key for the package.</p>
     */
    inline UpdatePackageRequest& WithPackageSource(PackageSource&& value) { SetPackageSource(std::move(value)); return *this;}


    /**
     * <p>A new description of the package.</p>
     */
    inline const Aws::String& GetPackageDescription() const{ return m_packageDescription; }

    /**
     * <p>A new description of the package.</p>
     */
    inline bool PackageDescriptionHasBeenSet() const { return m_packageDescriptionHasBeenSet; }

    /**
     * <p>A new description of the package.</p>
     */
    inline void SetPackageDescription(const Aws::String& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = value; }

    /**
     * <p>A new description of the package.</p>
     */
    inline void SetPackageDescription(Aws::String&& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = std::move(value); }

    /**
     * <p>A new description of the package.</p>
     */
    inline void SetPackageDescription(const char* value) { m_packageDescriptionHasBeenSet = true; m_packageDescription.assign(value); }

    /**
     * <p>A new description of the package.</p>
     */
    inline UpdatePackageRequest& WithPackageDescription(const Aws::String& value) { SetPackageDescription(value); return *this;}

    /**
     * <p>A new description of the package.</p>
     */
    inline UpdatePackageRequest& WithPackageDescription(Aws::String&& value) { SetPackageDescription(std::move(value)); return *this;}

    /**
     * <p>A new description of the package.</p>
     */
    inline UpdatePackageRequest& WithPackageDescription(const char* value) { SetPackageDescription(value); return *this;}


    /**
     * <p>Commit message for the updated file, which is shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }

    /**
     * <p>Commit message for the updated file, which is shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }

    /**
     * <p>Commit message for the updated file, which is shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }

    /**
     * <p>Commit message for the updated file, which is shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }

    /**
     * <p>Commit message for the updated file, which is shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }

    /**
     * <p>Commit message for the updated file, which is shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline UpdatePackageRequest& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}

    /**
     * <p>Commit message for the updated file, which is shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline UpdatePackageRequest& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}

    /**
     * <p>Commit message for the updated file, which is shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline UpdatePackageRequest& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}

  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    PackageSource m_packageSource;
    bool m_packageSourceHasBeenSet = false;

    Aws::String m_packageDescription;
    bool m_packageDescriptionHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
