/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class GetHostRequest : public CodeStarconnectionsRequest
  {
  public:
    AWS_CODESTARCONNECTIONS_API GetHostRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHost"; }

    AWS_CODESTARCONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODESTARCONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the requested host.</p>
     */
    inline const Aws::String& GetHostArn() const{ return m_hostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the requested host.</p>
     */
    inline bool HostArnHasBeenSet() const { return m_hostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the requested host.</p>
     */
    inline void SetHostArn(const Aws::String& value) { m_hostArnHasBeenSet = true; m_hostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the requested host.</p>
     */
    inline void SetHostArn(Aws::String&& value) { m_hostArnHasBeenSet = true; m_hostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the requested host.</p>
     */
    inline void SetHostArn(const char* value) { m_hostArnHasBeenSet = true; m_hostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the requested host.</p>
     */
    inline GetHostRequest& WithHostArn(const Aws::String& value) { SetHostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the requested host.</p>
     */
    inline GetHostRequest& WithHostArn(Aws::String&& value) { SetHostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the requested host.</p>
     */
    inline GetHostRequest& WithHostArn(const char* value) { SetHostArn(value); return *this;}

  private:

    Aws::String m_hostArn;
    bool m_hostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
