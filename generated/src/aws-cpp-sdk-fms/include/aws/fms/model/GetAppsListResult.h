/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/AppsListData.h>
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
namespace FMS
{
namespace Model
{
  class GetAppsListResult
  {
  public:
    AWS_FMS_API GetAppsListResult();
    AWS_FMS_API GetAppsListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetAppsListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specified Firewall Manager applications list.</p>
     */
    inline const AppsListData& GetAppsList() const{ return m_appsList; }

    /**
     * <p>Information about the specified Firewall Manager applications list.</p>
     */
    inline void SetAppsList(const AppsListData& value) { m_appsList = value; }

    /**
     * <p>Information about the specified Firewall Manager applications list.</p>
     */
    inline void SetAppsList(AppsListData&& value) { m_appsList = std::move(value); }

    /**
     * <p>Information about the specified Firewall Manager applications list.</p>
     */
    inline GetAppsListResult& WithAppsList(const AppsListData& value) { SetAppsList(value); return *this;}

    /**
     * <p>Information about the specified Firewall Manager applications list.</p>
     */
    inline GetAppsListResult& WithAppsList(AppsListData&& value) { SetAppsList(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline const Aws::String& GetAppsListArn() const{ return m_appsListArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline void SetAppsListArn(const Aws::String& value) { m_appsListArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline void SetAppsListArn(Aws::String&& value) { m_appsListArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline void SetAppsListArn(const char* value) { m_appsListArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline GetAppsListResult& WithAppsListArn(const Aws::String& value) { SetAppsListArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline GetAppsListResult& WithAppsListArn(Aws::String&& value) { SetAppsListArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline GetAppsListResult& WithAppsListArn(const char* value) { SetAppsListArn(value); return *this;}

  private:

    AppsListData m_appsList;

    Aws::String m_appsListArn;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
