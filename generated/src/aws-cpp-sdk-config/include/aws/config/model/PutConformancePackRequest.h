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
    AWS_CONFIGSERVICE_API PutConformancePackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConformancePack"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique name of the conformance pack you want to deploy.</p>
     */
    inline const Aws::String& GetConformancePackName() const { return m_conformancePackName; }
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }
    template<typename ConformancePackNameT = Aws::String>
    void SetConformancePackName(ConformancePackNameT&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::forward<ConformancePackNameT>(value); }
    template<typename ConformancePackNameT = Aws::String>
    PutConformancePackRequest& WithConformancePackName(ConformancePackNameT&& value) { SetConformancePackName(std::forward<ConformancePackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the file containing the template body
     * (<code>s3://bucketname/prefix</code>). The uri must point to a conformance pack
     * template (max size: 300 KB) that is located in an Amazon S3 bucket in the same
     * Region as the conformance pack. </p>  <p>You must have access to read
     * Amazon S3 bucket. In addition, in order to ensure a successful deployment, the
     * template object must not be in an <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage-class-intro.html">archived
     * storage class</a> if this parameter is passed.</p> 
     */
    inline const Aws::String& GetTemplateS3Uri() const { return m_templateS3Uri; }
    inline bool TemplateS3UriHasBeenSet() const { return m_templateS3UriHasBeenSet; }
    template<typename TemplateS3UriT = Aws::String>
    void SetTemplateS3Uri(TemplateS3UriT&& value) { m_templateS3UriHasBeenSet = true; m_templateS3Uri = std::forward<TemplateS3UriT>(value); }
    template<typename TemplateS3UriT = Aws::String>
    PutConformancePackRequest& WithTemplateS3Uri(TemplateS3UriT&& value) { SetTemplateS3Uri(std::forward<TemplateS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that contains the full conformance pack template body. The structure
     * containing the template body has a minimum length of 1 byte and a maximum length
     * of 51,200 bytes.</p>  <p>You can use a YAML template with two resource
     * types: Config rule (<code>AWS::Config::ConfigRule</code>) and remediation action
     * (<code>AWS::Config::RemediationConfiguration</code>).</p> 
     */
    inline const Aws::String& GetTemplateBody() const { return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    template<typename TemplateBodyT = Aws::String>
    void SetTemplateBody(TemplateBodyT&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::forward<TemplateBodyT>(value); }
    template<typename TemplateBodyT = Aws::String>
    PutConformancePackRequest& WithTemplateBody(TemplateBodyT&& value) { SetTemplateBody(std::forward<TemplateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates.</p>  <p>This field is optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3Bucket() const { return m_deliveryS3Bucket; }
    inline bool DeliveryS3BucketHasBeenSet() const { return m_deliveryS3BucketHasBeenSet; }
    template<typename DeliveryS3BucketT = Aws::String>
    void SetDeliveryS3Bucket(DeliveryS3BucketT&& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = std::forward<DeliveryS3BucketT>(value); }
    template<typename DeliveryS3BucketT = Aws::String>
    PutConformancePackRequest& WithDeliveryS3Bucket(DeliveryS3BucketT&& value) { SetDeliveryS3Bucket(std::forward<DeliveryS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for the Amazon S3 bucket. </p>  <p>This field is
     * optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3KeyPrefix() const { return m_deliveryS3KeyPrefix; }
    inline bool DeliveryS3KeyPrefixHasBeenSet() const { return m_deliveryS3KeyPrefixHasBeenSet; }
    template<typename DeliveryS3KeyPrefixT = Aws::String>
    void SetDeliveryS3KeyPrefix(DeliveryS3KeyPrefixT&& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = std::forward<DeliveryS3KeyPrefixT>(value); }
    template<typename DeliveryS3KeyPrefixT = Aws::String>
    PutConformancePackRequest& WithDeliveryS3KeyPrefix(DeliveryS3KeyPrefixT&& value) { SetDeliveryS3KeyPrefix(std::forward<DeliveryS3KeyPrefixT>(value)); return *this;}
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
    PutConformancePackRequest& WithConformancePackInputParameters(ConformancePackInputParametersT&& value) { SetConformancePackInputParameters(std::forward<ConformancePackInputParametersT>(value)); return *this;}
    template<typename ConformancePackInputParametersT = ConformancePackInputParameter>
    PutConformancePackRequest& AddConformancePackInputParameters(ConformancePackInputParametersT&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.emplace_back(std::forward<ConformancePackInputParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object of type <code>TemplateSSMDocumentDetails</code>, which contains the
     * name or the Amazon Resource Name (ARN) of the Amazon Web Services Systems
     * Manager document (SSM document) and the version of the SSM document that is used
     * to create a conformance pack.</p>
     */
    inline const TemplateSSMDocumentDetails& GetTemplateSSMDocumentDetails() const { return m_templateSSMDocumentDetails; }
    inline bool TemplateSSMDocumentDetailsHasBeenSet() const { return m_templateSSMDocumentDetailsHasBeenSet; }
    template<typename TemplateSSMDocumentDetailsT = TemplateSSMDocumentDetails>
    void SetTemplateSSMDocumentDetails(TemplateSSMDocumentDetailsT&& value) { m_templateSSMDocumentDetailsHasBeenSet = true; m_templateSSMDocumentDetails = std::forward<TemplateSSMDocumentDetailsT>(value); }
    template<typename TemplateSSMDocumentDetailsT = TemplateSSMDocumentDetails>
    PutConformancePackRequest& WithTemplateSSMDocumentDetails(TemplateSSMDocumentDetailsT&& value) { SetTemplateSSMDocumentDetails(std::forward<TemplateSSMDocumentDetailsT>(value)); return *this;}
    ///@}
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
