/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetOperationRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetOperationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOperation"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline GetOperationRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline GetOperationRequest& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline GetOperationRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
