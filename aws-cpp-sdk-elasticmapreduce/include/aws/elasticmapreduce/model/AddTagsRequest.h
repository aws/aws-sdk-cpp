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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/Tag.h>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>This input identifies a cluster and a list of tags to attach.</p>
   */
  class AWS_EMR_API AddTagsRequest : public EMRRequest
  {
  public:
    AddTagsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. This value
     * must be a cluster identifier.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. This value
     * must be a cluster identifier.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. This value
     * must be a cluster identifier.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. This value
     * must be a cluster identifier.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. This value
     * must be a cluster identifier.</p>
     */
    inline AddTagsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. This value
     * must be a cluster identifier.</p>
     */
    inline AddTagsRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. This value
     * must be a cluster identifier.</p>
     */
    inline AddTagsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances. Tags are user-defined key/value pairs that consist of a required key
     * string with a maximum of 128 characters, and an optional value string with a
     * maximum of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances. Tags are user-defined key/value pairs that consist of a required key
     * string with a maximum of 128 characters, and an optional value string with a
     * maximum of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances. Tags are user-defined key/value pairs that consist of a required key
     * string with a maximum of 128 characters, and an optional value string with a
     * maximum of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances. Tags are user-defined key/value pairs that consist of a required key
     * string with a maximum of 128 characters, and an optional value string with a
     * maximum of 256 characters.</p>
     */
    inline AddTagsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances. Tags are user-defined key/value pairs that consist of a required key
     * string with a maximum of 128 characters, and an optional value string with a
     * maximum of 256 characters.</p>
     */
    inline AddTagsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances. Tags are user-defined key/value pairs that consist of a required key
     * string with a maximum of 128 characters, and an optional value string with a
     * maximum of 256 characters.</p>
     */
    inline AddTagsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances. Tags are user-defined key/value pairs that consist of a required key
     * string with a maximum of 128 characters, and an optional value string with a
     * maximum of 256 characters.</p>
     */
    inline AddTagsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
