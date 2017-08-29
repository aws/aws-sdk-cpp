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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/Layer.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeLayers</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeLayersResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeLayersResult
  {
  public:
    DescribeLayersResult();
    DescribeLayersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLayersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Layer</code> objects that describe the layers.</p>
     */
    inline const Aws::Vector<Layer>& GetLayers() const{ return m_layers; }

    /**
     * <p>An array of <code>Layer</code> objects that describe the layers.</p>
     */
    inline void SetLayers(const Aws::Vector<Layer>& value) { m_layers = value; }

    /**
     * <p>An array of <code>Layer</code> objects that describe the layers.</p>
     */
    inline void SetLayers(Aws::Vector<Layer>&& value) { m_layers = std::move(value); }

    /**
     * <p>An array of <code>Layer</code> objects that describe the layers.</p>
     */
    inline DescribeLayersResult& WithLayers(const Aws::Vector<Layer>& value) { SetLayers(value); return *this;}

    /**
     * <p>An array of <code>Layer</code> objects that describe the layers.</p>
     */
    inline DescribeLayersResult& WithLayers(Aws::Vector<Layer>&& value) { SetLayers(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Layer</code> objects that describe the layers.</p>
     */
    inline DescribeLayersResult& AddLayers(const Layer& value) { m_layers.push_back(value); return *this; }

    /**
     * <p>An array of <code>Layer</code> objects that describe the layers.</p>
     */
    inline DescribeLayersResult& AddLayers(Layer&& value) { m_layers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Layer> m_layers;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
