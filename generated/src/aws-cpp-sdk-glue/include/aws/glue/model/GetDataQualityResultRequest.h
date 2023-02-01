/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
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
  class GetDataQualityResultRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetDataQualityResultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataQualityResult"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline GetDataQualityResultRequest& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline GetDataQualityResultRequest& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline GetDataQualityResultRequest& WithResultId(const char* value) { SetResultId(value); return *this;}

  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
