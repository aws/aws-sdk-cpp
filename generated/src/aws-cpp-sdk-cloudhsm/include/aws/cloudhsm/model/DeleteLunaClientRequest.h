/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   */
  class DeleteLunaClientRequest : public CloudHSMRequest
  {
  public:
    AWS_CLOUDHSM_API DeleteLunaClientRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLunaClient"; }

    AWS_CLOUDHSM_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the client to delete.</p>
     */
    inline const Aws::String& GetClientArn() const{ return m_clientArn; }

    /**
     * <p>The ARN of the client to delete.</p>
     */
    inline bool ClientArnHasBeenSet() const { return m_clientArnHasBeenSet; }

    /**
     * <p>The ARN of the client to delete.</p>
     */
    inline void SetClientArn(const Aws::String& value) { m_clientArnHasBeenSet = true; m_clientArn = value; }

    /**
     * <p>The ARN of the client to delete.</p>
     */
    inline void SetClientArn(Aws::String&& value) { m_clientArnHasBeenSet = true; m_clientArn = std::move(value); }

    /**
     * <p>The ARN of the client to delete.</p>
     */
    inline void SetClientArn(const char* value) { m_clientArnHasBeenSet = true; m_clientArn.assign(value); }

    /**
     * <p>The ARN of the client to delete.</p>
     */
    inline DeleteLunaClientRequest& WithClientArn(const Aws::String& value) { SetClientArn(value); return *this;}

    /**
     * <p>The ARN of the client to delete.</p>
     */
    inline DeleteLunaClientRequest& WithClientArn(Aws::String&& value) { SetClientArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the client to delete.</p>
     */
    inline DeleteLunaClientRequest& WithClientArn(const char* value) { SetClientArn(value); return *this;}

  private:

    Aws::String m_clientArn;
    bool m_clientArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
