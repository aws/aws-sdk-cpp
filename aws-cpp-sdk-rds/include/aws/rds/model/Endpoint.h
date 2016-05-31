/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>This data type is used as a response element in the following actions:</p>
   * <ul> <li> <p> <a>CreateDBInstance</a> </p> </li> <li> <p>
   * <a>DescribeDBInstances</a> </p> </li> <li> <p> <a>DeleteDBInstance</a> </p>
   * </li> </ul>
   */
  class AWS_RDS_API Endpoint
  {
  public:
    Endpoint();
    Endpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    Endpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline Endpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline Endpoint& WithAddress(Aws::String&& value) { SetAddress(value); return *this;}

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline Endpoint& WithAddress(const char* value) { SetAddress(value); return *this;}

    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline long GetPort() const{ return m_port; }

    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline Endpoint& WithPort(long value) { SetPort(value); return *this;}

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline Endpoint& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline Endpoint& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline Endpoint& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

  private:
    Aws::String m_address;
    bool m_addressHasBeenSet;
    long m_port;
    bool m_portHasBeenSet;
    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
