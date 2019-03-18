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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ByoipCidrState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about an address range that is provisioned for use with your AWS
   * resources through bring your own IP addresses (BYOIP).</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ByoipCidr">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ByoipCidr
  {
  public:
    ByoipCidr();
    ByoipCidr(const Aws::Utils::Xml::XmlNode& xmlNode);
    ByoipCidr& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The public IPv4 address range, in CIDR notation.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The public IPv4 address range, in CIDR notation.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The public IPv4 address range, in CIDR notation.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The public IPv4 address range, in CIDR notation.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The public IPv4 address range, in CIDR notation.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The public IPv4 address range, in CIDR notation.</p>
     */
    inline ByoipCidr& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The public IPv4 address range, in CIDR notation.</p>
     */
    inline ByoipCidr& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The public IPv4 address range, in CIDR notation.</p>
     */
    inline ByoipCidr& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The description of the address range.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the address range.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the address range.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the address range.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the address range.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the address range.</p>
     */
    inline ByoipCidr& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the address range.</p>
     */
    inline ByoipCidr& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the address range.</p>
     */
    inline ByoipCidr& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline ByoipCidr& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline ByoipCidr& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline ByoipCidr& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The state of the address pool.</p>
     */
    inline const ByoipCidrState& GetState() const{ return m_state; }

    /**
     * <p>The state of the address pool.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the address pool.</p>
     */
    inline void SetState(const ByoipCidrState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the address pool.</p>
     */
    inline void SetState(ByoipCidrState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the address pool.</p>
     */
    inline ByoipCidr& WithState(const ByoipCidrState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the address pool.</p>
     */
    inline ByoipCidr& WithState(ByoipCidrState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    ByoipCidrState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
