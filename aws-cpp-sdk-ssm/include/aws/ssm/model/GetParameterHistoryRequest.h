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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API GetParameterHistoryRequest : public SSMRequest
  {
  public:
    GetParameterHistoryRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of a parameter you want to query.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a parameter you want to query.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a parameter you want to query.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a parameter you want to query.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a parameter you want to query.</p>
     */
    inline GetParameterHistoryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a parameter you want to query.</p>
     */
    inline GetParameterHistoryRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of a parameter you want to query.</p>
     */
    inline GetParameterHistoryRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Return decrypted values for secure string parameters. This flag is ignored
     * for String and StringList parameter types.</p>
     */
    inline bool GetWithDecryption() const{ return m_withDecryption; }

    /**
     * <p>Return decrypted values for secure string parameters. This flag is ignored
     * for String and StringList parameter types.</p>
     */
    inline void SetWithDecryption(bool value) { m_withDecryptionHasBeenSet = true; m_withDecryption = value; }

    /**
     * <p>Return decrypted values for secure string parameters. This flag is ignored
     * for String and StringList parameter types.</p>
     */
    inline GetParameterHistoryRequest& WithWithDecryption(bool value) { SetWithDecryption(value); return *this;}

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
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline GetParameterHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline GetParameterHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline GetParameterHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline GetParameterHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    bool m_withDecryption;
    bool m_withDecryptionHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
