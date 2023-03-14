/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/ExtensionVersionDetails.h>
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
namespace GameSparks
{
namespace Model
{
  class GetExtensionVersionResult
  {
  public:
    AWS_GAMESPARKS_API GetExtensionVersionResult();
    AWS_GAMESPARKS_API GetExtensionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API GetExtensionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The version of the extension.</p>
     */
    inline const ExtensionVersionDetails& GetExtensionVersion() const{ return m_extensionVersion; }

    /**
     * <p>The version of the extension.</p>
     */
    inline void SetExtensionVersion(const ExtensionVersionDetails& value) { m_extensionVersion = value; }

    /**
     * <p>The version of the extension.</p>
     */
    inline void SetExtensionVersion(ExtensionVersionDetails&& value) { m_extensionVersion = std::move(value); }

    /**
     * <p>The version of the extension.</p>
     */
    inline GetExtensionVersionResult& WithExtensionVersion(const ExtensionVersionDetails& value) { SetExtensionVersion(value); return *this;}

    /**
     * <p>The version of the extension.</p>
     */
    inline GetExtensionVersionResult& WithExtensionVersion(ExtensionVersionDetails&& value) { SetExtensionVersion(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetExtensionVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetExtensionVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetExtensionVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ExtensionVersionDetails m_extensionVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
