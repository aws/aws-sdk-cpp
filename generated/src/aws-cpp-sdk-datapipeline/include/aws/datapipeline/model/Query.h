/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Query
  {
  public:
    AWS_DATAPIPELINE_API Query();
    AWS_DATAPIPELINE_API Query(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Query& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of selectors that define the query. An object must satisfy all of the
     * selectors to match the query.</p>
     */
    inline const Aws::Vector<Selector>& GetSelectors() const{ return m_selectors; }
    inline bool SelectorsHasBeenSet() const { return m_selectorsHasBeenSet; }
    inline void SetSelectors(const Aws::Vector<Selector>& value) { m_selectorsHasBeenSet = true; m_selectors = value; }
    inline void SetSelectors(Aws::Vector<Selector>&& value) { m_selectorsHasBeenSet = true; m_selectors = std::move(value); }
    inline Query& WithSelectors(const Aws::Vector<Selector>& value) { SetSelectors(value); return *this;}
    inline Query& WithSelectors(Aws::Vector<Selector>&& value) { SetSelectors(std::move(value)); return *this;}
    inline Query& AddSelectors(const Selector& value) { m_selectorsHasBeenSet = true; m_selectors.push_back(value); return *this; }
    inline Query& AddSelectors(Selector&& value) { m_selectorsHasBeenSet = true; m_selectors.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Selector> m_selectors;
    bool m_selectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
