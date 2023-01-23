/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class BatchGetBuildBatchesRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API BatchGetBuildBatchesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetBuildBatches"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array that contains the batch build identifiers to retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>An array that contains the batch build identifiers to retrieve.</p>
     */
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }

    /**
     * <p>An array that contains the batch build identifiers to retrieve.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }

    /**
     * <p>An array that contains the batch build identifiers to retrieve.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = std::move(value); }

    /**
     * <p>An array that contains the batch build identifiers to retrieve.</p>
     */
    inline BatchGetBuildBatchesRequest& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>An array that contains the batch build identifiers to retrieve.</p>
     */
    inline BatchGetBuildBatchesRequest& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>An array that contains the batch build identifiers to retrieve.</p>
     */
    inline BatchGetBuildBatchesRequest& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

    /**
     * <p>An array that contains the batch build identifiers to retrieve.</p>
     */
    inline BatchGetBuildBatchesRequest& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that contains the batch build identifiers to retrieve.</p>
     */
    inline BatchGetBuildBatchesRequest& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
