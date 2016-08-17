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
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/model/IdentityPoolUsage.h>

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
   * Response to a successful DescribeIdentityPoolUsage request.
   */
  class AWS_COGNITOSYNC_API DescribeIdentityPoolUsageResult
  {
  public:
    DescribeIdentityPoolUsageResult();
    DescribeIdentityPoolUsageResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeIdentityPoolUsageResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetIdentityPoolUsage(IdentityPoolUsage&& value) { m_identityPoolUsage = value; }

    /**
     * Information about the usage of the identity pool.
     */
    inline DescribeIdentityPoolUsageResult& WithIdentityPoolUsage(const IdentityPoolUsage& value) { SetIdentityPoolUsage(value); return *this;}

    /**
     * Information about the usage of the identity pool.
     */
    inline DescribeIdentityPoolUsageResult& WithIdentityPoolUsage(IdentityPoolUsage&& value) { SetIdentityPoolUsage(value); return *this;}

  private:
    IdentityPoolUsage m_identityPoolUsage;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
