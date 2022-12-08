/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/EphemerisInvalidReason.h>
#include <aws/groundstation/model/EphemerisStatus.h>
#include <aws/groundstation/model/EphemerisTypeDescription.h>
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
namespace GroundStation
{
namespace Model
{
  class DescribeEphemerisResult
  {
  public:
    AWS_GROUNDSTATION_API DescribeEphemerisResult();
    AWS_GROUNDSTATION_API DescribeEphemerisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API DescribeEphemerisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time the ephemeris was uploaded in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the ephemeris was uploaded in UTC.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time the ephemeris was uploaded in UTC.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time the ephemeris was uploaded in UTC.</p>
     */
    inline DescribeEphemerisResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the ephemeris was uploaded in UTC.</p>
     */
    inline DescribeEphemerisResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Whether or not the ephemeris is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether or not the ephemeris is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabled = value; }

    /**
     * <p>Whether or not the ephemeris is enabled.</p>
     */
    inline DescribeEphemerisResult& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline const Aws::String& GetEphemerisId() const{ return m_ephemerisId; }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline void SetEphemerisId(const Aws::String& value) { m_ephemerisId = value; }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline void SetEphemerisId(Aws::String&& value) { m_ephemerisId = std::move(value); }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline void SetEphemerisId(const char* value) { m_ephemerisId.assign(value); }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline DescribeEphemerisResult& WithEphemerisId(const Aws::String& value) { SetEphemerisId(value); return *this;}

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline DescribeEphemerisResult& WithEphemerisId(Aws::String&& value) { SetEphemerisId(std::move(value)); return *this;}

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline DescribeEphemerisResult& WithEphemerisId(const char* value) { SetEphemerisId(value); return *this;}


    /**
     * <p>Reason that an ephemeris failed validation. Only provided for ephemerides
     * with <code>INVALID</code> status.</p>
     */
    inline const EphemerisInvalidReason& GetInvalidReason() const{ return m_invalidReason; }

    /**
     * <p>Reason that an ephemeris failed validation. Only provided for ephemerides
     * with <code>INVALID</code> status.</p>
     */
    inline void SetInvalidReason(const EphemerisInvalidReason& value) { m_invalidReason = value; }

    /**
     * <p>Reason that an ephemeris failed validation. Only provided for ephemerides
     * with <code>INVALID</code> status.</p>
     */
    inline void SetInvalidReason(EphemerisInvalidReason&& value) { m_invalidReason = std::move(value); }

    /**
     * <p>Reason that an ephemeris failed validation. Only provided for ephemerides
     * with <code>INVALID</code> status.</p>
     */
    inline DescribeEphemerisResult& WithInvalidReason(const EphemerisInvalidReason& value) { SetInvalidReason(value); return *this;}

    /**
     * <p>Reason that an ephemeris failed validation. Only provided for ephemerides
     * with <code>INVALID</code> status.</p>
     */
    inline DescribeEphemerisResult& WithInvalidReason(EphemerisInvalidReason&& value) { SetInvalidReason(std::move(value)); return *this;}


    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline DescribeEphemerisResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline DescribeEphemerisResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline DescribeEphemerisResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline void SetPriority(int value) { m_priority = value; }

    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline DescribeEphemerisResult& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The AWS Ground Station satellite ID associated with ephemeris.</p>
     */
    inline const Aws::String& GetSatelliteId() const{ return m_satelliteId; }

    /**
     * <p>The AWS Ground Station satellite ID associated with ephemeris.</p>
     */
    inline void SetSatelliteId(const Aws::String& value) { m_satelliteId = value; }

    /**
     * <p>The AWS Ground Station satellite ID associated with ephemeris.</p>
     */
    inline void SetSatelliteId(Aws::String&& value) { m_satelliteId = std::move(value); }

    /**
     * <p>The AWS Ground Station satellite ID associated with ephemeris.</p>
     */
    inline void SetSatelliteId(const char* value) { m_satelliteId.assign(value); }

    /**
     * <p>The AWS Ground Station satellite ID associated with ephemeris.</p>
     */
    inline DescribeEphemerisResult& WithSatelliteId(const Aws::String& value) { SetSatelliteId(value); return *this;}

    /**
     * <p>The AWS Ground Station satellite ID associated with ephemeris.</p>
     */
    inline DescribeEphemerisResult& WithSatelliteId(Aws::String&& value) { SetSatelliteId(std::move(value)); return *this;}

    /**
     * <p>The AWS Ground Station satellite ID associated with ephemeris.</p>
     */
    inline DescribeEphemerisResult& WithSatelliteId(const char* value) { SetSatelliteId(value); return *this;}


    /**
     * <p>The status of the ephemeris.</p>
     */
    inline const EphemerisStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the ephemeris.</p>
     */
    inline void SetStatus(const EphemerisStatus& value) { m_status = value; }

    /**
     * <p>The status of the ephemeris.</p>
     */
    inline void SetStatus(EphemerisStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the ephemeris.</p>
     */
    inline DescribeEphemerisResult& WithStatus(const EphemerisStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the ephemeris.</p>
     */
    inline DescribeEphemerisResult& WithStatus(EphemerisStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline const EphemerisTypeDescription& GetSuppliedData() const{ return m_suppliedData; }

    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline void SetSuppliedData(const EphemerisTypeDescription& value) { m_suppliedData = value; }

    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline void SetSuppliedData(EphemerisTypeDescription&& value) { m_suppliedData = std::move(value); }

    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline DescribeEphemerisResult& WithSuppliedData(const EphemerisTypeDescription& value) { SetSuppliedData(value); return *this;}

    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline DescribeEphemerisResult& WithSuppliedData(EphemerisTypeDescription&& value) { SetSuppliedData(std::move(value)); return *this;}


    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline DescribeEphemerisResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline DescribeEphemerisResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline DescribeEphemerisResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline DescribeEphemerisResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline DescribeEphemerisResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline DescribeEphemerisResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline DescribeEphemerisResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline DescribeEphemerisResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline DescribeEphemerisResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::Utils::DateTime m_creationTime;

    bool m_enabled;

    Aws::String m_ephemerisId;

    EphemerisInvalidReason m_invalidReason;

    Aws::String m_name;

    int m_priority;

    Aws::String m_satelliteId;

    EphemerisStatus m_status;

    EphemerisTypeDescription m_suppliedData;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
