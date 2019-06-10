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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/Algorithm.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API DescribeAlgorithmResult
  {
  public:
    DescribeAlgorithmResult();
    DescribeAlgorithmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAlgorithmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A listing of the properties of the algorithm.</p>
     */
    inline const Algorithm& GetAlgorithm() const{ return m_algorithm; }

    /**
     * <p>A listing of the properties of the algorithm.</p>
     */
    inline void SetAlgorithm(const Algorithm& value) { m_algorithm = value; }

    /**
     * <p>A listing of the properties of the algorithm.</p>
     */
    inline void SetAlgorithm(Algorithm&& value) { m_algorithm = std::move(value); }

    /**
     * <p>A listing of the properties of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithm(const Algorithm& value) { SetAlgorithm(value); return *this;}

    /**
     * <p>A listing of the properties of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithm(Algorithm&& value) { SetAlgorithm(std::move(value)); return *this;}

  private:

    Algorithm m_algorithm;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
