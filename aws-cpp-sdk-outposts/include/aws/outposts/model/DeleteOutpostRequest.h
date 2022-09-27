/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class AWS_OUTPOSTS_API DeleteOutpostRequest : public OutpostsRequest
  {
  public:
    DeleteOutpostRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOutpost"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>  <p>In
     * requests, Amazon Web Services Outposts accepts the Amazon Resource Name (ARN) or
     * an ID for Outposts and sites throughout the Outposts Query API. To address
     * backwards compatibility, the parameter names <code>OutpostID</code> or
     * <code>SiteID</code> remain in use. Despite the parameter name, you can make the
     * request with an ARN.</p> 
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>  <p>In
     * requests, Amazon Web Services Outposts accepts the Amazon Resource Name (ARN) or
     * an ID for Outposts and sites throughout the Outposts Query API. To address
     * backwards compatibility, the parameter names <code>OutpostID</code> or
     * <code>SiteID</code> remain in use. Despite the parameter name, you can make the
     * request with an ARN.</p> 
     */
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>  <p>In
     * requests, Amazon Web Services Outposts accepts the Amazon Resource Name (ARN) or
     * an ID for Outposts and sites throughout the Outposts Query API. To address
     * backwards compatibility, the parameter names <code>OutpostID</code> or
     * <code>SiteID</code> remain in use. Despite the parameter name, you can make the
     * request with an ARN.</p> 
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>  <p>In
     * requests, Amazon Web Services Outposts accepts the Amazon Resource Name (ARN) or
     * an ID for Outposts and sites throughout the Outposts Query API. To address
     * backwards compatibility, the parameter names <code>OutpostID</code> or
     * <code>SiteID</code> remain in use. Despite the parameter name, you can make the
     * request with an ARN.</p> 
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>  <p>In
     * requests, Amazon Web Services Outposts accepts the Amazon Resource Name (ARN) or
     * an ID for Outposts and sites throughout the Outposts Query API. To address
     * backwards compatibility, the parameter names <code>OutpostID</code> or
     * <code>SiteID</code> remain in use. Despite the parameter name, you can make the
     * request with an ARN.</p> 
     */
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>  <p>In
     * requests, Amazon Web Services Outposts accepts the Amazon Resource Name (ARN) or
     * an ID for Outposts and sites throughout the Outposts Query API. To address
     * backwards compatibility, the parameter names <code>OutpostID</code> or
     * <code>SiteID</code> remain in use. Despite the parameter name, you can make the
     * request with an ARN.</p> 
     */
    inline DeleteOutpostRequest& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>  <p>In
     * requests, Amazon Web Services Outposts accepts the Amazon Resource Name (ARN) or
     * an ID for Outposts and sites throughout the Outposts Query API. To address
     * backwards compatibility, the parameter names <code>OutpostID</code> or
     * <code>SiteID</code> remain in use. Despite the parameter name, you can make the
     * request with an ARN.</p> 
     */
    inline DeleteOutpostRequest& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>  <p>In
     * requests, Amazon Web Services Outposts accepts the Amazon Resource Name (ARN) or
     * an ID for Outposts and sites throughout the Outposts Query API. To address
     * backwards compatibility, the parameter names <code>OutpostID</code> or
     * <code>SiteID</code> remain in use. Despite the parameter name, you can make the
     * request with an ARN.</p> 
     */
    inline DeleteOutpostRequest& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}

  private:

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
