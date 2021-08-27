/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AntennaDemodDecodeDetails.h>
#include <aws/groundstation/model/EndpointDetails.h>
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
   * <p>Details for certain <code>Config</code> object types in a
   * contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ConfigDetails">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API ConfigDetails
  {
  public:
    ConfigDetails();
    ConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    ConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details for antenna demod decode <code>Config</code> in a contact.</p>
     */
    inline const AntennaDemodDecodeDetails& GetAntennaDemodDecodeDetails() const{ return m_antennaDemodDecodeDetails; }

    /**
     * <p>Details for antenna demod decode <code>Config</code> in a contact.</p>
     */
    inline bool AntennaDemodDecodeDetailsHasBeenSet() const { return m_antennaDemodDecodeDetailsHasBeenSet; }

    /**
     * <p>Details for antenna demod decode <code>Config</code> in a contact.</p>
     */
    inline void SetAntennaDemodDecodeDetails(const AntennaDemodDecodeDetails& value) { m_antennaDemodDecodeDetailsHasBeenSet = true; m_antennaDemodDecodeDetails = value; }

    /**
     * <p>Details for antenna demod decode <code>Config</code> in a contact.</p>
     */
    inline void SetAntennaDemodDecodeDetails(AntennaDemodDecodeDetails&& value) { m_antennaDemodDecodeDetailsHasBeenSet = true; m_antennaDemodDecodeDetails = std::move(value); }

    /**
     * <p>Details for antenna demod decode <code>Config</code> in a contact.</p>
     */
    inline ConfigDetails& WithAntennaDemodDecodeDetails(const AntennaDemodDecodeDetails& value) { SetAntennaDemodDecodeDetails(value); return *this;}

    /**
     * <p>Details for antenna demod decode <code>Config</code> in a contact.</p>
     */
    inline ConfigDetails& WithAntennaDemodDecodeDetails(AntennaDemodDecodeDetails&& value) { SetAntennaDemodDecodeDetails(std::move(value)); return *this;}


    
    inline const EndpointDetails& GetEndpointDetails() const{ return m_endpointDetails; }

    
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }

    
    inline void SetEndpointDetails(const EndpointDetails& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = value; }

    
    inline void SetEndpointDetails(EndpointDetails&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::move(value); }

    
    inline ConfigDetails& WithEndpointDetails(const EndpointDetails& value) { SetEndpointDetails(value); return *this;}

    
    inline ConfigDetails& WithEndpointDetails(EndpointDetails&& value) { SetEndpointDetails(std::move(value)); return *this;}

  private:

    AntennaDemodDecodeDetails m_antennaDemodDecodeDetails;
    bool m_antennaDemodDecodeDetailsHasBeenSet;

    EndpointDetails m_endpointDetails;
    bool m_endpointDetailsHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
