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
  class GetResourceRequestStatusRequest : public CloudControlApiRequest
  {
  public:
    AWS_CLOUDCONTROLAPI_API GetResourceRequestStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceRequestStatus"; }

    AWS_CLOUDCONTROLAPI_API Aws::String SerializePayload() const override;

    AWS_CLOUDCONTROLAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique token used to track the progress of the resource operation
     * request.</p> <p>Request tokens are included in the <code>ProgressEvent</code>
     * type returned by a resource operation request.</p>
     */
    inline const Aws::String& GetRequestToken() const{ return m_requestToken; }

    /**
     * <p>A unique token used to track the progress of the resource operation
     * request.</p> <p>Request tokens are included in the <code>ProgressEvent</code>
     * type returned by a resource operation request.</p>
     */
    inline bool RequestTokenHasBeenSet() const { return m_requestTokenHasBeenSet; }

    /**
     * <p>A unique token used to track the progress of the resource operation
     * request.</p> <p>Request tokens are included in the <code>ProgressEvent</code>
     * type returned by a resource operation request.</p>
     */
    inline void SetRequestToken(const Aws::String& value) { m_requestTokenHasBeenSet = true; m_requestToken = value; }

    /**
     * <p>A unique token used to track the progress of the resource operation
     * request.</p> <p>Request tokens are included in the <code>ProgressEvent</code>
     * type returned by a resource operation request.</p>
     */
    inline void SetRequestToken(Aws::String&& value) { m_requestTokenHasBeenSet = true; m_requestToken = std::move(value); }

    /**
     * <p>A unique token used to track the progress of the resource operation
     * request.</p> <p>Request tokens are included in the <code>ProgressEvent</code>
     * type returned by a resource operation request.</p>
     */
    inline void SetRequestToken(const char* value) { m_requestTokenHasBeenSet = true; m_requestToken.assign(value); }

    /**
     * <p>A unique token used to track the progress of the resource operation
     * request.</p> <p>Request tokens are included in the <code>ProgressEvent</code>
     * type returned by a resource operation request.</p>
     */
    inline GetResourceRequestStatusRequest& WithRequestToken(const Aws::String& value) { SetRequestToken(value); return *this;}

    /**
     * <p>A unique token used to track the progress of the resource operation
     * request.</p> <p>Request tokens are included in the <code>ProgressEvent</code>
     * type returned by a resource operation request.</p>
     */
    inline GetResourceRequestStatusRequest& WithRequestToken(Aws::String&& value) { SetRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique token used to track the progress of the resource operation
     * request.</p> <p>Request tokens are included in the <code>ProgressEvent</code>
     * type returned by a resource operation request.</p>
     */
    inline GetResourceRequestStatusRequest& WithRequestToken(const char* value) { SetRequestToken(value); return *this;}

  private:

    Aws::String m_requestToken;
    bool m_requestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
