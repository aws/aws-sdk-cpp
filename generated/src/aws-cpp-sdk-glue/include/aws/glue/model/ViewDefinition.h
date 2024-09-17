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
    AWS_GLUE_API ViewDefinition();
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
    inline bool GetIsProtected() const{ return m_isProtected; }
    inline bool IsProtectedHasBeenSet() const { return m_isProtectedHasBeenSet; }
    inline void SetIsProtected(bool value) { m_isProtectedHasBeenSet = true; m_isProtected = value; }
    inline ViewDefinition& WithIsProtected(bool value) { SetIsProtected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definer of a view in SQL.</p>
     */
    inline const Aws::String& GetDefiner() const{ return m_definer; }
    inline bool DefinerHasBeenSet() const { return m_definerHasBeenSet; }
    inline void SetDefiner(const Aws::String& value) { m_definerHasBeenSet = true; m_definer = value; }
    inline void SetDefiner(Aws::String&& value) { m_definerHasBeenSet = true; m_definer = std::move(value); }
    inline void SetDefiner(const char* value) { m_definerHasBeenSet = true; m_definer.assign(value); }
    inline ViewDefinition& WithDefiner(const Aws::String& value) { SetDefiner(value); return *this;}
    inline ViewDefinition& WithDefiner(Aws::String&& value) { SetDefiner(std::move(value)); return *this;}
    inline ViewDefinition& WithDefiner(const char* value) { SetDefiner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of table Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubObjects() const{ return m_subObjects; }
    inline bool SubObjectsHasBeenSet() const { return m_subObjectsHasBeenSet; }
    inline void SetSubObjects(const Aws::Vector<Aws::String>& value) { m_subObjectsHasBeenSet = true; m_subObjects = value; }
    inline void SetSubObjects(Aws::Vector<Aws::String>&& value) { m_subObjectsHasBeenSet = true; m_subObjects = std::move(value); }
    inline ViewDefinition& WithSubObjects(const Aws::Vector<Aws::String>& value) { SetSubObjects(value); return *this;}
    inline ViewDefinition& WithSubObjects(Aws::Vector<Aws::String>&& value) { SetSubObjects(std::move(value)); return *this;}
    inline ViewDefinition& AddSubObjects(const Aws::String& value) { m_subObjectsHasBeenSet = true; m_subObjects.push_back(value); return *this; }
    inline ViewDefinition& AddSubObjects(Aws::String&& value) { m_subObjectsHasBeenSet = true; m_subObjects.push_back(std::move(value)); return *this; }
    inline ViewDefinition& AddSubObjects(const char* value) { m_subObjectsHasBeenSet = true; m_subObjects.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of representations.</p>
     */
    inline const Aws::Vector<ViewRepresentation>& GetRepresentations() const{ return m_representations; }
    inline bool RepresentationsHasBeenSet() const { return m_representationsHasBeenSet; }
    inline void SetRepresentations(const Aws::Vector<ViewRepresentation>& value) { m_representationsHasBeenSet = true; m_representations = value; }
    inline void SetRepresentations(Aws::Vector<ViewRepresentation>&& value) { m_representationsHasBeenSet = true; m_representations = std::move(value); }
    inline ViewDefinition& WithRepresentations(const Aws::Vector<ViewRepresentation>& value) { SetRepresentations(value); return *this;}
    inline ViewDefinition& WithRepresentations(Aws::Vector<ViewRepresentation>&& value) { SetRepresentations(std::move(value)); return *this;}
    inline ViewDefinition& AddRepresentations(const ViewRepresentation& value) { m_representationsHasBeenSet = true; m_representations.push_back(value); return *this; }
    inline ViewDefinition& AddRepresentations(ViewRepresentation&& value) { m_representationsHasBeenSet = true; m_representations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_isProtected;
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
