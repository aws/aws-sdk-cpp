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
    AWS_CONFIGSERVICE_API PutOrganizationConformancePackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutOrganizationConformancePack"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the organization conformance pack you want to create.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackName() const{ return m_organizationConformancePackName; }

    /**
     * <p>Name of the organization conformance pack you want to create.</p>
     */
    inline bool OrganizationConformancePackNameHasBeenSet() const { return m_organizationConformancePackNameHasBeenSet; }

    /**
     * <p>Name of the organization conformance pack you want to create.</p>
     */
    inline void SetOrganizationConformancePackName(const Aws::String& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = value; }

    /**
     * <p>Name of the organization conformance pack you want to create.</p>
     */
    inline void SetOrganizationConformancePackName(Aws::String&& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = std::move(value); }

    /**
     * <p>Name of the organization conformance pack you want to create.</p>
     */
    inline void SetOrganizationConformancePackName(const char* value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName.assign(value); }

    /**
     * <p>Name of the organization conformance pack you want to create.</p>
     */
    inline PutOrganizationConformancePackRequest& WithOrganizationConformancePackName(const Aws::String& value) { SetOrganizationConformancePackName(value); return *this;}

    /**
     * <p>Name of the organization conformance pack you want to create.</p>
     */
    inline PutOrganizationConformancePackRequest& WithOrganizationConformancePackName(Aws::String&& value) { SetOrganizationConformancePackName(std::move(value)); return *this;}

    /**
     * <p>Name of the organization conformance pack you want to create.</p>
     */
    inline PutOrganizationConformancePackRequest& WithOrganizationConformancePackName(const char* value) { SetOrganizationConformancePackName(value); return *this;}


    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300 KB).</p>  <p>You must have access
     * to read Amazon S3 bucket.</p> 
     */
    inline const Aws::String& GetTemplateS3Uri() const{ return m_templateS3Uri; }

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300 KB).</p>  <p>You must have access
     * to read Amazon S3 bucket.</p> 
     */
    inline bool TemplateS3UriHasBeenSet() const { return m_templateS3UriHasBeenSet; }

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300 KB).</p>  <p>You must have access
     * to read Amazon S3 bucket.</p> 
     */
    inline void SetTemplateS3Uri(const Aws::String& value) { m_templateS3UriHasBeenSet = true; m_templateS3Uri = value; }

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300 KB).</p>  <p>You must have access
     * to read Amazon S3 bucket.</p> 
     */
    inline void SetTemplateS3Uri(Aws::String&& value) { m_templateS3UriHasBeenSet = true; m_templateS3Uri = std::move(value); }

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300 KB).</p>  <p>You must have access
     * to read Amazon S3 bucket.</p> 
     */
    inline void SetTemplateS3Uri(const char* value) { m_templateS3UriHasBeenSet = true; m_templateS3Uri.assign(value); }

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300 KB).</p>  <p>You must have access
     * to read Amazon S3 bucket.</p> 
     */
    inline PutOrganizationConformancePackRequest& WithTemplateS3Uri(const Aws::String& value) { SetTemplateS3Uri(value); return *this;}

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300 KB).</p>  <p>You must have access
     * to read Amazon S3 bucket.</p> 
     */
    inline PutOrganizationConformancePackRequest& WithTemplateS3Uri(Aws::String&& value) { SetTemplateS3Uri(std::move(value)); return *this;}

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300 KB).</p>  <p>You must have access
     * to read Amazon S3 bucket.</p> 
     */
    inline PutOrganizationConformancePackRequest& WithTemplateS3Uri(const char* value) { SetTemplateS3Uri(value); return *this;}


    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p>
     */
    inline PutOrganizationConformancePackRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p>
     */
    inline PutOrganizationConformancePackRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p>
     */
    inline PutOrganizationConformancePackRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional. If used, it must be prefixed
     * with <code>awsconfigconforms</code>.</p> 
     */
    inline const Aws::String& GetDeliveryS3Bucket() const{ return m_deliveryS3Bucket; }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional. If used, it must be prefixed
     * with <code>awsconfigconforms</code>.</p> 
     */
    inline bool DeliveryS3BucketHasBeenSet() const { return m_deliveryS3BucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional. If used, it must be prefixed
     * with <code>awsconfigconforms</code>.</p> 
     */
    inline void SetDeliveryS3Bucket(const Aws::String& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional. If used, it must be prefixed
     * with <code>awsconfigconforms</code>.</p> 
     */
    inline void SetDeliveryS3Bucket(Aws::String&& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional. If used, it must be prefixed
     * with <code>awsconfigconforms</code>.</p> 
     */
    inline void SetDeliveryS3Bucket(const char* value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional. If used, it must be prefixed
     * with <code>awsconfigconforms</code>.</p> 
     */
    inline PutOrganizationConformancePackRequest& WithDeliveryS3Bucket(const Aws::String& value) { SetDeliveryS3Bucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional. If used, it must be prefixed
     * with <code>awsconfigconforms</code>.</p> 
     */
    inline PutOrganizationConformancePackRequest& WithDeliveryS3Bucket(Aws::String&& value) { SetDeliveryS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional. If used, it must be prefixed
     * with <code>awsconfigconforms</code>.</p> 
     */
    inline PutOrganizationConformancePackRequest& WithDeliveryS3Bucket(const char* value) { SetDeliveryS3Bucket(value); return *this;}


    /**
     * <p>The prefix for the Amazon S3 bucket.</p>  <p>This field is
     * optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3KeyPrefix() const{ return m_deliveryS3KeyPrefix; }

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>  <p>This field is
     * optional.</p> 
     */
    inline bool DeliveryS3KeyPrefixHasBeenSet() const { return m_deliveryS3KeyPrefixHasBeenSet; }

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>  <p>This field is
     * optional.</p> 
     */
    inline void SetDeliveryS3KeyPrefix(const Aws::String& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = value; }

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>  <p>This field is
     * optional.</p> 
     */
    inline void SetDeliveryS3KeyPrefix(Aws::String&& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = std::move(value); }

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>  <p>This field is
     * optional.</p> 
     */
    inline void SetDeliveryS3KeyPrefix(const char* value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix.assign(value); }

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>  <p>This field is
     * optional.</p> 
     */
    inline PutOrganizationConformancePackRequest& WithDeliveryS3KeyPrefix(const Aws::String& value) { SetDeliveryS3KeyPrefix(value); return *this;}

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>  <p>This field is
     * optional.</p> 
     */
    inline PutOrganizationConformancePackRequest& WithDeliveryS3KeyPrefix(Aws::String&& value) { SetDeliveryS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>  <p>This field is
     * optional.</p> 
     */
    inline PutOrganizationConformancePackRequest& WithDeliveryS3KeyPrefix(const char* value) { SetDeliveryS3KeyPrefix(value); return *this;}


    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackInputParameter>& GetConformancePackInputParameters() const{ return m_conformancePackInputParameters; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline bool ConformancePackInputParametersHasBeenSet() const { return m_conformancePackInputParametersHasBeenSet; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline void SetConformancePackInputParameters(const Aws::Vector<ConformancePackInputParameter>& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters = value; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline void SetConformancePackInputParameters(Aws::Vector<ConformancePackInputParameter>&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters = std::move(value); }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline PutOrganizationConformancePackRequest& WithConformancePackInputParameters(const Aws::Vector<ConformancePackInputParameter>& value) { SetConformancePackInputParameters(value); return *this;}

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline PutOrganizationConformancePackRequest& WithConformancePackInputParameters(Aws::Vector<ConformancePackInputParameter>&& value) { SetConformancePackInputParameters(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline PutOrganizationConformancePackRequest& AddConformancePackInputParameters(const ConformancePackInputParameter& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline PutOrganizationConformancePackRequest& AddConformancePackInputParameters(ConformancePackInputParameter&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of Amazon Web Services accounts to be excluded from an organization
     * conformance pack while deploying a conformance pack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedAccounts() const{ return m_excludedAccounts; }

    /**
     * <p>A list of Amazon Web Services accounts to be excluded from an organization
     * conformance pack while deploying a conformance pack.</p>
     */
    inline bool ExcludedAccountsHasBeenSet() const { return m_excludedAccountsHasBeenSet; }

    /**
     * <p>A list of Amazon Web Services accounts to be excluded from an organization
     * conformance pack while deploying a conformance pack.</p>
     */
    inline void SetExcludedAccounts(const Aws::Vector<Aws::String>& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = value; }

    /**
     * <p>A list of Amazon Web Services accounts to be excluded from an organization
     * conformance pack while deploying a conformance pack.</p>
     */
    inline void SetExcludedAccounts(Aws::Vector<Aws::String>&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = std::move(value); }

    /**
     * <p>A list of Amazon Web Services accounts to be excluded from an organization
     * conformance pack while deploying a conformance pack.</p>
     */
    inline PutOrganizationConformancePackRequest& WithExcludedAccounts(const Aws::Vector<Aws::String>& value) { SetExcludedAccounts(value); return *this;}

    /**
     * <p>A list of Amazon Web Services accounts to be excluded from an organization
     * conformance pack while deploying a conformance pack.</p>
     */
    inline PutOrganizationConformancePackRequest& WithExcludedAccounts(Aws::Vector<Aws::String>&& value) { SetExcludedAccounts(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Web Services accounts to be excluded from an organization
     * conformance pack while deploying a conformance pack.</p>
     */
    inline PutOrganizationConformancePackRequest& AddExcludedAccounts(const Aws::String& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Web Services accounts to be excluded from an organization
     * conformance pack while deploying a conformance pack.</p>
     */
    inline PutOrganizationConformancePackRequest& AddExcludedAccounts(Aws::String&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Web Services accounts to be excluded from an organization
     * conformance pack while deploying a conformance pack.</p>
     */
    inline PutOrganizationConformancePackRequest& AddExcludedAccounts(const char* value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }

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
