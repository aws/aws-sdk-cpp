/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/model/IdentityPoolUsage.h>
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
   * Response to a successful DescribeIdentityPoolUsage request.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityPoolUsageResponse">AWS
   * API Reference</a></p>
   */
  class DescribeIdentityPoolUsageResult
  {
  public:
    AWS_COGNITOSYNC_API DescribeIdentityPoolUsageResult();
    AWS_COGNITOSYNC_API DescribeIdentityPoolUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API DescribeIdentityPoolUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Information about the usage of the identity pool.
     */
    inline const IdentityPoolUsage& GetIdentityPoolUsage() const{ return m_identityPoolUsage; }

    /**
     * Information about the usage of the identity pool.
     */
    inline void SetIdentityPoolUsage(const IdentityPoolUsage& value) { m_identityPoolUsage = value; }

    /**
     * Information about the usage of the identity pool.
     */
    inline void SetIdentityPoolUsage(IdentityPoolUsage&& value) { m_identityPoolUsage = std::move(value); }

    /**
     * Information about the usage of the identity pool.
     */
    inline DescribeIdentityPoolUsageResult& WithIdentityPoolUsage(const IdentityPoolUsage& value) { SetIdentityPoolUsage(value); return *this;}

    /**
     * Information about the usage of the identity pool.
     */
    inline DescribeIdentityPoolUsageResult& WithIdentityPoolUsage(IdentityPoolUsage&& value) { SetIdentityPoolUsage(std::move(value)); return *this;}

  private:

    IdentityPoolUsage m_identityPoolUsage;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
