﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
namespace LocationService
{
namespace Model
{
  class DescribeGeofenceCollectionResult
  {
  public:
    AWS_LOCATIONSERVICE_API DescribeGeofenceCollectionResult();
    AWS_LOCATIONSERVICE_API DescribeGeofenceCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API DescribeGeofenceCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the geofence collection.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }
    inline void SetCollectionName(const Aws::String& value) { m_collectionName = value; }
    inline void SetCollectionName(Aws::String&& value) { m_collectionName = std::move(value); }
    inline void SetCollectionName(const char* value) { m_collectionName.assign(value); }
    inline DescribeGeofenceCollectionResult& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}
    inline DescribeGeofenceCollectionResult& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}
    inline DescribeGeofenceCollectionResult& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection resource. Used
     * when you need to specify a resource across all Amazon Web Services. </p> <ul>
     * <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetCollectionArn() const{ return m_collectionArn; }
    inline void SetCollectionArn(const Aws::String& value) { m_collectionArn = value; }
    inline void SetCollectionArn(Aws::String&& value) { m_collectionArn = std::move(value); }
    inline void SetCollectionArn(const char* value) { m_collectionArn.assign(value); }
    inline DescribeGeofenceCollectionResult& WithCollectionArn(const Aws::String& value) { SetCollectionArn(value); return *this;}
    inline DescribeGeofenceCollectionResult& WithCollectionArn(Aws::String&& value) { SetCollectionArn(std::move(value)); return *this;}
    inline DescribeGeofenceCollectionResult& WithCollectionArn(const char* value) { SetCollectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description for the geofence collection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeGeofenceCollectionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeGeofenceCollectionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeGeofenceCollectionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">Amazon
     * Web Services KMS customer managed key</a> assigned to the Amazon Location
     * resource</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline DescribeGeofenceCollectionResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DescribeGeofenceCollectionResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DescribeGeofenceCollectionResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeGeofenceCollectionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeGeofenceCollectionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeGeofenceCollectionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeGeofenceCollectionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeGeofenceCollectionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeGeofenceCollectionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeGeofenceCollectionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeGeofenceCollectionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeGeofenceCollectionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the geofence resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline DescribeGeofenceCollectionResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline DescribeGeofenceCollectionResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline DescribeGeofenceCollectionResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline DescribeGeofenceCollectionResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of geofences in the geofence collection.</p>
     */
    inline int GetGeofenceCount() const{ return m_geofenceCount; }
    inline void SetGeofenceCount(int value) { m_geofenceCount = value; }
    inline DescribeGeofenceCollectionResult& WithGeofenceCount(int value) { SetGeofenceCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeGeofenceCollectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeGeofenceCollectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeGeofenceCollectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_collectionName;

    Aws::String m_collectionArn;

    Aws::String m_description;

    Aws::String m_kmsKeyId;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_createTime;

    Aws::Utils::DateTime m_updateTime;

    int m_geofenceCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
