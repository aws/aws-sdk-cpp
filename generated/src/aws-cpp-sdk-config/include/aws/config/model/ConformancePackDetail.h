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
    AWS_CONFIGSERVICE_API ConformancePackDetail() = default;
    AWS_CONFIGSERVICE_API ConformancePackDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const { return m_conformancePackName; }
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }
    template<typename ConformancePackNameT = Aws::String>
    void SetConformancePackName(ConformancePackNameT&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::forward<ConformancePackNameT>(value); }
    template<typename ConformancePackNameT = Aws::String>
    ConformancePackDetail& WithConformancePackName(ConformancePackNameT&& value) { SetConformancePackName(std::forward<ConformancePackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackArn() const { return m_conformancePackArn; }
    inline bool ConformancePackArnHasBeenSet() const { return m_conformancePackArnHasBeenSet; }
    template<typename ConformancePackArnT = Aws::String>
    void SetConformancePackArn(ConformancePackArnT&& value) { m_conformancePackArnHasBeenSet = true; m_conformancePackArn = std::forward<ConformancePackArnT>(value); }
    template<typename ConformancePackArnT = Aws::String>
    ConformancePackDetail& WithConformancePackArn(ConformancePackArnT&& value) { SetConformancePackArn(std::forward<ConformancePackArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackId() const { return m_conformancePackId; }
    inline bool ConformancePackIdHasBeenSet() const { return m_conformancePackIdHasBeenSet; }
    template<typename ConformancePackIdT = Aws::String>
    void SetConformancePackId(ConformancePackIdT&& value) { m_conformancePackIdHasBeenSet = true; m_conformancePackId = std::forward<ConformancePackIdT>(value); }
    template<typename ConformancePackIdT = Aws::String>
    ConformancePackDetail& WithConformancePackId(ConformancePackIdT&& value) { SetConformancePackId(std::forward<ConformancePackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates. </p>  <p>This field is optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3Bucket() const { return m_deliveryS3Bucket; }
    inline bool DeliveryS3BucketHasBeenSet() const { return m_deliveryS3BucketHasBeenSet; }
    template<typename DeliveryS3BucketT = Aws::String>
    void SetDeliveryS3Bucket(DeliveryS3BucketT&& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = std::forward<DeliveryS3BucketT>(value); }
    template<typename DeliveryS3BucketT = Aws::String>
    ConformancePackDetail& WithDeliveryS3Bucket(DeliveryS3BucketT&& value) { SetDeliveryS3Bucket(std::forward<DeliveryS3BucketT>(value)); return *this;}
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
    ConformancePackDetail& WithDeliveryS3KeyPrefix(DeliveryS3KeyPrefixT&& value) { SetDeliveryS3KeyPrefix(std::forward<DeliveryS3KeyPrefixT>(value)); return *this;}
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
    ConformancePackDetail& WithConformancePackInputParameters(ConformancePackInputParametersT&& value) { SetConformancePackInputParameters(std::forward<ConformancePackInputParametersT>(value)); return *this;}
    template<typename ConformancePackInputParametersT = ConformancePackInputParameter>
    ConformancePackDetail& AddConformancePackInputParameters(ConformancePackInputParametersT&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.emplace_back(std::forward<ConformancePackInputParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last time a conformation pack update was requested. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateRequestedTime() const { return m_lastUpdateRequestedTime; }
    inline bool LastUpdateRequestedTimeHasBeenSet() const { return m_lastUpdateRequestedTimeHasBeenSet; }
    template<typename LastUpdateRequestedTimeT = Aws::Utils::DateTime>
    void SetLastUpdateRequestedTime(LastUpdateRequestedTimeT&& value) { m_lastUpdateRequestedTimeHasBeenSet = true; m_lastUpdateRequestedTime = std::forward<LastUpdateRequestedTimeT>(value); }
    template<typename LastUpdateRequestedTimeT = Aws::Utils::DateTime>
    ConformancePackDetail& WithLastUpdateRequestedTime(LastUpdateRequestedTimeT&& value) { SetLastUpdateRequestedTime(std::forward<LastUpdateRequestedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service that created the conformance pack.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    ConformancePackDetail& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the name or Amazon Resource Name (ARN) of the Amazon
     * Web Services Systems Manager document (SSM document) and the version of the SSM
     * document that is used to create a conformance pack.</p>
     */
    inline const TemplateSSMDocumentDetails& GetTemplateSSMDocumentDetails() const { return m_templateSSMDocumentDetails; }
    inline bool TemplateSSMDocumentDetailsHasBeenSet() const { return m_templateSSMDocumentDetailsHasBeenSet; }
    template<typename TemplateSSMDocumentDetailsT = TemplateSSMDocumentDetails>
    void SetTemplateSSMDocumentDetails(TemplateSSMDocumentDetailsT&& value) { m_templateSSMDocumentDetailsHasBeenSet = true; m_templateSSMDocumentDetails = std::forward<TemplateSSMDocumentDetailsT>(value); }
    template<typename TemplateSSMDocumentDetailsT = TemplateSSMDocumentDetails>
    ConformancePackDetail& WithTemplateSSMDocumentDetails(TemplateSSMDocumentDetailsT&& value) { SetTemplateSSMDocumentDetails(std::forward<TemplateSSMDocumentDetailsT>(value)); return *this;}
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

    Aws::Utils::DateTime m_lastUpdateRequestedTime{};
    bool m_lastUpdateRequestedTimeHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    TemplateSSMDocumentDetails m_templateSSMDocumentDetails;
    bool m_templateSSMDocumentDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
