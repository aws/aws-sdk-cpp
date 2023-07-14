﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>This data type represents the information you need to connect to an Amazon
   * RDS DB instance. This data type is used as a response element in the following
   * actions:</p> <ul> <li> <p> <code>CreateDBInstance</code> </p> </li> <li> <p>
   * <code>DescribeDBInstances</code> </p> </li> <li> <p>
   * <code>DeleteDBInstance</code> </p> </li> </ul> <p>For the data structure that
   * represents Amazon Aurora DB cluster endpoints, see
   * <code>DBClusterEndpoint</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/Endpoint">AWS API
   * Reference</a></p>
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
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

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
    inline Endpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline Endpoint& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline Endpoint& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

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
    inline Endpoint& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline Endpoint& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
