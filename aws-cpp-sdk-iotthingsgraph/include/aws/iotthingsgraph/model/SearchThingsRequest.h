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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API SearchThingsRequest : public IoTThingsGraphRequest
  {
  public:
    SearchThingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchThings"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the entity to which the things are associated.</p> <p>The IDs
     * should be in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The ID of the entity to which the things are associated.</p> <p>The IDs
     * should be in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The ID of the entity to which the things are associated.</p> <p>The IDs
     * should be in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The ID of the entity to which the things are associated.</p> <p>The IDs
     * should be in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The ID of the entity to which the things are associated.</p> <p>The IDs
     * should be in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The ID of the entity to which the things are associated.</p> <p>The IDs
     * should be in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline SearchThingsRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID of the entity to which the things are associated.</p> <p>The IDs
     * should be in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline SearchThingsRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity to which the things are associated.</p> <p>The IDs
     * should be in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline SearchThingsRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchThingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchThingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchThingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline SearchThingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline long long GetNamespaceVersion() const{ return m_namespaceVersion; }

    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline bool NamespaceVersionHasBeenSet() const { return m_namespaceVersionHasBeenSet; }

    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline void SetNamespaceVersion(long long value) { m_namespaceVersionHasBeenSet = true; m_namespaceVersion = value; }

    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline SearchThingsRequest& WithNamespaceVersion(long long value) { SetNamespaceVersion(value); return *this;}

  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    long long m_namespaceVersion;
    bool m_namespaceVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
