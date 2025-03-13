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
    AWS_IOTFLEETWISE_API UpdateSignalCatalogRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSignalCatalog"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the signal catalog to update. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateSignalCatalogRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A brief description of the signal catalog to update.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateSignalCatalogRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of information about nodes to add to the signal catalog. </p>
     */
    inline const Aws::Vector<Node>& GetNodesToAdd() const { return m_nodesToAdd; }
    inline bool NodesToAddHasBeenSet() const { return m_nodesToAddHasBeenSet; }
    template<typename NodesToAddT = Aws::Vector<Node>>
    void SetNodesToAdd(NodesToAddT&& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd = std::forward<NodesToAddT>(value); }
    template<typename NodesToAddT = Aws::Vector<Node>>
    UpdateSignalCatalogRequest& WithNodesToAdd(NodesToAddT&& value) { SetNodesToAdd(std::forward<NodesToAddT>(value)); return *this;}
    template<typename NodesToAddT = Node>
    UpdateSignalCatalogRequest& AddNodesToAdd(NodesToAddT&& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd.emplace_back(std::forward<NodesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of information about nodes to update in the signal catalog. </p>
     */
    inline const Aws::Vector<Node>& GetNodesToUpdate() const { return m_nodesToUpdate; }
    inline bool NodesToUpdateHasBeenSet() const { return m_nodesToUpdateHasBeenSet; }
    template<typename NodesToUpdateT = Aws::Vector<Node>>
    void SetNodesToUpdate(NodesToUpdateT&& value) { m_nodesToUpdateHasBeenSet = true; m_nodesToUpdate = std::forward<NodesToUpdateT>(value); }
    template<typename NodesToUpdateT = Aws::Vector<Node>>
    UpdateSignalCatalogRequest& WithNodesToUpdate(NodesToUpdateT&& value) { SetNodesToUpdate(std::forward<NodesToUpdateT>(value)); return *this;}
    template<typename NodesToUpdateT = Node>
    UpdateSignalCatalogRequest& AddNodesToUpdate(NodesToUpdateT&& value) { m_nodesToUpdateHasBeenSet = true; m_nodesToUpdate.emplace_back(std::forward<NodesToUpdateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes to remove from the signal
     * catalog. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNodesToRemove() const { return m_nodesToRemove; }
    inline bool NodesToRemoveHasBeenSet() const { return m_nodesToRemoveHasBeenSet; }
    template<typename NodesToRemoveT = Aws::Vector<Aws::String>>
    void SetNodesToRemove(NodesToRemoveT&& value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove = std::forward<NodesToRemoveT>(value); }
    template<typename NodesToRemoveT = Aws::Vector<Aws::String>>
    UpdateSignalCatalogRequest& WithNodesToRemove(NodesToRemoveT&& value) { SetNodesToRemove(std::forward<NodesToRemoveT>(value)); return *this;}
    template<typename NodesToRemoveT = Aws::String>
    UpdateSignalCatalogRequest& AddNodesToRemove(NodesToRemoveT&& value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove.emplace_back(std::forward<NodesToRemoveT>(value)); return *this; }
    ///@}
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
