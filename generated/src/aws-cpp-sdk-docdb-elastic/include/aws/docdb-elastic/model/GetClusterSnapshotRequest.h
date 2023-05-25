/**
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
  class GetClusterSnapshotRequest : public DocDBElasticRequest
  {
  public:
    AWS_DOCDBELASTIC_API GetClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetClusterSnapshot"; }

    AWS_DOCDBELASTIC_API Aws::String SerializePayload() const override;


    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline GetClusterSnapshotRequest& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline GetClusterSnapshotRequest& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline GetClusterSnapshotRequest& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}

  private:

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
