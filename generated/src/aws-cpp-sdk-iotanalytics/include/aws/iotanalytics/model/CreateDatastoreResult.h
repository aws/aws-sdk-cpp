/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/RetentionPeriod.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTAnalytics
{
namespace Model
{
  class CreateDatastoreResult
  {
  public:
    AWS_IOTANALYTICS_API CreateDatastoreResult();
    AWS_IOTANALYTICS_API CreateDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API CreateDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the data store.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreName = value; }
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreName = std::move(value); }
    inline void SetDatastoreName(const char* value) { m_datastoreName.assign(value); }
    inline CreateDatastoreResult& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}
    inline CreateDatastoreResult& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}
    inline CreateDatastoreResult& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the data store.</p>
     */
    inline const Aws::String& GetDatastoreArn() const{ return m_datastoreArn; }
    inline void SetDatastoreArn(const Aws::String& value) { m_datastoreArn = value; }
    inline void SetDatastoreArn(Aws::String&& value) { m_datastoreArn = std::move(value); }
    inline void SetDatastoreArn(const char* value) { m_datastoreArn.assign(value); }
    inline CreateDatastoreResult& WithDatastoreArn(const Aws::String& value) { SetDatastoreArn(value); return *this;}
    inline CreateDatastoreResult& WithDatastoreArn(Aws::String&& value) { SetDatastoreArn(std::move(value)); return *this;}
    inline CreateDatastoreResult& WithDatastoreArn(const char* value) { SetDatastoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long, in days, message data is kept for the data store.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriod = value; }
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriod = std::move(value); }
    inline CreateDatastoreResult& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}
    inline CreateDatastoreResult& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDatastoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDatastoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDatastoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_datastoreName;

    Aws::String m_datastoreArn;

    RetentionPeriod m_retentionPeriod;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
