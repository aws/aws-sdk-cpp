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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API GetInventorySchemaRequest : public SSMRequest
  {
  public:
    GetInventorySchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInventorySchema"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The type of inventory item to return.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The type of inventory item to return.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The type of inventory item to return.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The type of inventory item to return.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The type of inventory item to return.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The type of inventory item to return.</p>
     */
    inline GetInventorySchemaRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The type of inventory item to return.</p>
     */
    inline GetInventorySchemaRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The type of inventory item to return.</p>
     */
    inline GetInventorySchemaRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline GetInventorySchemaRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline GetInventorySchemaRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline GetInventorySchemaRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline GetInventorySchemaRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Returns inventory schemas that support aggregation. For example, this call
     * returns the <code>AWS:InstanceInformation</code> type, because it supports
     * aggregation based on the <code>PlatformName</code>, <code>PlatformType</code>,
     * and <code>PlatformVersion</code> attributes.</p>
     */
    inline bool GetAggregator() const{ return m_aggregator; }

    /**
     * <p>Returns inventory schemas that support aggregation. For example, this call
     * returns the <code>AWS:InstanceInformation</code> type, because it supports
     * aggregation based on the <code>PlatformName</code>, <code>PlatformType</code>,
     * and <code>PlatformVersion</code> attributes.</p>
     */
    inline bool AggregatorHasBeenSet() const { return m_aggregatorHasBeenSet; }

    /**
     * <p>Returns inventory schemas that support aggregation. For example, this call
     * returns the <code>AWS:InstanceInformation</code> type, because it supports
     * aggregation based on the <code>PlatformName</code>, <code>PlatformType</code>,
     * and <code>PlatformVersion</code> attributes.</p>
     */
    inline void SetAggregator(bool value) { m_aggregatorHasBeenSet = true; m_aggregator = value; }

    /**
     * <p>Returns inventory schemas that support aggregation. For example, this call
     * returns the <code>AWS:InstanceInformation</code> type, because it supports
     * aggregation based on the <code>PlatformName</code>, <code>PlatformType</code>,
     * and <code>PlatformVersion</code> attributes.</p>
     */
    inline GetInventorySchemaRequest& WithAggregator(bool value) { SetAggregator(value); return *this;}


    /**
     * <p>Returns the sub-type schema for a specified inventory type.</p>
     */
    inline bool GetSubType() const{ return m_subType; }

    /**
     * <p>Returns the sub-type schema for a specified inventory type.</p>
     */
    inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }

    /**
     * <p>Returns the sub-type schema for a specified inventory type.</p>
     */
    inline void SetSubType(bool value) { m_subTypeHasBeenSet = true; m_subType = value; }

    /**
     * <p>Returns the sub-type schema for a specified inventory type.</p>
     */
    inline GetInventorySchemaRequest& WithSubType(bool value) { SetSubType(value); return *this;}

  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    bool m_aggregator;
    bool m_aggregatorHasBeenSet;

    bool m_subType;
    bool m_subTypeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
