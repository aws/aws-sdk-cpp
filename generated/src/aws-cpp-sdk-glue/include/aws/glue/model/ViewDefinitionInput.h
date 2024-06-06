/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ViewRepresentationInput.h>
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
   * <p>A structure containing details for creating or updating an Glue
   * view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ViewDefinitionInput">AWS
   * API Reference</a></p>
   */
  class ViewDefinitionInput
  {
  public:
    AWS_GLUE_API ViewDefinitionInput();
    AWS_GLUE_API ViewDefinitionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ViewDefinitionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>You can set this flag as true to instruct the engine not to push
     * user-provided operations into the logical plan of the view during query
     * planning. However, setting this flag does not guarantee that the engine will
     * comply. Refer to the engine's documentation to understand the guarantees
     * provided, if any.</p>
     */
    inline bool GetIsProtected() const{ return m_isProtected; }

    /**
     * <p>You can set this flag as true to instruct the engine not to push
     * user-provided operations into the logical plan of the view during query
     * planning. However, setting this flag does not guarantee that the engine will
     * comply. Refer to the engine's documentation to understand the guarantees
     * provided, if any.</p>
     */
    inline bool IsProtectedHasBeenSet() const { return m_isProtectedHasBeenSet; }

    /**
     * <p>You can set this flag as true to instruct the engine not to push
     * user-provided operations into the logical plan of the view during query
     * planning. However, setting this flag does not guarantee that the engine will
     * comply. Refer to the engine's documentation to understand the guarantees
     * provided, if any.</p>
     */
    inline void SetIsProtected(bool value) { m_isProtectedHasBeenSet = true; m_isProtected = value; }

    /**
     * <p>You can set this flag as true to instruct the engine not to push
     * user-provided operations into the logical plan of the view during query
     * planning. However, setting this flag does not guarantee that the engine will
     * comply. Refer to the engine's documentation to understand the guarantees
     * provided, if any.</p>
     */
    inline ViewDefinitionInput& WithIsProtected(bool value) { SetIsProtected(value); return *this;}


    /**
     * <p>The definer of a view in SQL.</p>
     */
    inline const Aws::String& GetDefiner() const{ return m_definer; }

    /**
     * <p>The definer of a view in SQL.</p>
     */
    inline bool DefinerHasBeenSet() const { return m_definerHasBeenSet; }

    /**
     * <p>The definer of a view in SQL.</p>
     */
    inline void SetDefiner(const Aws::String& value) { m_definerHasBeenSet = true; m_definer = value; }

    /**
     * <p>The definer of a view in SQL.</p>
     */
    inline void SetDefiner(Aws::String&& value) { m_definerHasBeenSet = true; m_definer = std::move(value); }

    /**
     * <p>The definer of a view in SQL.</p>
     */
    inline void SetDefiner(const char* value) { m_definerHasBeenSet = true; m_definer.assign(value); }

    /**
     * <p>The definer of a view in SQL.</p>
     */
    inline ViewDefinitionInput& WithDefiner(const Aws::String& value) { SetDefiner(value); return *this;}

    /**
     * <p>The definer of a view in SQL.</p>
     */
    inline ViewDefinitionInput& WithDefiner(Aws::String&& value) { SetDefiner(std::move(value)); return *this;}

    /**
     * <p>The definer of a view in SQL.</p>
     */
    inline ViewDefinitionInput& WithDefiner(const char* value) { SetDefiner(value); return *this;}


    /**
     * <p>A list of structures that contains the dialect of the view, and the query
     * that defines the view.</p>
     */
    inline const Aws::Vector<ViewRepresentationInput>& GetRepresentations() const{ return m_representations; }

    /**
     * <p>A list of structures that contains the dialect of the view, and the query
     * that defines the view.</p>
     */
    inline bool RepresentationsHasBeenSet() const { return m_representationsHasBeenSet; }

    /**
     * <p>A list of structures that contains the dialect of the view, and the query
     * that defines the view.</p>
     */
    inline void SetRepresentations(const Aws::Vector<ViewRepresentationInput>& value) { m_representationsHasBeenSet = true; m_representations = value; }

    /**
     * <p>A list of structures that contains the dialect of the view, and the query
     * that defines the view.</p>
     */
    inline void SetRepresentations(Aws::Vector<ViewRepresentationInput>&& value) { m_representationsHasBeenSet = true; m_representations = std::move(value); }

    /**
     * <p>A list of structures that contains the dialect of the view, and the query
     * that defines the view.</p>
     */
    inline ViewDefinitionInput& WithRepresentations(const Aws::Vector<ViewRepresentationInput>& value) { SetRepresentations(value); return *this;}

    /**
     * <p>A list of structures that contains the dialect of the view, and the query
     * that defines the view.</p>
     */
    inline ViewDefinitionInput& WithRepresentations(Aws::Vector<ViewRepresentationInput>&& value) { SetRepresentations(std::move(value)); return *this;}

    /**
     * <p>A list of structures that contains the dialect of the view, and the query
     * that defines the view.</p>
     */
    inline ViewDefinitionInput& AddRepresentations(const ViewRepresentationInput& value) { m_representationsHasBeenSet = true; m_representations.push_back(value); return *this; }

    /**
     * <p>A list of structures that contains the dialect of the view, and the query
     * that defines the view.</p>
     */
    inline ViewDefinitionInput& AddRepresentations(ViewRepresentationInput&& value) { m_representationsHasBeenSet = true; m_representations.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of base table ARNs that make up the view.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubObjects() const{ return m_subObjects; }

    /**
     * <p>A list of base table ARNs that make up the view.</p>
     */
    inline bool SubObjectsHasBeenSet() const { return m_subObjectsHasBeenSet; }

    /**
     * <p>A list of base table ARNs that make up the view.</p>
     */
    inline void SetSubObjects(const Aws::Vector<Aws::String>& value) { m_subObjectsHasBeenSet = true; m_subObjects = value; }

    /**
     * <p>A list of base table ARNs that make up the view.</p>
     */
    inline void SetSubObjects(Aws::Vector<Aws::String>&& value) { m_subObjectsHasBeenSet = true; m_subObjects = std::move(value); }

    /**
     * <p>A list of base table ARNs that make up the view.</p>
     */
    inline ViewDefinitionInput& WithSubObjects(const Aws::Vector<Aws::String>& value) { SetSubObjects(value); return *this;}

    /**
     * <p>A list of base table ARNs that make up the view.</p>
     */
    inline ViewDefinitionInput& WithSubObjects(Aws::Vector<Aws::String>&& value) { SetSubObjects(std::move(value)); return *this;}

    /**
     * <p>A list of base table ARNs that make up the view.</p>
     */
    inline ViewDefinitionInput& AddSubObjects(const Aws::String& value) { m_subObjectsHasBeenSet = true; m_subObjects.push_back(value); return *this; }

    /**
     * <p>A list of base table ARNs that make up the view.</p>
     */
    inline ViewDefinitionInput& AddSubObjects(Aws::String&& value) { m_subObjectsHasBeenSet = true; m_subObjects.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of base table ARNs that make up the view.</p>
     */
    inline ViewDefinitionInput& AddSubObjects(const char* value) { m_subObjectsHasBeenSet = true; m_subObjects.push_back(value); return *this; }

  private:

    bool m_isProtected;
    bool m_isProtectedHasBeenSet = false;

    Aws::String m_definer;
    bool m_definerHasBeenSet = false;

    Aws::Vector<ViewRepresentationInput> m_representations;
    bool m_representationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subObjects;
    bool m_subObjectsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
