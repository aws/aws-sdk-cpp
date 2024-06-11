﻿/**
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
    AWS_DIRECTORYSERVICE_API DescribeSettingsResult();
    AWS_DIRECTORYSERVICE_API DescribeSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }
    inline DescribeSettingsResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline DescribeSettingsResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline DescribeSettingsResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of <a>SettingEntry</a> objects that were retrieved.</p> <p>It is
     * possible that this list contains less than the number of items specified in the
     * <code>Limit</code> member of the request. This occurs if there are less than the
     * requested number of items left to retrieve, or if the limitations of the
     * operation have been exceeded.</p>
     */
    inline const Aws::Vector<SettingEntry>& GetSettingEntries() const{ return m_settingEntries; }
    inline void SetSettingEntries(const Aws::Vector<SettingEntry>& value) { m_settingEntries = value; }
    inline void SetSettingEntries(Aws::Vector<SettingEntry>&& value) { m_settingEntries = std::move(value); }
    inline DescribeSettingsResult& WithSettingEntries(const Aws::Vector<SettingEntry>& value) { SetSettingEntries(value); return *this;}
    inline DescribeSettingsResult& WithSettingEntries(Aws::Vector<SettingEntry>&& value) { SetSettingEntries(std::move(value)); return *this;}
    inline DescribeSettingsResult& AddSettingEntries(const SettingEntry& value) { m_settingEntries.push_back(value); return *this; }
    inline DescribeSettingsResult& AddSettingEntries(SettingEntry&& value) { m_settingEntries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, token that indicates that more results are available. Pass this
     * value for the <code>NextToken</code> parameter in a subsequent call to
     * <code>DescribeSettings</code> to retrieve the next set of items. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeSettingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSettingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSettingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;

    Aws::Vector<SettingEntry> m_settingEntries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
