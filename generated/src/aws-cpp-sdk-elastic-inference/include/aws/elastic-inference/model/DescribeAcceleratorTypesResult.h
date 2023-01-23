/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastic-inference/model/AcceleratorType.h>
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
  class DescribeAcceleratorTypesResult
  {
  public:
    AWS_ELASTICINFERENCE_API DescribeAcceleratorTypesResult();
    AWS_ELASTICINFERENCE_API DescribeAcceleratorTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICINFERENCE_API DescribeAcceleratorTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The available accelerator types. </p>
     */
    inline const Aws::Vector<AcceleratorType>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }

    /**
     * <p> The available accelerator types. </p>
     */
    inline void SetAcceleratorTypes(const Aws::Vector<AcceleratorType>& value) { m_acceleratorTypes = value; }

    /**
     * <p> The available accelerator types. </p>
     */
    inline void SetAcceleratorTypes(Aws::Vector<AcceleratorType>&& value) { m_acceleratorTypes = std::move(value); }

    /**
     * <p> The available accelerator types. </p>
     */
    inline DescribeAcceleratorTypesResult& WithAcceleratorTypes(const Aws::Vector<AcceleratorType>& value) { SetAcceleratorTypes(value); return *this;}

    /**
     * <p> The available accelerator types. </p>
     */
    inline DescribeAcceleratorTypesResult& WithAcceleratorTypes(Aws::Vector<AcceleratorType>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}

    /**
     * <p> The available accelerator types. </p>
     */
    inline DescribeAcceleratorTypesResult& AddAcceleratorTypes(const AcceleratorType& value) { m_acceleratorTypes.push_back(value); return *this; }

    /**
     * <p> The available accelerator types. </p>
     */
    inline DescribeAcceleratorTypesResult& AddAcceleratorTypes(AcceleratorType&& value) { m_acceleratorTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AcceleratorType> m_acceleratorTypes;
  };

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
