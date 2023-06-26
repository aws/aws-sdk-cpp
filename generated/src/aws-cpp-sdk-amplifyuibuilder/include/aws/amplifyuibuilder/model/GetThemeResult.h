/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/Theme.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{
  class GetThemeResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API GetThemeResult();
    AWS_AMPLIFYUIBUILDER_API GetThemeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API GetThemeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the configuration settings for the theme.</p>
     */
    inline const Theme& GetTheme() const{ return m_theme; }

    /**
     * <p>Represents the configuration settings for the theme.</p>
     */
    inline void SetTheme(const Theme& value) { m_theme = value; }

    /**
     * <p>Represents the configuration settings for the theme.</p>
     */
    inline void SetTheme(Theme&& value) { m_theme = std::move(value); }

    /**
     * <p>Represents the configuration settings for the theme.</p>
     */
    inline GetThemeResult& WithTheme(const Theme& value) { SetTheme(value); return *this;}

    /**
     * <p>Represents the configuration settings for the theme.</p>
     */
    inline GetThemeResult& WithTheme(Theme&& value) { SetTheme(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetThemeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetThemeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetThemeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Theme m_theme;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
