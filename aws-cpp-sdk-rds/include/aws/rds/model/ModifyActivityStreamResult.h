/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ActivityStreamStatus.h>
#include <aws/rds/model/ActivityStreamMode.h>
#include <aws/rds/model/ActivityStreamPolicyStatus.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class ModifyActivityStreamResult
  {
  public:
    AWS_RDS_API ModifyActivityStreamResult();
    AWS_RDS_API ModifyActivityStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ModifyActivityStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of messages in the
     * database activity stream.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of messages in the
     * database activity stream.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of messages in the
     * database activity stream.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of messages in the
     * database activity stream.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of messages in the
     * database activity stream.</p>
     */
    inline ModifyActivityStreamResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of messages in the
     * database activity stream.</p>
     */
    inline ModifyActivityStreamResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of messages in the
     * database activity stream.</p>
     */
    inline ModifyActivityStreamResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The name of the Amazon Kinesis data stream to be used for the database
     * activity stream.</p>
     */
    inline const Aws::String& GetKinesisStreamName() const{ return m_kinesisStreamName; }

    /**
     * <p>The name of the Amazon Kinesis data stream to be used for the database
     * activity stream.</p>
     */
    inline void SetKinesisStreamName(const Aws::String& value) { m_kinesisStreamName = value; }

    /**
     * <p>The name of the Amazon Kinesis data stream to be used for the database
     * activity stream.</p>
     */
    inline void SetKinesisStreamName(Aws::String&& value) { m_kinesisStreamName = std::move(value); }

    /**
     * <p>The name of the Amazon Kinesis data stream to be used for the database
     * activity stream.</p>
     */
    inline void SetKinesisStreamName(const char* value) { m_kinesisStreamName.assign(value); }

    /**
     * <p>The name of the Amazon Kinesis data stream to be used for the database
     * activity stream.</p>
     */
    inline ModifyActivityStreamResult& WithKinesisStreamName(const Aws::String& value) { SetKinesisStreamName(value); return *this;}

    /**
     * <p>The name of the Amazon Kinesis data stream to be used for the database
     * activity stream.</p>
     */
    inline ModifyActivityStreamResult& WithKinesisStreamName(Aws::String&& value) { SetKinesisStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Kinesis data stream to be used for the database
     * activity stream.</p>
     */
    inline ModifyActivityStreamResult& WithKinesisStreamName(const char* value) { SetKinesisStreamName(value); return *this;}


    /**
     * <p>The status of the modification to the database activity stream.</p>
     */
    inline const ActivityStreamStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the modification to the database activity stream.</p>
     */
    inline void SetStatus(const ActivityStreamStatus& value) { m_status = value; }

    /**
     * <p>The status of the modification to the database activity stream.</p>
     */
    inline void SetStatus(ActivityStreamStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the modification to the database activity stream.</p>
     */
    inline ModifyActivityStreamResult& WithStatus(const ActivityStreamStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the modification to the database activity stream.</p>
     */
    inline ModifyActivityStreamResult& WithStatus(ActivityStreamStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The mode of the database activity stream.</p>
     */
    inline const ActivityStreamMode& GetMode() const{ return m_mode; }

    /**
     * <p>The mode of the database activity stream.</p>
     */
    inline void SetMode(const ActivityStreamMode& value) { m_mode = value; }

    /**
     * <p>The mode of the database activity stream.</p>
     */
    inline void SetMode(ActivityStreamMode&& value) { m_mode = std::move(value); }

    /**
     * <p>The mode of the database activity stream.</p>
     */
    inline ModifyActivityStreamResult& WithMode(const ActivityStreamMode& value) { SetMode(value); return *this;}

    /**
     * <p>The mode of the database activity stream.</p>
     */
    inline ModifyActivityStreamResult& WithMode(ActivityStreamMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>Indicates whether engine-native audit fields are included in the database
     * activity stream.</p>
     */
    inline bool GetEngineNativeAuditFieldsIncluded() const{ return m_engineNativeAuditFieldsIncluded; }

    /**
     * <p>Indicates whether engine-native audit fields are included in the database
     * activity stream.</p>
     */
    inline void SetEngineNativeAuditFieldsIncluded(bool value) { m_engineNativeAuditFieldsIncluded = value; }

    /**
     * <p>Indicates whether engine-native audit fields are included in the database
     * activity stream.</p>
     */
    inline ModifyActivityStreamResult& WithEngineNativeAuditFieldsIncluded(bool value) { SetEngineNativeAuditFieldsIncluded(value); return *this;}


    /**
     * <p>The status of the modification to the policy state of the database activity
     * stream.</p>
     */
    inline const ActivityStreamPolicyStatus& GetPolicyStatus() const{ return m_policyStatus; }

    /**
     * <p>The status of the modification to the policy state of the database activity
     * stream.</p>
     */
    inline void SetPolicyStatus(const ActivityStreamPolicyStatus& value) { m_policyStatus = value; }

    /**
     * <p>The status of the modification to the policy state of the database activity
     * stream.</p>
     */
    inline void SetPolicyStatus(ActivityStreamPolicyStatus&& value) { m_policyStatus = std::move(value); }

    /**
     * <p>The status of the modification to the policy state of the database activity
     * stream.</p>
     */
    inline ModifyActivityStreamResult& WithPolicyStatus(const ActivityStreamPolicyStatus& value) { SetPolicyStatus(value); return *this;}

    /**
     * <p>The status of the modification to the policy state of the database activity
     * stream.</p>
     */
    inline ModifyActivityStreamResult& WithPolicyStatus(ActivityStreamPolicyStatus&& value) { SetPolicyStatus(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyActivityStreamResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyActivityStreamResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_kmsKeyId;

    Aws::String m_kinesisStreamName;

    ActivityStreamStatus m_status;

    ActivityStreamMode m_mode;

    bool m_engineNativeAuditFieldsIncluded;

    ActivityStreamPolicyStatus m_policyStatus;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
