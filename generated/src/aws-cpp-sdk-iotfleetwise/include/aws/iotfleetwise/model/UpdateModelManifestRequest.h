/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/ManifestStatus.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class UpdateModelManifestRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API UpdateModelManifestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateModelManifest"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the vehicle model to update. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateModelManifestRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A brief description of the vehicle model. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateModelManifestRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to add to the vehicle model. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNodesToAdd() const { return m_nodesToAdd; }
    inline bool NodesToAddHasBeenSet() const { return m_nodesToAddHasBeenSet; }
    template<typename NodesToAddT = Aws::Vector<Aws::String>>
    void SetNodesToAdd(NodesToAddT&& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd = std::forward<NodesToAddT>(value); }
    template<typename NodesToAddT = Aws::Vector<Aws::String>>
    UpdateModelManifestRequest& WithNodesToAdd(NodesToAddT&& value) { SetNodesToAdd(std::forward<NodesToAddT>(value)); return *this;}
    template<typename NodesToAddT = Aws::String>
    UpdateModelManifestRequest& AddNodesToAdd(NodesToAddT&& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd.emplace_back(std::forward<NodesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to remove from the vehicle model. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNodesToRemove() const { return m_nodesToRemove; }
    inline bool NodesToRemoveHasBeenSet() const { return m_nodesToRemoveHasBeenSet; }
    template<typename NodesToRemoveT = Aws::Vector<Aws::String>>
    void SetNodesToRemove(NodesToRemoveT&& value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove = std::forward<NodesToRemoveT>(value); }
    template<typename NodesToRemoveT = Aws::Vector<Aws::String>>
    UpdateModelManifestRequest& WithNodesToRemove(NodesToRemoveT&& value) { SetNodesToRemove(std::forward<NodesToRemoveT>(value)); return *this;}
    template<typename NodesToRemoveT = Aws::String>
    UpdateModelManifestRequest& AddNodesToRemove(NodesToRemoveT&& value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove.emplace_back(std::forward<NodesToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model. </p>
     */
    inline ManifestStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ManifestStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateModelManifestRequest& WithStatus(ManifestStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodesToAdd;
    bool m_nodesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodesToRemove;
    bool m_nodesToRemoveHasBeenSet = false;

    ManifestStatus m_status{ManifestStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
