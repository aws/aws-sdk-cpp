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
  class CreateSignalCatalogRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API CreateSignalCatalogRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSignalCatalog"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the signal catalog to create. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the signal catalog to create. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the signal catalog to create. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the signal catalog to create. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the signal catalog to create. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the signal catalog to create. </p>
     */
    inline CreateSignalCatalogRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the signal catalog to create. </p>
     */
    inline CreateSignalCatalogRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the signal catalog to create. </p>
     */
    inline CreateSignalCatalogRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A brief description of the signal catalog.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the signal catalog.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the signal catalog.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the signal catalog.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the signal catalog.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the signal catalog.</p>
     */
    inline CreateSignalCatalogRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the signal catalog.</p>
     */
    inline CreateSignalCatalogRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the signal catalog.</p>
     */
    inline CreateSignalCatalogRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A list of information about nodes, which are a general abstraction of
     * signals. For more information, see the API data type.</p>
     */
    inline const Aws::Vector<Node>& GetNodes() const{ return m_nodes; }

    /**
     * <p> A list of information about nodes, which are a general abstraction of
     * signals. For more information, see the API data type.</p>
     */
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }

    /**
     * <p> A list of information about nodes, which are a general abstraction of
     * signals. For more information, see the API data type.</p>
     */
    inline void SetNodes(const Aws::Vector<Node>& value) { m_nodesHasBeenSet = true; m_nodes = value; }

    /**
     * <p> A list of information about nodes, which are a general abstraction of
     * signals. For more information, see the API data type.</p>
     */
    inline void SetNodes(Aws::Vector<Node>&& value) { m_nodesHasBeenSet = true; m_nodes = std::move(value); }

    /**
     * <p> A list of information about nodes, which are a general abstraction of
     * signals. For more information, see the API data type.</p>
     */
    inline CreateSignalCatalogRequest& WithNodes(const Aws::Vector<Node>& value) { SetNodes(value); return *this;}

    /**
     * <p> A list of information about nodes, which are a general abstraction of
     * signals. For more information, see the API data type.</p>
     */
    inline CreateSignalCatalogRequest& WithNodes(Aws::Vector<Node>&& value) { SetNodes(std::move(value)); return *this;}

    /**
     * <p> A list of information about nodes, which are a general abstraction of
     * signals. For more information, see the API data type.</p>
     */
    inline CreateSignalCatalogRequest& AddNodes(const Node& value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }

    /**
     * <p> A list of information about nodes, which are a general abstraction of
     * signals. For more information, see the API data type.</p>
     */
    inline CreateSignalCatalogRequest& AddNodes(Node&& value) { m_nodesHasBeenSet = true; m_nodes.push_back(std::move(value)); return *this; }


    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline CreateSignalCatalogRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline CreateSignalCatalogRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline CreateSignalCatalogRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline CreateSignalCatalogRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Node> m_nodes;
    bool m_nodesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
