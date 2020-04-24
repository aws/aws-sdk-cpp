/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_ELASTICINFERENCE_API DescribeAcceleratorOfferingsResult
  {
  public:
    DescribeAcceleratorOfferingsResult();
    DescribeAcceleratorOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAcceleratorOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
