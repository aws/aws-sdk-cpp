/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AppInstanceAdmin.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class DescribeAppInstanceAdminResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceAdminResult();
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceAdminResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceAdminResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN and name of the <code>AppInstanceUser</code>, the ARN of the
     * <code>AppInstance</code>, and the created and last-updated timestamps. All
     * timestamps use epoch milliseconds.</p>
     */
    inline const AppInstanceAdmin& GetAppInstanceAdmin() const{ return m_appInstanceAdmin; }

    /**
     * <p>The ARN and name of the <code>AppInstanceUser</code>, the ARN of the
     * <code>AppInstance</code>, and the created and last-updated timestamps. All
     * timestamps use epoch milliseconds.</p>
     */
    inline void SetAppInstanceAdmin(const AppInstanceAdmin& value) { m_appInstanceAdmin = value; }

    /**
     * <p>The ARN and name of the <code>AppInstanceUser</code>, the ARN of the
     * <code>AppInstance</code>, and the created and last-updated timestamps. All
     * timestamps use epoch milliseconds.</p>
     */
    inline void SetAppInstanceAdmin(AppInstanceAdmin&& value) { m_appInstanceAdmin = std::move(value); }

    /**
     * <p>The ARN and name of the <code>AppInstanceUser</code>, the ARN of the
     * <code>AppInstance</code>, and the created and last-updated timestamps. All
     * timestamps use epoch milliseconds.</p>
     */
    inline DescribeAppInstanceAdminResult& WithAppInstanceAdmin(const AppInstanceAdmin& value) { SetAppInstanceAdmin(value); return *this;}

    /**
     * <p>The ARN and name of the <code>AppInstanceUser</code>, the ARN of the
     * <code>AppInstance</code>, and the created and last-updated timestamps. All
     * timestamps use epoch milliseconds.</p>
     */
    inline DescribeAppInstanceAdminResult& WithAppInstanceAdmin(AppInstanceAdmin&& value) { SetAppInstanceAdmin(std::move(value)); return *this;}

  private:

    AppInstanceAdmin m_appInstanceAdmin;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
