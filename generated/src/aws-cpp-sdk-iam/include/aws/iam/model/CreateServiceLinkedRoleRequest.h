/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateServiceLinkedRoleRequest : public IAMRequest
  {
  public:
    AWS_IAM_API CreateServiceLinkedRoleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceLinkedRole"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The service principal for the Amazon Web Services service to which this role
     * is attached. You use a string similar to a URL but without the http:// in front.
     * For example: <code>elasticbeanstalk.amazonaws.com</code>. </p> <p>Service
     * principals are unique and case-sensitive. To find the exact service principal
     * for your service-linked role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">Amazon
     * Web Services services that work with IAM</a> in the <i>IAM User Guide</i>. Look
     * for the services that have <b>Yes </b>in the <b>Service-Linked Role</b> column.
     * Choose the <b>Yes</b> link to view the service-linked role documentation for
     * that service.</p>
     */
    inline const Aws::String& GetAWSServiceName() const { return m_aWSServiceName; }
    inline bool AWSServiceNameHasBeenSet() const { return m_aWSServiceNameHasBeenSet; }
    template<typename AWSServiceNameT = Aws::String>
    void SetAWSServiceName(AWSServiceNameT&& value) { m_aWSServiceNameHasBeenSet = true; m_aWSServiceName = std::forward<AWSServiceNameT>(value); }
    template<typename AWSServiceNameT = Aws::String>
    CreateServiceLinkedRoleRequest& WithAWSServiceName(AWSServiceNameT&& value) { SetAWSServiceName(std::forward<AWSServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the role.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateServiceLinkedRoleRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetCustomSuffix() const { return m_customSuffix; }
    inline bool CustomSuffixHasBeenSet() const { return m_customSuffixHasBeenSet; }
    template<typename CustomSuffixT = Aws::String>
    void SetCustomSuffix(CustomSuffixT&& value) { m_customSuffixHasBeenSet = true; m_customSuffix = std::forward<CustomSuffixT>(value); }
    template<typename CustomSuffixT = Aws::String>
    CreateServiceLinkedRoleRequest& WithCustomSuffix(CustomSuffixT&& value) { SetCustomSuffix(std::forward<CustomSuffixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aWSServiceName;
    bool m_aWSServiceNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_customSuffix;
    bool m_customSuffixHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
