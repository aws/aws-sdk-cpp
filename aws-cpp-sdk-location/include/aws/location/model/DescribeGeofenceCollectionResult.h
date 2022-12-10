/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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


    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection resource. Used
     * when you need to specify a resource across all AWS. </p> <ul> <li> <p>Format
     * example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetCollectionArn() const{ return m_collectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection resource. Used
     * when you need to specify a resource across all AWS. </p> <ul> <li> <p>Format
     * example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline void SetCollectionArn(const Aws::String& value) { m_collectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection resource. Used
     * when you need to specify a resource across all AWS. </p> <ul> <li> <p>Format
     * example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline void SetCollectionArn(Aws::String&& value) { m_collectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection resource. Used
     * when you need to specify a resource across all AWS. </p> <ul> <li> <p>Format
     * example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline void SetCollectionArn(const char* value) { m_collectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection resource. Used
     * when you need to specify a resource across all AWS. </p> <ul> <li> <p>Format
     * example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline DescribeGeofenceCollectionResult& WithCollectionArn(const Aws::String& value) { SetCollectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection resource. Used
     * when you need to specify a resource across all AWS. </p> <ul> <li> <p>Format
     * example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline DescribeGeofenceCollectionResult& WithCollectionArn(Aws::String&& value) { SetCollectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection resource. Used
     * when you need to specify a resource across all AWS. </p> <ul> <li> <p>Format
     * example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline DescribeGeofenceCollectionResult& WithCollectionArn(const char* value) { SetCollectionArn(value); return *this;}


    /**
     * <p>The name of the geofence collection.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionName = value; }

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionName = std::move(value); }

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline void SetCollectionName(const char* value) { m_collectionName.assign(value); }

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline DescribeGeofenceCollectionResult& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline DescribeGeofenceCollectionResult& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline DescribeGeofenceCollectionResult& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>The timestamp for when the geofence resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp for when the geofence resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp for when the geofence resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp for when the geofence resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline DescribeGeofenceCollectionResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the geofence resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline DescribeGeofenceCollectionResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The optional description for the geofence collection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description for the geofence collection.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The optional description for the geofence collection.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The optional description for the geofence collection.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The optional description for the geofence collection.</p>
     */
    inline DescribeGeofenceCollectionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for the geofence collection.</p>
     */
    inline DescribeGeofenceCollectionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description for the geofence collection.</p>
     */
    inline DescribeGeofenceCollectionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource</p>
     */
    inline DescribeGeofenceCollectionResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource</p>
     */
    inline DescribeGeofenceCollectionResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource</p>
     */
    inline DescribeGeofenceCollectionResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline DescribeGeofenceCollectionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline DescribeGeofenceCollectionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline DescribeGeofenceCollectionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline DescribeGeofenceCollectionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline DescribeGeofenceCollectionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline DescribeGeofenceCollectionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline DescribeGeofenceCollectionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline DescribeGeofenceCollectionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Displays the key, value pairs of tags associated with this resource.</p>
     */
    inline DescribeGeofenceCollectionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The timestamp for when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The timestamp for when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The timestamp for when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The timestamp for when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline DescribeGeofenceCollectionResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp for when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline DescribeGeofenceCollectionResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_collectionArn;

    Aws::String m_collectionName;

    Aws::Utils::DateTime m_createTime;

    Aws::String m_description;

    Aws::String m_kmsKeyId;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
