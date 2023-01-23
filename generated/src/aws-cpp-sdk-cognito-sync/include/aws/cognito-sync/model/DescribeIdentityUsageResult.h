/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/model/IdentityUsage.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoSync
{
namespace Model
{
  /**
   * The response to a successful DescribeIdentityUsage request.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityUsageResponse">AWS
   * API Reference</a></p>
   */
  class DescribeIdentityUsageResult
  {
  public:
    AWS_COGNITOSYNC_API DescribeIdentityUsageResult();
    AWS_COGNITOSYNC_API DescribeIdentityUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API DescribeIdentityUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Usage information for the identity.
     */
    inline const IdentityUsage& GetIdentityUsage() const{ return m_identityUsage; }

    /**
     * Usage information for the identity.
     */
    inline void SetIdentityUsage(const IdentityUsage& value) { m_identityUsage = value; }

    /**
     * Usage information for the identity.
     */
    inline void SetIdentityUsage(IdentityUsage&& value) { m_identityUsage = std::move(value); }

    /**
     * Usage information for the identity.
     */
    inline DescribeIdentityUsageResult& WithIdentityUsage(const IdentityUsage& value) { SetIdentityUsage(value); return *this;}

    /**
     * Usage information for the identity.
     */
    inline DescribeIdentityUsageResult& WithIdentityUsage(IdentityUsage&& value) { SetIdentityUsage(std::move(value)); return *this;}

  private:

    IdentityUsage m_identityUsage;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
