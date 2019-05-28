/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Item in a list of satellites.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/SatelliteListItem">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API SatelliteListItem
  {
  public:
    SatelliteListItem();
    SatelliteListItem(Aws::Utils::Json::JsonView jsonValue);
    SatelliteListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline int GetNoradSatelliteID() const{ return m_noradSatelliteID; }

    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline bool NoradSatelliteIDHasBeenSet() const { return m_noradSatelliteIDHasBeenSet; }

    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline void SetNoradSatelliteID(int value) { m_noradSatelliteIDHasBeenSet = true; m_noradSatelliteID = value; }

    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline SatelliteListItem& WithNoradSatelliteID(int value) { SetNoradSatelliteID(value); return *this;}


    /**
     * <p>ARN of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteArn() const{ return m_satelliteArn; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline bool SatelliteArnHasBeenSet() const { return m_satelliteArnHasBeenSet; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(const Aws::String& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = value; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(Aws::String&& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = std::move(value); }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(const char* value) { m_satelliteArnHasBeenSet = true; m_satelliteArn.assign(value); }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline SatelliteListItem& WithSatelliteArn(const Aws::String& value) { SetSatelliteArn(value); return *this;}

    /**
     * <p>ARN of a satellite.</p>
     */
    inline SatelliteListItem& WithSatelliteArn(Aws::String&& value) { SetSatelliteArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a satellite.</p>
     */
    inline SatelliteListItem& WithSatelliteArn(const char* value) { SetSatelliteArn(value); return *this;}


    /**
     * <p>ID of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteId() const{ return m_satelliteId; }

    /**
     * <p>ID of a satellite.</p>
     */
    inline bool SatelliteIdHasBeenSet() const { return m_satelliteIdHasBeenSet; }

    /**
     * <p>ID of a satellite.</p>
     */
    inline void SetSatelliteId(const Aws::String& value) { m_satelliteIdHasBeenSet = true; m_satelliteId = value; }

    /**
     * <p>ID of a satellite.</p>
     */
    inline void SetSatelliteId(Aws::String&& value) { m_satelliteIdHasBeenSet = true; m_satelliteId = std::move(value); }

    /**
     * <p>ID of a satellite.</p>
     */
    inline void SetSatelliteId(const char* value) { m_satelliteIdHasBeenSet = true; m_satelliteId.assign(value); }

    /**
     * <p>ID of a satellite.</p>
     */
    inline SatelliteListItem& WithSatelliteId(const Aws::String& value) { SetSatelliteId(value); return *this;}

    /**
     * <p>ID of a satellite.</p>
     */
    inline SatelliteListItem& WithSatelliteId(Aws::String&& value) { SetSatelliteId(std::move(value)); return *this;}

    /**
     * <p>ID of a satellite.</p>
     */
    inline SatelliteListItem& WithSatelliteId(const char* value) { SetSatelliteId(value); return *this;}

  private:

    int m_noradSatelliteID;
    bool m_noradSatelliteIDHasBeenSet;

    Aws::String m_satelliteArn;
    bool m_satelliteArnHasBeenSet;

    Aws::String m_satelliteId;
    bool m_satelliteIdHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
