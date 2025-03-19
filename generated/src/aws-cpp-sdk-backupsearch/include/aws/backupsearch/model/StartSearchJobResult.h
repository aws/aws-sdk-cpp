/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace BackupSearch
{
namespace Model
{
  class StartSearchJobResult
  {
  public:
    AWS_BACKUPSEARCH_API StartSearchJobResult() = default;
    AWS_BACKUPSEARCH_API StartSearchJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API StartSearchJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique string that identifies the Amazon Resource Name (ARN) of the
     * specified search job.</p>
     */
    inline const Aws::String& GetSearchJobArn() const { return m_searchJobArn; }
    template<typename SearchJobArnT = Aws::String>
    void SetSearchJobArn(SearchJobArnT&& value) { m_searchJobArnHasBeenSet = true; m_searchJobArn = std::forward<SearchJobArnT>(value); }
    template<typename SearchJobArnT = Aws::String>
    StartSearchJobResult& WithSearchJobArn(SearchJobArnT&& value) { SetSearchJobArn(std::forward<SearchJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a job was created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CompletionTime</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    StartSearchJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string that specifies the search job.</p>
     */
    inline const Aws::String& GetSearchJobIdentifier() const { return m_searchJobIdentifier; }
    template<typename SearchJobIdentifierT = Aws::String>
    void SetSearchJobIdentifier(SearchJobIdentifierT&& value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier = std::forward<SearchJobIdentifierT>(value); }
    template<typename SearchJobIdentifierT = Aws::String>
    StartSearchJobResult& WithSearchJobIdentifier(SearchJobIdentifierT&& value) { SetSearchJobIdentifier(std::forward<SearchJobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartSearchJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_searchJobArn;
    bool m_searchJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_searchJobIdentifier;
    bool m_searchJobIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
