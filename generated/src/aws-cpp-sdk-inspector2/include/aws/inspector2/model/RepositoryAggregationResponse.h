/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/SeverityCounts.h>
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
   * <p>A response that contains details on the results of a finding aggregation by
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/RepositoryAggregationResponse">AWS
   * API Reference</a></p>
   */
  class RepositoryAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API RepositoryAggregationResponse();
    AWS_INSPECTOR2_API RepositoryAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API RepositoryAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon Web Services account associated with the findings.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account associated with the findings.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account associated with the findings.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account associated with the findings.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account associated with the findings.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account associated with the findings.</p>
     */
    inline RepositoryAggregationResponse& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account associated with the findings.</p>
     */
    inline RepositoryAggregationResponse& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account associated with the findings.</p>
     */
    inline RepositoryAggregationResponse& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The number of container images impacted by the findings.</p>
     */
    inline long long GetAffectedImages() const{ return m_affectedImages; }

    /**
     * <p>The number of container images impacted by the findings.</p>
     */
    inline bool AffectedImagesHasBeenSet() const { return m_affectedImagesHasBeenSet; }

    /**
     * <p>The number of container images impacted by the findings.</p>
     */
    inline void SetAffectedImages(long long value) { m_affectedImagesHasBeenSet = true; m_affectedImages = value; }

    /**
     * <p>The number of container images impacted by the findings.</p>
     */
    inline RepositoryAggregationResponse& WithAffectedImages(long long value) { SetAffectedImages(value); return *this;}


    /**
     * <p>The name of the repository associated with the findings.</p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p>The name of the repository associated with the findings.</p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p>The name of the repository associated with the findings.</p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p>The name of the repository associated with the findings.</p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p>The name of the repository associated with the findings.</p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p>The name of the repository associated with the findings.</p>
     */
    inline RepositoryAggregationResponse& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p>The name of the repository associated with the findings.</p>
     */
    inline RepositoryAggregationResponse& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p>The name of the repository associated with the findings.</p>
     */
    inline RepositoryAggregationResponse& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p>An object that represent the count of matched findings per severity.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const{ return m_severityCounts; }

    /**
     * <p>An object that represent the count of matched findings per severity.</p>
     */
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }

    /**
     * <p>An object that represent the count of matched findings per severity.</p>
     */
    inline void SetSeverityCounts(const SeverityCounts& value) { m_severityCountsHasBeenSet = true; m_severityCounts = value; }

    /**
     * <p>An object that represent the count of matched findings per severity.</p>
     */
    inline void SetSeverityCounts(SeverityCounts&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::move(value); }

    /**
     * <p>An object that represent the count of matched findings per severity.</p>
     */
    inline RepositoryAggregationResponse& WithSeverityCounts(const SeverityCounts& value) { SetSeverityCounts(value); return *this;}

    /**
     * <p>An object that represent the count of matched findings per severity.</p>
     */
    inline RepositoryAggregationResponse& WithSeverityCounts(SeverityCounts&& value) { SetSeverityCounts(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    long long m_affectedImages;
    bool m_affectedImagesHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
