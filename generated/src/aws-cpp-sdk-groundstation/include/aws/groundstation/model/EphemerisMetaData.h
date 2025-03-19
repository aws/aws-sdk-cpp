/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/groundstation/model/EphemerisSource.h>
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
   * <p>Metadata describing a particular ephemeris.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EphemerisMetaData">AWS
   * API Reference</a></p>
   */
  class EphemerisMetaData
  {
  public:
    AWS_GROUNDSTATION_API EphemerisMetaData() = default;
    AWS_GROUNDSTATION_API EphemerisMetaData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API EphemerisMetaData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>UUID of a customer-provided ephemeris.</p> <p>This field is not populated for
     * default ephemerides from Space Track.</p>
     */
    inline const Aws::String& GetEphemerisId() const { return m_ephemerisId; }
    inline bool EphemerisIdHasBeenSet() const { return m_ephemerisIdHasBeenSet; }
    template<typename EphemerisIdT = Aws::String>
    void SetEphemerisId(EphemerisIdT&& value) { m_ephemerisIdHasBeenSet = true; m_ephemerisId = std::forward<EphemerisIdT>(value); }
    template<typename EphemerisIdT = Aws::String>
    EphemerisMetaData& WithEphemerisId(EphemerisIdT&& value) { SetEphemerisId(std::forward<EphemerisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch of a default, ephemeris from Space Track in UTC.</p> <p>This field
     * is not populated for customer-provided ephemerides.</p>
     */
    inline const Aws::Utils::DateTime& GetEpoch() const { return m_epoch; }
    inline bool EpochHasBeenSet() const { return m_epochHasBeenSet; }
    template<typename EpochT = Aws::Utils::DateTime>
    void SetEpoch(EpochT&& value) { m_epochHasBeenSet = true; m_epoch = std::forward<EpochT>(value); }
    template<typename EpochT = Aws::Utils::DateTime>
    EphemerisMetaData& WithEpoch(EpochT&& value) { SetEpoch(std::forward<EpochT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p> <p>A name is only returned for
     * customer-provider ephemerides that have a name associated.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EphemerisMetaData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>EphemerisSource</code> that generated a given ephemeris.</p>
     */
    inline EphemerisSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(EphemerisSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline EphemerisMetaData& WithSource(EphemerisSource value) { SetSource(value); return *this;}
    ///@}
  private:

    Aws::String m_ephemerisId;
    bool m_ephemerisIdHasBeenSet = false;

    Aws::Utils::DateTime m_epoch{};
    bool m_epochHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EphemerisSource m_source{EphemerisSource::NOT_SET};
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
