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
    AWS_ECR_API RepositoryScanningConfiguration();
    AWS_ECR_API RepositoryScanningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API RepositoryScanningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the repository.</p>
     */
    inline const Aws::String& GetRepositoryArn() const{ return m_repositoryArn; }
    inline bool RepositoryArnHasBeenSet() const { return m_repositoryArnHasBeenSet; }
    inline void SetRepositoryArn(const Aws::String& value) { m_repositoryArnHasBeenSet = true; m_repositoryArn = value; }
    inline void SetRepositoryArn(Aws::String&& value) { m_repositoryArnHasBeenSet = true; m_repositoryArn = std::move(value); }
    inline void SetRepositoryArn(const char* value) { m_repositoryArnHasBeenSet = true; m_repositoryArn.assign(value); }
    inline RepositoryScanningConfiguration& WithRepositoryArn(const Aws::String& value) { SetRepositoryArn(value); return *this;}
    inline RepositoryScanningConfiguration& WithRepositoryArn(Aws::String&& value) { SetRepositoryArn(std::move(value)); return *this;}
    inline RepositoryScanningConfiguration& WithRepositoryArn(const char* value) { SetRepositoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline RepositoryScanningConfiguration& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline RepositoryScanningConfiguration& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline RepositoryScanningConfiguration& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not scan on push is configured for the repository.</p>
     */
    inline bool GetScanOnPush() const{ return m_scanOnPush; }
    inline bool ScanOnPushHasBeenSet() const { return m_scanOnPushHasBeenSet; }
    inline void SetScanOnPush(bool value) { m_scanOnPushHasBeenSet = true; m_scanOnPush = value; }
    inline RepositoryScanningConfiguration& WithScanOnPush(bool value) { SetScanOnPush(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan frequency for the repository.</p>
     */
    inline const ScanFrequency& GetScanFrequency() const{ return m_scanFrequency; }
    inline bool ScanFrequencyHasBeenSet() const { return m_scanFrequencyHasBeenSet; }
    inline void SetScanFrequency(const ScanFrequency& value) { m_scanFrequencyHasBeenSet = true; m_scanFrequency = value; }
    inline void SetScanFrequency(ScanFrequency&& value) { m_scanFrequencyHasBeenSet = true; m_scanFrequency = std::move(value); }
    inline RepositoryScanningConfiguration& WithScanFrequency(const ScanFrequency& value) { SetScanFrequency(value); return *this;}
    inline RepositoryScanningConfiguration& WithScanFrequency(ScanFrequency&& value) { SetScanFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan filters applied to the repository.</p>
     */
    inline const Aws::Vector<ScanningRepositoryFilter>& GetAppliedScanFilters() const{ return m_appliedScanFilters; }
    inline bool AppliedScanFiltersHasBeenSet() const { return m_appliedScanFiltersHasBeenSet; }
    inline void SetAppliedScanFilters(const Aws::Vector<ScanningRepositoryFilter>& value) { m_appliedScanFiltersHasBeenSet = true; m_appliedScanFilters = value; }
    inline void SetAppliedScanFilters(Aws::Vector<ScanningRepositoryFilter>&& value) { m_appliedScanFiltersHasBeenSet = true; m_appliedScanFilters = std::move(value); }
    inline RepositoryScanningConfiguration& WithAppliedScanFilters(const Aws::Vector<ScanningRepositoryFilter>& value) { SetAppliedScanFilters(value); return *this;}
    inline RepositoryScanningConfiguration& WithAppliedScanFilters(Aws::Vector<ScanningRepositoryFilter>&& value) { SetAppliedScanFilters(std::move(value)); return *this;}
    inline RepositoryScanningConfiguration& AddAppliedScanFilters(const ScanningRepositoryFilter& value) { m_appliedScanFiltersHasBeenSet = true; m_appliedScanFilters.push_back(value); return *this; }
    inline RepositoryScanningConfiguration& AddAppliedScanFilters(ScanningRepositoryFilter&& value) { m_appliedScanFiltersHasBeenSet = true; m_appliedScanFilters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_repositoryArn;
    bool m_repositoryArnHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    bool m_scanOnPush;
    bool m_scanOnPushHasBeenSet = false;

    ScanFrequency m_scanFrequency;
    bool m_scanFrequencyHasBeenSet = false;

    Aws::Vector<ScanningRepositoryFilter> m_appliedScanFilters;
    bool m_appliedScanFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
