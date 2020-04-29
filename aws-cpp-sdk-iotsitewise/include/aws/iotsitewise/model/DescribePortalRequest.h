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
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class AWS_IOTSITEWISE_API DescribePortalRequest : public IoTSiteWiseRequest
  {
  public:
    DescribePortalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePortal"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the portal.</p>
     */
    inline const Aws::String& GetPortalId() const{ return m_portalId; }

    /**
     * <p>The ID of the portal.</p>
     */
    inline bool PortalIdHasBeenSet() const { return m_portalIdHasBeenSet; }

    /**
     * <p>The ID of the portal.</p>
     */
    inline void SetPortalId(const Aws::String& value) { m_portalIdHasBeenSet = true; m_portalId = value; }

    /**
     * <p>The ID of the portal.</p>
     */
    inline void SetPortalId(Aws::String&& value) { m_portalIdHasBeenSet = true; m_portalId = std::move(value); }

    /**
     * <p>The ID of the portal.</p>
     */
    inline void SetPortalId(const char* value) { m_portalIdHasBeenSet = true; m_portalId.assign(value); }

    /**
     * <p>The ID of the portal.</p>
     */
    inline DescribePortalRequest& WithPortalId(const Aws::String& value) { SetPortalId(value); return *this;}

    /**
     * <p>The ID of the portal.</p>
     */
    inline DescribePortalRequest& WithPortalId(Aws::String&& value) { SetPortalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the portal.</p>
     */
    inline DescribePortalRequest& WithPortalId(const char* value) { SetPortalId(value); return *this;}

  private:

    Aws::String m_portalId;
    bool m_portalIdHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
