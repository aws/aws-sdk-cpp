﻿/**
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
  /**
   * <p>The result structure for an Amplify app update request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateAppResult">AWS
   * API Reference</a></p>
   */
  class UpdateAppResult
  {
  public:
    AWS_AMPLIFY_API UpdateAppResult();
    AWS_AMPLIFY_API UpdateAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API UpdateAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the updated Amplify app. </p>
     */
    inline const App& GetApp() const{ return m_app; }
    inline void SetApp(const App& value) { m_app = value; }
    inline void SetApp(App&& value) { m_app = std::move(value); }
    inline UpdateAppResult& WithApp(const App& value) { SetApp(value); return *this;}
    inline UpdateAppResult& WithApp(App&& value) { SetApp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAppResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAppResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAppResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    App m_app;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
