/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListSecurityProfilesForTargetRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListSecurityProfilesForTargetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSecurityProfilesForTarget"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSecurityProfilesForTargetRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSecurityProfilesForTargetRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, return child groups too.</p>
     */
    inline bool GetRecursive() const { return m_recursive; }
    inline bool RecursiveHasBeenSet() const { return m_recursiveHasBeenSet; }
    inline void SetRecursive(bool value) { m_recursiveHasBeenSet = true; m_recursive = value; }
    inline ListSecurityProfilesForTargetRequest& WithRecursive(bool value) { SetRecursive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target (thing group) whose attached security profiles you want
     * to get.</p>
     */
    inline const Aws::String& GetSecurityProfileTargetArn() const { return m_securityProfileTargetArn; }
    inline bool SecurityProfileTargetArnHasBeenSet() const { return m_securityProfileTargetArnHasBeenSet; }
    template<typename SecurityProfileTargetArnT = Aws::String>
    void SetSecurityProfileTargetArn(SecurityProfileTargetArnT&& value) { m_securityProfileTargetArnHasBeenSet = true; m_securityProfileTargetArn = std::forward<SecurityProfileTargetArnT>(value); }
    template<typename SecurityProfileTargetArnT = Aws::String>
    ListSecurityProfilesForTargetRequest& WithSecurityProfileTargetArn(SecurityProfileTargetArnT&& value) { SetSecurityProfileTargetArn(std::forward<SecurityProfileTargetArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    bool m_recursive{false};
    bool m_recursiveHasBeenSet = false;

    Aws::String m_securityProfileTargetArn;
    bool m_securityProfileTargetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
