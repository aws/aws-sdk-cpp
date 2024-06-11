﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Greengrass
{
namespace Model
{

  /**
   */
  class ListResourceDefinitionVersionsRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API ListResourceDefinitionVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceDefinitionVersions"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * The maximum number of results to be returned per request.
     */
    inline const Aws::String& GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(const Aws::String& value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline void SetMaxResults(Aws::String&& value) { m_maxResultsHasBeenSet = true; m_maxResults = std::move(value); }
    inline void SetMaxResults(const char* value) { m_maxResultsHasBeenSet = true; m_maxResults.assign(value); }
    inline ListResourceDefinitionVersionsRequest& WithMaxResults(const Aws::String& value) { SetMaxResults(value); return *this;}
    inline ListResourceDefinitionVersionsRequest& WithMaxResults(Aws::String&& value) { SetMaxResults(std::move(value)); return *this;}
    inline ListResourceDefinitionVersionsRequest& WithMaxResults(const char* value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListResourceDefinitionVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceDefinitionVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceDefinitionVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the resource definition.
     */
    inline const Aws::String& GetResourceDefinitionId() const{ return m_resourceDefinitionId; }
    inline bool ResourceDefinitionIdHasBeenSet() const { return m_resourceDefinitionIdHasBeenSet; }
    inline void SetResourceDefinitionId(const Aws::String& value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId = value; }
    inline void SetResourceDefinitionId(Aws::String&& value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId = std::move(value); }
    inline void SetResourceDefinitionId(const char* value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId.assign(value); }
    inline ListResourceDefinitionVersionsRequest& WithResourceDefinitionId(const Aws::String& value) { SetResourceDefinitionId(value); return *this;}
    inline ListResourceDefinitionVersionsRequest& WithResourceDefinitionId(Aws::String&& value) { SetResourceDefinitionId(std::move(value)); return *this;}
    inline ListResourceDefinitionVersionsRequest& WithResourceDefinitionId(const char* value) { SetResourceDefinitionId(value); return *this;}
    ///@}
  private:

    Aws::String m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resourceDefinitionId;
    bool m_resourceDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
