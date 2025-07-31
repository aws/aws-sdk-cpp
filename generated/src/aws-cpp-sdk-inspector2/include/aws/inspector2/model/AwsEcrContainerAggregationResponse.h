/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/SeverityCounts.h>
#include <aws/core/utils/DateTime.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>An aggregation of information about Amazon ECR containers.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AwsEcrContainerAggregationResponse">AWS
   * API Reference</a></p>
   */
  class AwsEcrContainerAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API AwsEcrContainerAggregationResponse() = default;
    AWS_INSPECTOR2_API AwsEcrContainerAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AwsEcrContainerAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource ID of the container.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    AwsEcrContainerAggregationResponse& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA value of the container image.</p>
     */
    inline const Aws::String& GetImageSha() const { return m_imageSha; }
    inline bool ImageShaHasBeenSet() const { return m_imageShaHasBeenSet; }
    template<typename ImageShaT = Aws::String>
    void SetImageSha(ImageShaT&& value) { m_imageShaHasBeenSet = true; m_imageSha = std::forward<ImageShaT>(value); }
    template<typename ImageShaT = Aws::String>
    AwsEcrContainerAggregationResponse& WithImageSha(ImageShaT&& value) { SetImageSha(std::forward<ImageShaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container repository.</p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    AwsEcrContainerAggregationResponse& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the container.</p>
     */
    inline const Aws::String& GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    template<typename ArchitectureT = Aws::String>
    void SetArchitecture(ArchitectureT&& value) { m_architectureHasBeenSet = true; m_architecture = std::forward<ArchitectureT>(value); }
    template<typename ArchitectureT = Aws::String>
    AwsEcrContainerAggregationResponse& WithArchitecture(ArchitectureT&& value) { SetArchitecture(std::forward<ArchitectureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container image stags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageTags() const { return m_imageTags; }
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }
    template<typename ImageTagsT = Aws::Vector<Aws::String>>
    void SetImageTags(ImageTagsT&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::forward<ImageTagsT>(value); }
    template<typename ImageTagsT = Aws::Vector<Aws::String>>
    AwsEcrContainerAggregationResponse& WithImageTags(ImageTagsT&& value) { SetImageTags(std::forward<ImageTagsT>(value)); return *this;}
    template<typename ImageTagsT = Aws::String>
    AwsEcrContainerAggregationResponse& AddImageTags(ImageTagsT&& value) { m_imageTagsHasBeenSet = true; m_imageTags.emplace_back(std::forward<ImageTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the account that owns the
     * container.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AwsEcrContainerAggregationResponse& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of finding by severity.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const { return m_severityCounts; }
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
    template<typename SeverityCountsT = SeverityCounts>
    void SetSeverityCounts(SeverityCountsT&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::forward<SeverityCountsT>(value); }
    template<typename SeverityCountsT = SeverityCounts>
    AwsEcrContainerAggregationResponse& WithSeverityCounts(SeverityCountsT&& value) { SetSeverityCounts(std::forward<SeverityCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time an Amazon ECR image was used in an Amazon ECS task or Amazon
     * EKS pod.</p>
     */
    inline const Aws::Utils::DateTime& GetLastInUseAt() const { return m_lastInUseAt; }
    inline bool LastInUseAtHasBeenSet() const { return m_lastInUseAtHasBeenSet; }
    template<typename LastInUseAtT = Aws::Utils::DateTime>
    void SetLastInUseAt(LastInUseAtT&& value) { m_lastInUseAtHasBeenSet = true; m_lastInUseAt = std::forward<LastInUseAtT>(value); }
    template<typename LastInUseAtT = Aws::Utils::DateTime>
    AwsEcrContainerAggregationResponse& WithLastInUseAt(LastInUseAtT&& value) { SetLastInUseAt(std::forward<LastInUseAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon ECS tasks or Amazon EKS pods where the Amazon ECR
     * container image is in use.</p>
     */
    inline long long GetInUseCount() const { return m_inUseCount; }
    inline bool InUseCountHasBeenSet() const { return m_inUseCountHasBeenSet; }
    inline void SetInUseCount(long long value) { m_inUseCountHasBeenSet = true; m_inUseCount = value; }
    inline AwsEcrContainerAggregationResponse& WithInUseCount(long long value) { SetInUseCount(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_imageSha;
    bool m_imageShaHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageTags;
    bool m_imageTagsHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;

    Aws::Utils::DateTime m_lastInUseAt{};
    bool m_lastInUseAtHasBeenSet = false;

    long long m_inUseCount{0};
    bool m_inUseCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
