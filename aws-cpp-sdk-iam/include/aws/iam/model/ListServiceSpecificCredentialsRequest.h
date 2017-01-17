﻿/*
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API ListServiceSpecificCredentialsRequest : public IAMRequest
  {
  public:
    ListServiceSpecificCredentialsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the user whose service-specific credentials you want information
     * about. If this value is not specified then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user whose service-specific credentials you want information
     * about. If this value is not specified then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user whose service-specific credentials you want information
     * about. If this value is not specified then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user whose service-specific credentials you want information
     * about. If this value is not specified then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the user whose service-specific credentials you want information
     * about. If this value is not specified then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline ListServiceSpecificCredentialsRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user whose service-specific credentials you want information
     * about. If this value is not specified then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline ListServiceSpecificCredentialsRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user whose service-specific credentials you want information
     * about. If this value is not specified then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline ListServiceSpecificCredentialsRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>Filters the returned results to only those for the specified AWS service. If
     * not specified, then AWS returns service-specific credentials for all
     * services.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>Filters the returned results to only those for the specified AWS service. If
     * not specified, then AWS returns service-specific credentials for all
     * services.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>Filters the returned results to only those for the specified AWS service. If
     * not specified, then AWS returns service-specific credentials for all
     * services.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>Filters the returned results to only those for the specified AWS service. If
     * not specified, then AWS returns service-specific credentials for all
     * services.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>Filters the returned results to only those for the specified AWS service. If
     * not specified, then AWS returns service-specific credentials for all
     * services.</p>
     */
    inline ListServiceSpecificCredentialsRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>Filters the returned results to only those for the specified AWS service. If
     * not specified, then AWS returns service-specific credentials for all
     * services.</p>
     */
    inline ListServiceSpecificCredentialsRequest& WithServiceName(Aws::String&& value) { SetServiceName(value); return *this;}

    /**
     * <p>Filters the returned results to only those for the specified AWS service. If
     * not specified, then AWS returns service-specific credentials for all
     * services.</p>
     */
    inline ListServiceSpecificCredentialsRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
