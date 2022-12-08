/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>The object that is specified in resource record set object when you are
   * linking a resource record set to a CIDR location.</p> <p>A
   * <code>LocationName</code> with an asterisk “*” can be used to create a default
   * CIDR record. <code>CollectionId</code> is still required for default
   * record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CidrRoutingConfig">AWS
   * API Reference</a></p>
   */
  class CidrRoutingConfig
  {
  public:
    AWS_ROUTE53_API CidrRoutingConfig();
    AWS_ROUTE53_API CidrRoutingConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API CidrRoutingConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The CIDR collection ID.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>The CIDR collection ID.</p>
     */
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }

    /**
     * <p>The CIDR collection ID.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>The CIDR collection ID.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }

    /**
     * <p>The CIDR collection ID.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>The CIDR collection ID.</p>
     */
    inline CidrRoutingConfig& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>The CIDR collection ID.</p>
     */
    inline CidrRoutingConfig& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}

    /**
     * <p>The CIDR collection ID.</p>
     */
    inline CidrRoutingConfig& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}


    /**
     * <p>The CIDR collection location name.</p>
     */
    inline const Aws::String& GetLocationName() const{ return m_locationName; }

    /**
     * <p>The CIDR collection location name.</p>
     */
    inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }

    /**
     * <p>The CIDR collection location name.</p>
     */
    inline void SetLocationName(const Aws::String& value) { m_locationNameHasBeenSet = true; m_locationName = value; }

    /**
     * <p>The CIDR collection location name.</p>
     */
    inline void SetLocationName(Aws::String&& value) { m_locationNameHasBeenSet = true; m_locationName = std::move(value); }

    /**
     * <p>The CIDR collection location name.</p>
     */
    inline void SetLocationName(const char* value) { m_locationNameHasBeenSet = true; m_locationName.assign(value); }

    /**
     * <p>The CIDR collection location name.</p>
     */
    inline CidrRoutingConfig& WithLocationName(const Aws::String& value) { SetLocationName(value); return *this;}

    /**
     * <p>The CIDR collection location name.</p>
     */
    inline CidrRoutingConfig& WithLocationName(Aws::String&& value) { SetLocationName(std::move(value)); return *this;}

    /**
     * <p>The CIDR collection location name.</p>
     */
    inline CidrRoutingConfig& WithLocationName(const char* value) { SetLocationName(value); return *this;}

  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Aws::String m_locationName;
    bool m_locationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
