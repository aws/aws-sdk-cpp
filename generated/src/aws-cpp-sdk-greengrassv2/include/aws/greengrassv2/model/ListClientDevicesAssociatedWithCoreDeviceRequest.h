/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class ListClientDevicesAssociatedWithCoreDeviceRequest : public GreengrassV2Request
  {
  public:
    AWS_GREENGRASSV2_API ListClientDevicesAssociatedWithCoreDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClientDevicesAssociatedWithCoreDevice"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;

    AWS_GREENGRASSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline const Aws::String& GetCoreDeviceThingName() const{ return m_coreDeviceThingName; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline bool CoreDeviceThingNameHasBeenSet() const { return m_coreDeviceThingNameHasBeenSet; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetCoreDeviceThingName(const Aws::String& value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName = value; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetCoreDeviceThingName(Aws::String&& value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName = std::move(value); }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetCoreDeviceThingName(const char* value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName.assign(value); }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline ListClientDevicesAssociatedWithCoreDeviceRequest& WithCoreDeviceThingName(const Aws::String& value) { SetCoreDeviceThingName(value); return *this;}

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline ListClientDevicesAssociatedWithCoreDeviceRequest& WithCoreDeviceThingName(Aws::String&& value) { SetCoreDeviceThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline ListClientDevicesAssociatedWithCoreDeviceRequest& WithCoreDeviceThingName(const char* value) { SetCoreDeviceThingName(value); return *this;}


    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline ListClientDevicesAssociatedWithCoreDeviceRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListClientDevicesAssociatedWithCoreDeviceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListClientDevicesAssociatedWithCoreDeviceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListClientDevicesAssociatedWithCoreDeviceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_coreDeviceThingName;
    bool m_coreDeviceThingNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
