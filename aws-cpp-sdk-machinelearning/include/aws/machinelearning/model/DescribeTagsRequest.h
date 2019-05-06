/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/TaggableResourceType.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class AWS_MACHINELEARNING_API DescribeTagsRequest : public MachineLearningRequest
  {
  public:
    DescribeTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTags"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the ML object. For example, <code>exampleModelId</code>. </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the ML object. For example, <code>exampleModelId</code>. </p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the ML object. For example, <code>exampleModelId</code>. </p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the ML object. For example, <code>exampleModelId</code>. </p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the ML object. For example, <code>exampleModelId</code>. </p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the ML object. For example, <code>exampleModelId</code>. </p>
     */
    inline DescribeTagsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the ML object. For example, <code>exampleModelId</code>. </p>
     */
    inline DescribeTagsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the ML object. For example, <code>exampleModelId</code>. </p>
     */
    inline DescribeTagsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The type of the ML object.</p>
     */
    inline const TaggableResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the ML object.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the ML object.</p>
     */
    inline void SetResourceType(const TaggableResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the ML object.</p>
     */
    inline void SetResourceType(TaggableResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the ML object.</p>
     */
    inline DescribeTagsRequest& WithResourceType(const TaggableResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the ML object.</p>
     */
    inline DescribeTagsRequest& WithResourceType(TaggableResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    TaggableResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
