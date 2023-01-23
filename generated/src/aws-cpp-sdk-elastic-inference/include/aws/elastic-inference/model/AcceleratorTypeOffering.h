/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastic-inference/model/LocationType.h>
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
namespace ElasticInference
{
namespace Model
{

  /**
   * <p> The offering for an Elastic Inference Accelerator type. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/AcceleratorTypeOffering">AWS
   * API Reference</a></p>
   */
  class AcceleratorTypeOffering
  {
  public:
    AWS_ELASTICINFERENCE_API AcceleratorTypeOffering();
    AWS_ELASTICINFERENCE_API AcceleratorTypeOffering(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API AcceleratorTypeOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline const Aws::String& GetAcceleratorType() const{ return m_acceleratorType; }

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline bool AcceleratorTypeHasBeenSet() const { return m_acceleratorTypeHasBeenSet; }

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline void SetAcceleratorType(const Aws::String& value) { m_acceleratorTypeHasBeenSet = true; m_acceleratorType = value; }

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline void SetAcceleratorType(Aws::String&& value) { m_acceleratorTypeHasBeenSet = true; m_acceleratorType = std::move(value); }

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline void SetAcceleratorType(const char* value) { m_acceleratorTypeHasBeenSet = true; m_acceleratorType.assign(value); }

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline AcceleratorTypeOffering& WithAcceleratorType(const Aws::String& value) { SetAcceleratorType(value); return *this;}

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline AcceleratorTypeOffering& WithAcceleratorType(Aws::String&& value) { SetAcceleratorType(std::move(value)); return *this;}

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline AcceleratorTypeOffering& WithAcceleratorType(const char* value) { SetAcceleratorType(value); return *this;}


    /**
     * <p> The location type for the offering. It can assume the following values:
     * region: defines that the offering is at the regional level. availability-zone:
     * defines that the offering is at the availability zone level.
     * availability-zone-id: defines that the offering is at the availability zone
     * level, defined by the availability zone id. </p>
     */
    inline const LocationType& GetLocationType() const{ return m_locationType; }

    /**
     * <p> The location type for the offering. It can assume the following values:
     * region: defines that the offering is at the regional level. availability-zone:
     * defines that the offering is at the availability zone level.
     * availability-zone-id: defines that the offering is at the availability zone
     * level, defined by the availability zone id. </p>
     */
    inline bool LocationTypeHasBeenSet() const { return m_locationTypeHasBeenSet; }

    /**
     * <p> The location type for the offering. It can assume the following values:
     * region: defines that the offering is at the regional level. availability-zone:
     * defines that the offering is at the availability zone level.
     * availability-zone-id: defines that the offering is at the availability zone
     * level, defined by the availability zone id. </p>
     */
    inline void SetLocationType(const LocationType& value) { m_locationTypeHasBeenSet = true; m_locationType = value; }

    /**
     * <p> The location type for the offering. It can assume the following values:
     * region: defines that the offering is at the regional level. availability-zone:
     * defines that the offering is at the availability zone level.
     * availability-zone-id: defines that the offering is at the availability zone
     * level, defined by the availability zone id. </p>
     */
    inline void SetLocationType(LocationType&& value) { m_locationTypeHasBeenSet = true; m_locationType = std::move(value); }

    /**
     * <p> The location type for the offering. It can assume the following values:
     * region: defines that the offering is at the regional level. availability-zone:
     * defines that the offering is at the availability zone level.
     * availability-zone-id: defines that the offering is at the availability zone
     * level, defined by the availability zone id. </p>
     */
    inline AcceleratorTypeOffering& WithLocationType(const LocationType& value) { SetLocationType(value); return *this;}

    /**
     * <p> The location type for the offering. It can assume the following values:
     * region: defines that the offering is at the regional level. availability-zone:
     * defines that the offering is at the availability zone level.
     * availability-zone-id: defines that the offering is at the availability zone
     * level, defined by the availability zone id. </p>
     */
    inline AcceleratorTypeOffering& WithLocationType(LocationType&& value) { SetLocationType(std::move(value)); return *this;}


    /**
     * <p> The location for the offering. It will return either the region,
     * availability zone or availability zone id for the offering depending on the
     * locationType value. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p> The location for the offering. It will return either the region,
     * availability zone or availability zone id for the offering depending on the
     * locationType value. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p> The location for the offering. It will return either the region,
     * availability zone or availability zone id for the offering depending on the
     * locationType value. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p> The location for the offering. It will return either the region,
     * availability zone or availability zone id for the offering depending on the
     * locationType value. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p> The location for the offering. It will return either the region,
     * availability zone or availability zone id for the offering depending on the
     * locationType value. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p> The location for the offering. It will return either the region,
     * availability zone or availability zone id for the offering depending on the
     * locationType value. </p>
     */
    inline AcceleratorTypeOffering& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p> The location for the offering. It will return either the region,
     * availability zone or availability zone id for the offering depending on the
     * locationType value. </p>
     */
    inline AcceleratorTypeOffering& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p> The location for the offering. It will return either the region,
     * availability zone or availability zone id for the offering depending on the
     * locationType value. </p>
     */
    inline AcceleratorTypeOffering& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    Aws::String m_acceleratorType;
    bool m_acceleratorTypeHasBeenSet = false;

    LocationType m_locationType;
    bool m_locationTypeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
