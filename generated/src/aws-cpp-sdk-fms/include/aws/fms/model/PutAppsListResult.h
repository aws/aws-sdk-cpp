﻿/**
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
  class PutAppsListResult
  {
  public:
    AWS_FMS_API PutAppsListResult();
    AWS_FMS_API PutAppsListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API PutAppsListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the Firewall Manager applications list.</p>
     */
    inline const AppsListData& GetAppsList() const{ return m_appsList; }
    inline void SetAppsList(const AppsListData& value) { m_appsList = value; }
    inline void SetAppsList(AppsListData&& value) { m_appsList = std::move(value); }
    inline PutAppsListResult& WithAppsList(const AppsListData& value) { SetAppsList(value); return *this;}
    inline PutAppsListResult& WithAppsList(AppsListData&& value) { SetAppsList(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline const Aws::String& GetAppsListArn() const{ return m_appsListArn; }
    inline void SetAppsListArn(const Aws::String& value) { m_appsListArn = value; }
    inline void SetAppsListArn(Aws::String&& value) { m_appsListArn = std::move(value); }
    inline void SetAppsListArn(const char* value) { m_appsListArn.assign(value); }
    inline PutAppsListResult& WithAppsListArn(const Aws::String& value) { SetAppsListArn(value); return *this;}
    inline PutAppsListResult& WithAppsListArn(Aws::String&& value) { SetAppsListArn(std::move(value)); return *this;}
    inline PutAppsListResult& WithAppsListArn(const char* value) { SetAppsListArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutAppsListResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutAppsListResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutAppsListResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AppsListData m_appsList;

    Aws::String m_appsListArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
