/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb-elastic/model/Status.h>
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
namespace DocDBElastic
{
namespace Model
{

  /**
   * <p>A list of Elastic DocumentDB snapshots.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/ClusterSnapshotInList">AWS
   * API Reference</a></p>
   */
  class ClusterSnapshotInList
  {
  public:
    AWS_DOCDBELASTIC_API ClusterSnapshotInList();
    AWS_DOCDBELASTIC_API ClusterSnapshotInList(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API ClusterSnapshotInList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline ClusterSnapshotInList& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline ClusterSnapshotInList& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline ClusterSnapshotInList& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline ClusterSnapshotInList& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline ClusterSnapshotInList& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline ClusterSnapshotInList& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}


    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetSnapshotCreationTime() const{ return m_snapshotCreationTime; }

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline bool SnapshotCreationTimeHasBeenSet() const { return m_snapshotCreationTimeHasBeenSet; }

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetSnapshotCreationTime(const Aws::String& value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime = value; }

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetSnapshotCreationTime(Aws::String&& value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime = std::move(value); }

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetSnapshotCreationTime(const char* value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime.assign(value); }

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ClusterSnapshotInList& WithSnapshotCreationTime(const Aws::String& value) { SetSnapshotCreationTime(value); return *this;}

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ClusterSnapshotInList& WithSnapshotCreationTime(Aws::String&& value) { SetSnapshotCreationTime(std::move(value)); return *this;}

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ClusterSnapshotInList& WithSnapshotCreationTime(const char* value) { SetSnapshotCreationTime(value); return *this;}


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
    inline ClusterSnapshotInList& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline ClusterSnapshotInList& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline ClusterSnapshotInList& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}


    /**
     * <p>The status of the Elastic DocumentDB snapshot.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Elastic DocumentDB snapshot.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Elastic DocumentDB snapshot.</p>
     */
    inline ClusterSnapshotInList& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Elastic DocumentDB snapshot.</p>
     */
    inline ClusterSnapshotInList& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::String m_snapshotCreationTime;
    bool m_snapshotCreationTimeHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
