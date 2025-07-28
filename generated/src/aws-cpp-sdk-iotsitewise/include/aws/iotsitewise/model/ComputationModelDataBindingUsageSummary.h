/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/MatchedDataBinding.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>A summary of how a specific data binding is used across computation models.
   * This tracks dependencies between data sources and computation models, allowing
   * you to understand the impact of changes to data sources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ComputationModelDataBindingUsageSummary">AWS
   * API Reference</a></p>
   */
  class ComputationModelDataBindingUsageSummary
  {
  public:
    AWS_IOTSITEWISE_API ComputationModelDataBindingUsageSummary() = default;
    AWS_IOTSITEWISE_API ComputationModelDataBindingUsageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ComputationModelDataBindingUsageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of computation model IDs that use this data binding. This allows
     * identification of all computation models affected by changes to the referenced
     * data source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetComputationModelIds() const { return m_computationModelIds; }
    inline bool ComputationModelIdsHasBeenSet() const { return m_computationModelIdsHasBeenSet; }
    template<typename ComputationModelIdsT = Aws::Vector<Aws::String>>
    void SetComputationModelIds(ComputationModelIdsT&& value) { m_computationModelIdsHasBeenSet = true; m_computationModelIds = std::forward<ComputationModelIdsT>(value); }
    template<typename ComputationModelIdsT = Aws::Vector<Aws::String>>
    ComputationModelDataBindingUsageSummary& WithComputationModelIds(ComputationModelIdsT&& value) { SetComputationModelIds(std::forward<ComputationModelIdsT>(value)); return *this;}
    template<typename ComputationModelIdsT = Aws::String>
    ComputationModelDataBindingUsageSummary& AddComputationModelIds(ComputationModelIdsT&& value) { m_computationModelIdsHasBeenSet = true; m_computationModelIds.emplace_back(std::forward<ComputationModelIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data binding matched by the filter criteria. Contains details about
     * specific data binding values used by the computation models.</p>
     */
    inline const MatchedDataBinding& GetMatchedDataBinding() const { return m_matchedDataBinding; }
    inline bool MatchedDataBindingHasBeenSet() const { return m_matchedDataBindingHasBeenSet; }
    template<typename MatchedDataBindingT = MatchedDataBinding>
    void SetMatchedDataBinding(MatchedDataBindingT&& value) { m_matchedDataBindingHasBeenSet = true; m_matchedDataBinding = std::forward<MatchedDataBindingT>(value); }
    template<typename MatchedDataBindingT = MatchedDataBinding>
    ComputationModelDataBindingUsageSummary& WithMatchedDataBinding(MatchedDataBindingT&& value) { SetMatchedDataBinding(std::forward<MatchedDataBindingT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_computationModelIds;
    bool m_computationModelIdsHasBeenSet = false;

    MatchedDataBinding m_matchedDataBinding;
    bool m_matchedDataBindingHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
