/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DetectCustomLabelsResult
  {
  public:
    AWS_REKOGNITION_API DetectCustomLabelsResult();
    AWS_REKOGNITION_API DetectCustomLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectCustomLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
