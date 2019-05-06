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
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/SimpleDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

  /**
   */
  class AWS_SIMPLEDB_API SelectRequest : public SimpleDBRequest
  {
  public:
    SelectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Select"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * The expression used to query the domain.
     */
    inline const Aws::String& GetSelectExpression() const{ return m_selectExpression; }

    /**
     * The expression used to query the domain.
     */
    inline bool SelectExpressionHasBeenSet() const { return m_selectExpressionHasBeenSet; }

    /**
     * The expression used to query the domain.
     */
    inline void SetSelectExpression(const Aws::String& value) { m_selectExpressionHasBeenSet = true; m_selectExpression = value; }

    /**
     * The expression used to query the domain.
     */
    inline void SetSelectExpression(Aws::String&& value) { m_selectExpressionHasBeenSet = true; m_selectExpression = std::move(value); }

    /**
     * The expression used to query the domain.
     */
    inline void SetSelectExpression(const char* value) { m_selectExpressionHasBeenSet = true; m_selectExpression.assign(value); }

    /**
     * The expression used to query the domain.
     */
    inline SelectRequest& WithSelectExpression(const Aws::String& value) { SetSelectExpression(value); return *this;}

    /**
     * The expression used to query the domain.
     */
    inline SelectRequest& WithSelectExpression(Aws::String&& value) { SetSelectExpression(std::move(value)); return *this;}

    /**
     * The expression used to query the domain.
     */
    inline SelectRequest& WithSelectExpression(const char* value) { SetSelectExpression(value); return *this;}


    /**
     * A string informing Amazon SimpleDB where to start the next list of
     * <code>ItemNames</code>.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A string informing Amazon SimpleDB where to start the next list of
     * <code>ItemNames</code>.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * A string informing Amazon SimpleDB where to start the next list of
     * <code>ItemNames</code>.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * A string informing Amazon SimpleDB where to start the next list of
     * <code>ItemNames</code>.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * A string informing Amazon SimpleDB where to start the next list of
     * <code>ItemNames</code>.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * A string informing Amazon SimpleDB where to start the next list of
     * <code>ItemNames</code>.
     */
    inline SelectRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A string informing Amazon SimpleDB where to start the next list of
     * <code>ItemNames</code>.
     */
    inline SelectRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A string informing Amazon SimpleDB where to start the next list of
     * <code>ItemNames</code>.
     */
    inline SelectRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * Determines whether or not strong consistency should be enforced when data is
     * read from SimpleDB. If <code>true</code>, any data previously written to
     * SimpleDB will be returned. Otherwise, results will be consistent eventually, and
     * the client may not see data that was written immediately before your read.
     */
    inline bool GetConsistentRead() const{ return m_consistentRead; }

    /**
     * Determines whether or not strong consistency should be enforced when data is
     * read from SimpleDB. If <code>true</code>, any data previously written to
     * SimpleDB will be returned. Otherwise, results will be consistent eventually, and
     * the client may not see data that was written immediately before your read.
     */
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }

    /**
     * Determines whether or not strong consistency should be enforced when data is
     * read from SimpleDB. If <code>true</code>, any data previously written to
     * SimpleDB will be returned. Otherwise, results will be consistent eventually, and
     * the client may not see data that was written immediately before your read.
     */
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }

    /**
     * Determines whether or not strong consistency should be enforced when data is
     * read from SimpleDB. If <code>true</code>, any data previously written to
     * SimpleDB will be returned. Otherwise, results will be consistent eventually, and
     * the client may not see data that was written immediately before your read.
     */
    inline SelectRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}

  private:

    Aws::String m_selectExpression;
    bool m_selectExpressionHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    bool m_consistentRead;
    bool m_consistentReadHasBeenSet;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
