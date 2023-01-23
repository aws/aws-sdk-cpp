/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Attribute.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class DeleteAttributesRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DeleteAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAttributes"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to delete attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to delete attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to delete attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to delete attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to delete attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to delete attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline DeleteAttributesRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to delete attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline DeleteAttributesRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to delete attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline DeleteAttributesRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes for each request. For custom attributes, specify the attribute name
     * and target ID, but don't specify the value. If you specify the target ID using
     * the short form, you must also specify the target type.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes for each request. For custom attributes, specify the attribute name
     * and target ID, but don't specify the value. If you specify the target ID using
     * the short form, you must also specify the target type.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes for each request. For custom attributes, specify the attribute name
     * and target ID, but don't specify the value. If you specify the target ID using
     * the short form, you must also specify the target type.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes for each request. For custom attributes, specify the attribute name
     * and target ID, but don't specify the value. If you specify the target ID using
     * the short form, you must also specify the target type.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes for each request. For custom attributes, specify the attribute name
     * and target ID, but don't specify the value. If you specify the target ID using
     * the short form, you must also specify the target type.</p>
     */
    inline DeleteAttributesRequest& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes for each request. For custom attributes, specify the attribute name
     * and target ID, but don't specify the value. If you specify the target ID using
     * the short form, you must also specify the target type.</p>
     */
    inline DeleteAttributesRequest& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes for each request. For custom attributes, specify the attribute name
     * and target ID, but don't specify the value. If you specify the target ID using
     * the short form, you must also specify the target type.</p>
     */
    inline DeleteAttributesRequest& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes for each request. For custom attributes, specify the attribute name
     * and target ID, but don't specify the value. If you specify the target ID using
     * the short form, you must also specify the target type.</p>
     */
    inline DeleteAttributesRequest& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
