/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/AppInstanceAdmin.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API DescribeAppInstanceAdminResult
  {
  public:
    DescribeAppInstanceAdminResult();
    DescribeAppInstanceAdminResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAppInstanceAdminResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN and name of the app instance user, the ARN of the app instance, and
     * the created and last-updated timestamps. All timestamps use epoch
     * milliseconds.</p>
     */
    inline const AppInstanceAdmin& GetAppInstanceAdmin() const{ return m_appInstanceAdmin; }

    /**
     * <p>The ARN and name of the app instance user, the ARN of the app instance, and
     * the created and last-updated timestamps. All timestamps use epoch
     * milliseconds.</p>
     */
    inline void SetAppInstanceAdmin(const AppInstanceAdmin& value) { m_appInstanceAdmin = value; }

    /**
     * <p>The ARN and name of the app instance user, the ARN of the app instance, and
     * the created and last-updated timestamps. All timestamps use epoch
     * milliseconds.</p>
     */
    inline void SetAppInstanceAdmin(AppInstanceAdmin&& value) { m_appInstanceAdmin = std::move(value); }

    /**
     * <p>The ARN and name of the app instance user, the ARN of the app instance, and
     * the created and last-updated timestamps. All timestamps use epoch
     * milliseconds.</p>
     */
    inline DescribeAppInstanceAdminResult& WithAppInstanceAdmin(const AppInstanceAdmin& value) { SetAppInstanceAdmin(value); return *this;}

    /**
     * <p>The ARN and name of the app instance user, the ARN of the app instance, and
     * the created and last-updated timestamps. All timestamps use epoch
     * milliseconds.</p>
     */
    inline DescribeAppInstanceAdminResult& WithAppInstanceAdmin(AppInstanceAdmin&& value) { SetAppInstanceAdmin(std::move(value)); return *this;}

  private:

    AppInstanceAdmin m_appInstanceAdmin;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
