/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The value of the resource that will have the tag removed. An Amazon Resource
     * Name (ARN) is an identifier for a specific Amazon Web Services resource, such as
     * a server, user, or role.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The value of the resource that will have the tag removed. An Amazon Resource
     * Name (ARN) is an identifier for a specific Amazon Web Services resource, such as
     * a server, user, or role.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The value of the resource that will have the tag removed. An Amazon Resource
     * Name (ARN) is an identifier for a specific Amazon Web Services resource, such as
     * a server, user, or role.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The value of the resource that will have the tag removed. An Amazon Resource
     * Name (ARN) is an identifier for a specific Amazon Web Services resource, such as
     * a server, user, or role.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The value of the resource that will have the tag removed. An Amazon Resource
     * Name (ARN) is an identifier for a specific Amazon Web Services resource, such as
     * a server, user, or role.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The value of the resource that will have the tag removed. An Amazon Resource
     * Name (ARN) is an identifier for a specific Amazon Web Services resource, such as
     * a server, user, or role.</p>
     */
    inline UntagResourceRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The value of the resource that will have the tag removed. An Amazon Resource
     * Name (ARN) is an identifier for a specific Amazon Web Services resource, such as
     * a server, user, or role.</p>
     */
    inline UntagResourceRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The value of the resource that will have the tag removed. An Amazon Resource
     * Name (ARN) is an identifier for a specific Amazon Web Services resource, such as
     * a server, user, or role.</p>
     */
    inline UntagResourceRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>TagKeys are key-value pairs assigned to ARNs that can be used to group and
     * search for resources by type. This metadata can be attached to resources for any
     * purpose.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>TagKeys are key-value pairs assigned to ARNs that can be used to group and
     * search for resources by type. This metadata can be attached to resources for any
     * purpose.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>TagKeys are key-value pairs assigned to ARNs that can be used to group and
     * search for resources by type. This metadata can be attached to resources for any
     * purpose.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>TagKeys are key-value pairs assigned to ARNs that can be used to group and
     * search for resources by type. This metadata can be attached to resources for any
     * purpose.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>TagKeys are key-value pairs assigned to ARNs that can be used to group and
     * search for resources by type. This metadata can be attached to resources for any
     * purpose.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>TagKeys are key-value pairs assigned to ARNs that can be used to group and
     * search for resources by type. This metadata can be attached to resources for any
     * purpose.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>TagKeys are key-value pairs assigned to ARNs that can be used to group and
     * search for resources by type. This metadata can be attached to resources for any
     * purpose.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>TagKeys are key-value pairs assigned to ARNs that can be used to group and
     * search for resources by type. This metadata can be attached to resources for any
     * purpose.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>TagKeys are key-value pairs assigned to ARNs that can be used to group and
     * search for resources by type. This metadata can be attached to resources for any
     * purpose.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
