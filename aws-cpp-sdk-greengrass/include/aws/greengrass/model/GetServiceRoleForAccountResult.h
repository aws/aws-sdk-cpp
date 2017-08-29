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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Greengrass
{
namespace Model
{
  class AWS_GREENGRASS_API GetServiceRoleForAccountResult
  {
  public:
    GetServiceRoleForAccountResult();
    GetServiceRoleForAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetServiceRoleForAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Time when the service role was associated to the account.
     */
    inline const Aws::String& GetAssociatedAt() const{ return m_associatedAt; }

    /**
     * Time when the service role was associated to the account.
     */
    inline void SetAssociatedAt(const Aws::String& value) { m_associatedAt = value; }

    /**
     * Time when the service role was associated to the account.
     */
    inline void SetAssociatedAt(Aws::String&& value) { m_associatedAt = std::move(value); }

    /**
     * Time when the service role was associated to the account.
     */
    inline void SetAssociatedAt(const char* value) { m_associatedAt.assign(value); }

    /**
     * Time when the service role was associated to the account.
     */
    inline GetServiceRoleForAccountResult& WithAssociatedAt(const Aws::String& value) { SetAssociatedAt(value); return *this;}

    /**
     * Time when the service role was associated to the account.
     */
    inline GetServiceRoleForAccountResult& WithAssociatedAt(Aws::String&& value) { SetAssociatedAt(std::move(value)); return *this;}

    /**
     * Time when the service role was associated to the account.
     */
    inline GetServiceRoleForAccountResult& WithAssociatedAt(const char* value) { SetAssociatedAt(value); return *this;}


    /**
     * Role arn which is associated to the account.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * Role arn which is associated to the account.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * Role arn which is associated to the account.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * Role arn which is associated to the account.
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * Role arn which is associated to the account.
     */
    inline GetServiceRoleForAccountResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * Role arn which is associated to the account.
     */
    inline GetServiceRoleForAccountResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * Role arn which is associated to the account.
     */
    inline GetServiceRoleForAccountResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_associatedAt;

    Aws::String m_roleArn;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
