/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ViewRepresentation.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure containing details for representations.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ViewDefinition">AWS
   * API Reference</a></p>
   */
  class ViewDefinition
  {
  public:
    AWS_GLUE_API ViewDefinition() = default;
    AWS_GLUE_API ViewDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ViewDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>You can set this flag as true to instruct the engine not to push
     * user-provided operations into the logical plan of the view during query
     * planning. However, setting this flag does not guarantee that the engine will
     * comply. Refer to the engine's documentation to understand the guarantees
     * provided, if any.</p>
     */
    inline bool GetIsProtected() const { return m_isProtected; }
    inline bool IsProtectedHasBeenSet() const { return m_isProtectedHasBeenSet; }
    inline void SetIsProtected(bool value) { m_isProtectedHasBeenSet = true; m_isProtected = value; }
    inline ViewDefinition& WithIsProtected(bool value) { SetIsProtected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definer of a view in SQL.</p>
     */
    inline const Aws::String& GetDefiner() const { return m_definer; }
    inline bool DefinerHasBeenSet() const { return m_definerHasBeenSet; }
    template<typename DefinerT = Aws::String>
    void SetDefiner(DefinerT&& value) { m_definerHasBeenSet = true; m_definer = std::forward<DefinerT>(value); }
    template<typename DefinerT = Aws::String>
    ViewDefinition& WithDefiner(DefinerT&& value) { SetDefiner(std::forward<DefinerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of table Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubObjects() const { return m_subObjects; }
    inline bool SubObjectsHasBeenSet() const { return m_subObjectsHasBeenSet; }
    template<typename SubObjectsT = Aws::Vector<Aws::String>>
    void SetSubObjects(SubObjectsT&& value) { m_subObjectsHasBeenSet = true; m_subObjects = std::forward<SubObjectsT>(value); }
    template<typename SubObjectsT = Aws::Vector<Aws::String>>
    ViewDefinition& WithSubObjects(SubObjectsT&& value) { SetSubObjects(std::forward<SubObjectsT>(value)); return *this;}
    template<typename SubObjectsT = Aws::String>
    ViewDefinition& AddSubObjects(SubObjectsT&& value) { m_subObjectsHasBeenSet = true; m_subObjects.emplace_back(std::forward<SubObjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of representations.</p>
     */
    inline const Aws::Vector<ViewRepresentation>& GetRepresentations() const { return m_representations; }
    inline bool RepresentationsHasBeenSet() const { return m_representationsHasBeenSet; }
    template<typename RepresentationsT = Aws::Vector<ViewRepresentation>>
    void SetRepresentations(RepresentationsT&& value) { m_representationsHasBeenSet = true; m_representations = std::forward<RepresentationsT>(value); }
    template<typename RepresentationsT = Aws::Vector<ViewRepresentation>>
    ViewDefinition& WithRepresentations(RepresentationsT&& value) { SetRepresentations(std::forward<RepresentationsT>(value)); return *this;}
    template<typename RepresentationsT = ViewRepresentation>
    ViewDefinition& AddRepresentations(RepresentationsT&& value) { m_representationsHasBeenSet = true; m_representations.emplace_back(std::forward<RepresentationsT>(value)); return *this; }
    ///@}
  private:

    bool m_isProtected{false};
    bool m_isProtectedHasBeenSet = false;

    Aws::String m_definer;
    bool m_definerHasBeenSet = false;

    Aws::Vector<Aws::String> m_subObjects;
    bool m_subObjectsHasBeenSet = false;

    Aws::Vector<ViewRepresentation> m_representations;
    bool m_representationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
