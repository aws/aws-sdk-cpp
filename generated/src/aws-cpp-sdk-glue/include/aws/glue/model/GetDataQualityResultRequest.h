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
    AWS_GLUE_API GetDataQualityResultRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataQualityResult"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline const Aws::String& GetResultId() const { return m_resultId; }
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
    template<typename ResultIdT = Aws::String>
    void SetResultId(ResultIdT&& value) { m_resultIdHasBeenSet = true; m_resultId = std::forward<ResultIdT>(value); }
    template<typename ResultIdT = Aws::String>
    GetDataQualityResultRequest& WithResultId(ResultIdT&& value) { SetResultId(std::forward<ResultIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
