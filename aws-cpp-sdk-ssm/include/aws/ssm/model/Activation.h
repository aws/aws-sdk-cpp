﻿/*
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>An activation registers one or more on-premises servers or virtual machines
   * (VMs) with AWS so that you can configure those servers or VMs using Run Command.
   * A server or VM that has been registered with AWS is called a managed
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Activation">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API Activation
  {
  public:
    Activation();
    Activation(Aws::Utils::Json::JsonView jsonValue);
    Activation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID created by Systems Manager when you submitted the activation.</p>
     */
    inline const Aws::String& GetActivationId() const{ return m_activationId; }

    /**
     * <p>The ID created by Systems Manager when you submitted the activation.</p>
     */
    inline void SetActivationId(const Aws::String& value) { m_activationIdHasBeenSet = true; m_activationId = value; }

    /**
     * <p>The ID created by Systems Manager when you submitted the activation.</p>
     */
    inline void SetActivationId(Aws::String&& value) { m_activationIdHasBeenSet = true; m_activationId = std::move(value); }

    /**
     * <p>The ID created by Systems Manager when you submitted the activation.</p>
     */
    inline void SetActivationId(const char* value) { m_activationIdHasBeenSet = true; m_activationId.assign(value); }

    /**
     * <p>The ID created by Systems Manager when you submitted the activation.</p>
     */
    inline Activation& WithActivationId(const Aws::String& value) { SetActivationId(value); return *this;}

    /**
     * <p>The ID created by Systems Manager when you submitted the activation.</p>
     */
    inline Activation& WithActivationId(Aws::String&& value) { SetActivationId(std::move(value)); return *this;}

    /**
     * <p>The ID created by Systems Manager when you submitted the activation.</p>
     */
    inline Activation& WithActivationId(const char* value) { SetActivationId(value); return *this;}


    /**
     * <p>A user defined description of the activation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A user defined description of the activation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user defined description of the activation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A user defined description of the activation.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A user defined description of the activation.</p>
     */
    inline Activation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A user defined description of the activation.</p>
     */
    inline Activation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A user defined description of the activation.</p>
     */
    inline Activation& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A name for the managed instance when it is created.</p>
     */
    inline const Aws::String& GetDefaultInstanceName() const{ return m_defaultInstanceName; }

    /**
     * <p>A name for the managed instance when it is created.</p>
     */
    inline void SetDefaultInstanceName(const Aws::String& value) { m_defaultInstanceNameHasBeenSet = true; m_defaultInstanceName = value; }

    /**
     * <p>A name for the managed instance when it is created.</p>
     */
    inline void SetDefaultInstanceName(Aws::String&& value) { m_defaultInstanceNameHasBeenSet = true; m_defaultInstanceName = std::move(value); }

    /**
     * <p>A name for the managed instance when it is created.</p>
     */
    inline void SetDefaultInstanceName(const char* value) { m_defaultInstanceNameHasBeenSet = true; m_defaultInstanceName.assign(value); }

    /**
     * <p>A name for the managed instance when it is created.</p>
     */
    inline Activation& WithDefaultInstanceName(const Aws::String& value) { SetDefaultInstanceName(value); return *this;}

    /**
     * <p>A name for the managed instance when it is created.</p>
     */
    inline Activation& WithDefaultInstanceName(Aws::String&& value) { SetDefaultInstanceName(std::move(value)); return *this;}

    /**
     * <p>A name for the managed instance when it is created.</p>
     */
    inline Activation& WithDefaultInstanceName(const char* value) { SetDefaultInstanceName(value); return *this;}


    /**
     * <p>The Amazon Identity and Access Management (IAM) role to assign to the managed
     * instance.</p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The Amazon Identity and Access Management (IAM) role to assign to the managed
     * instance.</p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The Amazon Identity and Access Management (IAM) role to assign to the managed
     * instance.</p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }

    /**
     * <p>The Amazon Identity and Access Management (IAM) role to assign to the managed
     * instance.</p>
     */
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }

    /**
     * <p>The Amazon Identity and Access Management (IAM) role to assign to the managed
     * instance.</p>
     */
    inline Activation& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The Amazon Identity and Access Management (IAM) role to assign to the managed
     * instance.</p>
     */
    inline Activation& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Identity and Access Management (IAM) role to assign to the managed
     * instance.</p>
     */
    inline Activation& WithIamRole(const char* value) { SetIamRole(value); return *this;}


    /**
     * <p>The maximum number of managed instances that can be registered using this
     * activation.</p>
     */
    inline int GetRegistrationLimit() const{ return m_registrationLimit; }

    /**
     * <p>The maximum number of managed instances that can be registered using this
     * activation.</p>
     */
    inline void SetRegistrationLimit(int value) { m_registrationLimitHasBeenSet = true; m_registrationLimit = value; }

    /**
     * <p>The maximum number of managed instances that can be registered using this
     * activation.</p>
     */
    inline Activation& WithRegistrationLimit(int value) { SetRegistrationLimit(value); return *this;}


    /**
     * <p>The number of managed instances already registered with this activation.</p>
     */
    inline int GetRegistrationsCount() const{ return m_registrationsCount; }

    /**
     * <p>The number of managed instances already registered with this activation.</p>
     */
    inline void SetRegistrationsCount(int value) { m_registrationsCountHasBeenSet = true; m_registrationsCount = value; }

    /**
     * <p>The number of managed instances already registered with this activation.</p>
     */
    inline Activation& WithRegistrationsCount(int value) { SetRegistrationsCount(value); return *this;}


    /**
     * <p>The date when this activation can no longer be used to register managed
     * instances.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The date when this activation can no longer be used to register managed
     * instances.</p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    /**
     * <p>The date when this activation can no longer be used to register managed
     * instances.</p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }

    /**
     * <p>The date when this activation can no longer be used to register managed
     * instances.</p>
     */
    inline Activation& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The date when this activation can no longer be used to register managed
     * instances.</p>
     */
    inline Activation& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}


    /**
     * <p>Whether or not the activation is expired.</p>
     */
    inline bool GetExpired() const{ return m_expired; }

    /**
     * <p>Whether or not the activation is expired.</p>
     */
    inline void SetExpired(bool value) { m_expiredHasBeenSet = true; m_expired = value; }

    /**
     * <p>Whether or not the activation is expired.</p>
     */
    inline Activation& WithExpired(bool value) { SetExpired(value); return *this;}


    /**
     * <p>The date the activation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date the activation was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date the activation was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date the activation was created.</p>
     */
    inline Activation& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date the activation was created.</p>
     */
    inline Activation& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_activationId;
    bool m_activationIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_defaultInstanceName;
    bool m_defaultInstanceNameHasBeenSet;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet;

    int m_registrationLimit;
    bool m_registrationLimitHasBeenSet;

    int m_registrationsCount;
    bool m_registrationsCountHasBeenSet;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet;

    bool m_expired;
    bool m_expiredHasBeenSet;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
