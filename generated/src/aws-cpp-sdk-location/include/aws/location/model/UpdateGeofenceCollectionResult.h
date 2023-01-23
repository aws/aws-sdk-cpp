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
  class UpdateGeofenceCollectionResult
  {
  public:
    AWS_LOCATIONSERVICE_API UpdateGeofenceCollectionResult();
    AWS_LOCATIONSERVICE_API UpdateGeofenceCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API UpdateGeofenceCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the updated geofence collection. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetCollectionArn() const{ return m_collectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated geofence collection. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline void SetCollectionArn(const Aws::String& value) { m_collectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated geofence collection. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline void SetCollectionArn(Aws::String&& value) { m_collectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated geofence collection. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline void SetCollectionArn(const char* value) { m_collectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated geofence collection. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline UpdateGeofenceCollectionResult& WithCollectionArn(const Aws::String& value) { SetCollectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated geofence collection. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline UpdateGeofenceCollectionResult& WithCollectionArn(Aws::String&& value) { SetCollectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated geofence collection. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollection</code>
     * </p> </li> </ul>
     */
    inline UpdateGeofenceCollectionResult& WithCollectionArn(const char* value) { SetCollectionArn(value); return *this;}


    /**
     * <p>The name of the updated geofence collection.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>The name of the updated geofence collection.</p>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionName = value; }

    /**
     * <p>The name of the updated geofence collection.</p>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionName = std::move(value); }

    /**
     * <p>The name of the updated geofence collection.</p>
     */
    inline void SetCollectionName(const char* value) { m_collectionName.assign(value); }

    /**
     * <p>The name of the updated geofence collection.</p>
     */
    inline UpdateGeofenceCollectionResult& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>The name of the updated geofence collection.</p>
     */
    inline UpdateGeofenceCollectionResult& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the updated geofence collection.</p>
     */
    inline UpdateGeofenceCollectionResult& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>The time when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The time when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The time when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline UpdateGeofenceCollectionResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline UpdateGeofenceCollectionResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_collectionArn;

    Aws::String m_collectionName;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
