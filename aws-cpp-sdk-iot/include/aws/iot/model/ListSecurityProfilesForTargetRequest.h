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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API ListSecurityProfilesForTargetRequest : public IoTRequest
  {
  public:
    ListSecurityProfilesForTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSecurityProfilesForTarget"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListSecurityProfilesForTargetRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListSecurityProfilesForTargetRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListSecurityProfilesForTargetRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline ListSecurityProfilesForTargetRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If true, return child groups as well.</p>
     */
    inline bool GetRecursive() const{ return m_recursive; }

    /**
     * <p>If true, return child groups as well.</p>
     */
    inline bool RecursiveHasBeenSet() const { return m_recursiveHasBeenSet; }

    /**
     * <p>If true, return child groups as well.</p>
     */
    inline void SetRecursive(bool value) { m_recursiveHasBeenSet = true; m_recursive = value; }

    /**
     * <p>If true, return child groups as well.</p>
     */
    inline ListSecurityProfilesForTargetRequest& WithRecursive(bool value) { SetRecursive(value); return *this;}


    /**
     * <p>The ARN of the target (thing group) whose attached security profiles you want
     * to get.</p>
     */
    inline const Aws::String& GetSecurityProfileTargetArn() const{ return m_securityProfileTargetArn; }

    /**
     * <p>The ARN of the target (thing group) whose attached security profiles you want
     * to get.</p>
     */
    inline bool SecurityProfileTargetArnHasBeenSet() const { return m_securityProfileTargetArnHasBeenSet; }

    /**
     * <p>The ARN of the target (thing group) whose attached security profiles you want
     * to get.</p>
     */
    inline void SetSecurityProfileTargetArn(const Aws::String& value) { m_securityProfileTargetArnHasBeenSet = true; m_securityProfileTargetArn = value; }

    /**
     * <p>The ARN of the target (thing group) whose attached security profiles you want
     * to get.</p>
     */
    inline void SetSecurityProfileTargetArn(Aws::String&& value) { m_securityProfileTargetArnHasBeenSet = true; m_securityProfileTargetArn = std::move(value); }

    /**
     * <p>The ARN of the target (thing group) whose attached security profiles you want
     * to get.</p>
     */
    inline void SetSecurityProfileTargetArn(const char* value) { m_securityProfileTargetArnHasBeenSet = true; m_securityProfileTargetArn.assign(value); }

    /**
     * <p>The ARN of the target (thing group) whose attached security profiles you want
     * to get.</p>
     */
    inline ListSecurityProfilesForTargetRequest& WithSecurityProfileTargetArn(const Aws::String& value) { SetSecurityProfileTargetArn(value); return *this;}

    /**
     * <p>The ARN of the target (thing group) whose attached security profiles you want
     * to get.</p>
     */
    inline ListSecurityProfilesForTargetRequest& WithSecurityProfileTargetArn(Aws::String&& value) { SetSecurityProfileTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the target (thing group) whose attached security profiles you want
     * to get.</p>
     */
    inline ListSecurityProfilesForTargetRequest& WithSecurityProfileTargetArn(const char* value) { SetSecurityProfileTargetArn(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    bool m_recursive;
    bool m_recursiveHasBeenSet;

    Aws::String m_securityProfileTargetArn;
    bool m_securityProfileTargetArnHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
