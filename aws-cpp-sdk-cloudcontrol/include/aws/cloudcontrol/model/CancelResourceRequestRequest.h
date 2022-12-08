/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/cloudcontrol/CloudControlApiRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudControlApi
{
namespace Model
{

  /**
   */
  class CancelResourceRequestRequest : public CloudControlApiRequest
  {
  public:
    AWS_CLOUDCONTROLAPI_API CancelResourceRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelResourceRequest"; }

    AWS_CLOUDCONTROLAPI_API Aws::String SerializePayload() const override;

    AWS_CLOUDCONTROLAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>RequestToken</code> of the <code>ProgressEvent</code> object
     * returned by the resource operation request.</p>
     */
    inline const Aws::String& GetRequestToken() const{ return m_requestToken; }

    /**
     * <p>The <code>RequestToken</code> of the <code>ProgressEvent</code> object
     * returned by the resource operation request.</p>
     */
    inline bool RequestTokenHasBeenSet() const { return m_requestTokenHasBeenSet; }

    /**
     * <p>The <code>RequestToken</code> of the <code>ProgressEvent</code> object
     * returned by the resource operation request.</p>
     */
    inline void SetRequestToken(const Aws::String& value) { m_requestTokenHasBeenSet = true; m_requestToken = value; }

    /**
     * <p>The <code>RequestToken</code> of the <code>ProgressEvent</code> object
     * returned by the resource operation request.</p>
     */
    inline void SetRequestToken(Aws::String&& value) { m_requestTokenHasBeenSet = true; m_requestToken = std::move(value); }

    /**
     * <p>The <code>RequestToken</code> of the <code>ProgressEvent</code> object
     * returned by the resource operation request.</p>
     */
    inline void SetRequestToken(const char* value) { m_requestTokenHasBeenSet = true; m_requestToken.assign(value); }

    /**
     * <p>The <code>RequestToken</code> of the <code>ProgressEvent</code> object
     * returned by the resource operation request.</p>
     */
    inline CancelResourceRequestRequest& WithRequestToken(const Aws::String& value) { SetRequestToken(value); return *this;}

    /**
     * <p>The <code>RequestToken</code> of the <code>ProgressEvent</code> object
     * returned by the resource operation request.</p>
     */
    inline CancelResourceRequestRequest& WithRequestToken(Aws::String&& value) { SetRequestToken(std::move(value)); return *this;}

    /**
     * <p>The <code>RequestToken</code> of the <code>ProgressEvent</code> object
     * returned by the resource operation request.</p>
     */
    inline CancelResourceRequestRequest& WithRequestToken(const char* value) { SetRequestToken(value); return *this;}

  private:

    Aws::String m_requestToken;
    bool m_requestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
