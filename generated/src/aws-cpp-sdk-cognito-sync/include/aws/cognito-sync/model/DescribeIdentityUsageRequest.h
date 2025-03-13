/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/CognitoSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

  /**
   * A request for information about the usage of an identity pool.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityUsageRequest">AWS
   * API Reference</a></p>
   */
  class DescribeIdentityUsageRequest : public CognitoSyncRequest
  {
  public:
    AWS_COGNITOSYNC_API DescribeIdentityUsageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIdentityUsage"; }

    AWS_COGNITOSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    DescribeIdentityUsageRequest& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityId() const { return m_identityId; }
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }
    template<typename IdentityIdT = Aws::String>
    void SetIdentityId(IdentityIdT&& value) { m_identityIdHasBeenSet = true; m_identityId = std::forward<IdentityIdT>(value); }
    template<typename IdentityIdT = Aws::String>
    DescribeIdentityUsageRequest& WithIdentityId(IdentityIdT&& value) { SetIdentityId(std::forward<IdentityIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
