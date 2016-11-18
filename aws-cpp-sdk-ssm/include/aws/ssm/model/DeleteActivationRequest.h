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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DeleteActivationRequest : public SSMRequest
  {
  public:
    DeleteActivationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline const Aws::String& GetActivationId() const{ return m_activationId; }

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline void SetActivationId(const Aws::String& value) { m_activationIdHasBeenSet = true; m_activationId = value; }

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline void SetActivationId(Aws::String&& value) { m_activationIdHasBeenSet = true; m_activationId = value; }

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline void SetActivationId(const char* value) { m_activationIdHasBeenSet = true; m_activationId.assign(value); }

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline DeleteActivationRequest& WithActivationId(const Aws::String& value) { SetActivationId(value); return *this;}

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline DeleteActivationRequest& WithActivationId(Aws::String&& value) { SetActivationId(value); return *this;}

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline DeleteActivationRequest& WithActivationId(const char* value) { SetActivationId(value); return *this;}

  private:
    Aws::String m_activationId;
    bool m_activationIdHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
