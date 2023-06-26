/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/lightsail/model/RegionName.h>
#include <aws/lightsail/model/OriginProtocolPolicyEnum.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the origin resource of an Amazon Lightsail content delivery network
   * (CDN) distribution.</p> <p>An origin can be a Lightsail instance, bucket, or
   * load balancer. A distribution pulls content from an origin, caches it, and
   * serves it to viewers via a worldwide network of edge servers.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Origin">AWS
   * API Reference</a></p>
   */
  class Origin
  {
  public:
    AWS_LIGHTSAIL_API Origin();
    AWS_LIGHTSAIL_API Origin(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Origin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the origin resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the origin resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the origin resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the origin resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the origin resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the origin resource.</p>
     */
    inline Origin& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the origin resource.</p>
     */
    inline Origin& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the origin resource.</p>
     */
    inline Origin& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The resource type of the origin resource (e.g., <i>Instance</i>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type of the origin resource (e.g., <i>Instance</i>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type of the origin resource (e.g., <i>Instance</i>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type of the origin resource (e.g., <i>Instance</i>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type of the origin resource (e.g., <i>Instance</i>).</p>
     */
    inline Origin& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type of the origin resource (e.g., <i>Instance</i>).</p>
     */
    inline Origin& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The AWS Region name of the origin resource.</p>
     */
    inline const RegionName& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The AWS Region name of the origin resource.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The AWS Region name of the origin resource.</p>
     */
    inline void SetRegionName(const RegionName& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The AWS Region name of the origin resource.</p>
     */
    inline void SetRegionName(RegionName&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The AWS Region name of the origin resource.</p>
     */
    inline Origin& WithRegionName(const RegionName& value) { SetRegionName(value); return *this;}

    /**
     * <p>The AWS Region name of the origin resource.</p>
     */
    inline Origin& WithRegionName(RegionName&& value) { SetRegionName(std::move(value)); return *this;}


    /**
     * <p>The protocol that your Amazon Lightsail distribution uses when establishing a
     * connection with your origin to pull content.</p>
     */
    inline const OriginProtocolPolicyEnum& GetProtocolPolicy() const{ return m_protocolPolicy; }

    /**
     * <p>The protocol that your Amazon Lightsail distribution uses when establishing a
     * connection with your origin to pull content.</p>
     */
    inline bool ProtocolPolicyHasBeenSet() const { return m_protocolPolicyHasBeenSet; }

    /**
     * <p>The protocol that your Amazon Lightsail distribution uses when establishing a
     * connection with your origin to pull content.</p>
     */
    inline void SetProtocolPolicy(const OriginProtocolPolicyEnum& value) { m_protocolPolicyHasBeenSet = true; m_protocolPolicy = value; }

    /**
     * <p>The protocol that your Amazon Lightsail distribution uses when establishing a
     * connection with your origin to pull content.</p>
     */
    inline void SetProtocolPolicy(OriginProtocolPolicyEnum&& value) { m_protocolPolicyHasBeenSet = true; m_protocolPolicy = std::move(value); }

    /**
     * <p>The protocol that your Amazon Lightsail distribution uses when establishing a
     * connection with your origin to pull content.</p>
     */
    inline Origin& WithProtocolPolicy(const OriginProtocolPolicyEnum& value) { SetProtocolPolicy(value); return *this;}

    /**
     * <p>The protocol that your Amazon Lightsail distribution uses when establishing a
     * connection with your origin to pull content.</p>
     */
    inline Origin& WithProtocolPolicy(OriginProtocolPolicyEnum&& value) { SetProtocolPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    RegionName m_regionName;
    bool m_regionNameHasBeenSet = false;

    OriginProtocolPolicyEnum m_protocolPolicy;
    bool m_protocolPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
