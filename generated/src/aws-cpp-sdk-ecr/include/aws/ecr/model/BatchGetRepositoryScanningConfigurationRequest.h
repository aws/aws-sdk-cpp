/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class BatchGetRepositoryScanningConfigurationRequest : public ECRRequest
  {
  public:
    AWS_ECR_API BatchGetRepositoryScanningConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetRepositoryScanningConfiguration"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>One or more repository names to get the scanning configuration for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryNames() const { return m_repositoryNames; }
    inline bool RepositoryNamesHasBeenSet() const { return m_repositoryNamesHasBeenSet; }
    template<typename RepositoryNamesT = Aws::Vector<Aws::String>>
    void SetRepositoryNames(RepositoryNamesT&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = std::forward<RepositoryNamesT>(value); }
    template<typename RepositoryNamesT = Aws::Vector<Aws::String>>
    BatchGetRepositoryScanningConfigurationRequest& WithRepositoryNames(RepositoryNamesT&& value) { SetRepositoryNames(std::forward<RepositoryNamesT>(value)); return *this;}
    template<typename RepositoryNamesT = Aws::String>
    BatchGetRepositoryScanningConfigurationRequest& AddRepositoryNames(RepositoryNamesT&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.emplace_back(std::forward<RepositoryNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_repositoryNames;
    bool m_repositoryNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
