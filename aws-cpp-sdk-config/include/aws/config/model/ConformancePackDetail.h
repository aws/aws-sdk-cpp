/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * AWS Config rules and remediation actions that can be easily deployed in an
   * account and a region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackDetail">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ConformancePackDetail
  {
  public:
    ConformancePackDetail();
    ConformancePackDetail(Aws::Utils::Json::JsonView jsonValue);
    ConformancePackDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = value; }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::move(value); }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline void SetConformancePackName(const char* value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName.assign(value); }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline ConformancePackDetail& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline ConformancePackDetail& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline ConformancePackDetail& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackArn() const{ return m_conformancePackArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the conformance pack.</p>
     */
    inline bool ConformancePackArnHasBeenSet() const { return m_conformancePackArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the conformance pack.</p>
     */
    inline void SetConformancePackArn(const Aws::String& value) { m_conformancePackArnHasBeenSet = true; m_conformancePackArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the conformance pack.</p>
     */
    inline void SetConformancePackArn(Aws::String&& value) { m_conformancePackArnHasBeenSet = true; m_conformancePackArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the conformance pack.</p>
     */
    inline void SetConformancePackArn(const char* value) { m_conformancePackArnHasBeenSet = true; m_conformancePackArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the conformance pack.</p>
     */
    inline ConformancePackDetail& WithConformancePackArn(const Aws::String& value) { SetConformancePackArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the conformance pack.</p>
     */
    inline ConformancePackDetail& WithConformancePackArn(Aws::String&& value) { SetConformancePackArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the conformance pack.</p>
     */
    inline ConformancePackDetail& WithConformancePackArn(const char* value) { SetConformancePackArn(value); return *this;}


    /**
     * <p>ID of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackId() const{ return m_conformancePackId; }

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline bool ConformancePackIdHasBeenSet() const { return m_conformancePackIdHasBeenSet; }

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline void SetConformancePackId(const Aws::String& value) { m_conformancePackIdHasBeenSet = true; m_conformancePackId = value; }

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline void SetConformancePackId(Aws::String&& value) { m_conformancePackIdHasBeenSet = true; m_conformancePackId = std::move(value); }

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline void SetConformancePackId(const char* value) { m_conformancePackIdHasBeenSet = true; m_conformancePackId.assign(value); }

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline ConformancePackDetail& WithConformancePackId(const Aws::String& value) { SetConformancePackId(value); return *this;}

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline ConformancePackDetail& WithConformancePackId(Aws::String&& value) { SetConformancePackId(std::move(value)); return *this;}

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline ConformancePackDetail& WithConformancePackId(const char* value) { SetConformancePackId(value); return *this;}


    /**
     * <p>Conformance pack template that is used to create a pack. The delivery bucket
     * name should start with awsconfigconforms. For example: "Resource":
     * "arn:aws:s3:::your_bucket_name/ *".</p>
     */
    inline const Aws::String& GetDeliveryS3Bucket() const{ return m_deliveryS3Bucket; }

    /**
     * <p>Conformance pack template that is used to create a pack. The delivery bucket
     * name should start with awsconfigconforms. For example: "Resource":
     * "arn:aws:s3:::your_bucket_name/ *".</p>
     */
    inline bool DeliveryS3BucketHasBeenSet() const { return m_deliveryS3BucketHasBeenSet; }

    /**
     * <p>Conformance pack template that is used to create a pack. The delivery bucket
     * name should start with awsconfigconforms. For example: "Resource":
     * "arn:aws:s3:::your_bucket_name/ *".</p>
     */
    inline void SetDeliveryS3Bucket(const Aws::String& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = value; }

    /**
     * <p>Conformance pack template that is used to create a pack. The delivery bucket
     * name should start with awsconfigconforms. For example: "Resource":
     * "arn:aws:s3:::your_bucket_name/ *".</p>
     */
    inline void SetDeliveryS3Bucket(Aws::String&& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = std::move(value); }

    /**
     * <p>Conformance pack template that is used to create a pack. The delivery bucket
     * name should start with awsconfigconforms. For example: "Resource":
     * "arn:aws:s3:::your_bucket_name/ *".</p>
     */
    inline void SetDeliveryS3Bucket(const char* value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket.assign(value); }

    /**
     * <p>Conformance pack template that is used to create a pack. The delivery bucket
     * name should start with awsconfigconforms. For example: "Resource":
     * "arn:aws:s3:::your_bucket_name/ *".</p>
     */
    inline ConformancePackDetail& WithDeliveryS3Bucket(const Aws::String& value) { SetDeliveryS3Bucket(value); return *this;}

    /**
     * <p>Conformance pack template that is used to create a pack. The delivery bucket
     * name should start with awsconfigconforms. For example: "Resource":
     * "arn:aws:s3:::your_bucket_name/ *".</p>
     */
    inline ConformancePackDetail& WithDeliveryS3Bucket(Aws::String&& value) { SetDeliveryS3Bucket(std::move(value)); return *this;}

    /**
     * <p>Conformance pack template that is used to create a pack. The delivery bucket
     * name should start with awsconfigconforms. For example: "Resource":
     * "arn:aws:s3:::your_bucket_name/ *".</p>
     */
    inline ConformancePackDetail& WithDeliveryS3Bucket(const char* value) { SetDeliveryS3Bucket(value); return *this;}


    /**
     * <p>The prefix for the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetDeliveryS3KeyPrefix() const{ return m_deliveryS3KeyPrefix; }

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>
     */
    inline bool DeliveryS3KeyPrefixHasBeenSet() const { return m_deliveryS3KeyPrefixHasBeenSet; }

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>
     */
    inline void SetDeliveryS3KeyPrefix(const Aws::String& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = value; }

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>
     */
    inline void SetDeliveryS3KeyPrefix(Aws::String&& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = std::move(value); }

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>
     */
    inline void SetDeliveryS3KeyPrefix(const char* value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix.assign(value); }

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>
     */
    inline ConformancePackDetail& WithDeliveryS3KeyPrefix(const Aws::String& value) { SetDeliveryS3KeyPrefix(value); return *this;}

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>
     */
    inline ConformancePackDetail& WithDeliveryS3KeyPrefix(Aws::String&& value) { SetDeliveryS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix for the Amazon S3 bucket.</p>
     */
    inline ConformancePackDetail& WithDeliveryS3KeyPrefix(const char* value) { SetDeliveryS3KeyPrefix(value); return *this;}


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
    inline ConformancePackDetail& WithConformancePackInputParameters(const Aws::Vector<ConformancePackInputParameter>& value) { SetConformancePackInputParameters(value); return *this;}

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline ConformancePackDetail& WithConformancePackInputParameters(Aws::Vector<ConformancePackInputParameter>&& value) { SetConformancePackInputParameters(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline ConformancePackDetail& AddConformancePackInputParameters(const ConformancePackInputParameter& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline ConformancePackDetail& AddConformancePackInputParameters(ConformancePackInputParameter&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>Last time when conformation pack update was requested. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateRequestedTime() const{ return m_lastUpdateRequestedTime; }

    /**
     * <p>Last time when conformation pack update was requested. </p>
     */
    inline bool LastUpdateRequestedTimeHasBeenSet() const { return m_lastUpdateRequestedTimeHasBeenSet; }

    /**
     * <p>Last time when conformation pack update was requested. </p>
     */
    inline void SetLastUpdateRequestedTime(const Aws::Utils::DateTime& value) { m_lastUpdateRequestedTimeHasBeenSet = true; m_lastUpdateRequestedTime = value; }

    /**
     * <p>Last time when conformation pack update was requested. </p>
     */
    inline void SetLastUpdateRequestedTime(Aws::Utils::DateTime&& value) { m_lastUpdateRequestedTimeHasBeenSet = true; m_lastUpdateRequestedTime = std::move(value); }

    /**
     * <p>Last time when conformation pack update was requested. </p>
     */
    inline ConformancePackDetail& WithLastUpdateRequestedTime(const Aws::Utils::DateTime& value) { SetLastUpdateRequestedTime(value); return *this;}

    /**
     * <p>Last time when conformation pack update was requested. </p>
     */
    inline ConformancePackDetail& WithLastUpdateRequestedTime(Aws::Utils::DateTime&& value) { SetLastUpdateRequestedTime(std::move(value)); return *this;}


    /**
     * <p>AWS service that created the conformance pack.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>AWS service that created the conformance pack.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>AWS service that created the conformance pack.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>AWS service that created the conformance pack.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>AWS service that created the conformance pack.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>AWS service that created the conformance pack.</p>
     */
    inline ConformancePackDetail& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>AWS service that created the conformance pack.</p>
     */
    inline ConformancePackDetail& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>AWS service that created the conformance pack.</p>
     */
    inline ConformancePackDetail& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}

  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet;

    Aws::String m_conformancePackArn;
    bool m_conformancePackArnHasBeenSet;

    Aws::String m_conformancePackId;
    bool m_conformancePackIdHasBeenSet;

    Aws::String m_deliveryS3Bucket;
    bool m_deliveryS3BucketHasBeenSet;

    Aws::String m_deliveryS3KeyPrefix;
    bool m_deliveryS3KeyPrefixHasBeenSet;

    Aws::Vector<ConformancePackInputParameter> m_conformancePackInputParameters;
    bool m_conformancePackInputParametersHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateRequestedTime;
    bool m_lastUpdateRequestedTimeHasBeenSet;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
