﻿/*
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
#include <aws/redshift/Redshift_EXPORTS.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a connection endpoint.</p>
   */
  class AWS_REDSHIFT_API Endpoint
  {
  public:
    Endpoint();
    Endpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    Endpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The DNS address of the Cluster.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The DNS address of the Cluster.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The DNS address of the Cluster.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The DNS address of the Cluster.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The DNS address of the Cluster.</p>
     */
    inline Endpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The DNS address of the Cluster.</p>
     */
    inline Endpoint& WithAddress(Aws::String&& value) { SetAddress(value); return *this;}

    /**
     * <p>The DNS address of the Cluster.</p>
     */
    inline Endpoint& WithAddress(const char* value) { SetAddress(value); return *this;}

    /**
     * <p>The port that the database engine is listening on.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port that the database engine is listening on.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port that the database engine is listening on.</p>
     */
    inline Endpoint& WithPort(int value) { SetPort(value); return *this;}

  private:
    Aws::String m_address;
    bool m_addressHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
