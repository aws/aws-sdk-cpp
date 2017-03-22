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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API ListAppliedSchemaArnsRequest : public CloudDirectoryRequest
  {
  public:
    ListAppliedSchemaArnsRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the directory you are listing.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The ARN of the directory you are listing.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The ARN of the directory you are listing.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The ARN of the directory you are listing.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The ARN of the directory you are listing.</p>
     */
    inline ListAppliedSchemaArnsRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the directory you are listing.</p>
     */
    inline ListAppliedSchemaArnsRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the directory you are listing.</p>
     */
    inline ListAppliedSchemaArnsRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListAppliedSchemaArnsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListAppliedSchemaArnsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListAppliedSchemaArnsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline ListAppliedSchemaArnsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
