/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifyuibuilder/model/Predicate.h>
#include <aws/amplifyuibuilder/model/SortProperty.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the configuration for binding a component's properties to
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ComponentDataConfiguration">AWS
   * API Reference</a></p>
   */
  class ComponentDataConfiguration
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ComponentDataConfiguration() = default;
    AWS_AMPLIFYUIBUILDER_API ComponentDataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentDataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data model to use to bind data to a component.</p>
     */
    inline const Aws::String& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Aws::String>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Aws::String>
    ComponentDataConfiguration& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes how to sort the component's properties.</p>
     */
    inline const Aws::Vector<SortProperty>& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = Aws::Vector<SortProperty>>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = Aws::Vector<SortProperty>>
    ComponentDataConfiguration& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    template<typename SortT = SortProperty>
    ComponentDataConfiguration& AddSort(SortT&& value) { m_sortHasBeenSet = true; m_sort.emplace_back(std::forward<SortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the conditional logic to use when binding data to a component. Use
     * this property to retrieve only a subset of the data in a collection.</p>
     */
    inline const Predicate& GetPredicate() const { return m_predicate; }
    inline bool PredicateHasBeenSet() const { return m_predicateHasBeenSet; }
    template<typename PredicateT = Predicate>
    void SetPredicate(PredicateT&& value) { m_predicateHasBeenSet = true; m_predicate = std::forward<PredicateT>(value); }
    template<typename PredicateT = Predicate>
    ComponentDataConfiguration& WithPredicate(PredicateT&& value) { SetPredicate(std::forward<PredicateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IDs to use to bind data to a component. Use this property to bind
     * specifically chosen data, rather than data retrieved from a query.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentifiers() const { return m_identifiers; }
    inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }
    template<typename IdentifiersT = Aws::Vector<Aws::String>>
    void SetIdentifiers(IdentifiersT&& value) { m_identifiersHasBeenSet = true; m_identifiers = std::forward<IdentifiersT>(value); }
    template<typename IdentifiersT = Aws::Vector<Aws::String>>
    ComponentDataConfiguration& WithIdentifiers(IdentifiersT&& value) { SetIdentifiers(std::forward<IdentifiersT>(value)); return *this;}
    template<typename IdentifiersT = Aws::String>
    ComponentDataConfiguration& AddIdentifiers(IdentifiersT&& value) { m_identifiersHasBeenSet = true; m_identifiers.emplace_back(std::forward<IdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::Vector<SortProperty> m_sort;
    bool m_sortHasBeenSet = false;

    Predicate m_predicate;
    bool m_predicateHasBeenSet = false;

    Aws::Vector<Aws::String> m_identifiers;
    bool m_identifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
