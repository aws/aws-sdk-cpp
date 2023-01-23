/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class BatchGetDataQualityResultRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchGetDataQualityResultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetDataQualityResult"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of unique result IDs for the data quality results.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResultIds() const{ return m_resultIds; }

    /**
     * <p>A list of unique result IDs for the data quality results.</p>
     */
    inline bool ResultIdsHasBeenSet() const { return m_resultIdsHasBeenSet; }

    /**
     * <p>A list of unique result IDs for the data quality results.</p>
     */
    inline void SetResultIds(const Aws::Vector<Aws::String>& value) { m_resultIdsHasBeenSet = true; m_resultIds = value; }

    /**
     * <p>A list of unique result IDs for the data quality results.</p>
     */
    inline void SetResultIds(Aws::Vector<Aws::String>&& value) { m_resultIdsHasBeenSet = true; m_resultIds = std::move(value); }

    /**
     * <p>A list of unique result IDs for the data quality results.</p>
     */
    inline BatchGetDataQualityResultRequest& WithResultIds(const Aws::Vector<Aws::String>& value) { SetResultIds(value); return *this;}

    /**
     * <p>A list of unique result IDs for the data quality results.</p>
     */
    inline BatchGetDataQualityResultRequest& WithResultIds(Aws::Vector<Aws::String>&& value) { SetResultIds(std::move(value)); return *this;}

    /**
     * <p>A list of unique result IDs for the data quality results.</p>
     */
    inline BatchGetDataQualityResultRequest& AddResultIds(const Aws::String& value) { m_resultIdsHasBeenSet = true; m_resultIds.push_back(value); return *this; }

    /**
     * <p>A list of unique result IDs for the data quality results.</p>
     */
    inline BatchGetDataQualityResultRequest& AddResultIds(Aws::String&& value) { m_resultIdsHasBeenSet = true; m_resultIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of unique result IDs for the data quality results.</p>
     */
    inline BatchGetDataQualityResultRequest& AddResultIds(const char* value) { m_resultIdsHasBeenSet = true; m_resultIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resultIds;
    bool m_resultIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
