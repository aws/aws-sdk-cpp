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
  class AWS_ELASTICINFERENCE_API DescribeAcceleratorTypesResult
  {
  public:
    DescribeAcceleratorTypesResult();
    DescribeAcceleratorTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAcceleratorTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
