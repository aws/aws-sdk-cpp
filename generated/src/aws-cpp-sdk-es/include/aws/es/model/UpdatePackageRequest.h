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
    AWS_ELASTICSEARCHSERVICE_API UpdatePackageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackage"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique identifier for the package.</p>
     */
    inline const Aws::String& GetPackageID() const { return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    template<typename PackageIDT = Aws::String>
    void SetPackageID(PackageIDT&& value) { m_packageIDHasBeenSet = true; m_packageID = std::forward<PackageIDT>(value); }
    template<typename PackageIDT = Aws::String>
    UpdatePackageRequest& WithPackageID(PackageIDT&& value) { SetPackageID(std::forward<PackageIDT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PackageSource& GetPackageSource() const { return m_packageSource; }
    inline bool PackageSourceHasBeenSet() const { return m_packageSourceHasBeenSet; }
    template<typename PackageSourceT = PackageSource>
    void SetPackageSource(PackageSourceT&& value) { m_packageSourceHasBeenSet = true; m_packageSource = std::forward<PackageSourceT>(value); }
    template<typename PackageSourceT = PackageSource>
    UpdatePackageRequest& WithPackageSource(PackageSourceT&& value) { SetPackageSource(std::forward<PackageSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>New description of the package.</p>
     */
    inline const Aws::String& GetPackageDescription() const { return m_packageDescription; }
    inline bool PackageDescriptionHasBeenSet() const { return m_packageDescriptionHasBeenSet; }
    template<typename PackageDescriptionT = Aws::String>
    void SetPackageDescription(PackageDescriptionT&& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = std::forward<PackageDescriptionT>(value); }
    template<typename PackageDescriptionT = Aws::String>
    UpdatePackageRequest& WithPackageDescription(PackageDescriptionT&& value) { SetPackageDescription(std::forward<PackageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An info message for the new version which will be shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline const Aws::String& GetCommitMessage() const { return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    template<typename CommitMessageT = Aws::String>
    void SetCommitMessage(CommitMessageT&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::forward<CommitMessageT>(value); }
    template<typename CommitMessageT = Aws::String>
    UpdatePackageRequest& WithCommitMessage(CommitMessageT&& value) { SetCommitMessage(std::forward<CommitMessageT>(value)); return *this;}
    ///@}
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
