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
#include <aws/personalize/model/FeatureTransformation.h>
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
  class AWS_PERSONALIZE_API DescribeFeatureTransformationResult
  {
  public:
    DescribeFeatureTransformationResult();
    DescribeFeatureTransformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFeatureTransformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A listing of the FeatureTransformation properties.</p>
     */
    inline const FeatureTransformation& GetFeatureTransformation() const{ return m_featureTransformation; }

    /**
     * <p>A listing of the FeatureTransformation properties.</p>
     */
    inline void SetFeatureTransformation(const FeatureTransformation& value) { m_featureTransformation = value; }

    /**
     * <p>A listing of the FeatureTransformation properties.</p>
     */
    inline void SetFeatureTransformation(FeatureTransformation&& value) { m_featureTransformation = std::move(value); }

    /**
     * <p>A listing of the FeatureTransformation properties.</p>
     */
    inline DescribeFeatureTransformationResult& WithFeatureTransformation(const FeatureTransformation& value) { SetFeatureTransformation(value); return *this;}

    /**
     * <p>A listing of the FeatureTransformation properties.</p>
     */
    inline DescribeFeatureTransformationResult& WithFeatureTransformation(FeatureTransformation&& value) { SetFeatureTransformation(std::move(value)); return *this;}

  private:

    FeatureTransformation m_featureTransformation;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
