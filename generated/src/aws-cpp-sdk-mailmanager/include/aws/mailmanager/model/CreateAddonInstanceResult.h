/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{
  class CreateAddonInstanceResult
  {
  public:
    AWS_MAILMANAGER_API CreateAddonInstanceResult();
    AWS_MAILMANAGER_API CreateAddonInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API CreateAddonInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the Add On instance created by this API.</p>
     */
    inline const Aws::String& GetAddonInstanceId() const{ return m_addonInstanceId; }
    inline void SetAddonInstanceId(const Aws::String& value) { m_addonInstanceId = value; }
    inline void SetAddonInstanceId(Aws::String&& value) { m_addonInstanceId = std::move(value); }
    inline void SetAddonInstanceId(const char* value) { m_addonInstanceId.assign(value); }
    inline CreateAddonInstanceResult& WithAddonInstanceId(const Aws::String& value) { SetAddonInstanceId(value); return *this;}
    inline CreateAddonInstanceResult& WithAddonInstanceId(Aws::String&& value) { SetAddonInstanceId(std::move(value)); return *this;}
    inline CreateAddonInstanceResult& WithAddonInstanceId(const char* value) { SetAddonInstanceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAddonInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAddonInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAddonInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_addonInstanceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
