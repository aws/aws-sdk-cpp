/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Theme.h>
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
namespace AppStream
{
namespace Model
{
  class CreateThemeForStackResult
  {
  public:
    AWS_APPSTREAM_API CreateThemeForStackResult();
    AWS_APPSTREAM_API CreateThemeForStackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateThemeForStackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The theme object that contains the metadata of the custom branding.</p>
     */
    inline const Theme& GetTheme() const{ return m_theme; }
    inline void SetTheme(const Theme& value) { m_theme = value; }
    inline void SetTheme(Theme&& value) { m_theme = std::move(value); }
    inline CreateThemeForStackResult& WithTheme(const Theme& value) { SetTheme(value); return *this;}
    inline CreateThemeForStackResult& WithTheme(Theme&& value) { SetTheme(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateThemeForStackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateThemeForStackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateThemeForStackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Theme m_theme;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
