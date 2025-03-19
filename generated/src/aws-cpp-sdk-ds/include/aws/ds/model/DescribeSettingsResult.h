/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/SettingEntry.h>
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
namespace DirectoryService
{
namespace Model
{
  class DescribeSettingsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeSettingsResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DescribeSettingsResult& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of <a>SettingEntry</a> objects that were retrieved.</p> <p>It is
     * possible that this list contains less than the number of items specified in the
     * <code>Limit</code> member of the request. This occurs if there are less than the
     * requested number of items left to retrieve, or if the limitations of the
     * operation have been exceeded.</p>
     */
    inline const Aws::Vector<SettingEntry>& GetSettingEntries() const { return m_settingEntries; }
    template<typename SettingEntriesT = Aws::Vector<SettingEntry>>
    void SetSettingEntries(SettingEntriesT&& value) { m_settingEntriesHasBeenSet = true; m_settingEntries = std::forward<SettingEntriesT>(value); }
    template<typename SettingEntriesT = Aws::Vector<SettingEntry>>
    DescribeSettingsResult& WithSettingEntries(SettingEntriesT&& value) { SetSettingEntries(std::forward<SettingEntriesT>(value)); return *this;}
    template<typename SettingEntriesT = SettingEntry>
    DescribeSettingsResult& AddSettingEntries(SettingEntriesT&& value) { m_settingEntriesHasBeenSet = true; m_settingEntries.emplace_back(std::forward<SettingEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, token that indicates that more results are available. Pass this
     * value for the <code>NextToken</code> parameter in a subsequent call to
     * <code>DescribeSettings</code> to retrieve the next set of items. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSettingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<SettingEntry> m_settingEntries;
    bool m_settingEntriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
