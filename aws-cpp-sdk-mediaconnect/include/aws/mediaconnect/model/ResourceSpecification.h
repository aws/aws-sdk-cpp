/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ResourceType.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * A definition of what is being billed for, including the type and
   * amount.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ResourceSpecification">AWS
   * API Reference</a></p>
   */
  class ResourceSpecification
  {
  public:
    AWS_MEDIACONNECT_API ResourceSpecification();
    AWS_MEDIACONNECT_API ResourceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API ResourceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The amount of outbound bandwidth that is discounted in the offering.
     */
    inline int GetReservedBitrate() const{ return m_reservedBitrate; }

    /**
     * The amount of outbound bandwidth that is discounted in the offering.
     */
    inline bool ReservedBitrateHasBeenSet() const { return m_reservedBitrateHasBeenSet; }

    /**
     * The amount of outbound bandwidth that is discounted in the offering.
     */
    inline void SetReservedBitrate(int value) { m_reservedBitrateHasBeenSet = true; m_reservedBitrate = value; }

    /**
     * The amount of outbound bandwidth that is discounted in the offering.
     */
    inline ResourceSpecification& WithReservedBitrate(int value) { SetReservedBitrate(value); return *this;}


    /**
     * The type of resource and the unit that is being billed for.
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * The type of resource and the unit that is being billed for.
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * The type of resource and the unit that is being billed for.
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * The type of resource and the unit that is being billed for.
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * The type of resource and the unit that is being billed for.
     */
    inline ResourceSpecification& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * The type of resource and the unit that is being billed for.
     */
    inline ResourceSpecification& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    int m_reservedBitrate;
    bool m_reservedBitrateHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
