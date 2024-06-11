﻿/**
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
   * <p>A list of Amazon DocumentDB elastic clusters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/ClusterInList">AWS
   * API Reference</a></p>
   */
  class ClusterInList
  {
  public:
    AWS_DOCDBELASTIC_API ClusterInList();
    AWS_DOCDBELASTIC_API ClusterInList(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API ClusterInList& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ClusterInList& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ClusterInList& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ClusterInList& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the elastic cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline ClusterInList& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline ClusterInList& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline ClusterInList& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the elastic cluster.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClusterInList& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline ClusterInList& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
