/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/PackageSource.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Container for request parameters to <code> <a>UpdatePackage</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdatePackageRequest">AWS
   * API Reference</a></p>
   */
  class UpdatePackageRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API UpdatePackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackage"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Unique identifier for the package.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline UpdatePackageRequest& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline UpdatePackageRequest& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline UpdatePackageRequest& WithPackageID(const char* value) { SetPackageID(value); return *this;}


    
    inline const PackageSource& GetPackageSource() const{ return m_packageSource; }

    
    inline bool PackageSourceHasBeenSet() const { return m_packageSourceHasBeenSet; }

    
    inline void SetPackageSource(const PackageSource& value) { m_packageSourceHasBeenSet = true; m_packageSource = value; }

    
    inline void SetPackageSource(PackageSource&& value) { m_packageSourceHasBeenSet = true; m_packageSource = std::move(value); }

    
    inline UpdatePackageRequest& WithPackageSource(const PackageSource& value) { SetPackageSource(value); return *this;}

    
    inline UpdatePackageRequest& WithPackageSource(PackageSource&& value) { SetPackageSource(std::move(value)); return *this;}


    /**
     * <p>New description of the package.</p>
     */
    inline const Aws::String& GetPackageDescription() const{ return m_packageDescription; }

    /**
     * <p>New description of the package.</p>
     */
    inline bool PackageDescriptionHasBeenSet() const { return m_packageDescriptionHasBeenSet; }

    /**
     * <p>New description of the package.</p>
     */
    inline void SetPackageDescription(const Aws::String& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = value; }

    /**
     * <p>New description of the package.</p>
     */
    inline void SetPackageDescription(Aws::String&& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = std::move(value); }

    /**
     * <p>New description of the package.</p>
     */
    inline void SetPackageDescription(const char* value) { m_packageDescriptionHasBeenSet = true; m_packageDescription.assign(value); }

    /**
     * <p>New description of the package.</p>
     */
    inline UpdatePackageRequest& WithPackageDescription(const Aws::String& value) { SetPackageDescription(value); return *this;}

    /**
     * <p>New description of the package.</p>
     */
    inline UpdatePackageRequest& WithPackageDescription(Aws::String&& value) { SetPackageDescription(std::move(value)); return *this;}

    /**
     * <p>New description of the package.</p>
     */
    inline UpdatePackageRequest& WithPackageDescription(const char* value) { SetPackageDescription(value); return *this;}


    /**
     * <p>An info message for the new version which will be shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }

    /**
     * <p>An info message for the new version which will be shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }

    /**
     * <p>An info message for the new version which will be shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }

    /**
     * <p>An info message for the new version which will be shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }

    /**
     * <p>An info message for the new version which will be shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }

    /**
     * <p>An info message for the new version which will be shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline UpdatePackageRequest& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}

    /**
     * <p>An info message for the new version which will be shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline UpdatePackageRequest& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}

    /**
     * <p>An info message for the new version which will be shown as part of
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
} // namespace ElasticsearchService
} // namespace Aws
