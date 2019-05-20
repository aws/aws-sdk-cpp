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
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/MediaPackageVodRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaPackageVod
{
namespace Model
{

  /**
   */
  class AWS_MEDIAPACKAGEVOD_API ListPackagingConfigurationsRequest : public MediaPackageVodRequest
  {
  public:
    ListPackagingConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPackagingConfigurations"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * Upper bound on number of records to return.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * Upper bound on number of records to return.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * Upper bound on number of records to return.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * Upper bound on number of records to return.
     */
    inline ListPackagingConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline ListPackagingConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline ListPackagingConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline ListPackagingConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * Returns MediaPackage VOD PackagingConfigurations associated with the specified
     * PackagingGroup.
     */
    inline const Aws::String& GetPackagingGroupId() const{ return m_packagingGroupId; }

    /**
     * Returns MediaPackage VOD PackagingConfigurations associated with the specified
     * PackagingGroup.
     */
    inline bool PackagingGroupIdHasBeenSet() const { return m_packagingGroupIdHasBeenSet; }

    /**
     * Returns MediaPackage VOD PackagingConfigurations associated with the specified
     * PackagingGroup.
     */
    inline void SetPackagingGroupId(const Aws::String& value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId = value; }

    /**
     * Returns MediaPackage VOD PackagingConfigurations associated with the specified
     * PackagingGroup.
     */
    inline void SetPackagingGroupId(Aws::String&& value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId = std::move(value); }

    /**
     * Returns MediaPackage VOD PackagingConfigurations associated with the specified
     * PackagingGroup.
     */
    inline void SetPackagingGroupId(const char* value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId.assign(value); }

    /**
     * Returns MediaPackage VOD PackagingConfigurations associated with the specified
     * PackagingGroup.
     */
    inline ListPackagingConfigurationsRequest& WithPackagingGroupId(const Aws::String& value) { SetPackagingGroupId(value); return *this;}

    /**
     * Returns MediaPackage VOD PackagingConfigurations associated with the specified
     * PackagingGroup.
     */
    inline ListPackagingConfigurationsRequest& WithPackagingGroupId(Aws::String&& value) { SetPackagingGroupId(std::move(value)); return *this;}

    /**
     * Returns MediaPackage VOD PackagingConfigurations associated with the specified
     * PackagingGroup.
     */
    inline ListPackagingConfigurationsRequest& WithPackagingGroupId(const char* value) { SetPackagingGroupId(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_packagingGroupId;
    bool m_packagingGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
