/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateGeofenceCollectionResult
  {
  public:
    AWS_LOCATIONSERVICE_API CreateGeofenceCollectionResult();
    AWS_LOCATIONSERVICE_API CreateGeofenceCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CreateGeofenceCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateGeofenceCollectionResult& WithCollectionArn(const Aws::String& value) { SetCollectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection resource. Used
     * when you need to specify a resource across all AWS. </p> <ul> <li> <p>Format
     * example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline CreateGeofenceCollectionResult& WithCollectionArn(Aws::String&& value) { SetCollectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection resource. Used
     * when you need to specify a resource across all AWS. </p> <ul> <li> <p>Format
     * example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline CreateGeofenceCollectionResult& WithCollectionArn(const char* value) { SetCollectionArn(value); return *this;}


    /**
     * <p>The name for the geofence collection.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>The name for the geofence collection.</p>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionName = value; }

    /**
     * <p>The name for the geofence collection.</p>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionName = std::move(value); }

    /**
     * <p>The name for the geofence collection.</p>
     */
    inline void SetCollectionName(const char* value) { m_collectionName.assign(value); }

    /**
     * <p>The name for the geofence collection.</p>
     */
    inline CreateGeofenceCollectionResult& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>The name for the geofence collection.</p>
     */
    inline CreateGeofenceCollectionResult& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>The name for the geofence collection.</p>
     */
    inline CreateGeofenceCollectionResult& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>The timestamp for when the geofence collection was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp for when the geofence collection was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp for when the geofence collection was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp for when the geofence collection was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline CreateGeofenceCollectionResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the geofence collection was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline CreateGeofenceCollectionResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}

  private:

    Aws::String m_collectionArn;

    Aws::String m_collectionName;

    Aws::Utils::DateTime m_createTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
