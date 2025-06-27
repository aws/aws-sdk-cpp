/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConformancePackInputParameter.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class PutOrganizationConformancePackRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutOrganizationConformancePackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutOrganizationConformancePack"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the organization conformance pack you want to create.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackName() const { return m_organizationConformancePackName; }
    inline bool OrganizationConformancePackNameHasBeenSet() const { return m_organizationConformancePackNameHasBeenSet; }
    template<typename OrganizationConformancePackNameT = Aws::String>
    void SetOrganizationConformancePackName(OrganizationConformancePackNameT&& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = std::forward<OrganizationConformancePackNameT>(value); }
    template<typename OrganizationConformancePackNameT = Aws::String>
    PutOrganizationConformancePackRequest& WithOrganizationConformancePackName(OrganizationConformancePackNameT&& value) { SetOrganizationConformancePackName(std::forward<OrganizationConformancePackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300 KB).</p>  <p>You must have access
     * to read Amazon S3 bucket. In addition, in order to ensure a successful
     * deployment, the template object must not be in an <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage-class-intro.html">archived
     * storage class</a> if this parameter is passed.</p> 
     */
    inline const Aws::String& GetTemplateS3Uri() const { return m_templateS3Uri; }
    inline bool TemplateS3UriHasBeenSet() const { return m_templateS3UriHasBeenSet; }
    template<typename TemplateS3UriT = Aws::String>
    void SetTemplateS3Uri(TemplateS3UriT&& value) { m_templateS3UriHasBeenSet = true; m_templateS3Uri = std::forward<TemplateS3UriT>(value); }
    template<typename TemplateS3UriT = Aws::String>
    PutOrganizationConformancePackRequest& WithTemplateS3Uri(TemplateS3UriT&& value) { SetTemplateS3Uri(std::forward<TemplateS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that contains the full conformance pack template body. Structure
     * containing the template body with a minimum length of 1 byte and a maximum
     * length of 51,200 bytes.</p>
     */
    inline const Aws::String& GetTemplateBody() const { return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    template<typename TemplateBodyT = Aws::String>
    void SetTemplateBody(TemplateBodyT&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::forward<TemplateBodyT>(value); }
    template<typename TemplateBodyT = Aws::String>
    PutOrganizationConformancePackRequest& WithTemplateBody(TemplateBodyT&& value) { SetTemplateBody(std::forward<TemplateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional. If used, it must be prefixed
     * with <code>awsconfigconforms</code>.</p> 
     */
    inline const Aws::String& GetDeliveryS3Bucket() const { return m_deliveryS3Bucket; }
    inline bool DeliveryS3BucketHasBeenSet() const { return m_deliveryS3BucketHasBeenSet; }
    template<typename DeliveryS3BucketT = Aws::String>
    void SetDeliveryS3Bucket(DeliveryS3BucketT&& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = std::forward<DeliveryS3BucketT>(value); }
    template<typename DeliveryS3BucketT = Aws::String>
    PutOrganizationConformancePackRequest& WithDeliveryS3Bucket(DeliveryS3BucketT&& value) { SetDeliveryS3Bucket(std::forward<DeliveryS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for the Amazon S3 bucket.</p>  <p>This field is
     * optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3KeyPrefix() const { return m_deliveryS3KeyPrefix; }
    inline bool DeliveryS3KeyPrefixHasBeenSet() const { return m_deliveryS3KeyPrefixHasBeenSet; }
    template<typename DeliveryS3KeyPrefixT = Aws::String>
    void SetDeliveryS3KeyPrefix(DeliveryS3KeyPrefixT&& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = std::forward<DeliveryS3KeyPrefixT>(value); }
    template<typename DeliveryS3KeyPrefixT = Aws::String>
    PutOrganizationConformancePackRequest& WithDeliveryS3KeyPrefix(DeliveryS3KeyPrefixT&& value) { SetDeliveryS3KeyPrefix(std::forward<DeliveryS3KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackInputParameter>& GetConformancePackInputParameters() const { return m_conformancePackInputParameters; }
    inline bool ConformancePackInputParametersHasBeenSet() const { return m_conformancePackInputParametersHasBeenSet; }
    template<typename ConformancePackInputParametersT = Aws::Vector<ConformancePackInputParameter>>
    void SetConformancePackInputParameters(ConformancePackInputParametersT&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters = std::forward<ConformancePackInputParametersT>(value); }
    template<typename ConformancePackInputParametersT = Aws::Vector<ConformancePackInputParameter>>
    PutOrganizationConformancePackRequest& WithConformancePackInputParameters(ConformancePackInputParametersT&& value) { SetConformancePackInputParameters(std::forward<ConformancePackInputParametersT>(value)); return *this;}
    template<typename ConformancePackInputParametersT = ConformancePackInputParameter>
    PutOrganizationConformancePackRequest& AddConformancePackInputParameters(ConformancePackInputParametersT&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.emplace_back(std::forward<ConformancePackInputParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services accounts to be excluded from an organization
     * conformance pack while deploying a conformance pack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedAccounts() const { return m_excludedAccounts; }
    inline bool ExcludedAccountsHasBeenSet() const { return m_excludedAccountsHasBeenSet; }
    template<typename ExcludedAccountsT = Aws::Vector<Aws::String>>
    void SetExcludedAccounts(ExcludedAccountsT&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = std::forward<ExcludedAccountsT>(value); }
    template<typename ExcludedAccountsT = Aws::Vector<Aws::String>>
    PutOrganizationConformancePackRequest& WithExcludedAccounts(ExcludedAccountsT&& value) { SetExcludedAccounts(std::forward<ExcludedAccountsT>(value)); return *this;}
    template<typename ExcludedAccountsT = Aws::String>
    PutOrganizationConformancePackRequest& AddExcludedAccounts(ExcludedAccountsT&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.emplace_back(std::forward<ExcludedAccountsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_organizationConformancePackName;
    bool m_organizationConformancePackNameHasBeenSet = false;

    Aws::String m_templateS3Uri;
    bool m_templateS3UriHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::String m_deliveryS3Bucket;
    bool m_deliveryS3BucketHasBeenSet = false;

    Aws::String m_deliveryS3KeyPrefix;
    bool m_deliveryS3KeyPrefixHasBeenSet = false;

    Aws::Vector<ConformancePackInputParameter> m_conformancePackInputParameters;
    bool m_conformancePackInputParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedAccounts;
    bool m_excludedAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
