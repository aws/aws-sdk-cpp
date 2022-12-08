/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/SnowDeviceManagementRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   */
  class ListDeviceResourcesRequest : public SnowDeviceManagementRequest
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API ListDeviceResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeviceResources"; }

    AWS_SNOWDEVICEMANAGEMENT_API Aws::String SerializePayload() const override;

    AWS_SNOWDEVICEMANAGEMENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the managed device that you are listing the resources of.</p>
     */
    inline const Aws::String& GetManagedDeviceId() const{ return m_managedDeviceId; }

    /**
     * <p>The ID of the managed device that you are listing the resources of.</p>
     */
    inline bool ManagedDeviceIdHasBeenSet() const { return m_managedDeviceIdHasBeenSet; }

    /**
     * <p>The ID of the managed device that you are listing the resources of.</p>
     */
    inline void SetManagedDeviceId(const Aws::String& value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId = value; }

    /**
     * <p>The ID of the managed device that you are listing the resources of.</p>
     */
    inline void SetManagedDeviceId(Aws::String&& value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId = std::move(value); }

    /**
     * <p>The ID of the managed device that you are listing the resources of.</p>
     */
    inline void SetManagedDeviceId(const char* value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId.assign(value); }

    /**
     * <p>The ID of the managed device that you are listing the resources of.</p>
     */
    inline ListDeviceResourcesRequest& WithManagedDeviceId(const Aws::String& value) { SetManagedDeviceId(value); return *this;}

    /**
     * <p>The ID of the managed device that you are listing the resources of.</p>
     */
    inline ListDeviceResourcesRequest& WithManagedDeviceId(Aws::String&& value) { SetManagedDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the managed device that you are listing the resources of.</p>
     */
    inline ListDeviceResourcesRequest& WithManagedDeviceId(const char* value) { SetManagedDeviceId(value); return *this;}


    /**
     * <p>The maximum number of resources per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of resources per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of resources per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of resources per page.</p>
     */
    inline ListDeviceResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token to continue to the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token to continue to the next page of results.</p>
     */
    inline ListDeviceResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token to continue to the next page of results.</p>
     */
    inline ListDeviceResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token to continue to the next page of results.</p>
     */
    inline ListDeviceResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A structure used to filter the results by type of resource.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>A structure used to filter the results by type of resource.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>A structure used to filter the results by type of resource.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>A structure used to filter the results by type of resource.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>A structure used to filter the results by type of resource.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>A structure used to filter the results by type of resource.</p>
     */
    inline ListDeviceResourcesRequest& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>A structure used to filter the results by type of resource.</p>
     */
    inline ListDeviceResourcesRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>A structure used to filter the results by type of resource.</p>
     */
    inline ListDeviceResourcesRequest& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_managedDeviceId;
    bool m_managedDeviceIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
