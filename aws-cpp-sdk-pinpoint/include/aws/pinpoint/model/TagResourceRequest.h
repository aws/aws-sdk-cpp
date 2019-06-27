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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/TagsModel.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API TagResourceRequest : public PinpointRequest
  {
  public:
    TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the application, campaign, or segment.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application, campaign, or segment.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application, campaign, or segment.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application, campaign, or segment.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application, campaign, or segment.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application, campaign, or segment.</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application, campaign, or segment.</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application, campaign, or segment.</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    
    inline const TagsModel& GetTagsModel() const{ return m_tagsModel; }

    
    inline bool TagsModelHasBeenSet() const { return m_tagsModelHasBeenSet; }

    
    inline void SetTagsModel(const TagsModel& value) { m_tagsModelHasBeenSet = true; m_tagsModel = value; }

    
    inline void SetTagsModel(TagsModel&& value) { m_tagsModelHasBeenSet = true; m_tagsModel = std::move(value); }

    
    inline TagResourceRequest& WithTagsModel(const TagsModel& value) { SetTagsModel(value); return *this;}

    
    inline TagResourceRequest& WithTagsModel(TagsModel&& value) { SetTagsModel(std::move(value)); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    TagsModel m_tagsModel;
    bool m_tagsModelHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
