/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ScanFrequency.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ScanningRepositoryFilter.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The details of the scanning configuration for a repository.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/RepositoryScanningConfiguration">AWS
   * API Reference</a></p>
   */
  class RepositoryScanningConfiguration
  {
  public:
    AWS_ECR_API RepositoryScanningConfiguration() = default;
    AWS_ECR_API RepositoryScanningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API RepositoryScanningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the repository.</p>
     */
    inline const Aws::String& GetRepositoryArn() const { return m_repositoryArn; }
    inline bool RepositoryArnHasBeenSet() const { return m_repositoryArnHasBeenSet; }
    template<typename RepositoryArnT = Aws::String>
    void SetRepositoryArn(RepositoryArnT&& value) { m_repositoryArnHasBeenSet = true; m_repositoryArn = std::forward<RepositoryArnT>(value); }
    template<typename RepositoryArnT = Aws::String>
    RepositoryScanningConfiguration& WithRepositoryArn(RepositoryArnT&& value) { SetRepositoryArn(std::forward<RepositoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    RepositoryScanningConfiguration& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not scan on push is configured for the repository.</p>
     */
    inline bool GetScanOnPush() const { return m_scanOnPush; }
    inline bool ScanOnPushHasBeenSet() const { return m_scanOnPushHasBeenSet; }
    inline void SetScanOnPush(bool value) { m_scanOnPushHasBeenSet = true; m_scanOnPush = value; }
    inline RepositoryScanningConfiguration& WithScanOnPush(bool value) { SetScanOnPush(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan frequency for the repository.</p>
     */
    inline ScanFrequency GetScanFrequency() const { return m_scanFrequency; }
    inline bool ScanFrequencyHasBeenSet() const { return m_scanFrequencyHasBeenSet; }
    inline void SetScanFrequency(ScanFrequency value) { m_scanFrequencyHasBeenSet = true; m_scanFrequency = value; }
    inline RepositoryScanningConfiguration& WithScanFrequency(ScanFrequency value) { SetScanFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan filters applied to the repository.</p>
     */
    inline const Aws::Vector<ScanningRepositoryFilter>& GetAppliedScanFilters() const { return m_appliedScanFilters; }
    inline bool AppliedScanFiltersHasBeenSet() const { return m_appliedScanFiltersHasBeenSet; }
    template<typename AppliedScanFiltersT = Aws::Vector<ScanningRepositoryFilter>>
    void SetAppliedScanFilters(AppliedScanFiltersT&& value) { m_appliedScanFiltersHasBeenSet = true; m_appliedScanFilters = std::forward<AppliedScanFiltersT>(value); }
    template<typename AppliedScanFiltersT = Aws::Vector<ScanningRepositoryFilter>>
    RepositoryScanningConfiguration& WithAppliedScanFilters(AppliedScanFiltersT&& value) { SetAppliedScanFilters(std::forward<AppliedScanFiltersT>(value)); return *this;}
    template<typename AppliedScanFiltersT = ScanningRepositoryFilter>
    RepositoryScanningConfiguration& AddAppliedScanFilters(AppliedScanFiltersT&& value) { m_appliedScanFiltersHasBeenSet = true; m_appliedScanFilters.emplace_back(std::forward<AppliedScanFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_repositoryArn;
    bool m_repositoryArnHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    bool m_scanOnPush{false};
    bool m_scanOnPushHasBeenSet = false;

    ScanFrequency m_scanFrequency{ScanFrequency::NOT_SET};
    bool m_scanFrequencyHasBeenSet = false;

    Aws::Vector<ScanningRepositoryFilter> m_appliedScanFilters;
    bool m_appliedScanFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
