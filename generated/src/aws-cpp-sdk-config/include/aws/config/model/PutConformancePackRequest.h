/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/TemplateSSMDocumentDetails.h>
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
  class PutConformancePackRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutConformancePackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConformancePack"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique name of the conformance pack you want to deploy.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }

    /**
     * <p>The unique name of the conformance pack you want to deploy.</p>
     */
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }

    /**
     * <p>The unique name of the conformance pack you want to deploy.</p>
     */
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = value; }

    /**
     * <p>The unique name of the conformance pack you want to deploy.</p>
     */
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::move(value); }

    /**
     * <p>The unique name of the conformance pack you want to deploy.</p>
     */
    inline void SetConformancePackName(const char* value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName.assign(value); }

    /**
     * <p>The unique name of the conformance pack you want to deploy.</p>
     */
    inline PutConformancePackRequest& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}

    /**
     * <p>The unique name of the conformance pack you want to deploy.</p>
     */
    inline PutConformancePackRequest& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the conformance pack you want to deploy.</p>
     */
    inline PutConformancePackRequest& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}


    /**
     * <p>The location of the file containing the template body
     * (<code>s3://bucketname/prefix</code>). The uri must point to a conformance pack
     * template (max size: 300 KB) that is located in an Amazon S3 bucket in the same
     * Region as the conformance pack. </p>  <p>You must have access to read
     * Amazon S3 bucket.</p> 
     */
    inline const Aws::String& GetTemplateS3Uri() const{ return m_templateS3Uri; }

    /**
     * <p>The location of the file containing the template body
     * (<code>s3://bucketname/prefix</code>). The uri must point to a conformance pack
     * template (max size: 300 KB) that is located in an Amazon S3 bucket in the same
     * Region as the conformance pack. </p>  <p>You must have access to read
     * Amazon S3 bucket.</p> 
     */
    inline bool TemplateS3UriHasBeenSet() const { return m_templateS3UriHasBeenSet; }

    /**
     * <p>The location of the file containing the template body
     * (<code>s3://bucketname/prefix</code>). The uri must point to a conformance pack
     * template (max size: 300 KB) that is located in an Amazon S3 bucket in the same
     * Region as the conformance pack. </p>  <p>You must have access to read
     * Amazon S3 bucket.</p> 
     */
    inline void SetTemplateS3Uri(const Aws::String& value) { m_templateS3UriHasBeenSet = true; m_templateS3Uri = value; }

    /**
     * <p>The location of the file containing the template body
     * (<code>s3://bucketname/prefix</code>). The uri must point to a conformance pack
     * template (max size: 300 KB) that is located in an Amazon S3 bucket in the same
     * Region as the conformance pack. </p>  <p>You must have access to read
     * Amazon S3 bucket.</p> 
     */
    inline void SetTemplateS3Uri(Aws::String&& value) { m_templateS3UriHasBeenSet = true; m_templateS3Uri = std::move(value); }

    /**
     * <p>The location of the file containing the template body
     * (<code>s3://bucketname/prefix</code>). The uri must point to a conformance pack
     * template (max size: 300 KB) that is located in an Amazon S3 bucket in the same
     * Region as the conformance pack. </p>  <p>You must have access to read
     * Amazon S3 bucket.</p> 
     */
    inline void SetTemplateS3Uri(const char* value) { m_templateS3UriHasBeenSet = true; m_templateS3Uri.assign(value); }

    /**
     * <p>The location of the file containing the template body
     * (<code>s3://bucketname/prefix</code>). The uri must point to a conformance pack
     * template (max size: 300 KB) that is located in an Amazon S3 bucket in the same
     * Region as the conformance pack. </p>  <p>You must have access to read
     * Amazon S3 bucket.</p> 
     */
    inline PutConformancePackRequest& WithTemplateS3Uri(const Aws::String& value) { SetTemplateS3Uri(value); return *this;}

    /**
     * <p>The location of the file containing the template body
     * (<code>s3://bucketname/prefix</code>). The uri must point to a conformance pack
     * template (max size: 300 KB) that is located in an Amazon S3 bucket in the same
     * Region as the conformance pack. </p>  <p>You must have access to read
     * Amazon S3 bucket.</p> 
     */
    inline PutConformancePackRequest& WithTemplateS3Uri(Aws::String&& value) { SetTemplateS3Uri(std::move(value)); return *this;}

    /**
     * <p>The location of the file containing the template body
     * (<code>s3://bucketname/prefix</code>). The uri must point to a conformance pack
     * template (max size: 300 KB) that is located in an Amazon S3 bucket in the same
     * Region as the conformance pack. </p>  <p>You must have access to read
     * Amazon S3 bucket.</p> 
     */
    inline PutConformancePackRequest& WithTemplateS3Uri(const char* value) { SetTemplateS3Uri(value); return *this;}


    /**
     * <p>A string containing the full conformance pack template body. The structure
     * containing the template body has a minimum length of 1 byte and a maximum length
     * of 51,200 bytes.</p>  <p>You can use a YAML template with two resource
     * types: Config rule (<code>AWS::Config::ConfigRule</code>) and remediation action
     * (<code>AWS::Config::RemediationConfiguration</code>).</p> 
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>A string containing the full conformance pack template body. The structure
     * containing the template body has a minimum length of 1 byte and a maximum length
     * of 51,200 bytes.</p>  <p>You can use a YAML template with two resource
     * types: Config rule (<code>AWS::Config::ConfigRule</code>) and remediation action
     * (<code>AWS::Config::RemediationConfiguration</code>).</p> 
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>A string containing the full conformance pack template body. The structure
     * containing the template body has a minimum length of 1 byte and a maximum length
     * of 51,200 bytes.</p>  <p>You can use a YAML template with two resource
     * types: Config rule (<code>AWS::Config::ConfigRule</code>) and remediation action
     * (<code>AWS::Config::RemediationConfiguration</code>).</p> 
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>A string containing the full conformance pack template body. The structure
     * containing the template body has a minimum length of 1 byte and a maximum length
     * of 51,200 bytes.</p>  <p>You can use a YAML template with two resource
     * types: Config rule (<code>AWS::Config::ConfigRule</code>) and remediation action
     * (<code>AWS::Config::RemediationConfiguration</code>).</p> 
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>A string containing the full conformance pack template body. The structure
     * containing the template body has a minimum length of 1 byte and a maximum length
     * of 51,200 bytes.</p>  <p>You can use a YAML template with two resource
     * types: Config rule (<code>AWS::Config::ConfigRule</code>) and remediation action
     * (<code>AWS::Config::RemediationConfiguration</code>).</p> 
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>A string containing the full conformance pack template body. The structure
     * containing the template body has a minimum length of 1 byte and a maximum length
     * of 51,200 bytes.</p>  <p>You can use a YAML template with two resource
     * types: Config rule (<code>AWS::Config::ConfigRule</code>) and remediation action
     * (<code>AWS::Config::RemediationConfiguration</code>).</p> 
     */
    inline PutConformancePackRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>A string containing the full conformance pack template body. The structure
     * containing the template body has a minimum length of 1 byte and a maximum length
     * of 51,200 bytes.</p>  <p>You can use a YAML template with two resource
     * types: Config rule (<code>AWS::Config::ConfigRule</code>) and remediation action
     * (<code>AWS::Config::RemediationConfiguration</code>).</p> 
     */
    inline PutConformancePackRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>A string containing the full conformance pack template body. The structure
     * containing the template body has a minimum length of 1 byte and a maximum length
     * of 51,200 bytes.</p>  <p>You can use a YAML template with two resource
     * types: Config rule (<code>AWS::Config::ConfigRule</code>) and remediation action
     * (<code>AWS::Config::RemediationConfiguration</code>).</p> 
     */
    inline PutConformancePackRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3Bucket() const{ return m_deliveryS3Bucket; }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional.</p> 
     */
    inline bool DeliveryS3BucketHasBeenSet() const { return m_deliveryS3BucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional.</p> 
     */
    inline void SetDeliveryS3Bucket(const Aws::String& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional.</p> 
     */
    inline void SetDeliveryS3Bucket(Aws::String&& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional.</p> 
     */
    inline void SetDeliveryS3Bucket(const char* value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional.</p> 
     */
    inline PutConformancePackRequest& WithDeliveryS3Bucket(const Aws::String& value) { SetDeliveryS3Bucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional.</p> 
     */
    inline PutConformancePackRequest& WithDeliveryS3Bucket(Aws::String&& value) { SetDeliveryS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional.</p> 
     */
    inline PutConformancePackRequest& WithDeliveryS3Bucket(const char* value) { SetDeliveryS3Bucket(value); return *this;}


    /**
     * <p>The prefix for the Amazon S3 bucket. </p>  <p>This field is
     * optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3KeyPrefix() const{ return m_deliveryS3KeyPrefix; }

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>  <p>This field is
     * optional.</p> 
     */
    inline bool DeliveryS3KeyPrefixHasBeenSet() const { return m_deliveryS3KeyPrefixHasBeenSet; }

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>  <p>This field is
     * optional.</p> 
     */
    inline void SetDeliveryS3KeyPrefix(const Aws::String& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = value; }

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>  <p>This field is
     * optional.</p> 
     */
    inline void SetDeliveryS3KeyPrefix(Aws::String&& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = std::move(value); }

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>  <p>This field is
     * optional.</p> 
     */
    inline void SetDeliveryS3KeyPrefix(const char* value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix.assign(value); }

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>  <p>This field is
     * optional.</p> 
     */
    inline PutConformancePackRequest& WithDeliveryS3KeyPrefix(const Aws::String& value) { SetDeliveryS3KeyPrefix(value); return *this;}

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>  <p>This field is
     * optional.</p> 
     */
    inline PutConformancePackRequest& WithDeliveryS3KeyPrefix(Aws::String&& value) { SetDeliveryS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>  <p>This field is
     * optional.</p> 
     */
    inline PutConformancePackRequest& WithDeliveryS3KeyPrefix(const char* value) { SetDeliveryS3KeyPrefix(value); return *this;}


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
    inline PutConformancePackRequest& WithConformancePackInputParameters(const Aws::Vector<ConformancePackInputParameter>& value) { SetConformancePackInputParameters(value); return *this;}

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline PutConformancePackRequest& WithConformancePackInputParameters(Aws::Vector<ConformancePackInputParameter>&& value) { SetConformancePackInputParameters(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline PutConformancePackRequest& AddConformancePackInputParameters(const ConformancePackInputParameter& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline PutConformancePackRequest& AddConformancePackInputParameters(ConformancePackInputParameter&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>An object of type <code>TemplateSSMDocumentDetails</code>, which contains the
     * name or the Amazon Resource Name (ARN) of the Amazon Web Services Systems
     * Manager document (SSM document) and the version of the SSM document that is used
     * to create a conformance pack.</p>
     */
    inline const TemplateSSMDocumentDetails& GetTemplateSSMDocumentDetails() const{ return m_templateSSMDocumentDetails; }

    /**
     * <p>An object of type <code>TemplateSSMDocumentDetails</code>, which contains the
     * name or the Amazon Resource Name (ARN) of the Amazon Web Services Systems
     * Manager document (SSM document) and the version of the SSM document that is used
     * to create a conformance pack.</p>
     */
    inline bool TemplateSSMDocumentDetailsHasBeenSet() const { return m_templateSSMDocumentDetailsHasBeenSet; }

    /**
     * <p>An object of type <code>TemplateSSMDocumentDetails</code>, which contains the
     * name or the Amazon Resource Name (ARN) of the Amazon Web Services Systems
     * Manager document (SSM document) and the version of the SSM document that is used
     * to create a conformance pack.</p>
     */
    inline void SetTemplateSSMDocumentDetails(const TemplateSSMDocumentDetails& value) { m_templateSSMDocumentDetailsHasBeenSet = true; m_templateSSMDocumentDetails = value; }

    /**
     * <p>An object of type <code>TemplateSSMDocumentDetails</code>, which contains the
     * name or the Amazon Resource Name (ARN) of the Amazon Web Services Systems
     * Manager document (SSM document) and the version of the SSM document that is used
     * to create a conformance pack.</p>
     */
    inline void SetTemplateSSMDocumentDetails(TemplateSSMDocumentDetails&& value) { m_templateSSMDocumentDetailsHasBeenSet = true; m_templateSSMDocumentDetails = std::move(value); }

    /**
     * <p>An object of type <code>TemplateSSMDocumentDetails</code>, which contains the
     * name or the Amazon Resource Name (ARN) of the Amazon Web Services Systems
     * Manager document (SSM document) and the version of the SSM document that is used
     * to create a conformance pack.</p>
     */
    inline PutConformancePackRequest& WithTemplateSSMDocumentDetails(const TemplateSSMDocumentDetails& value) { SetTemplateSSMDocumentDetails(value); return *this;}

    /**
     * <p>An object of type <code>TemplateSSMDocumentDetails</code>, which contains the
     * name or the Amazon Resource Name (ARN) of the Amazon Web Services Systems
     * Manager document (SSM document) and the version of the SSM document that is used
     * to create a conformance pack.</p>
     */
    inline PutConformancePackRequest& WithTemplateSSMDocumentDetails(TemplateSSMDocumentDetails&& value) { SetTemplateSSMDocumentDetails(std::move(value)); return *this;}

  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

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

    TemplateSSMDocumentDetails m_templateSSMDocumentDetails;
    bool m_templateSSMDocumentDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
