/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-zonal-shift/model/ZonalShiftInResource.h>
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
namespace ARCZonalShift
{
namespace Model
{
  class GetManagedResourceResult
  {
  public:
    AWS_ARCZONALSHIFT_API GetManagedResourceResult();
    AWS_ARCZONALSHIFT_API GetManagedResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API GetManagedResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetAppliedWeights() const{ return m_appliedWeights; }

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline void SetAppliedWeights(const Aws::Map<Aws::String, double>& value) { m_appliedWeights = value; }

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline void SetAppliedWeights(Aws::Map<Aws::String, double>&& value) { m_appliedWeights = std::move(value); }

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline GetManagedResourceResult& WithAppliedWeights(const Aws::Map<Aws::String, double>& value) { SetAppliedWeights(value); return *this;}

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline GetManagedResourceResult& WithAppliedWeights(Aws::Map<Aws::String, double>&& value) { SetAppliedWeights(std::move(value)); return *this;}

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline GetManagedResourceResult& AddAppliedWeights(const Aws::String& key, double value) { m_appliedWeights.emplace(key, value); return *this; }

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline GetManagedResourceResult& AddAppliedWeights(Aws::String&& key, double value) { m_appliedWeights.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline GetManagedResourceResult& AddAppliedWeights(const char* key, double value) { m_appliedWeights.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource.</p>
     */
    inline GetManagedResourceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the resource.</p>
     */
    inline GetManagedResourceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the resource.</p>
     */
    inline GetManagedResourceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline GetManagedResourceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline GetManagedResourceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline GetManagedResourceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The zonal shifts that are currently active for a resource. </p>
     */
    inline const Aws::Vector<ZonalShiftInResource>& GetZonalShifts() const{ return m_zonalShifts; }

    /**
     * <p>The zonal shifts that are currently active for a resource. </p>
     */
    inline void SetZonalShifts(const Aws::Vector<ZonalShiftInResource>& value) { m_zonalShifts = value; }

    /**
     * <p>The zonal shifts that are currently active for a resource. </p>
     */
    inline void SetZonalShifts(Aws::Vector<ZonalShiftInResource>&& value) { m_zonalShifts = std::move(value); }

    /**
     * <p>The zonal shifts that are currently active for a resource. </p>
     */
    inline GetManagedResourceResult& WithZonalShifts(const Aws::Vector<ZonalShiftInResource>& value) { SetZonalShifts(value); return *this;}

    /**
     * <p>The zonal shifts that are currently active for a resource. </p>
     */
    inline GetManagedResourceResult& WithZonalShifts(Aws::Vector<ZonalShiftInResource>&& value) { SetZonalShifts(std::move(value)); return *this;}

    /**
     * <p>The zonal shifts that are currently active for a resource. </p>
     */
    inline GetManagedResourceResult& AddZonalShifts(const ZonalShiftInResource& value) { m_zonalShifts.push_back(value); return *this; }

    /**
     * <p>The zonal shifts that are currently active for a resource. </p>
     */
    inline GetManagedResourceResult& AddZonalShifts(ZonalShiftInResource&& value) { m_zonalShifts.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, double> m_appliedWeights;

    Aws::String m_arn;

    Aws::String m_name;

    Aws::Vector<ZonalShiftInResource> m_zonalShifts;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
