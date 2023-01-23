/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class ListImportsRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ListImportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImports"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The Amazon Resource Name (ARN) associated with the table that was imported
     * to. </p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }

    /**
     * <p> The Amazon Resource Name (ARN) associated with the table that was imported
     * to. </p>
     */
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) associated with the table that was imported
     * to. </p>
     */
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) associated with the table that was imported
     * to. </p>
     */
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) associated with the table that was imported
     * to. </p>
     */
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) associated with the table that was imported
     * to. </p>
     */
    inline ListImportsRequest& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) associated with the table that was imported
     * to. </p>
     */
    inline ListImportsRequest& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) associated with the table that was imported
     * to. </p>
     */
    inline ListImportsRequest& WithTableArn(const char* value) { SetTableArn(value); return *this;}


    /**
     * <p> The number of <code>ImportSummary </code>objects returned in a single page.
     * </p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p> The number of <code>ImportSummary </code>objects returned in a single page.
     * </p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p> The number of <code>ImportSummary </code>objects returned in a single page.
     * </p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p> The number of <code>ImportSummary </code>objects returned in a single page.
     * </p>
     */
    inline ListImportsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p> An optional string that, if supplied, must be copied from the output of a
     * previous call to <code>ListImports</code>. When provided in this manner, the API
     * fetches the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> An optional string that, if supplied, must be copied from the output of a
     * previous call to <code>ListImports</code>. When provided in this manner, the API
     * fetches the next page of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> An optional string that, if supplied, must be copied from the output of a
     * previous call to <code>ListImports</code>. When provided in this manner, the API
     * fetches the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> An optional string that, if supplied, must be copied from the output of a
     * previous call to <code>ListImports</code>. When provided in this manner, the API
     * fetches the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> An optional string that, if supplied, must be copied from the output of a
     * previous call to <code>ListImports</code>. When provided in this manner, the API
     * fetches the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> An optional string that, if supplied, must be copied from the output of a
     * previous call to <code>ListImports</code>. When provided in this manner, the API
     * fetches the next page of results. </p>
     */
    inline ListImportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> An optional string that, if supplied, must be copied from the output of a
     * previous call to <code>ListImports</code>. When provided in this manner, the API
     * fetches the next page of results. </p>
     */
    inline ListImportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> An optional string that, if supplied, must be copied from the output of a
     * previous call to <code>ListImports</code>. When provided in this manner, the API
     * fetches the next page of results. </p>
     */
    inline ListImportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
