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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datapipeline/model/Selector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Defines the query to run against an object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/Query">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API Query
  {
  public:
    Query();
    Query(Aws::Utils::Json::JsonView jsonValue);
    Query& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of selectors that define the query. An object must satisfy all of the
     * selectors to match the query.</p>
     */
    inline const Aws::Vector<Selector>& GetSelectors() const{ return m_selectors; }

    /**
     * <p>List of selectors that define the query. An object must satisfy all of the
     * selectors to match the query.</p>
     */
    inline bool SelectorsHasBeenSet() const { return m_selectorsHasBeenSet; }

    /**
     * <p>List of selectors that define the query. An object must satisfy all of the
     * selectors to match the query.</p>
     */
    inline void SetSelectors(const Aws::Vector<Selector>& value) { m_selectorsHasBeenSet = true; m_selectors = value; }

    /**
     * <p>List of selectors that define the query. An object must satisfy all of the
     * selectors to match the query.</p>
     */
    inline void SetSelectors(Aws::Vector<Selector>&& value) { m_selectorsHasBeenSet = true; m_selectors = std::move(value); }

    /**
     * <p>List of selectors that define the query. An object must satisfy all of the
     * selectors to match the query.</p>
     */
    inline Query& WithSelectors(const Aws::Vector<Selector>& value) { SetSelectors(value); return *this;}

    /**
     * <p>List of selectors that define the query. An object must satisfy all of the
     * selectors to match the query.</p>
     */
    inline Query& WithSelectors(Aws::Vector<Selector>&& value) { SetSelectors(std::move(value)); return *this;}

    /**
     * <p>List of selectors that define the query. An object must satisfy all of the
     * selectors to match the query.</p>
     */
    inline Query& AddSelectors(const Selector& value) { m_selectorsHasBeenSet = true; m_selectors.push_back(value); return *this; }

    /**
     * <p>List of selectors that define the query. An object must satisfy all of the
     * selectors to match the query.</p>
     */
    inline Query& AddSelectors(Selector&& value) { m_selectorsHasBeenSet = true; m_selectors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Selector> m_selectors;
    bool m_selectorsHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
