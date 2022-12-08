/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>GetHostnameSuggestion</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GetHostnameSuggestionResult">AWS
   * API Reference</a></p>
   */
  class GetHostnameSuggestionResult
  {
  public:
    AWS_OPSWORKS_API GetHostnameSuggestionResult();
    AWS_OPSWORKS_API GetHostnameSuggestionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API GetHostnameSuggestionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The layer ID.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(const Aws::String& value) { m_layerId = value; }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(Aws::String&& value) { m_layerId = std::move(value); }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(const char* value) { m_layerId.assign(value); }

    /**
     * <p>The layer ID.</p>
     */
    inline GetHostnameSuggestionResult& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}

    /**
     * <p>The layer ID.</p>
     */
    inline GetHostnameSuggestionResult& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}

    /**
     * <p>The layer ID.</p>
     */
    inline GetHostnameSuggestionResult& WithLayerId(const char* value) { SetLayerId(value); return *this;}


    /**
     * <p>The generated host name.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The generated host name.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostname = value; }

    /**
     * <p>The generated host name.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostname = std::move(value); }

    /**
     * <p>The generated host name.</p>
     */
    inline void SetHostname(const char* value) { m_hostname.assign(value); }

    /**
     * <p>The generated host name.</p>
     */
    inline GetHostnameSuggestionResult& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The generated host name.</p>
     */
    inline GetHostnameSuggestionResult& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The generated host name.</p>
     */
    inline GetHostnameSuggestionResult& WithHostname(const char* value) { SetHostname(value); return *this;}

  private:

    Aws::String m_layerId;

    Aws::String m_hostname;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
