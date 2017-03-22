/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Attribute.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API DeleteAttributesRequest : public ECSRequest
  {
  public:
    DeleteAttributesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to apply attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to apply attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to apply attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to apply attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to apply attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline DeleteAttributesRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to apply attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline DeleteAttributesRequest& WithCluster(Aws::String&& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that
     * contains the resource to apply attributes. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline DeleteAttributesRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes per request. For custom attributes, specify the attribute name and
     * target ID, but do not specify the value. If you specify the target ID using the
     * short form, you must also specify the target type.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes per request. For custom attributes, specify the attribute name and
     * target ID, but do not specify the value. If you specify the target ID using the
     * short form, you must also specify the target type.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes per request. For custom attributes, specify the attribute name and
     * target ID, but do not specify the value. If you specify the target ID using the
     * short form, you must also specify the target type.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes per request. For custom attributes, specify the attribute name and
     * target ID, but do not specify the value. If you specify the target ID using the
     * short form, you must also specify the target type.</p>
     */
    inline DeleteAttributesRequest& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes per request. For custom attributes, specify the attribute name and
     * target ID, but do not specify the value. If you specify the target ID using the
     * short form, you must also specify the target type.</p>
     */
    inline DeleteAttributesRequest& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes per request. For custom attributes, specify the attribute name and
     * target ID, but do not specify the value. If you specify the target ID using the
     * short form, you must also specify the target type.</p>
     */
    inline DeleteAttributesRequest& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes to delete from your resource. You can specify up to 10
     * attributes per request. For custom attributes, specify the attribute name and
     * target ID, but do not specify the value. If you specify the target ID using the
     * short form, you must also specify the target type.</p>
     */
    inline DeleteAttributesRequest& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
