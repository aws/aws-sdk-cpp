/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastic-inference/model/AcceleratorTypeOffering.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticInference
{
namespace Model
{
  class DescribeAcceleratorOfferingsResult
  {
  public:
    AWS_ELASTICINFERENCE_API DescribeAcceleratorOfferingsResult();
    AWS_ELASTICINFERENCE_API DescribeAcceleratorOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICINFERENCE_API DescribeAcceleratorOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of accelerator type offerings for a specific location. </p>
     */
    inline const Aws::Vector<AcceleratorTypeOffering>& GetAcceleratorTypeOfferings() const{ return m_acceleratorTypeOfferings; }

    /**
     * <p> The list of accelerator type offerings for a specific location. </p>
     */
    inline void SetAcceleratorTypeOfferings(const Aws::Vector<AcceleratorTypeOffering>& value) { m_acceleratorTypeOfferings = value; }

    /**
     * <p> The list of accelerator type offerings for a specific location. </p>
     */
    inline void SetAcceleratorTypeOfferings(Aws::Vector<AcceleratorTypeOffering>&& value) { m_acceleratorTypeOfferings = std::move(value); }

    /**
     * <p> The list of accelerator type offerings for a specific location. </p>
     */
    inline DescribeAcceleratorOfferingsResult& WithAcceleratorTypeOfferings(const Aws::Vector<AcceleratorTypeOffering>& value) { SetAcceleratorTypeOfferings(value); return *this;}

    /**
     * <p> The list of accelerator type offerings for a specific location. </p>
     */
    inline DescribeAcceleratorOfferingsResult& WithAcceleratorTypeOfferings(Aws::Vector<AcceleratorTypeOffering>&& value) { SetAcceleratorTypeOfferings(std::move(value)); return *this;}

    /**
     * <p> The list of accelerator type offerings for a specific location. </p>
     */
    inline DescribeAcceleratorOfferingsResult& AddAcceleratorTypeOfferings(const AcceleratorTypeOffering& value) { m_acceleratorTypeOfferings.push_back(value); return *this; }

    /**
     * <p> The list of accelerator type offerings for a specific location. </p>
     */
    inline DescribeAcceleratorOfferingsResult& AddAcceleratorTypeOfferings(AcceleratorTypeOffering&& value) { m_acceleratorTypeOfferings.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AcceleratorTypeOffering> m_acceleratorTypeOfferings;
  };

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
