/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class DescribePublisherRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API DescribePublisherRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePublisher"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the extension publisher.</p> <p>If you don't supply a
     * <code>PublisherId</code>, and you have registered as an extension publisher,
     * <code>DescribePublisher</code> returns information about your own publisher
     * account.</p>
     */
    inline const Aws::String& GetPublisherId() const{ return m_publisherId; }
    inline bool PublisherIdHasBeenSet() const { return m_publisherIdHasBeenSet; }
    inline void SetPublisherId(const Aws::String& value) { m_publisherIdHasBeenSet = true; m_publisherId = value; }
    inline void SetPublisherId(Aws::String&& value) { m_publisherIdHasBeenSet = true; m_publisherId = std::move(value); }
    inline void SetPublisherId(const char* value) { m_publisherIdHasBeenSet = true; m_publisherId.assign(value); }
    inline DescribePublisherRequest& WithPublisherId(const Aws::String& value) { SetPublisherId(value); return *this;}
    inline DescribePublisherRequest& WithPublisherId(Aws::String&& value) { SetPublisherId(std::move(value)); return *this;}
    inline DescribePublisherRequest& WithPublisherId(const char* value) { SetPublisherId(value); return *this;}
    ///@}
  private:

    Aws::String m_publisherId;
    bool m_publisherIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
