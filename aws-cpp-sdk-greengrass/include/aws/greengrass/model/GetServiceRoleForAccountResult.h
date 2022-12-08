/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetServiceRoleForAccountResult
  {
  public:
    AWS_GREENGRASS_API GetServiceRoleForAccountResult();
    AWS_GREENGRASS_API GetServiceRoleForAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetServiceRoleForAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The time when the service role was associated with the account.
     */
    inline const Aws::String& GetAssociatedAt() const{ return m_associatedAt; }

    /**
     * The time when the service role was associated with the account.
     */
    inline void SetAssociatedAt(const Aws::String& value) { m_associatedAt = value; }

    /**
     * The time when the service role was associated with the account.
     */
    inline void SetAssociatedAt(Aws::String&& value) { m_associatedAt = std::move(value); }

    /**
     * The time when the service role was associated with the account.
     */
    inline void SetAssociatedAt(const char* value) { m_associatedAt.assign(value); }

    /**
     * The time when the service role was associated with the account.
     */
    inline GetServiceRoleForAccountResult& WithAssociatedAt(const Aws::String& value) { SetAssociatedAt(value); return *this;}

    /**
     * The time when the service role was associated with the account.
     */
    inline GetServiceRoleForAccountResult& WithAssociatedAt(Aws::String&& value) { SetAssociatedAt(std::move(value)); return *this;}

    /**
     * The time when the service role was associated with the account.
     */
    inline GetServiceRoleForAccountResult& WithAssociatedAt(const char* value) { SetAssociatedAt(value); return *this;}


    /**
     * The ARN of the role which is associated with the account.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The ARN of the role which is associated with the account.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * The ARN of the role which is associated with the account.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * The ARN of the role which is associated with the account.
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * The ARN of the role which is associated with the account.
     */
    inline GetServiceRoleForAccountResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The ARN of the role which is associated with the account.
     */
    inline GetServiceRoleForAccountResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of the role which is associated with the account.
     */
    inline GetServiceRoleForAccountResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_associatedAt;

    Aws::String m_roleArn;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
