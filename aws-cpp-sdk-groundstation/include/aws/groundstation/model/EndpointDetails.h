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
  class AWS_GROUNDSTATION_API EndpointDetails
  {
  public:
    EndpointDetails();
    EndpointDetails(Aws::Utils::Json::JsonView jsonValue);
    EndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Endpoint security details.</p>
     */
    inline const SecurityDetails& GetSecurityDetails() const{ return m_securityDetails; }

    /**
     * <p>Endpoint security details.</p>
     */
    inline bool SecurityDetailsHasBeenSet() const { return m_securityDetailsHasBeenSet; }

    /**
     * <p>Endpoint security details.</p>
     */
    inline void SetSecurityDetails(const SecurityDetails& value) { m_securityDetailsHasBeenSet = true; m_securityDetails = value; }

    /**
     * <p>Endpoint security details.</p>
     */
    inline void SetSecurityDetails(SecurityDetails&& value) { m_securityDetailsHasBeenSet = true; m_securityDetails = std::move(value); }

    /**
     * <p>Endpoint security details.</p>
     */
    inline EndpointDetails& WithSecurityDetails(const SecurityDetails& value) { SetSecurityDetails(value); return *this;}

    /**
     * <p>Endpoint security details.</p>
     */
    inline EndpointDetails& WithSecurityDetails(SecurityDetails&& value) { SetSecurityDetails(std::move(value)); return *this;}

  private:

    DataflowEndpoint m_endpoint;
    bool m_endpointHasBeenSet;

    SecurityDetails m_securityDetails;
    bool m_securityDetailsHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
