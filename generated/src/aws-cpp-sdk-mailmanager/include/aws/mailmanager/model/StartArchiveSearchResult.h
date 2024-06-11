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
  /**
   * <p>The response from initiating an archive search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/StartArchiveSearchResponse">AWS
   * API Reference</a></p>
   */
  class StartArchiveSearchResult
  {
  public:
    AWS_MAILMANAGER_API StartArchiveSearchResult();
    AWS_MAILMANAGER_API StartArchiveSearchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API StartArchiveSearchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the initiated search job.</p>
     */
    inline const Aws::String& GetSearchId() const{ return m_searchId; }
    inline void SetSearchId(const Aws::String& value) { m_searchId = value; }
    inline void SetSearchId(Aws::String&& value) { m_searchId = std::move(value); }
    inline void SetSearchId(const char* value) { m_searchId.assign(value); }
    inline StartArchiveSearchResult& WithSearchId(const Aws::String& value) { SetSearchId(value); return *this;}
    inline StartArchiveSearchResult& WithSearchId(Aws::String&& value) { SetSearchId(std::move(value)); return *this;}
    inline StartArchiveSearchResult& WithSearchId(const char* value) { SetSearchId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartArchiveSearchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartArchiveSearchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartArchiveSearchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_searchId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
