/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/AppBundle.h>
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
namespace AppFabric
{
namespace Model
{
  class CreateAppBundleResult
  {
  public:
    AWS_APPFABRIC_API CreateAppBundleResult();
    AWS_APPFABRIC_API CreateAppBundleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API CreateAppBundleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains information about an app bundle.</p>
     */
    inline const AppBundle& GetAppBundle() const{ return m_appBundle; }

    /**
     * <p>Contains information about an app bundle.</p>
     */
    inline void SetAppBundle(const AppBundle& value) { m_appBundle = value; }

    /**
     * <p>Contains information about an app bundle.</p>
     */
    inline void SetAppBundle(AppBundle&& value) { m_appBundle = std::move(value); }

    /**
     * <p>Contains information about an app bundle.</p>
     */
    inline CreateAppBundleResult& WithAppBundle(const AppBundle& value) { SetAppBundle(value); return *this;}

    /**
     * <p>Contains information about an app bundle.</p>
     */
    inline CreateAppBundleResult& WithAppBundle(AppBundle&& value) { SetAppBundle(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAppBundleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAppBundleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAppBundleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AppBundle m_appBundle;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
