/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/Node.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class UpdateSignalCatalogRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API UpdateSignalCatalogRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSignalCatalog"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the signal catalog to update. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the signal catalog to update. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the signal catalog to update. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the signal catalog to update. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the signal catalog to update. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the signal catalog to update. </p>
     */
    inline UpdateSignalCatalogRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the signal catalog to update. </p>
     */
    inline UpdateSignalCatalogRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the signal catalog to update. </p>
     */
    inline UpdateSignalCatalogRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> A brief description of the signal catalog to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A brief description of the signal catalog to update.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A brief description of the signal catalog to update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A brief description of the signal catalog to update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A brief description of the signal catalog to update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A brief description of the signal catalog to update.</p>
     */
    inline UpdateSignalCatalogRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A brief description of the signal catalog to update.</p>
     */
    inline UpdateSignalCatalogRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A brief description of the signal catalog to update.</p>
     */
    inline UpdateSignalCatalogRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A list of information about nodes to add to the signal catalog. </p>
     */
    inline const Aws::Vector<Node>& GetNodesToAdd() const{ return m_nodesToAdd; }

    /**
     * <p> A list of information about nodes to add to the signal catalog. </p>
     */
    inline bool NodesToAddHasBeenSet() const { return m_nodesToAddHasBeenSet; }

    /**
     * <p> A list of information about nodes to add to the signal catalog. </p>
     */
    inline void SetNodesToAdd(const Aws::Vector<Node>& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd = value; }

    /**
     * <p> A list of information about nodes to add to the signal catalog. </p>
     */
    inline void SetNodesToAdd(Aws::Vector<Node>&& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd = std::move(value); }

    /**
     * <p> A list of information about nodes to add to the signal catalog. </p>
     */
    inline UpdateSignalCatalogRequest& WithNodesToAdd(const Aws::Vector<Node>& value) { SetNodesToAdd(value); return *this;}

    /**
     * <p> A list of information about nodes to add to the signal catalog. </p>
     */
    inline UpdateSignalCatalogRequest& WithNodesToAdd(Aws::Vector<Node>&& value) { SetNodesToAdd(std::move(value)); return *this;}

    /**
     * <p> A list of information about nodes to add to the signal catalog. </p>
     */
    inline UpdateSignalCatalogRequest& AddNodesToAdd(const Node& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd.push_back(value); return *this; }

    /**
     * <p> A list of information about nodes to add to the signal catalog. </p>
     */
    inline UpdateSignalCatalogRequest& AddNodesToAdd(Node&& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of information about nodes to update in the signal catalog. </p>
     */
    inline const Aws::Vector<Node>& GetNodesToUpdate() const{ return m_nodesToUpdate; }

    /**
     * <p> A list of information about nodes to update in the signal catalog. </p>
     */
    inline bool NodesToUpdateHasBeenSet() const { return m_nodesToUpdateHasBeenSet; }

    /**
     * <p> A list of information about nodes to update in the signal catalog. </p>
     */
    inline void SetNodesToUpdate(const Aws::Vector<Node>& value) { m_nodesToUpdateHasBeenSet = true; m_nodesToUpdate = value; }

    /**
     * <p> A list of information about nodes to update in the signal catalog. </p>
     */
    inline void SetNodesToUpdate(Aws::Vector<Node>&& value) { m_nodesToUpdateHasBeenSet = true; m_nodesToUpdate = std::move(value); }

    /**
     * <p> A list of information about nodes to update in the signal catalog. </p>
     */
    inline UpdateSignalCatalogRequest& WithNodesToUpdate(const Aws::Vector<Node>& value) { SetNodesToUpdate(value); return *this;}

    /**
     * <p> A list of information about nodes to update in the signal catalog. </p>
     */
    inline UpdateSignalCatalogRequest& WithNodesToUpdate(Aws::Vector<Node>&& value) { SetNodesToUpdate(std::move(value)); return *this;}

    /**
     * <p> A list of information about nodes to update in the signal catalog. </p>
     */
    inline UpdateSignalCatalogRequest& AddNodesToUpdate(const Node& value) { m_nodesToUpdateHasBeenSet = true; m_nodesToUpdate.push_back(value); return *this; }

    /**
     * <p> A list of information about nodes to update in the signal catalog. </p>
     */
    inline UpdateSignalCatalogRequest& AddNodesToUpdate(Node&& value) { m_nodesToUpdateHasBeenSet = true; m_nodesToUpdate.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes to remove from the signal
     * catalog. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNodesToRemove() const{ return m_nodesToRemove; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes to remove from the signal
     * catalog. </p>
     */
    inline bool NodesToRemoveHasBeenSet() const { return m_nodesToRemoveHasBeenSet; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes to remove from the signal
     * catalog. </p>
     */
    inline void SetNodesToRemove(const Aws::Vector<Aws::String>& value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove = value; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes to remove from the signal
     * catalog. </p>
     */
    inline void SetNodesToRemove(Aws::Vector<Aws::String>&& value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove = std::move(value); }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes to remove from the signal
     * catalog. </p>
     */
    inline UpdateSignalCatalogRequest& WithNodesToRemove(const Aws::Vector<Aws::String>& value) { SetNodesToRemove(value); return *this;}

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes to remove from the signal
     * catalog. </p>
     */
    inline UpdateSignalCatalogRequest& WithNodesToRemove(Aws::Vector<Aws::String>&& value) { SetNodesToRemove(std::move(value)); return *this;}

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes to remove from the signal
     * catalog. </p>
     */
    inline UpdateSignalCatalogRequest& AddNodesToRemove(const Aws::String& value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove.push_back(value); return *this; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes to remove from the signal
     * catalog. </p>
     */
    inline UpdateSignalCatalogRequest& AddNodesToRemove(Aws::String&& value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes to remove from the signal
     * catalog. </p>
     */
    inline UpdateSignalCatalogRequest& AddNodesToRemove(const char* value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Node> m_nodesToAdd;
    bool m_nodesToAddHasBeenSet = false;

    Aws::Vector<Node> m_nodesToUpdate;
    bool m_nodesToUpdateHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodesToRemove;
    bool m_nodesToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
