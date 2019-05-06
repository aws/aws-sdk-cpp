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
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class AWS_TRANSFER_API TagResourceRequest : public TransferRequest
  {
  public:
    TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An Amazon Resource Name (ARN) for a specific AWS resource, such as a server,
     * user, or role.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>An Amazon Resource Name (ARN) for a specific AWS resource, such as a server,
     * user, or role.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) for a specific AWS resource, such as a server,
     * user, or role.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) for a specific AWS resource, such as a server,
     * user, or role.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) for a specific AWS resource, such as a server,
     * user, or role.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) for a specific AWS resource, such as a server,
     * user, or role.</p>
     */
    inline TagResourceRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) for a specific AWS resource, such as a server,
     * user, or role.</p>
     */
    inline TagResourceRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) for a specific AWS resource, such as a server,
     * user, or role.</p>
     */
    inline TagResourceRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Key-value pairs assigned to ARNs that you can use to group and search for
     * resources by type. You can attach this metadata to user accounts for any
     * purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs assigned to ARNs that you can use to group and search for
     * resources by type. You can attach this metadata to user accounts for any
     * purpose.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs assigned to ARNs that you can use to group and search for
     * resources by type. You can attach this metadata to user accounts for any
     * purpose.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs assigned to ARNs that you can use to group and search for
     * resources by type. You can attach this metadata to user accounts for any
     * purpose.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs assigned to ARNs that you can use to group and search for
     * resources by type. You can attach this metadata to user accounts for any
     * purpose.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs assigned to ARNs that you can use to group and search for
     * resources by type. You can attach this metadata to user accounts for any
     * purpose.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs assigned to ARNs that you can use to group and search for
     * resources by type. You can attach this metadata to user accounts for any
     * purpose.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs assigned to ARNs that you can use to group and search for
     * resources by type. You can attach this metadata to user accounts for any
     * purpose.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
