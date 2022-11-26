﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/PrefixListEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AWS_EC2_API GetManagedPrefixListEntriesResponse
  {
  public:
    GetManagedPrefixListEntriesResponse();
    GetManagedPrefixListEntriesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetManagedPrefixListEntriesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the prefix list entries.</p>
     */
    inline const Aws::Vector<PrefixListEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>Information about the prefix list entries.</p>
     */
    inline void SetEntries(const Aws::Vector<PrefixListEntry>& value) { m_entries = value; }

    /**
     * <p>Information about the prefix list entries.</p>
     */
    inline void SetEntries(Aws::Vector<PrefixListEntry>&& value) { m_entries = std::move(value); }

    /**
     * <p>Information about the prefix list entries.</p>
     */
    inline GetManagedPrefixListEntriesResponse& WithEntries(const Aws::Vector<PrefixListEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>Information about the prefix list entries.</p>
     */
    inline GetManagedPrefixListEntriesResponse& WithEntries(Aws::Vector<PrefixListEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>Information about the prefix list entries.</p>
     */
    inline GetManagedPrefixListEntriesResponse& AddEntries(const PrefixListEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>Information about the prefix list entries.</p>
     */
    inline GetManagedPrefixListEntriesResponse& AddEntries(PrefixListEntry&& value) { m_entries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetManagedPrefixListEntriesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetManagedPrefixListEntriesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetManagedPrefixListEntriesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetManagedPrefixListEntriesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetManagedPrefixListEntriesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PrefixListEntry> m_entries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
