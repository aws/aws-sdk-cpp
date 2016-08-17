/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   */
  class AWS_CLOUDHSM_API DeleteLunaClientRequest : public CloudHSMRequest
  {
  public:
    DeleteLunaClientRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN of the client to delete.</p>
     */
    inline const Aws::String& GetClientArn() const{ return m_clientArn; }

    /**
     * <p>The ARN of the client to delete.</p>
     */
    inline void SetClientArn(const Aws::String& value) { m_clientArnHasBeenSet = true; m_clientArn = value; }

    /**
     * <p>The ARN of the client to delete.</p>
     */
    inline void SetClientArn(Aws::String&& value) { m_clientArnHasBeenSet = true; m_clientArn = value; }

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
    inline DeleteLunaClientRequest& WithClientArn(Aws::String&& value) { SetClientArn(value); return *this;}

    /**
     * <p>The ARN of the client to delete.</p>
     */
    inline DeleteLunaClientRequest& WithClientArn(const char* value) { SetClientArn(value); return *this;}

  private:
    Aws::String m_clientArn;
    bool m_clientArnHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
