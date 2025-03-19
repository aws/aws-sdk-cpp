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
    AWS_GROUNDSTATION_API EphemerisItem() = default;
    AWS_GROUNDSTATION_API EphemerisItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API EphemerisItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time the ephemeris was uploaded in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    EphemerisItem& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the ephemeris is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EphemerisItem& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline const Aws::String& GetEphemerisId() const { return m_ephemerisId; }
    inline bool EphemerisIdHasBeenSet() const { return m_ephemerisIdHasBeenSet; }
    template<typename EphemerisIdT = Aws::String>
    void SetEphemerisId(EphemerisIdT&& value) { m_ephemerisIdHasBeenSet = true; m_ephemerisId = std::forward<EphemerisIdT>(value); }
    template<typename EphemerisIdT = Aws::String>
    EphemerisItem& WithEphemerisId(EphemerisIdT&& value) { SetEphemerisId(std::forward<EphemerisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EphemerisItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline EphemerisItem& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline const S3Object& GetSourceS3Object() const { return m_sourceS3Object; }
    inline bool SourceS3ObjectHasBeenSet() const { return m_sourceS3ObjectHasBeenSet; }
    template<typename SourceS3ObjectT = S3Object>
    void SetSourceS3Object(SourceS3ObjectT&& value) { m_sourceS3ObjectHasBeenSet = true; m_sourceS3Object = std::forward<SourceS3ObjectT>(value); }
    template<typename SourceS3ObjectT = S3Object>
    EphemerisItem& WithSourceS3Object(SourceS3ObjectT&& value) { SetSourceS3Object(std::forward<SourceS3ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the ephemeris.</p>
     */
    inline EphemerisStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EphemerisStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EphemerisItem& WithStatus(EphemerisStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_ephemerisId;
    bool m_ephemerisIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    S3Object m_sourceS3Object;
    bool m_sourceS3ObjectHasBeenSet = false;

    EphemerisStatus m_status{EphemerisStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
