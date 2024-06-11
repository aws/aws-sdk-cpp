/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
   * <p>The details of a scanning rule for a private registry.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/RegistryScanningRule">AWS
   * API Reference</a></p>
   */
  class RegistryScanningRule
  {
  public:
    AWS_ECR_API RegistryScanningRule();
    AWS_ECR_API RegistryScanningRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API RegistryScanningRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The frequency that scans are performed at for a private registry. When the
     * <code>ENHANCED</code> scan type is specified, the supported scan frequencies are
     * <code>CONTINUOUS_SCAN</code> and <code>SCAN_ON_PUSH</code>. When the
     * <code>BASIC</code> scan type is specified, the <code>SCAN_ON_PUSH</code> scan
     * frequency is supported. If scan on push is not specified, then the
     * <code>MANUAL</code> scan frequency is set by default.</p>
     */
    inline const ScanFrequency& GetScanFrequency() const{ return m_scanFrequency; }
    inline bool ScanFrequencyHasBeenSet() const { return m_scanFrequencyHasBeenSet; }
    inline void SetScanFrequency(const ScanFrequency& value) { m_scanFrequencyHasBeenSet = true; m_scanFrequency = value; }
    inline void SetScanFrequency(ScanFrequency&& value) { m_scanFrequencyHasBeenSet = true; m_scanFrequency = std::move(value); }
    inline RegistryScanningRule& WithScanFrequency(const ScanFrequency& value) { SetScanFrequency(value); return *this;}
    inline RegistryScanningRule& WithScanFrequency(ScanFrequency&& value) { SetScanFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository filters associated with the scanning configuration for a
     * private registry.</p>
     */
    inline const Aws::Vector<ScanningRepositoryFilter>& GetRepositoryFilters() const{ return m_repositoryFilters; }
    inline bool RepositoryFiltersHasBeenSet() const { return m_repositoryFiltersHasBeenSet; }
    inline void SetRepositoryFilters(const Aws::Vector<ScanningRepositoryFilter>& value) { m_repositoryFiltersHasBeenSet = true; m_repositoryFilters = value; }
    inline void SetRepositoryFilters(Aws::Vector<ScanningRepositoryFilter>&& value) { m_repositoryFiltersHasBeenSet = true; m_repositoryFilters = std::move(value); }
    inline RegistryScanningRule& WithRepositoryFilters(const Aws::Vector<ScanningRepositoryFilter>& value) { SetRepositoryFilters(value); return *this;}
    inline RegistryScanningRule& WithRepositoryFilters(Aws::Vector<ScanningRepositoryFilter>&& value) { SetRepositoryFilters(std::move(value)); return *this;}
    inline RegistryScanningRule& AddRepositoryFilters(const ScanningRepositoryFilter& value) { m_repositoryFiltersHasBeenSet = true; m_repositoryFilters.push_back(value); return *this; }
    inline RegistryScanningRule& AddRepositoryFilters(ScanningRepositoryFilter&& value) { m_repositoryFiltersHasBeenSet = true; m_repositoryFilters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ScanFrequency m_scanFrequency;
    bool m_scanFrequencyHasBeenSet = false;

    Aws::Vector<ScanningRepositoryFilter> m_repositoryFilters;
    bool m_repositoryFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
