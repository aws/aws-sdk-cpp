/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/elastic-inference/ElasticInferenceRequest.h>
#include <aws/elastic-inference/model/LocationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticInference
{
namespace Model
{

  /**
   */
  class DescribeAcceleratorOfferingsRequest : public ElasticInferenceRequest
  {
  public:
    AWS_ELASTICINFERENCE_API DescribeAcceleratorOfferingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAcceleratorOfferings"; }

    AWS_ELASTICINFERENCE_API Aws::String SerializePayload() const override;


    /**
     * <p> The location type that you want to describe accelerator type offerings for.
     * It can assume the following values: region: will return the accelerator type
     * offering at the regional level. availability-zone: will return the accelerator
     * type offering at the availability zone level. availability-zone-id: will return
     * the accelerator type offering at the availability zone level returning the
     * availability zone id. </p>
     */
    inline const LocationType& GetLocationType() const{ return m_locationType; }

    /**
     * <p> The location type that you want to describe accelerator type offerings for.
     * It can assume the following values: region: will return the accelerator type
     * offering at the regional level. availability-zone: will return the accelerator
     * type offering at the availability zone level. availability-zone-id: will return
     * the accelerator type offering at the availability zone level returning the
     * availability zone id. </p>
     */
    inline bool LocationTypeHasBeenSet() const { return m_locationTypeHasBeenSet; }

    /**
     * <p> The location type that you want to describe accelerator type offerings for.
     * It can assume the following values: region: will return the accelerator type
     * offering at the regional level. availability-zone: will return the accelerator
     * type offering at the availability zone level. availability-zone-id: will return
     * the accelerator type offering at the availability zone level returning the
     * availability zone id. </p>
     */
    inline void SetLocationType(const LocationType& value) { m_locationTypeHasBeenSet = true; m_locationType = value; }

    /**
     * <p> The location type that you want to describe accelerator type offerings for.
     * It can assume the following values: region: will return the accelerator type
     * offering at the regional level. availability-zone: will return the accelerator
     * type offering at the availability zone level. availability-zone-id: will return
     * the accelerator type offering at the availability zone level returning the
     * availability zone id. </p>
     */
    inline void SetLocationType(LocationType&& value) { m_locationTypeHasBeenSet = true; m_locationType = std::move(value); }

    /**
     * <p> The location type that you want to describe accelerator type offerings for.
     * It can assume the following values: region: will return the accelerator type
     * offering at the regional level. availability-zone: will return the accelerator
     * type offering at the availability zone level. availability-zone-id: will return
     * the accelerator type offering at the availability zone level returning the
     * availability zone id. </p>
     */
    inline DescribeAcceleratorOfferingsRequest& WithLocationType(const LocationType& value) { SetLocationType(value); return *this;}

    /**
     * <p> The location type that you want to describe accelerator type offerings for.
     * It can assume the following values: region: will return the accelerator type
     * offering at the regional level. availability-zone: will return the accelerator
     * type offering at the availability zone level. availability-zone-id: will return
     * the accelerator type offering at the availability zone level returning the
     * availability zone id. </p>
     */
    inline DescribeAcceleratorOfferingsRequest& WithLocationType(LocationType&& value) { SetLocationType(std::move(value)); return *this;}


    /**
     * <p> The list of accelerator types to describe. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }

    /**
     * <p> The list of accelerator types to describe. </p>
     */
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }

    /**
     * <p> The list of accelerator types to describe. </p>
     */
    inline void SetAcceleratorTypes(const Aws::Vector<Aws::String>& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = value; }

    /**
     * <p> The list of accelerator types to describe. </p>
     */
    inline void SetAcceleratorTypes(Aws::Vector<Aws::String>&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::move(value); }

    /**
     * <p> The list of accelerator types to describe. </p>
     */
    inline DescribeAcceleratorOfferingsRequest& WithAcceleratorTypes(const Aws::Vector<Aws::String>& value) { SetAcceleratorTypes(value); return *this;}

    /**
     * <p> The list of accelerator types to describe. </p>
     */
    inline DescribeAcceleratorOfferingsRequest& WithAcceleratorTypes(Aws::Vector<Aws::String>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}

    /**
     * <p> The list of accelerator types to describe. </p>
     */
    inline DescribeAcceleratorOfferingsRequest& AddAcceleratorTypes(const Aws::String& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }

    /**
     * <p> The list of accelerator types to describe. </p>
     */
    inline DescribeAcceleratorOfferingsRequest& AddAcceleratorTypes(Aws::String&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of accelerator types to describe. </p>
     */
    inline DescribeAcceleratorOfferingsRequest& AddAcceleratorTypes(const char* value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }

  private:

    LocationType m_locationType;
    bool m_locationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
