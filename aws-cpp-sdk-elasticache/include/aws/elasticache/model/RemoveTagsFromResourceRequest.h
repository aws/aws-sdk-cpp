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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>RemoveTagsFromResource</code> operation.</p>
   */
  class AWS_ELASTICACHE_API RemoveTagsFromResourceRequest : public ElastiCacheRequest
  {
  public:
    RemoveTagsFromResourceRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which you want the tags
     * removed, for example
     * <code>arn:aws:elasticache:us-west-2:0123456789:cluster:myCluster</code> or
     * <code>arn:aws:elasticache:us-west-2:0123456789:snapshot:mySnapshot</code>.</p>
     * <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which you want the tags
     * removed, for example
     * <code>arn:aws:elasticache:us-west-2:0123456789:cluster:myCluster</code> or
     * <code>arn:aws:elasticache:us-west-2:0123456789:snapshot:mySnapshot</code>.</p>
     * <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which you want the tags
     * removed, for example
     * <code>arn:aws:elasticache:us-west-2:0123456789:cluster:myCluster</code> or
     * <code>arn:aws:elasticache:us-west-2:0123456789:snapshot:mySnapshot</code>.</p>
     * <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which you want the tags
     * removed, for example
     * <code>arn:aws:elasticache:us-west-2:0123456789:cluster:myCluster</code> or
     * <code>arn:aws:elasticache:us-west-2:0123456789:snapshot:mySnapshot</code>.</p>
     * <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which you want the tags
     * removed, for example
     * <code>arn:aws:elasticache:us-west-2:0123456789:cluster:myCluster</code> or
     * <code>arn:aws:elasticache:us-west-2:0123456789:snapshot:mySnapshot</code>.</p>
     * <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline RemoveTagsFromResourceRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which you want the tags
     * removed, for example
     * <code>arn:aws:elasticache:us-west-2:0123456789:cluster:myCluster</code> or
     * <code>arn:aws:elasticache:us-west-2:0123456789:snapshot:mySnapshot</code>.</p>
     * <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline RemoveTagsFromResourceRequest& WithResourceName(Aws::String&& value) { SetResourceName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which you want the tags
     * removed, for example
     * <code>arn:aws:elasticache:us-west-2:0123456789:cluster:myCluster</code> or
     * <code>arn:aws:elasticache:us-west-2:0123456789:snapshot:mySnapshot</code>.</p>
     * <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline RemoveTagsFromResourceRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}

    /**
     * <p>A list of <code>TagKeys</code> identifying the tags you want removed from the
     * named resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A list of <code>TagKeys</code> identifying the tags you want removed from the
     * named resource.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A list of <code>TagKeys</code> identifying the tags you want removed from the
     * named resource.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A list of <code>TagKeys</code> identifying the tags you want removed from the
     * named resource.</p>
     */
    inline RemoveTagsFromResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A list of <code>TagKeys</code> identifying the tags you want removed from the
     * named resource.</p>
     */
    inline RemoveTagsFromResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A list of <code>TagKeys</code> identifying the tags you want removed from the
     * named resource.</p>
     */
    inline RemoveTagsFromResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A list of <code>TagKeys</code> identifying the tags you want removed from the
     * named resource.</p>
     */
    inline RemoveTagsFromResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A list of <code>TagKeys</code> identifying the tags you want removed from the
     * named resource.</p>
     */
    inline RemoveTagsFromResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:
    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;
    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
