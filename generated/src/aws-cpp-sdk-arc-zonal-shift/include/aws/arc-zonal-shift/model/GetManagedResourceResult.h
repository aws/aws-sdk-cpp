/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-zonal-shift/model/PracticeRunConfiguration.h>
#include <aws/arc-zonal-shift/model/ZonalAutoshiftStatus.h>
#include <aws/arc-zonal-shift/model/AutoshiftInResource.h>
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
     * <p>An array of the autoshifts that are active for the resource.</p>
     */
    inline const Aws::Vector<AutoshiftInResource>& GetAutoshifts() const{ return m_autoshifts; }

    /**
     * <p>An array of the autoshifts that are active for the resource.</p>
     */
    inline void SetAutoshifts(const Aws::Vector<AutoshiftInResource>& value) { m_autoshifts = value; }

    /**
     * <p>An array of the autoshifts that are active for the resource.</p>
     */
    inline void SetAutoshifts(Aws::Vector<AutoshiftInResource>&& value) { m_autoshifts = std::move(value); }

    /**
     * <p>An array of the autoshifts that are active for the resource.</p>
     */
    inline GetManagedResourceResult& WithAutoshifts(const Aws::Vector<AutoshiftInResource>& value) { SetAutoshifts(value); return *this;}

    /**
     * <p>An array of the autoshifts that are active for the resource.</p>
     */
    inline GetManagedResourceResult& WithAutoshifts(Aws::Vector<AutoshiftInResource>&& value) { SetAutoshifts(std::move(value)); return *this;}

    /**
     * <p>An array of the autoshifts that are active for the resource.</p>
     */
    inline GetManagedResourceResult& AddAutoshifts(const AutoshiftInResource& value) { m_autoshifts.push_back(value); return *this; }

    /**
     * <p>An array of the autoshifts that are active for the resource.</p>
     */
    inline GetManagedResourceResult& AddAutoshifts(AutoshiftInResource&& value) { m_autoshifts.push_back(std::move(value)); return *this; }


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
     * <p>The practice run configuration for zonal autoshift that's associated with the
     * resource.</p>
     */
    inline const PracticeRunConfiguration& GetPracticeRunConfiguration() const{ return m_practiceRunConfiguration; }

    /**
     * <p>The practice run configuration for zonal autoshift that's associated with the
     * resource.</p>
     */
    inline void SetPracticeRunConfiguration(const PracticeRunConfiguration& value) { m_practiceRunConfiguration = value; }

    /**
     * <p>The practice run configuration for zonal autoshift that's associated with the
     * resource.</p>
     */
    inline void SetPracticeRunConfiguration(PracticeRunConfiguration&& value) { m_practiceRunConfiguration = std::move(value); }

    /**
     * <p>The practice run configuration for zonal autoshift that's associated with the
     * resource.</p>
     */
    inline GetManagedResourceResult& WithPracticeRunConfiguration(const PracticeRunConfiguration& value) { SetPracticeRunConfiguration(value); return *this;}

    /**
     * <p>The practice run configuration for zonal autoshift that's associated with the
     * resource.</p>
     */
    inline GetManagedResourceResult& WithPracticeRunConfiguration(PracticeRunConfiguration&& value) { SetPracticeRunConfiguration(std::move(value)); return *this;}


    /**
     * <p>The status for zonal autoshift for a resource. When the autoshift status is
     * <code>ENABLED</code>, Amazon Web Services shifts traffic for a resource away
     * from an Availability Zone, on your behalf, when Amazon Web Services determines
     * that there's an issue in the Availability Zone that could potentially affect
     * customers.</p>
     */
    inline const ZonalAutoshiftStatus& GetZonalAutoshiftStatus() const{ return m_zonalAutoshiftStatus; }

    /**
     * <p>The status for zonal autoshift for a resource. When the autoshift status is
     * <code>ENABLED</code>, Amazon Web Services shifts traffic for a resource away
     * from an Availability Zone, on your behalf, when Amazon Web Services determines
     * that there's an issue in the Availability Zone that could potentially affect
     * customers.</p>
     */
    inline void SetZonalAutoshiftStatus(const ZonalAutoshiftStatus& value) { m_zonalAutoshiftStatus = value; }

    /**
     * <p>The status for zonal autoshift for a resource. When the autoshift status is
     * <code>ENABLED</code>, Amazon Web Services shifts traffic for a resource away
     * from an Availability Zone, on your behalf, when Amazon Web Services determines
     * that there's an issue in the Availability Zone that could potentially affect
     * customers.</p>
     */
    inline void SetZonalAutoshiftStatus(ZonalAutoshiftStatus&& value) { m_zonalAutoshiftStatus = std::move(value); }

    /**
     * <p>The status for zonal autoshift for a resource. When the autoshift status is
     * <code>ENABLED</code>, Amazon Web Services shifts traffic for a resource away
     * from an Availability Zone, on your behalf, when Amazon Web Services determines
     * that there's an issue in the Availability Zone that could potentially affect
     * customers.</p>
     */
    inline GetManagedResourceResult& WithZonalAutoshiftStatus(const ZonalAutoshiftStatus& value) { SetZonalAutoshiftStatus(value); return *this;}

    /**
     * <p>The status for zonal autoshift for a resource. When the autoshift status is
     * <code>ENABLED</code>, Amazon Web Services shifts traffic for a resource away
     * from an Availability Zone, on your behalf, when Amazon Web Services determines
     * that there's an issue in the Availability Zone that could potentially affect
     * customers.</p>
     */
    inline GetManagedResourceResult& WithZonalAutoshiftStatus(ZonalAutoshiftStatus&& value) { SetZonalAutoshiftStatus(std::move(value)); return *this;}


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetManagedResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetManagedResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetManagedResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Map<Aws::String, double> m_appliedWeights;

    Aws::String m_arn;

    Aws::Vector<AutoshiftInResource> m_autoshifts;

    Aws::String m_name;

    PracticeRunConfiguration m_practiceRunConfiguration;

    ZonalAutoshiftStatus m_zonalAutoshiftStatus;

    Aws::Vector<ZonalShiftInResource> m_zonalShifts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
