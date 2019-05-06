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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceLinkedRole"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The service principal for the AWS service to which this role is attached. You
     * use a string similar to a URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code>. </p> <p>Service principals are
     * unique and case-sensitive. To find the exact service principal for your
     * service-linked role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">AWS
     * Services That Work with IAM</a> in the <i>IAM User Guide</i>. Look for the
     * services that have <b>Yes </b>in the <b>Service-Linked Role</b> column. Choose
     * the <b>Yes</b> link to view the service-linked role documentation for that
     * service.</p>
     */
    inline const Aws::String& GetAWSServiceName() const{ return m_aWSServiceName; }

    /**
     * <p>The service principal for the AWS service to which this role is attached. You
     * use a string similar to a URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code>. </p> <p>Service principals are
     * unique and case-sensitive. To find the exact service principal for your
     * service-linked role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">AWS
     * Services That Work with IAM</a> in the <i>IAM User Guide</i>. Look for the
     * services that have <b>Yes </b>in the <b>Service-Linked Role</b> column. Choose
     * the <b>Yes</b> link to view the service-linked role documentation for that
     * service.</p>
     */
    inline bool AWSServiceNameHasBeenSet() const { return m_aWSServiceNameHasBeenSet; }

    /**
     * <p>The service principal for the AWS service to which this role is attached. You
     * use a string similar to a URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code>. </p> <p>Service principals are
     * unique and case-sensitive. To find the exact service principal for your
     * service-linked role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">AWS
     * Services That Work with IAM</a> in the <i>IAM User Guide</i>. Look for the
     * services that have <b>Yes </b>in the <b>Service-Linked Role</b> column. Choose
     * the <b>Yes</b> link to view the service-linked role documentation for that
     * service.</p>
     */
    inline void SetAWSServiceName(const Aws::String& value) { m_aWSServiceNameHasBeenSet = true; m_aWSServiceName = value; }

    /**
     * <p>The service principal for the AWS service to which this role is attached. You
     * use a string similar to a URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code>. </p> <p>Service principals are
     * unique and case-sensitive. To find the exact service principal for your
     * service-linked role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">AWS
     * Services That Work with IAM</a> in the <i>IAM User Guide</i>. Look for the
     * services that have <b>Yes </b>in the <b>Service-Linked Role</b> column. Choose
     * the <b>Yes</b> link to view the service-linked role documentation for that
     * service.</p>
     */
    inline void SetAWSServiceName(Aws::String&& value) { m_aWSServiceNameHasBeenSet = true; m_aWSServiceName = std::move(value); }

    /**
     * <p>The service principal for the AWS service to which this role is attached. You
     * use a string similar to a URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code>. </p> <p>Service principals are
     * unique and case-sensitive. To find the exact service principal for your
     * service-linked role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">AWS
     * Services That Work with IAM</a> in the <i>IAM User Guide</i>. Look for the
     * services that have <b>Yes </b>in the <b>Service-Linked Role</b> column. Choose
     * the <b>Yes</b> link to view the service-linked role documentation for that
     * service.</p>
     */
    inline void SetAWSServiceName(const char* value) { m_aWSServiceNameHasBeenSet = true; m_aWSServiceName.assign(value); }

    /**
     * <p>The service principal for the AWS service to which this role is attached. You
     * use a string similar to a URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code>. </p> <p>Service principals are
     * unique and case-sensitive. To find the exact service principal for your
     * service-linked role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">AWS
     * Services That Work with IAM</a> in the <i>IAM User Guide</i>. Look for the
     * services that have <b>Yes </b>in the <b>Service-Linked Role</b> column. Choose
     * the <b>Yes</b> link to view the service-linked role documentation for that
     * service.</p>
     */
    inline CreateServiceLinkedRoleRequest& WithAWSServiceName(const Aws::String& value) { SetAWSServiceName(value); return *this;}

    /**
     * <p>The service principal for the AWS service to which this role is attached. You
     * use a string similar to a URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code>. </p> <p>Service principals are
     * unique and case-sensitive. To find the exact service principal for your
     * service-linked role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">AWS
     * Services That Work with IAM</a> in the <i>IAM User Guide</i>. Look for the
     * services that have <b>Yes </b>in the <b>Service-Linked Role</b> column. Choose
     * the <b>Yes</b> link to view the service-linked role documentation for that
     * service.</p>
     */
    inline CreateServiceLinkedRoleRequest& WithAWSServiceName(Aws::String&& value) { SetAWSServiceName(std::move(value)); return *this;}

    /**
     * <p>The service principal for the AWS service to which this role is attached. You
     * use a string similar to a URL but without the http:// in front. For example:
     * <code>elasticbeanstalk.amazonaws.com</code>. </p> <p>Service principals are
     * unique and case-sensitive. To find the exact service principal for your
     * service-linked role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">AWS
     * Services That Work with IAM</a> in the <i>IAM User Guide</i>. Look for the
     * services that have <b>Yes </b>in the <b>Service-Linked Role</b> column. Choose
     * the <b>Yes</b> link to view the service-linked role documentation for that
     * service.</p>
     */
    inline CreateServiceLinkedRoleRequest& WithAWSServiceName(const char* value) { SetAWSServiceName(value); return *this;}


    /**
     * <p>The description of the role.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the role.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

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
     * <p/> <p>A string that you provide, which is combined with the service-provided
     * prefix to form the complete role name. If you make multiple requests for the
     * same service, then you must supply a different <code>CustomSuffix</code> for
     * each request. Otherwise the request fails with a duplicate role name error. For
     * example, you could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     * <p>Some services do not support the <code>CustomSuffix</code> parameter. If you
     * provide an optional suffix and the operation fails, try the operation again
     * without the suffix.</p>
     */
    inline const Aws::String& GetCustomSuffix() const{ return m_customSuffix; }

    /**
     * <p/> <p>A string that you provide, which is combined with the service-provided
     * prefix to form the complete role name. If you make multiple requests for the
     * same service, then you must supply a different <code>CustomSuffix</code> for
     * each request. Otherwise the request fails with a duplicate role name error. For
     * example, you could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     * <p>Some services do not support the <code>CustomSuffix</code> parameter. If you
     * provide an optional suffix and the operation fails, try the operation again
     * without the suffix.</p>
     */
    inline bool CustomSuffixHasBeenSet() const { return m_customSuffixHasBeenSet; }

    /**
     * <p/> <p>A string that you provide, which is combined with the service-provided
     * prefix to form the complete role name. If you make multiple requests for the
     * same service, then you must supply a different <code>CustomSuffix</code> for
     * each request. Otherwise the request fails with a duplicate role name error. For
     * example, you could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     * <p>Some services do not support the <code>CustomSuffix</code> parameter. If you
     * provide an optional suffix and the operation fails, try the operation again
     * without the suffix.</p>
     */
    inline void SetCustomSuffix(const Aws::String& value) { m_customSuffixHasBeenSet = true; m_customSuffix = value; }

    /**
     * <p/> <p>A string that you provide, which is combined with the service-provided
     * prefix to form the complete role name. If you make multiple requests for the
     * same service, then you must supply a different <code>CustomSuffix</code> for
     * each request. Otherwise the request fails with a duplicate role name error. For
     * example, you could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     * <p>Some services do not support the <code>CustomSuffix</code> parameter. If you
     * provide an optional suffix and the operation fails, try the operation again
     * without the suffix.</p>
     */
    inline void SetCustomSuffix(Aws::String&& value) { m_customSuffixHasBeenSet = true; m_customSuffix = std::move(value); }

    /**
     * <p/> <p>A string that you provide, which is combined with the service-provided
     * prefix to form the complete role name. If you make multiple requests for the
     * same service, then you must supply a different <code>CustomSuffix</code> for
     * each request. Otherwise the request fails with a duplicate role name error. For
     * example, you could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     * <p>Some services do not support the <code>CustomSuffix</code> parameter. If you
     * provide an optional suffix and the operation fails, try the operation again
     * without the suffix.</p>
     */
    inline void SetCustomSuffix(const char* value) { m_customSuffixHasBeenSet = true; m_customSuffix.assign(value); }

    /**
     * <p/> <p>A string that you provide, which is combined with the service-provided
     * prefix to form the complete role name. If you make multiple requests for the
     * same service, then you must supply a different <code>CustomSuffix</code> for
     * each request. Otherwise the request fails with a duplicate role name error. For
     * example, you could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     * <p>Some services do not support the <code>CustomSuffix</code> parameter. If you
     * provide an optional suffix and the operation fails, try the operation again
     * without the suffix.</p>
     */
    inline CreateServiceLinkedRoleRequest& WithCustomSuffix(const Aws::String& value) { SetCustomSuffix(value); return *this;}

    /**
     * <p/> <p>A string that you provide, which is combined with the service-provided
     * prefix to form the complete role name. If you make multiple requests for the
     * same service, then you must supply a different <code>CustomSuffix</code> for
     * each request. Otherwise the request fails with a duplicate role name error. For
     * example, you could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     * <p>Some services do not support the <code>CustomSuffix</code> parameter. If you
     * provide an optional suffix and the operation fails, try the operation again
     * without the suffix.</p>
     */
    inline CreateServiceLinkedRoleRequest& WithCustomSuffix(Aws::String&& value) { SetCustomSuffix(std::move(value)); return *this;}

    /**
     * <p/> <p>A string that you provide, which is combined with the service-provided
     * prefix to form the complete role name. If you make multiple requests for the
     * same service, then you must supply a different <code>CustomSuffix</code> for
     * each request. Otherwise the request fails with a duplicate role name error. For
     * example, you could add <code>-1</code> or <code>-debug</code> to the suffix.</p>
     * <p>Some services do not support the <code>CustomSuffix</code> parameter. If you
     * provide an optional suffix and the operation fails, try the operation again
     * without the suffix.</p>
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
