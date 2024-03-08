/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class ListTagsForResourceRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * capability, partnership, profile, or transformer.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * capability, partnership, profile, or transformer.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * capability, partnership, profile, or transformer.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * capability, partnership, profile, or transformer.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * capability, partnership, profile, or transformer.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * capability, partnership, profile, or transformer.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * capability, partnership, profile, or transformer.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>Requests the tags associated with a particular Amazon Resource Name (ARN). An
     * ARN is an identifier for a specific Amazon Web Services resource, such as a
     * capability, partnership, profile, or transformer.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
