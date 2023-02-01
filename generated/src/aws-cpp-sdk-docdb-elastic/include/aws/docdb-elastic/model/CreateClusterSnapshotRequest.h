/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/DocDBElasticRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{

  /**
   */
  class CreateClusterSnapshotRequest : public DocDBElasticRequest
  {
  public:
    AWS_DOCDBELASTIC_API CreateClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClusterSnapshot"; }

    AWS_DOCDBELASTIC_API Aws::String SerializePayload() const override;


    /**
     * <p>The arn of the Elastic DocumentDB cluster that the snapshot will be taken
     * from.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The arn of the Elastic DocumentDB cluster that the snapshot will be taken
     * from.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The arn of the Elastic DocumentDB cluster that the snapshot will be taken
     * from.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The arn of the Elastic DocumentDB cluster that the snapshot will be taken
     * from.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The arn of the Elastic DocumentDB cluster that the snapshot will be taken
     * from.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The arn of the Elastic DocumentDB cluster that the snapshot will be taken
     * from.</p>
     */
    inline CreateClusterSnapshotRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB cluster that the snapshot will be taken
     * from.</p>
     */
    inline CreateClusterSnapshotRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB cluster that the snapshot will be taken
     * from.</p>
     */
    inline CreateClusterSnapshotRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}


    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
