/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class GetTransformerJobRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API GetTransformerJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTransformerJob"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the unique, system-generated identifier for a transformer run.</p>
     */
    inline const Aws::String& GetTransformerJobId() const{ return m_transformerJobId; }
    inline bool TransformerJobIdHasBeenSet() const { return m_transformerJobIdHasBeenSet; }
    inline void SetTransformerJobId(const Aws::String& value) { m_transformerJobIdHasBeenSet = true; m_transformerJobId = value; }
    inline void SetTransformerJobId(Aws::String&& value) { m_transformerJobIdHasBeenSet = true; m_transformerJobId = std::move(value); }
    inline void SetTransformerJobId(const char* value) { m_transformerJobIdHasBeenSet = true; m_transformerJobId.assign(value); }
    inline GetTransformerJobRequest& WithTransformerJobId(const Aws::String& value) { SetTransformerJobId(value); return *this;}
    inline GetTransformerJobRequest& WithTransformerJobId(Aws::String&& value) { SetTransformerJobId(std::move(value)); return *this;}
    inline GetTransformerJobRequest& WithTransformerJobId(const char* value) { SetTransformerJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const{ return m_transformerId; }
    inline bool TransformerIdHasBeenSet() const { return m_transformerIdHasBeenSet; }
    inline void SetTransformerId(const Aws::String& value) { m_transformerIdHasBeenSet = true; m_transformerId = value; }
    inline void SetTransformerId(Aws::String&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::move(value); }
    inline void SetTransformerId(const char* value) { m_transformerIdHasBeenSet = true; m_transformerId.assign(value); }
    inline GetTransformerJobRequest& WithTransformerId(const Aws::String& value) { SetTransformerId(value); return *this;}
    inline GetTransformerJobRequest& WithTransformerId(Aws::String&& value) { SetTransformerId(std::move(value)); return *this;}
    inline GetTransformerJobRequest& WithTransformerId(const char* value) { SetTransformerId(value); return *this;}
    ///@}
  private:

    Aws::String m_transformerJobId;
    bool m_transformerJobIdHasBeenSet = false;

    Aws::String m_transformerId;
    bool m_transformerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
