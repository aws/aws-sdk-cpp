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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/LayersListItem.h>
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
namespace Lambda
{
namespace Model
{
  class AWS_LAMBDA_API ListLayersResult
  {
  public:
    ListLayersResult();
    ListLayersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListLayersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A pagination token returned when the response doesn't contain all layers.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>A pagination token returned when the response doesn't contain all layers.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>A pagination token returned when the response doesn't contain all layers.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>A pagination token returned when the response doesn't contain all layers.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>A pagination token returned when the response doesn't contain all layers.</p>
     */
    inline ListLayersResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>A pagination token returned when the response doesn't contain all layers.</p>
     */
    inline ListLayersResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token returned when the response doesn't contain all layers.</p>
     */
    inline ListLayersResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>A list of function layers.</p>
     */
    inline const Aws::Vector<LayersListItem>& GetLayers() const{ return m_layers; }

    /**
     * <p>A list of function layers.</p>
     */
    inline void SetLayers(const Aws::Vector<LayersListItem>& value) { m_layers = value; }

    /**
     * <p>A list of function layers.</p>
     */
    inline void SetLayers(Aws::Vector<LayersListItem>&& value) { m_layers = std::move(value); }

    /**
     * <p>A list of function layers.</p>
     */
    inline ListLayersResult& WithLayers(const Aws::Vector<LayersListItem>& value) { SetLayers(value); return *this;}

    /**
     * <p>A list of function layers.</p>
     */
    inline ListLayersResult& WithLayers(Aws::Vector<LayersListItem>&& value) { SetLayers(std::move(value)); return *this;}

    /**
     * <p>A list of function layers.</p>
     */
    inline ListLayersResult& AddLayers(const LayersListItem& value) { m_layers.push_back(value); return *this; }

    /**
     * <p>A list of function layers.</p>
     */
    inline ListLayersResult& AddLayers(LayersListItem&& value) { m_layers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<LayersListItem> m_layers;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
