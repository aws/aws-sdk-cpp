/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{
  class UpdateApplicationResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API UpdateApplicationResult();
    AWS_MAINFRAMEMODERNIZATION_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new version of the application.</p>
     */
    inline int GetApplicationVersion() const{ return m_applicationVersion; }

    /**
     * <p>The new version of the application.</p>
     */
    inline void SetApplicationVersion(int value) { m_applicationVersion = value; }

    /**
     * <p>The new version of the application.</p>
     */
    inline UpdateApplicationResult& WithApplicationVersion(int value) { SetApplicationVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_applicationVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
