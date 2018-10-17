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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/Stage.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
   * resource.</p> <div class="seeAlso"><a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/stages.html">Deploying
   * API in Stages</a></div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Stages">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetStagesResult
  {
  public:
    GetStagesResult();
    GetStagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetStagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline const Aws::Vector<Stage>& GetItem() const{ return m_item; }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline void SetItem(const Aws::Vector<Stage>& value) { m_item = value; }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline void SetItem(Aws::Vector<Stage>&& value) { m_item = std::move(value); }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetStagesResult& WithItem(const Aws::Vector<Stage>& value) { SetItem(value); return *this;}

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetStagesResult& WithItem(Aws::Vector<Stage>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetStagesResult& AddItem(const Stage& value) { m_item.push_back(value); return *this; }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetStagesResult& AddItem(Stage&& value) { m_item.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Stage> m_item;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
