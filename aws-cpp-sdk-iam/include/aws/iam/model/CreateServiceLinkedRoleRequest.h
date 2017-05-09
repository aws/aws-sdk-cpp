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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API CreateServiceLinkedRoleRequest : public IAMRequest
  {
  public:
    CreateServiceLinkedRoleRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The AWS service to which this role is attached. You use a string similar to a
     * URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code> </p>
     */
    inline const Aws::String& GetAWSServiceName() const{ return m_aWSServiceName; }

    /**
     * <p>The AWS service to which this role is attached. You use a string similar to a
     * URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code> </p>
     */
    inline void SetAWSServiceName(const Aws::String& value) { m_aWSServiceNameHasBeenSet = true; m_aWSServiceName = value; }

    /**
     * <p>The AWS service to which this role is attached. You use a string similar to a
     * URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code> </p>
     */
    inline void SetAWSServiceName(Aws::String&& value) { m_aWSServiceNameHasBeenSet = true; m_aWSServiceName = std::move(value); }

    /**
     * <p>The AWS service to which this role is attached. You use a string similar to a
     * URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code> </p>
     */
    inline void SetAWSServiceName(const char* value) { m_aWSServiceNameHasBeenSet = true; m_aWSServiceName.assign(value); }

    /**
     * <p>The AWS service to which this role is attached. You use a string similar to a
     * URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code> </p>
     */
    inline CreateServiceLinkedRoleRequest& WithAWSServiceName(const Aws::String& value) { SetAWSServiceName(value); return *this;}

    /**
     * <p>The AWS service to which this role is attached. You use a string similar to a
     * URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code> </p>
     */
    inline CreateServiceLinkedRoleRequest& WithAWSServiceName(Aws::String&& value) { SetAWSServiceName(std::move(value)); return *this;}

    /**
     * <p>The AWS service to which this role is attached. You use a string similar to a
     * URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code> </p>
     */
    inline CreateServiceLinkedRoleRequest& WithAWSServiceName(const char* value) { SetAWSServiceName(value); return *this;}

    /**
     * <p>The description of the role.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the role.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the role.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the role.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the role.</p>
     */
    inline CreateServiceLinkedRoleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the role.</p>
     */
    inline CreateServiceLinkedRoleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the role.</p>
     */
    inline CreateServiceLinkedRoleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>A string that you provide, which is combined with the service name to form
     * the complete role name. If you make multiple requests for the same service, then
     * you must supply a different <code>CustomSuffix</code> for each request.
     * Otherwise the request fails with a duplicate role name error. For example, you
     * could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     */
    inline const Aws::String& GetCustomSuffix() const{ return m_customSuffix; }

    /**
     * <p>A string that you provide, which is combined with the service name to form
     * the complete role name. If you make multiple requests for the same service, then
     * you must supply a different <code>CustomSuffix</code> for each request.
     * Otherwise the request fails with a duplicate role name error. For example, you
     * could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     */
    inline void SetCustomSuffix(const Aws::String& value) { m_customSuffixHasBeenSet = true; m_customSuffix = value; }

    /**
     * <p>A string that you provide, which is combined with the service name to form
     * the complete role name. If you make multiple requests for the same service, then
     * you must supply a different <code>CustomSuffix</code> for each request.
     * Otherwise the request fails with a duplicate role name error. For example, you
     * could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     */
    inline void SetCustomSuffix(Aws::String&& value) { m_customSuffixHasBeenSet = true; m_customSuffix = std::move(value); }

    /**
     * <p>A string that you provide, which is combined with the service name to form
     * the complete role name. If you make multiple requests for the same service, then
     * you must supply a different <code>CustomSuffix</code> for each request.
     * Otherwise the request fails with a duplicate role name error. For example, you
     * could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     */
    inline void SetCustomSuffix(const char* value) { m_customSuffixHasBeenSet = true; m_customSuffix.assign(value); }

    /**
     * <p>A string that you provide, which is combined with the service name to form
     * the complete role name. If you make multiple requests for the same service, then
     * you must supply a different <code>CustomSuffix</code> for each request.
     * Otherwise the request fails with a duplicate role name error. For example, you
     * could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     */
    inline CreateServiceLinkedRoleRequest& WithCustomSuffix(const Aws::String& value) { SetCustomSuffix(value); return *this;}

    /**
     * <p>A string that you provide, which is combined with the service name to form
     * the complete role name. If you make multiple requests for the same service, then
     * you must supply a different <code>CustomSuffix</code> for each request.
     * Otherwise the request fails with a duplicate role name error. For example, you
     * could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     */
    inline CreateServiceLinkedRoleRequest& WithCustomSuffix(Aws::String&& value) { SetCustomSuffix(std::move(value)); return *this;}

    /**
     * <p>A string that you provide, which is combined with the service name to form
     * the complete role name. If you make multiple requests for the same service, then
     * you must supply a different <code>CustomSuffix</code> for each request.
     * Otherwise the request fails with a duplicate role name error. For example, you
     * could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     */
    inline CreateServiceLinkedRoleRequest& WithCustomSuffix(const char* value) { SetCustomSuffix(value); return *this;}

  private:
    Aws::String m_aWSServiceName;
    bool m_aWSServiceNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_customSuffix;
    bool m_customSuffixHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
