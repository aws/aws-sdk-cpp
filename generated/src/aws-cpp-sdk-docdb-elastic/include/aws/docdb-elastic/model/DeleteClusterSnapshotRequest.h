﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/DocDBElasticRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{

  /**
   */
  class DeleteClusterSnapshotRequest : public DocDBElasticRequest
  {
  public:
    AWS_DOCDBELASTIC_API DeleteClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteClusterSnapshot"; }

    AWS_DOCDBELASTIC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN identifier of the elastic cluster snapshot that is to be deleted.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }
    inline DeleteClusterSnapshotRequest& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}
    inline DeleteClusterSnapshotRequest& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}
    inline DeleteClusterSnapshotRequest& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
