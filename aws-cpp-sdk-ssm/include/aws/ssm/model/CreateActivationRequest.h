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
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API CreateActivationRequest : public SSMRequest
  {
  public:
    CreateActivationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A user-defined description of the resource that you want to register with
     * Amazon EC2. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A user-defined description of the resource that you want to register with
     * Amazon EC2. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-defined description of the resource that you want to register with
     * Amazon EC2. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-defined description of the resource that you want to register with
     * Amazon EC2. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A user-defined description of the resource that you want to register with
     * Amazon EC2. </p>
     */
    inline CreateActivationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-defined description of the resource that you want to register with
     * Amazon EC2. </p>
     */
    inline CreateActivationRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-defined description of the resource that you want to register with
     * Amazon EC2. </p>
     */
    inline CreateActivationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The name of the registered, managed instance as it will appear in the Amazon
     * EC2 console or when you use the AWS command line tools to list EC2
     * resources.</p>
     */
    inline const Aws::String& GetDefaultInstanceName() const{ return m_defaultInstanceName; }

    /**
     * <p>The name of the registered, managed instance as it will appear in the Amazon
     * EC2 console or when you use the AWS command line tools to list EC2
     * resources.</p>
     */
    inline void SetDefaultInstanceName(const Aws::String& value) { m_defaultInstanceNameHasBeenSet = true; m_defaultInstanceName = value; }

    /**
     * <p>The name of the registered, managed instance as it will appear in the Amazon
     * EC2 console or when you use the AWS command line tools to list EC2
     * resources.</p>
     */
    inline void SetDefaultInstanceName(Aws::String&& value) { m_defaultInstanceNameHasBeenSet = true; m_defaultInstanceName = value; }

    /**
     * <p>The name of the registered, managed instance as it will appear in the Amazon
     * EC2 console or when you use the AWS command line tools to list EC2
     * resources.</p>
     */
    inline void SetDefaultInstanceName(const char* value) { m_defaultInstanceNameHasBeenSet = true; m_defaultInstanceName.assign(value); }

    /**
     * <p>The name of the registered, managed instance as it will appear in the Amazon
     * EC2 console or when you use the AWS command line tools to list EC2
     * resources.</p>
     */
    inline CreateActivationRequest& WithDefaultInstanceName(const Aws::String& value) { SetDefaultInstanceName(value); return *this;}

    /**
     * <p>The name of the registered, managed instance as it will appear in the Amazon
     * EC2 console or when you use the AWS command line tools to list EC2
     * resources.</p>
     */
    inline CreateActivationRequest& WithDefaultInstanceName(Aws::String&& value) { SetDefaultInstanceName(value); return *this;}

    /**
     * <p>The name of the registered, managed instance as it will appear in the Amazon
     * EC2 console or when you use the AWS command line tools to list EC2
     * resources.</p>
     */
    inline CreateActivationRequest& WithDefaultInstanceName(const char* value) { SetDefaultInstanceName(value); return *this;}

    /**
     * <p>The Amazon Identity and Access Management (IAM) role that you want to assign
     * to the managed instance. </p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The Amazon Identity and Access Management (IAM) role that you want to assign
     * to the managed instance. </p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The Amazon Identity and Access Management (IAM) role that you want to assign
     * to the managed instance. </p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The Amazon Identity and Access Management (IAM) role that you want to assign
     * to the managed instance. </p>
     */
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }

    /**
     * <p>The Amazon Identity and Access Management (IAM) role that you want to assign
     * to the managed instance. </p>
     */
    inline CreateActivationRequest& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The Amazon Identity and Access Management (IAM) role that you want to assign
     * to the managed instance. </p>
     */
    inline CreateActivationRequest& WithIamRole(Aws::String&& value) { SetIamRole(value); return *this;}

    /**
     * <p>The Amazon Identity and Access Management (IAM) role that you want to assign
     * to the managed instance. </p>
     */
    inline CreateActivationRequest& WithIamRole(const char* value) { SetIamRole(value); return *this;}

    /**
     * <p>Specify the maximum number of managed instances you want to register. The
     * default value is 1 instance.</p>
     */
    inline int GetRegistrationLimit() const{ return m_registrationLimit; }

    /**
     * <p>Specify the maximum number of managed instances you want to register. The
     * default value is 1 instance.</p>
     */
    inline void SetRegistrationLimit(int value) { m_registrationLimitHasBeenSet = true; m_registrationLimit = value; }

    /**
     * <p>Specify the maximum number of managed instances you want to register. The
     * default value is 1 instance.</p>
     */
    inline CreateActivationRequest& WithRegistrationLimit(int value) { SetRegistrationLimit(value); return *this;}

    /**
     * <p>The date by which this activation request should expire. The default value is
     * 24 hours.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The date by which this activation request should expire. The default value is
     * 24 hours.</p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    /**
     * <p>The date by which this activation request should expire. The default value is
     * 24 hours.</p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    /**
     * <p>The date by which this activation request should expire. The default value is
     * 24 hours.</p>
     */
    inline CreateActivationRequest& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The date by which this activation request should expire. The default value is
     * 24 hours.</p>
     */
    inline CreateActivationRequest& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(value); return *this;}

  private:
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_defaultInstanceName;
    bool m_defaultInstanceNameHasBeenSet;
    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet;
    int m_registrationLimit;
    bool m_registrationLimitHasBeenSet;
    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
