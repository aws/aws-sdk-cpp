/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/config/model/TemplateSSMDocumentDetails.h>
#include <aws/config/model/ConformancePackInputParameter.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Returns details of a conformance pack. A conformance pack is a collection of
   * Config rules and remediation actions that can be easily deployed in an account
   * and a region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackDetail">AWS
   * API Reference</a></p>
   */
  class ConformancePackDetail
  {
  public:
    AWS_CONFIGSERVICE_API ConformancePackDetail();
    AWS_CONFIGSERVICE_API ConformancePackDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = value; }
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::move(value); }
    inline void SetConformancePackName(const char* value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName.assign(value); }
    inline ConformancePackDetail& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}
    inline ConformancePackDetail& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}
    inline ConformancePackDetail& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackArn() const{ return m_conformancePackArn; }
    inline bool ConformancePackArnHasBeenSet() const { return m_conformancePackArnHasBeenSet; }
    inline void SetConformancePackArn(const Aws::String& value) { m_conformancePackArnHasBeenSet = true; m_conformancePackArn = value; }
    inline void SetConformancePackArn(Aws::String&& value) { m_conformancePackArnHasBeenSet = true; m_conformancePackArn = std::move(value); }
    inline void SetConformancePackArn(const char* value) { m_conformancePackArnHasBeenSet = true; m_conformancePackArn.assign(value); }
    inline ConformancePackDetail& WithConformancePackArn(const Aws::String& value) { SetConformancePackArn(value); return *this;}
    inline ConformancePackDetail& WithConformancePackArn(Aws::String&& value) { SetConformancePackArn(std::move(value)); return *this;}
    inline ConformancePackDetail& WithConformancePackArn(const char* value) { SetConformancePackArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackId() const{ return m_conformancePackId; }
    inline bool ConformancePackIdHasBeenSet() const { return m_conformancePackIdHasBeenSet; }
    inline void SetConformancePackId(const Aws::String& value) { m_conformancePackIdHasBeenSet = true; m_conformancePackId = value; }
    inline void SetConformancePackId(Aws::String&& value) { m_conformancePackIdHasBeenSet = true; m_conformancePackId = std::move(value); }
    inline void SetConformancePackId(const char* value) { m_conformancePackIdHasBeenSet = true; m_conformancePackId.assign(value); }
    inline ConformancePackDetail& WithConformancePackId(const Aws::String& value) { SetConformancePackId(value); return *this;}
    inline ConformancePackDetail& WithConformancePackId(Aws::String&& value) { SetConformancePackId(std::move(value)); return *this;}
    inline ConformancePackDetail& WithConformancePackId(const char* value) { SetConformancePackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates. </p>  <p>This field is optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3Bucket() const{ return m_deliveryS3Bucket; }
    inline bool DeliveryS3BucketHasBeenSet() const { return m_deliveryS3BucketHasBeenSet; }
    inline void SetDeliveryS3Bucket(const Aws::String& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = value; }
    inline void SetDeliveryS3Bucket(Aws::String&& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = std::move(value); }
    inline void SetDeliveryS3Bucket(const char* value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket.assign(value); }
    inline ConformancePackDetail& WithDeliveryS3Bucket(const Aws::String& value) { SetDeliveryS3Bucket(value); return *this;}
    inline ConformancePackDetail& WithDeliveryS3Bucket(Aws::String&& value) { SetDeliveryS3Bucket(std::move(value)); return *this;}
    inline ConformancePackDetail& WithDeliveryS3Bucket(const char* value) { SetDeliveryS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for the Amazon S3 bucket.</p>  <p>This field is
     * optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3KeyPrefix() const{ return m_deliveryS3KeyPrefix; }
    inline bool DeliveryS3KeyPrefixHasBeenSet() const { return m_deliveryS3KeyPrefixHasBeenSet; }
    inline void SetDeliveryS3KeyPrefix(const Aws::String& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = value; }
    inline void SetDeliveryS3KeyPrefix(Aws::String&& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = std::move(value); }
    inline void SetDeliveryS3KeyPrefix(const char* value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix.assign(value); }
    inline ConformancePackDetail& WithDeliveryS3KeyPrefix(const Aws::String& value) { SetDeliveryS3KeyPrefix(value); return *this;}
    inline ConformancePackDetail& WithDeliveryS3KeyPrefix(Aws::String&& value) { SetDeliveryS3KeyPrefix(std::move(value)); return *this;}
    inline ConformancePackDetail& WithDeliveryS3KeyPrefix(const char* value) { SetDeliveryS3KeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackInputParameter>& GetConformancePackInputParameters() const{ return m_conformancePackInputParameters; }
    inline bool ConformancePackInputParametersHasBeenSet() const { return m_conformancePackInputParametersHasBeenSet; }
    inline void SetConformancePackInputParameters(const Aws::Vector<ConformancePackInputParameter>& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters = value; }
    inline void SetConformancePackInputParameters(Aws::Vector<ConformancePackInputParameter>&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters = std::move(value); }
    inline ConformancePackDetail& WithConformancePackInputParameters(const Aws::Vector<ConformancePackInputParameter>& value) { SetConformancePackInputParameters(value); return *this;}
    inline ConformancePackDetail& WithConformancePackInputParameters(Aws::Vector<ConformancePackInputParameter>&& value) { SetConformancePackInputParameters(std::move(value)); return *this;}
    inline ConformancePackDetail& AddConformancePackInputParameters(const ConformancePackInputParameter& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.push_back(value); return *this; }
    inline ConformancePackDetail& AddConformancePackInputParameters(ConformancePackInputParameter&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last time a conformation pack update was requested. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateRequestedTime() const{ return m_lastUpdateRequestedTime; }
    inline bool LastUpdateRequestedTimeHasBeenSet() const { return m_lastUpdateRequestedTimeHasBeenSet; }
    inline void SetLastUpdateRequestedTime(const Aws::Utils::DateTime& value) { m_lastUpdateRequestedTimeHasBeenSet = true; m_lastUpdateRequestedTime = value; }
    inline void SetLastUpdateRequestedTime(Aws::Utils::DateTime&& value) { m_lastUpdateRequestedTimeHasBeenSet = true; m_lastUpdateRequestedTime = std::move(value); }
    inline ConformancePackDetail& WithLastUpdateRequestedTime(const Aws::Utils::DateTime& value) { SetLastUpdateRequestedTime(value); return *this;}
    inline ConformancePackDetail& WithLastUpdateRequestedTime(Aws::Utils::DateTime&& value) { SetLastUpdateRequestedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service that created the conformance pack.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline ConformancePackDetail& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline ConformancePackDetail& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline ConformancePackDetail& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the name or Amazon Resource Name (ARN) of the Amazon
     * Web Services Systems Manager document (SSM document) and the version of the SSM
     * document that is used to create a conformance pack.</p>
     */
    inline const TemplateSSMDocumentDetails& GetTemplateSSMDocumentDetails() const{ return m_templateSSMDocumentDetails; }
    inline bool TemplateSSMDocumentDetailsHasBeenSet() const { return m_templateSSMDocumentDetailsHasBeenSet; }
    inline void SetTemplateSSMDocumentDetails(const TemplateSSMDocumentDetails& value) { m_templateSSMDocumentDetailsHasBeenSet = true; m_templateSSMDocumentDetails = value; }
    inline void SetTemplateSSMDocumentDetails(TemplateSSMDocumentDetails&& value) { m_templateSSMDocumentDetailsHasBeenSet = true; m_templateSSMDocumentDetails = std::move(value); }
    inline ConformancePackDetail& WithTemplateSSMDocumentDetails(const TemplateSSMDocumentDetails& value) { SetTemplateSSMDocumentDetails(value); return *this;}
    inline ConformancePackDetail& WithTemplateSSMDocumentDetails(TemplateSSMDocumentDetails&& value) { SetTemplateSSMDocumentDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    Aws::String m_conformancePackArn;
    bool m_conformancePackArnHasBeenSet = false;

    Aws::String m_conformancePackId;
    bool m_conformancePackIdHasBeenSet = false;

    Aws::String m_deliveryS3Bucket;
    bool m_deliveryS3BucketHasBeenSet = false;

    Aws::String m_deliveryS3KeyPrefix;
    bool m_deliveryS3KeyPrefixHasBeenSet = false;

    Aws::Vector<ConformancePackInputParameter> m_conformancePackInputParameters;
    bool m_conformancePackInputParametersHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateRequestedTime;
    bool m_lastUpdateRequestedTimeHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    TemplateSSMDocumentDetails m_templateSSMDocumentDetails;
    bool m_templateSSMDocumentDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
