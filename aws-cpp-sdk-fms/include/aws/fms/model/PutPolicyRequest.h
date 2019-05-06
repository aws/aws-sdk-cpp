/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/fms/model/Policy.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class AWS_FMS_API PutPolicyRequest : public FMSRequest
  {
  public:
    PutPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The details of the AWS Firewall Manager policy to be created.</p>
     */
    inline const Policy& GetPolicy() const{ return m_policy; }

    /**
     * <p>The details of the AWS Firewall Manager policy to be created.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The details of the AWS Firewall Manager policy to be created.</p>
     */
    inline void SetPolicy(const Policy& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The details of the AWS Firewall Manager policy to be created.</p>
     */
    inline void SetPolicy(Policy&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The details of the AWS Firewall Manager policy to be created.</p>
     */
    inline PutPolicyRequest& WithPolicy(const Policy& value) { SetPolicy(value); return *this;}

    /**
     * <p>The details of the AWS Firewall Manager policy to be created.</p>
     */
    inline PutPolicyRequest& WithPolicy(Policy&& value) { SetPolicy(std::move(value)); return *this;}

  private:

    Policy m_policy;
    bool m_policyHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
