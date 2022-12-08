/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/S3Object.h>
#include <aws/groundstation/model/EphemerisStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Ephemeris item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EphemerisItem">AWS
   * API Reference</a></p>
   */
  class EphemerisItem
  {
  public:
    AWS_GROUNDSTATION_API EphemerisItem();
    AWS_GROUNDSTATION_API EphemerisItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API EphemerisItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time the ephemeris was uploaded in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the ephemeris was uploaded in UTC.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the ephemeris was uploaded in UTC.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the ephemeris was uploaded in UTC.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the ephemeris was uploaded in UTC.</p>
     */
    inline EphemerisItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the ephemeris was uploaded in UTC.</p>
     */
    inline EphemerisItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Whether or not the ephemeris is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether or not the ephemeris is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether or not the ephemeris is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether or not the ephemeris is enabled.</p>
     */
    inline EphemerisItem& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline const Aws::String& GetEphemerisId() const{ return m_ephemerisId; }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline bool EphemerisIdHasBeenSet() const { return m_ephemerisIdHasBeenSet; }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline void SetEphemerisId(const Aws::String& value) { m_ephemerisIdHasBeenSet = true; m_ephemerisId = value; }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline void SetEphemerisId(Aws::String&& value) { m_ephemerisIdHasBeenSet = true; m_ephemerisId = std::move(value); }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline void SetEphemerisId(const char* value) { m_ephemerisIdHasBeenSet = true; m_ephemerisId.assign(value); }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline EphemerisItem& WithEphemerisId(const Aws::String& value) { SetEphemerisId(value); return *this;}

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline EphemerisItem& WithEphemerisId(Aws::String&& value) { SetEphemerisId(std::move(value)); return *this;}

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline EphemerisItem& WithEphemerisId(const char* value) { SetEphemerisId(value); return *this;}


    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline EphemerisItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline EphemerisItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline EphemerisItem& WithName(const char* value) { SetName(value); return *this;}


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
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline EphemerisItem& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline const S3Object& GetSourceS3Object() const{ return m_sourceS3Object; }

    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline bool SourceS3ObjectHasBeenSet() const { return m_sourceS3ObjectHasBeenSet; }

    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline void SetSourceS3Object(const S3Object& value) { m_sourceS3ObjectHasBeenSet = true; m_sourceS3Object = value; }

    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline void SetSourceS3Object(S3Object&& value) { m_sourceS3ObjectHasBeenSet = true; m_sourceS3Object = std::move(value); }

    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline EphemerisItem& WithSourceS3Object(const S3Object& value) { SetSourceS3Object(value); return *this;}

    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline EphemerisItem& WithSourceS3Object(S3Object&& value) { SetSourceS3Object(std::move(value)); return *this;}


    /**
     * <p>The status of the ephemeris.</p>
     */
    inline const EphemerisStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the ephemeris.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the ephemeris.</p>
     */
    inline void SetStatus(const EphemerisStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the ephemeris.</p>
     */
    inline void SetStatus(EphemerisStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the ephemeris.</p>
     */
    inline EphemerisItem& WithStatus(const EphemerisStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the ephemeris.</p>
     */
    inline EphemerisItem& WithStatus(EphemerisStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_ephemerisId;
    bool m_ephemerisIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    S3Object m_sourceS3Object;
    bool m_sourceS3ObjectHasBeenSet = false;

    EphemerisStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
