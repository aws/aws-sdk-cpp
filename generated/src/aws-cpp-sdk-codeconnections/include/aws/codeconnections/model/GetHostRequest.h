/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/CodeConnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{

  /**
   */
  class GetHostRequest : public CodeConnectionsRequest
  {
  public:
    AWS_CODECONNECTIONS_API GetHostRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHost"; }

    AWS_CODECONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODECONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the requested host.</p>
     */
    inline const Aws::String& GetHostArn() const { return m_hostArn; }
    inline bool HostArnHasBeenSet() const { return m_hostArnHasBeenSet; }
    template<typename HostArnT = Aws::String>
    void SetHostArn(HostArnT&& value) { m_hostArnHasBeenSet = true; m_hostArn = std::forward<HostArnT>(value); }
    template<typename HostArnT = Aws::String>
    GetHostRequest& WithHostArn(HostArnT&& value) { SetHostArn(std::forward<HostArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostArn;
    bool m_hostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
