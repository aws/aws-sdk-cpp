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
   * <p>A list of elastic cluster snapshots.</p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>The ARN identifier of the elastic cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline ClusterSnapshotInList& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ClusterSnapshotInList& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ClusterSnapshotInList& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN identifier of the elastic cluster snapshot.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }
    inline ClusterSnapshotInList& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}
    inline ClusterSnapshotInList& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}
    inline ClusterSnapshotInList& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the elastic cluster snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetSnapshotCreationTime() const{ return m_snapshotCreationTime; }
    inline bool SnapshotCreationTimeHasBeenSet() const { return m_snapshotCreationTimeHasBeenSet; }
    inline void SetSnapshotCreationTime(const Aws::String& value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime = value; }
    inline void SetSnapshotCreationTime(Aws::String&& value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime = std::move(value); }
    inline void SetSnapshotCreationTime(const char* value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime.assign(value); }
    inline ClusterSnapshotInList& WithSnapshotCreationTime(const Aws::String& value) { SetSnapshotCreationTime(value); return *this;}
    inline ClusterSnapshotInList& WithSnapshotCreationTime(Aws::String&& value) { SetSnapshotCreationTime(std::move(value)); return *this;}
    inline ClusterSnapshotInList& WithSnapshotCreationTime(const char* value) { SetSnapshotCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the elastic cluster snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }
    inline ClusterSnapshotInList& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}
    inline ClusterSnapshotInList& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}
    inline ClusterSnapshotInList& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the elastic cluster snapshot.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClusterSnapshotInList& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline ClusterSnapshotInList& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
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
