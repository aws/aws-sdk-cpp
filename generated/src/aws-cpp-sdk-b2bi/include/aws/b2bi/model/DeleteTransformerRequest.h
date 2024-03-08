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
  class DeleteTransformerRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API DeleteTransformerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTransformer"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const{ return m_transformerId; }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline bool TransformerIdHasBeenSet() const { return m_transformerIdHasBeenSet; }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(const Aws::String& value) { m_transformerIdHasBeenSet = true; m_transformerId = value; }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(Aws::String&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::move(value); }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(const char* value) { m_transformerIdHasBeenSet = true; m_transformerId.assign(value); }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline DeleteTransformerRequest& WithTransformerId(const Aws::String& value) { SetTransformerId(value); return *this;}

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline DeleteTransformerRequest& WithTransformerId(Aws::String&& value) { SetTransformerId(std::move(value)); return *this;}

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline DeleteTransformerRequest& WithTransformerId(const char* value) { SetTransformerId(value); return *this;}

  private:

    Aws::String m_transformerId;
    bool m_transformerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
