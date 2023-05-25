/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/App.h>
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
namespace Amplify
{
namespace Model
{
  class GetAppResult
  {
  public:
    AWS_AMPLIFY_API GetAppResult();
    AWS_AMPLIFY_API GetAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API GetAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const App& GetApp() const{ return m_app; }

    
    inline void SetApp(const App& value) { m_app = value; }

    
    inline void SetApp(App&& value) { m_app = std::move(value); }

    
    inline GetAppResult& WithApp(const App& value) { SetApp(value); return *this;}

    
    inline GetAppResult& WithApp(App&& value) { SetApp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAppResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAppResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAppResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    App m_app;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
