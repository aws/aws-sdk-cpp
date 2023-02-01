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
    AWS_GROUNDSTATION_API EphemerisMetaData();
    AWS_GROUNDSTATION_API EphemerisMetaData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API EphemerisMetaData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>UUID of a customer-provided ephemeris.</p> <p>This field is not populated for
     * default ephemerides from Space Track.</p>
     */
    inline const Aws::String& GetEphemerisId() const{ return m_ephemerisId; }

    /**
     * <p>UUID of a customer-provided ephemeris.</p> <p>This field is not populated for
     * default ephemerides from Space Track.</p>
     */
    inline bool EphemerisIdHasBeenSet() const { return m_ephemerisIdHasBeenSet; }

    /**
     * <p>UUID of a customer-provided ephemeris.</p> <p>This field is not populated for
     * default ephemerides from Space Track.</p>
     */
    inline void SetEphemerisId(const Aws::String& value) { m_ephemerisIdHasBeenSet = true; m_ephemerisId = value; }

    /**
     * <p>UUID of a customer-provided ephemeris.</p> <p>This field is not populated for
     * default ephemerides from Space Track.</p>
     */
    inline void SetEphemerisId(Aws::String&& value) { m_ephemerisIdHasBeenSet = true; m_ephemerisId = std::move(value); }

    /**
     * <p>UUID of a customer-provided ephemeris.</p> <p>This field is not populated for
     * default ephemerides from Space Track.</p>
     */
    inline void SetEphemerisId(const char* value) { m_ephemerisIdHasBeenSet = true; m_ephemerisId.assign(value); }

    /**
     * <p>UUID of a customer-provided ephemeris.</p> <p>This field is not populated for
     * default ephemerides from Space Track.</p>
     */
    inline EphemerisMetaData& WithEphemerisId(const Aws::String& value) { SetEphemerisId(value); return *this;}

    /**
     * <p>UUID of a customer-provided ephemeris.</p> <p>This field is not populated for
     * default ephemerides from Space Track.</p>
     */
    inline EphemerisMetaData& WithEphemerisId(Aws::String&& value) { SetEphemerisId(std::move(value)); return *this;}

    /**
     * <p>UUID of a customer-provided ephemeris.</p> <p>This field is not populated for
     * default ephemerides from Space Track.</p>
     */
    inline EphemerisMetaData& WithEphemerisId(const char* value) { SetEphemerisId(value); return *this;}


    /**
     * <p>The epoch of a default, ephemeris from Space Track in UTC.</p> <p>This field
     * is not populated for customer-provided ephemerides.</p>
     */
    inline const Aws::Utils::DateTime& GetEpoch() const{ return m_epoch; }

    /**
     * <p>The epoch of a default, ephemeris from Space Track in UTC.</p> <p>This field
     * is not populated for customer-provided ephemerides.</p>
     */
    inline bool EpochHasBeenSet() const { return m_epochHasBeenSet; }

    /**
     * <p>The epoch of a default, ephemeris from Space Track in UTC.</p> <p>This field
     * is not populated for customer-provided ephemerides.</p>
     */
    inline void SetEpoch(const Aws::Utils::DateTime& value) { m_epochHasBeenSet = true; m_epoch = value; }

    /**
     * <p>The epoch of a default, ephemeris from Space Track in UTC.</p> <p>This field
     * is not populated for customer-provided ephemerides.</p>
     */
    inline void SetEpoch(Aws::Utils::DateTime&& value) { m_epochHasBeenSet = true; m_epoch = std::move(value); }

    /**
     * <p>The epoch of a default, ephemeris from Space Track in UTC.</p> <p>This field
     * is not populated for customer-provided ephemerides.</p>
     */
    inline EphemerisMetaData& WithEpoch(const Aws::Utils::DateTime& value) { SetEpoch(value); return *this;}

    /**
     * <p>The epoch of a default, ephemeris from Space Track in UTC.</p> <p>This field
     * is not populated for customer-provided ephemerides.</p>
     */
    inline EphemerisMetaData& WithEpoch(Aws::Utils::DateTime&& value) { SetEpoch(std::move(value)); return *this;}


    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p> <p>A name is only returned for
     * customer-provider ephemerides that have a name associated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p> <p>A name is only returned for
     * customer-provider ephemerides that have a name associated.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p> <p>A name is only returned for
     * customer-provider ephemerides that have a name associated.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p> <p>A name is only returned for
     * customer-provider ephemerides that have a name associated.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p> <p>A name is only returned for
     * customer-provider ephemerides that have a name associated.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p> <p>A name is only returned for
     * customer-provider ephemerides that have a name associated.</p>
     */
    inline EphemerisMetaData& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p> <p>A name is only returned for
     * customer-provider ephemerides that have a name associated.</p>
     */
    inline EphemerisMetaData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p> <p>A name is only returned for
     * customer-provider ephemerides that have a name associated.</p>
     */
    inline EphemerisMetaData& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The <code>EphemerisSource</code> that generated a given ephemeris.</p>
     */
    inline const EphemerisSource& GetSource() const{ return m_source; }

    /**
     * <p>The <code>EphemerisSource</code> that generated a given ephemeris.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The <code>EphemerisSource</code> that generated a given ephemeris.</p>
     */
    inline void SetSource(const EphemerisSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The <code>EphemerisSource</code> that generated a given ephemeris.</p>
     */
    inline void SetSource(EphemerisSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The <code>EphemerisSource</code> that generated a given ephemeris.</p>
     */
    inline EphemerisMetaData& WithSource(const EphemerisSource& value) { SetSource(value); return *this;}

    /**
     * <p>The <code>EphemerisSource</code> that generated a given ephemeris.</p>
     */
    inline EphemerisMetaData& WithSource(EphemerisSource&& value) { SetSource(std::move(value)); return *this;}

  private:

    Aws::String m_ephemerisId;
    bool m_ephemerisIdHasBeenSet = false;

    Aws::Utils::DateTime m_epoch;
    bool m_epochHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EphemerisSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
