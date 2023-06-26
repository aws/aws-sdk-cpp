/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An aggregation of information about Amazon ECR containers.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AwsEcrContainerAggregationResponse">AWS
   * API Reference</a></p>
   */
  class AwsEcrContainerAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API AwsEcrContainerAggregationResponse();
    AWS_INSPECTOR2_API AwsEcrContainerAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AwsEcrContainerAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID of the account that owns the
     * container.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the account that owns the
     * container.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the account that owns the
     * container.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the account that owns the
     * container.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the account that owns the
     * container.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the account that owns the
     * container.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account that owns the
     * container.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account that owns the
     * container.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The architecture of the container.</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architecture of the container.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The architecture of the container.</p>
     */
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architecture of the container.</p>
     */
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The architecture of the container.</p>
     */
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }

    /**
     * <p>The architecture of the container.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architecture of the container.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}

    /**
     * <p>The architecture of the container.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}


    /**
     * <p>The SHA value of the container image.</p>
     */
    inline const Aws::String& GetImageSha() const{ return m_imageSha; }

    /**
     * <p>The SHA value of the container image.</p>
     */
    inline bool ImageShaHasBeenSet() const { return m_imageShaHasBeenSet; }

    /**
     * <p>The SHA value of the container image.</p>
     */
    inline void SetImageSha(const Aws::String& value) { m_imageShaHasBeenSet = true; m_imageSha = value; }

    /**
     * <p>The SHA value of the container image.</p>
     */
    inline void SetImageSha(Aws::String&& value) { m_imageShaHasBeenSet = true; m_imageSha = std::move(value); }

    /**
     * <p>The SHA value of the container image.</p>
     */
    inline void SetImageSha(const char* value) { m_imageShaHasBeenSet = true; m_imageSha.assign(value); }

    /**
     * <p>The SHA value of the container image.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithImageSha(const Aws::String& value) { SetImageSha(value); return *this;}

    /**
     * <p>The SHA value of the container image.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithImageSha(Aws::String&& value) { SetImageSha(std::move(value)); return *this;}

    /**
     * <p>The SHA value of the container image.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithImageSha(const char* value) { SetImageSha(value); return *this;}


    /**
     * <p>The container image stags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageTags() const{ return m_imageTags; }

    /**
     * <p>The container image stags.</p>
     */
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }

    /**
     * <p>The container image stags.</p>
     */
    inline void SetImageTags(const Aws::Vector<Aws::String>& value) { m_imageTagsHasBeenSet = true; m_imageTags = value; }

    /**
     * <p>The container image stags.</p>
     */
    inline void SetImageTags(Aws::Vector<Aws::String>&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::move(value); }

    /**
     * <p>The container image stags.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithImageTags(const Aws::Vector<Aws::String>& value) { SetImageTags(value); return *this;}

    /**
     * <p>The container image stags.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithImageTags(Aws::Vector<Aws::String>&& value) { SetImageTags(std::move(value)); return *this;}

    /**
     * <p>The container image stags.</p>
     */
    inline AwsEcrContainerAggregationResponse& AddImageTags(const Aws::String& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }

    /**
     * <p>The container image stags.</p>
     */
    inline AwsEcrContainerAggregationResponse& AddImageTags(Aws::String&& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(std::move(value)); return *this; }

    /**
     * <p>The container image stags.</p>
     */
    inline AwsEcrContainerAggregationResponse& AddImageTags(const char* value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }


    /**
     * <p>The container repository.</p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p>The container repository.</p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p>The container repository.</p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p>The container repository.</p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p>The container repository.</p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p>The container repository.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p>The container repository.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p>The container repository.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p>The resource ID of the container.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource ID of the container.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource ID of the container.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource ID of the container.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource ID of the container.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource ID of the container.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource ID of the container.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the container.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The number of finding by severity.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const{ return m_severityCounts; }

    /**
     * <p>The number of finding by severity.</p>
     */
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }

    /**
     * <p>The number of finding by severity.</p>
     */
    inline void SetSeverityCounts(const SeverityCounts& value) { m_severityCountsHasBeenSet = true; m_severityCounts = value; }

    /**
     * <p>The number of finding by severity.</p>
     */
    inline void SetSeverityCounts(SeverityCounts&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::move(value); }

    /**
     * <p>The number of finding by severity.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithSeverityCounts(const SeverityCounts& value) { SetSeverityCounts(value); return *this;}

    /**
     * <p>The number of finding by severity.</p>
     */
    inline AwsEcrContainerAggregationResponse& WithSeverityCounts(SeverityCounts&& value) { SetSeverityCounts(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_imageSha;
    bool m_imageShaHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageTags;
    bool m_imageTagsHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
