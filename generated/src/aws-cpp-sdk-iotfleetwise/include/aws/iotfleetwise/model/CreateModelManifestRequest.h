/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class CreateModelManifestRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API CreateModelManifestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelManifest"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the vehicle model to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the vehicle model to create.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the vehicle model to create.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the vehicle model to create.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the vehicle model to create.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the vehicle model to create.</p>
     */
    inline CreateModelManifestRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the vehicle model to create.</p>
     */
    inline CreateModelManifestRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the vehicle model to create.</p>
     */
    inline CreateModelManifestRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateModelManifestRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A brief description of the vehicle model. </p>
     */
    inline CreateModelManifestRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A brief description of the vehicle model. </p>
     */
    inline CreateModelManifestRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A list of nodes, which are a general abstraction of signals. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNodes() const{ return m_nodes; }

    /**
     * <p> A list of nodes, which are a general abstraction of signals. </p>
     */
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }

    /**
     * <p> A list of nodes, which are a general abstraction of signals. </p>
     */
    inline void SetNodes(const Aws::Vector<Aws::String>& value) { m_nodesHasBeenSet = true; m_nodes = value; }

    /**
     * <p> A list of nodes, which are a general abstraction of signals. </p>
     */
    inline void SetNodes(Aws::Vector<Aws::String>&& value) { m_nodesHasBeenSet = true; m_nodes = std::move(value); }

    /**
     * <p> A list of nodes, which are a general abstraction of signals. </p>
     */
    inline CreateModelManifestRequest& WithNodes(const Aws::Vector<Aws::String>& value) { SetNodes(value); return *this;}

    /**
     * <p> A list of nodes, which are a general abstraction of signals. </p>
     */
    inline CreateModelManifestRequest& WithNodes(Aws::Vector<Aws::String>&& value) { SetNodes(std::move(value)); return *this;}

    /**
     * <p> A list of nodes, which are a general abstraction of signals. </p>
     */
    inline CreateModelManifestRequest& AddNodes(const Aws::String& value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }

    /**
     * <p> A list of nodes, which are a general abstraction of signals. </p>
     */
    inline CreateModelManifestRequest& AddNodes(Aws::String&& value) { m_nodesHasBeenSet = true; m_nodes.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of nodes, which are a general abstraction of signals. </p>
     */
    inline CreateModelManifestRequest& AddNodes(const char* value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }


    /**
     * <p> The Amazon Resource Name (ARN) of a signal catalog. </p>
     */
    inline const Aws::String& GetSignalCatalogArn() const{ return m_signalCatalogArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of a signal catalog. </p>
     */
    inline bool SignalCatalogArnHasBeenSet() const { return m_signalCatalogArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of a signal catalog. </p>
     */
    inline void SetSignalCatalogArn(const Aws::String& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of a signal catalog. </p>
     */
    inline void SetSignalCatalogArn(Aws::String&& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a signal catalog. </p>
     */
    inline void SetSignalCatalogArn(const char* value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a signal catalog. </p>
     */
    inline CreateModelManifestRequest& WithSignalCatalogArn(const Aws::String& value) { SetSignalCatalogArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a signal catalog. </p>
     */
    inline CreateModelManifestRequest& WithSignalCatalogArn(Aws::String&& value) { SetSignalCatalogArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a signal catalog. </p>
     */
    inline CreateModelManifestRequest& WithSignalCatalogArn(const char* value) { SetSignalCatalogArn(value); return *this;}


    /**
     * <p>Metadata that can be used to manage the vehicle model.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata that can be used to manage the vehicle model.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata that can be used to manage the vehicle model.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata that can be used to manage the vehicle model.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata that can be used to manage the vehicle model.</p>
     */
    inline CreateModelManifestRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata that can be used to manage the vehicle model.</p>
     */
    inline CreateModelManifestRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that can be used to manage the vehicle model.</p>
     */
    inline CreateModelManifestRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata that can be used to manage the vehicle model.</p>
     */
    inline CreateModelManifestRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodes;
    bool m_nodesHasBeenSet = false;

    Aws::String m_signalCatalogArn;
    bool m_signalCatalogArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
