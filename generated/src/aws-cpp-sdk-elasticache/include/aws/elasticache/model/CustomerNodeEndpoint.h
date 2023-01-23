/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
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
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The endpoint from which data should be migrated.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CustomerNodeEndpoint">AWS
   * API Reference</a></p>
   */
  class CustomerNodeEndpoint
  {
  public:
    AWS_ELASTICACHE_API CustomerNodeEndpoint();
    AWS_ELASTICACHE_API CustomerNodeEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CustomerNodeEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The address of the node endpoint</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The address of the node endpoint</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The address of the node endpoint</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The address of the node endpoint</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The address of the node endpoint</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The address of the node endpoint</p>
     */
    inline CustomerNodeEndpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The address of the node endpoint</p>
     */
    inline CustomerNodeEndpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The address of the node endpoint</p>
     */
    inline CustomerNodeEndpoint& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The port of the node endpoint</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port of the node endpoint</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port of the node endpoint</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port of the node endpoint</p>
     */
    inline CustomerNodeEndpoint& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
