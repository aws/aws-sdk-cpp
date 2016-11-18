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
   * <p>Contains the inputs for the <a>CreateHapgRequest</a> action.</p>
   */
  class AWS_CLOUDHSM_API CreateHapgRequest : public CloudHSMRequest
  {
  public:
    CreateHapgRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The label of the new high-availability partition group.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The label of the new high-availability partition group.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The label of the new high-availability partition group.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The label of the new high-availability partition group.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The label of the new high-availability partition group.</p>
     */
    inline CreateHapgRequest& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The label of the new high-availability partition group.</p>
     */
    inline CreateHapgRequest& WithLabel(Aws::String&& value) { SetLabel(value); return *this;}

    /**
     * <p>The label of the new high-availability partition group.</p>
     */
    inline CreateHapgRequest& WithLabel(const char* value) { SetLabel(value); return *this;}

  private:
    Aws::String m_label;
    bool m_labelHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
