/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/App.h>
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
  class CreateAppResult
  {
  public:
    AWS_AMPLIFY_API CreateAppResult();
    AWS_AMPLIFY_API CreateAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API CreateAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const App& GetApp() const{ return m_app; }

    
    inline void SetApp(const App& value) { m_app = value; }

    
    inline void SetApp(App&& value) { m_app = std::move(value); }

    
    inline CreateAppResult& WithApp(const App& value) { SetApp(value); return *this;}

    
    inline CreateAppResult& WithApp(App&& value) { SetApp(std::move(value)); return *this;}

  private:

    App m_app;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
