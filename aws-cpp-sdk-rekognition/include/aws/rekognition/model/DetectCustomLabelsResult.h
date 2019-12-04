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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/CustomLabel.h>
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
namespace Rekognition
{
namespace Model
{
  class AWS_REKOGNITION_API DetectCustomLabelsResult
  {
  public:
    DetectCustomLabelsResult();
    DetectCustomLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectCustomLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of custom labels detected in the input image.</p>
     */
    inline const Aws::Vector<CustomLabel>& GetCustomLabels() const{ return m_customLabels; }

    /**
     * <p>An array of custom labels detected in the input image.</p>
     */
    inline void SetCustomLabels(const Aws::Vector<CustomLabel>& value) { m_customLabels = value; }

    /**
     * <p>An array of custom labels detected in the input image.</p>
     */
    inline void SetCustomLabels(Aws::Vector<CustomLabel>&& value) { m_customLabels = std::move(value); }

    /**
     * <p>An array of custom labels detected in the input image.</p>
     */
    inline DetectCustomLabelsResult& WithCustomLabels(const Aws::Vector<CustomLabel>& value) { SetCustomLabels(value); return *this;}

    /**
     * <p>An array of custom labels detected in the input image.</p>
     */
    inline DetectCustomLabelsResult& WithCustomLabels(Aws::Vector<CustomLabel>&& value) { SetCustomLabels(std::move(value)); return *this;}

    /**
     * <p>An array of custom labels detected in the input image.</p>
     */
    inline DetectCustomLabelsResult& AddCustomLabels(const CustomLabel& value) { m_customLabels.push_back(value); return *this; }

    /**
     * <p>An array of custom labels detected in the input image.</p>
     */
    inline DetectCustomLabelsResult& AddCustomLabels(CustomLabel&& value) { m_customLabels.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CustomLabel> m_customLabels;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
