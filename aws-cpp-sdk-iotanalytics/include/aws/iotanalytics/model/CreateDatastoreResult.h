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
  class AWS_IOTANALYTICS_API CreateDatastoreResult
  {
  public:
    CreateDatastoreResult();
    CreateDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the data store.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreName = value; }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreName = std::move(value); }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetDatastoreName(const char* value) { m_datastoreName.assign(value); }

    /**
     * <p>The name of the data store.</p>
     */
    inline CreateDatastoreResult& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}

    /**
     * <p>The name of the data store.</p>
     */
    inline CreateDatastoreResult& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}

    /**
     * <p>The name of the data store.</p>
     */
    inline CreateDatastoreResult& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}


    /**
     * <p>The ARN of the data store.</p>
     */
    inline const Aws::String& GetDatastoreArn() const{ return m_datastoreArn; }

    /**
     * <p>The ARN of the data store.</p>
     */
    inline void SetDatastoreArn(const Aws::String& value) { m_datastoreArn = value; }

    /**
     * <p>The ARN of the data store.</p>
     */
    inline void SetDatastoreArn(Aws::String&& value) { m_datastoreArn = std::move(value); }

    /**
     * <p>The ARN of the data store.</p>
     */
    inline void SetDatastoreArn(const char* value) { m_datastoreArn.assign(value); }

    /**
     * <p>The ARN of the data store.</p>
     */
    inline CreateDatastoreResult& WithDatastoreArn(const Aws::String& value) { SetDatastoreArn(value); return *this;}

    /**
     * <p>The ARN of the data store.</p>
     */
    inline CreateDatastoreResult& WithDatastoreArn(Aws::String&& value) { SetDatastoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the data store.</p>
     */
    inline CreateDatastoreResult& WithDatastoreArn(const char* value) { SetDatastoreArn(value); return *this;}


    /**
     * <p>How long, in days, message data is kept for the data store.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>How long, in days, message data is kept for the data store.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriod = value; }

    /**
     * <p>How long, in days, message data is kept for the data store.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriod = std::move(value); }

    /**
     * <p>How long, in days, message data is kept for the data store.</p>
     */
    inline CreateDatastoreResult& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>How long, in days, message data is kept for the data store.</p>
     */
    inline CreateDatastoreResult& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}

  private:

    Aws::String m_datastoreName;

    Aws::String m_datastoreArn;

    RetentionPeriod m_retentionPeriod;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
