/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>The input for the <code>ListPhoneNumbersOptedOut</code> action.</p>
   */
  class AWS_SNS_API ListPhoneNumbersOptedOutRequest : public SNSRequest
  {
  public:
    ListPhoneNumbersOptedOutRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A <code>NextToken</code> string is used when you call the
     * <code>ListPhoneNumbersOptedOut</code> action to retrieve additional records that
     * are available after the first page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A <code>NextToken</code> string is used when you call the
     * <code>ListPhoneNumbersOptedOut</code> action to retrieve additional records that
     * are available after the first page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A <code>NextToken</code> string is used when you call the
     * <code>ListPhoneNumbersOptedOut</code> action to retrieve additional records that
     * are available after the first page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A <code>NextToken</code> string is used when you call the
     * <code>ListPhoneNumbersOptedOut</code> action to retrieve additional records that
     * are available after the first page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A <code>NextToken</code> string is used when you call the
     * <code>ListPhoneNumbersOptedOut</code> action to retrieve additional records that
     * are available after the first page of results.</p>
     */
    inline ListPhoneNumbersOptedOutRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A <code>NextToken</code> string is used when you call the
     * <code>ListPhoneNumbersOptedOut</code> action to retrieve additional records that
     * are available after the first page of results.</p>
     */
    inline ListPhoneNumbersOptedOutRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>A <code>NextToken</code> string is used when you call the
     * <code>ListPhoneNumbersOptedOut</code> action to retrieve additional records that
     * are available after the first page of results.</p>
     */
    inline ListPhoneNumbersOptedOutRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
