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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ActivityStreamStatus.h>
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
  class AWS_RDS_API StopActivityStreamResult
  {
  public:
    StopActivityStreamResult();
    StopActivityStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    StopActivityStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The AWS KMS key identifier used for encrypting messages in the database
     * activity stream.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key identifier used for encrypting messages in the database
     * activity stream.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key identifier used for encrypting messages in the database
     * activity stream.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key identifier used for encrypting messages in the database
     * activity stream.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key identifier used for encrypting messages in the database
     * activity stream.</p>
     */
    inline StopActivityStreamResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier used for encrypting messages in the database
     * activity stream.</p>
     */
    inline StopActivityStreamResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier used for encrypting messages in the database
     * activity stream.</p>
     */
    inline StopActivityStreamResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline const Aws::String& GetKinesisStreamName() const{ return m_kinesisStreamName; }

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline void SetKinesisStreamName(const Aws::String& value) { m_kinesisStreamName = value; }

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline void SetKinesisStreamName(Aws::String&& value) { m_kinesisStreamName = std::move(value); }

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline void SetKinesisStreamName(const char* value) { m_kinesisStreamName.assign(value); }

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline StopActivityStreamResult& WithKinesisStreamName(const Aws::String& value) { SetKinesisStreamName(value); return *this;}

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline StopActivityStreamResult& WithKinesisStreamName(Aws::String&& value) { SetKinesisStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline StopActivityStreamResult& WithKinesisStreamName(const char* value) { SetKinesisStreamName(value); return *this;}


    /**
     * <p>The status of the database activity stream.</p>
     */
    inline const ActivityStreamStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the database activity stream.</p>
     */
    inline void SetStatus(const ActivityStreamStatus& value) { m_status = value; }

    /**
     * <p>The status of the database activity stream.</p>
     */
    inline void SetStatus(ActivityStreamStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the database activity stream.</p>
     */
    inline StopActivityStreamResult& WithStatus(const ActivityStreamStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the database activity stream.</p>
     */
    inline StopActivityStreamResult& WithStatus(ActivityStreamStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline StopActivityStreamResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline StopActivityStreamResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_kmsKeyId;

    Aws::String m_kinesisStreamName;

    ActivityStreamStatus m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
