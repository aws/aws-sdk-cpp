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
   * <p>A response that contains the results of a finding aggregation by image
   * layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ImageLayerAggregationResponse">AWS
   * API Reference</a></p>
   */
  class ImageLayerAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API ImageLayerAggregationResponse();
    AWS_INSPECTOR2_API ImageLayerAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ImageLayerAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon Web Services account that owns the container image
     * hosting the layer image.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the container image
     * hosting the layer image.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the container image
     * hosting the layer image.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the container image
     * hosting the layer image.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the container image
     * hosting the layer image.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the container image
     * hosting the layer image.</p>
     */
    inline ImageLayerAggregationResponse& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the container image
     * hosting the layer image.</p>
     */
    inline ImageLayerAggregationResponse& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the container image
     * hosting the layer image.</p>
     */
    inline ImageLayerAggregationResponse& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The layer hash.</p>
     */
    inline const Aws::String& GetLayerHash() const{ return m_layerHash; }

    /**
     * <p>The layer hash.</p>
     */
    inline bool LayerHashHasBeenSet() const { return m_layerHashHasBeenSet; }

    /**
     * <p>The layer hash.</p>
     */
    inline void SetLayerHash(const Aws::String& value) { m_layerHashHasBeenSet = true; m_layerHash = value; }

    /**
     * <p>The layer hash.</p>
     */
    inline void SetLayerHash(Aws::String&& value) { m_layerHashHasBeenSet = true; m_layerHash = std::move(value); }

    /**
     * <p>The layer hash.</p>
     */
    inline void SetLayerHash(const char* value) { m_layerHashHasBeenSet = true; m_layerHash.assign(value); }

    /**
     * <p>The layer hash.</p>
     */
    inline ImageLayerAggregationResponse& WithLayerHash(const Aws::String& value) { SetLayerHash(value); return *this;}

    /**
     * <p>The layer hash.</p>
     */
    inline ImageLayerAggregationResponse& WithLayerHash(Aws::String&& value) { SetLayerHash(std::move(value)); return *this;}

    /**
     * <p>The layer hash.</p>
     */
    inline ImageLayerAggregationResponse& WithLayerHash(const char* value) { SetLayerHash(value); return *this;}


    /**
     * <p>The repository the layer resides in.</p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p>The repository the layer resides in.</p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p>The repository the layer resides in.</p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p>The repository the layer resides in.</p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p>The repository the layer resides in.</p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p>The repository the layer resides in.</p>
     */
    inline ImageLayerAggregationResponse& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p>The repository the layer resides in.</p>
     */
    inline ImageLayerAggregationResponse& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p>The repository the layer resides in.</p>
     */
    inline ImageLayerAggregationResponse& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p>The resource ID of the container image layer.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource ID of the container image layer.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource ID of the container image layer.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource ID of the container image layer.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource ID of the container image layer.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource ID of the container image layer.</p>
     */
    inline ImageLayerAggregationResponse& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource ID of the container image layer.</p>
     */
    inline ImageLayerAggregationResponse& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the container image layer.</p>
     */
    inline ImageLayerAggregationResponse& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>An object that represents the count of matched findings per severity.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const{ return m_severityCounts; }

    /**
     * <p>An object that represents the count of matched findings per severity.</p>
     */
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }

    /**
     * <p>An object that represents the count of matched findings per severity.</p>
     */
    inline void SetSeverityCounts(const SeverityCounts& value) { m_severityCountsHasBeenSet = true; m_severityCounts = value; }

    /**
     * <p>An object that represents the count of matched findings per severity.</p>
     */
    inline void SetSeverityCounts(SeverityCounts&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::move(value); }

    /**
     * <p>An object that represents the count of matched findings per severity.</p>
     */
    inline ImageLayerAggregationResponse& WithSeverityCounts(const SeverityCounts& value) { SetSeverityCounts(value); return *this;}

    /**
     * <p>An object that represents the count of matched findings per severity.</p>
     */
    inline ImageLayerAggregationResponse& WithSeverityCounts(SeverityCounts&& value) { SetSeverityCounts(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_layerHash;
    bool m_layerHashHasBeenSet = false;

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
