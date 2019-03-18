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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/CommsProtocol.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The IP endpoint and protocol for calling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/IPDialIn">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API IPDialIn
  {
  public:
    IPDialIn();
    IPDialIn(Aws::Utils::Json::JsonView jsonValue);
    IPDialIn& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The IP address.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The IP address.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The IP address.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The IP address.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The IP address.</p>
     */
    inline IPDialIn& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The IP address.</p>
     */
    inline IPDialIn& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The IP address.</p>
     */
    inline IPDialIn& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The protocol, including SIP, SIPS, and H323.</p>
     */
    inline const CommsProtocol& GetCommsProtocol() const{ return m_commsProtocol; }

    /**
     * <p>The protocol, including SIP, SIPS, and H323.</p>
     */
    inline bool CommsProtocolHasBeenSet() const { return m_commsProtocolHasBeenSet; }

    /**
     * <p>The protocol, including SIP, SIPS, and H323.</p>
     */
    inline void SetCommsProtocol(const CommsProtocol& value) { m_commsProtocolHasBeenSet = true; m_commsProtocol = value; }

    /**
     * <p>The protocol, including SIP, SIPS, and H323.</p>
     */
    inline void SetCommsProtocol(CommsProtocol&& value) { m_commsProtocolHasBeenSet = true; m_commsProtocol = std::move(value); }

    /**
     * <p>The protocol, including SIP, SIPS, and H323.</p>
     */
    inline IPDialIn& WithCommsProtocol(const CommsProtocol& value) { SetCommsProtocol(value); return *this;}

    /**
     * <p>The protocol, including SIP, SIPS, and H323.</p>
     */
    inline IPDialIn& WithCommsProtocol(CommsProtocol&& value) { SetCommsProtocol(std::move(value)); return *this;}

  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    CommsProtocol m_commsProtocol;
    bool m_commsProtocolHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
