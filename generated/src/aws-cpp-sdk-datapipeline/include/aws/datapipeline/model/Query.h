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
    AWS_DATAPIPELINE_API Query() = default;
    AWS_DATAPIPELINE_API Query(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Query& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of selectors that define the query. An object must satisfy all of the
     * selectors to match the query.</p>
     */
    inline const Aws::Vector<Selector>& GetSelectors() const { return m_selectors; }
    inline bool SelectorsHasBeenSet() const { return m_selectorsHasBeenSet; }
    template<typename SelectorsT = Aws::Vector<Selector>>
    void SetSelectors(SelectorsT&& value) { m_selectorsHasBeenSet = true; m_selectors = std::forward<SelectorsT>(value); }
    template<typename SelectorsT = Aws::Vector<Selector>>
    Query& WithSelectors(SelectorsT&& value) { SetSelectors(std::forward<SelectorsT>(value)); return *this;}
    template<typename SelectorsT = Selector>
    Query& AddSelectors(SelectorsT&& value) { m_selectorsHasBeenSet = true; m_selectors.emplace_back(std::forward<SelectorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Selector> m_selectors;
    bool m_selectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
