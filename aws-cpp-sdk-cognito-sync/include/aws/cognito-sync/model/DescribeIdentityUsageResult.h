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
  class AWS_COGNITOSYNC_API DescribeIdentityUsageResult
  {
  public:
    DescribeIdentityUsageResult();
    DescribeIdentityUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeIdentityUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
