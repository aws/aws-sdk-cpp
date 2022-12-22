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
    AWS_IOTFLEETWISE_API UpdateModelManifestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateModelManifest"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the vehicle model to update. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the vehicle model to update. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the vehicle model to update. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the vehicle model to update. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the vehicle model to update. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the vehicle model to update. </p>
     */
    inline UpdateModelManifestRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the vehicle model to update. </p>
     */
    inline UpdateModelManifestRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the vehicle model to update. </p>
     */
    inline UpdateModelManifestRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> A brief description of the vehicle model. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A brief description of the vehicle model. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A brief description of the vehicle model. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A brief description of the vehicle model. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A brief description of the vehicle model. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A brief description of the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A brief description of the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A brief description of the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to add to the vehicle model. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNodesToAdd() const{ return m_nodesToAdd; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to add to the vehicle model. </p>
     */
    inline bool NodesToAddHasBeenSet() const { return m_nodesToAddHasBeenSet; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to add to the vehicle model. </p>
     */
    inline void SetNodesToAdd(const Aws::Vector<Aws::String>& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd = value; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to add to the vehicle model. </p>
     */
    inline void SetNodesToAdd(Aws::Vector<Aws::String>&& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd = std::move(value); }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to add to the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& WithNodesToAdd(const Aws::Vector<Aws::String>& value) { SetNodesToAdd(value); return *this;}

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to add to the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& WithNodesToAdd(Aws::Vector<Aws::String>&& value) { SetNodesToAdd(std::move(value)); return *this;}

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to add to the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& AddNodesToAdd(const Aws::String& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd.push_back(value); return *this; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to add to the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& AddNodesToAdd(Aws::String&& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to add to the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& AddNodesToAdd(const char* value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd.push_back(value); return *this; }


    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to remove from the vehicle model. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNodesToRemove() const{ return m_nodesToRemove; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to remove from the vehicle model. </p>
     */
    inline bool NodesToRemoveHasBeenSet() const { return m_nodesToRemoveHasBeenSet; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to remove from the vehicle model. </p>
     */
    inline void SetNodesToRemove(const Aws::Vector<Aws::String>& value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove = value; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to remove from the vehicle model. </p>
     */
    inline void SetNodesToRemove(Aws::Vector<Aws::String>&& value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove = std::move(value); }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to remove from the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& WithNodesToRemove(const Aws::Vector<Aws::String>& value) { SetNodesToRemove(value); return *this;}

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to remove from the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& WithNodesToRemove(Aws::Vector<Aws::String>&& value) { SetNodesToRemove(std::move(value)); return *this;}

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to remove from the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& AddNodesToRemove(const Aws::String& value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove.push_back(value); return *this; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to remove from the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& AddNodesToRemove(Aws::String&& value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of <code>fullyQualifiedName</code> of nodes, which are a general
     * abstraction of signals, to remove from the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& AddNodesToRemove(const char* value) { m_nodesToRemoveHasBeenSet = true; m_nodesToRemove.push_back(value); return *this; }


    /**
     * <p> The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model. </p>
     */
    inline const ManifestStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model. </p>
     */
    inline void SetStatus(const ManifestStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model. </p>
     */
    inline void SetStatus(ManifestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& WithStatus(const ManifestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model. </p>
     */
    inline UpdateModelManifestRequest& WithStatus(ManifestStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodesToAdd;
    bool m_nodesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodesToRemove;
    bool m_nodesToRemoveHasBeenSet = false;

    ManifestStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
