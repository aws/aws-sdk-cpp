/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/DataflowEndpoint.h>
#include <aws/groundstation/model/SecurityDetails.h>
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
   * <p>Information about the endpoint details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EndpointDetails">AWS
   * API Reference</a></p>
   */
  class EndpointDetails
  {
  public:
    AWS_GROUNDSTATION_API EndpointDetails();
    AWS_GROUNDSTATION_API EndpointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API EndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A dataflow endpoint.</p>
     */
    inline const DataflowEndpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>A dataflow endpoint.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>A dataflow endpoint.</p>
     */
    inline void SetEndpoint(const DataflowEndpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>A dataflow endpoint.</p>
     */
    inline void SetEndpoint(DataflowEndpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>A dataflow endpoint.</p>
     */
    inline EndpointDetails& WithEndpoint(const DataflowEndpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>A dataflow endpoint.</p>
     */
    inline EndpointDetails& WithEndpoint(DataflowEndpoint&& value) { SetEndpoint(std::move(value)); return *this;}


    /**
     * <p>Endpoint security details including a list of subnets, a list of security
     * groups and a role to connect streams to instances.</p>
     */
    inline const SecurityDetails& GetSecurityDetails() const{ return m_securityDetails; }

    /**
     * <p>Endpoint security details including a list of subnets, a list of security
     * groups and a role to connect streams to instances.</p>
     */
    inline bool SecurityDetailsHasBeenSet() const { return m_securityDetailsHasBeenSet; }

    /**
     * <p>Endpoint security details including a list of subnets, a list of security
     * groups and a role to connect streams to instances.</p>
     */
    inline void SetSecurityDetails(const SecurityDetails& value) { m_securityDetailsHasBeenSet = true; m_securityDetails = value; }

    /**
     * <p>Endpoint security details including a list of subnets, a list of security
     * groups and a role to connect streams to instances.</p>
     */
    inline void SetSecurityDetails(SecurityDetails&& value) { m_securityDetailsHasBeenSet = true; m_securityDetails = std::move(value); }

    /**
     * <p>Endpoint security details including a list of subnets, a list of security
     * groups and a role to connect streams to instances.</p>
     */
    inline EndpointDetails& WithSecurityDetails(const SecurityDetails& value) { SetSecurityDetails(value); return *this;}

    /**
     * <p>Endpoint security details including a list of subnets, a list of security
     * groups and a role to connect streams to instances.</p>
     */
    inline EndpointDetails& WithSecurityDetails(SecurityDetails&& value) { SetSecurityDetails(std::move(value)); return *this;}

  private:

    DataflowEndpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    SecurityDetails m_securityDetails;
    bool m_securityDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
