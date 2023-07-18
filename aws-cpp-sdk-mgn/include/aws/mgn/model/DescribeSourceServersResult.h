﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/SourceServer.h>
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
namespace mgn
{
namespace Model
{
  class AWS_MGN_API DescribeSourceServersResult
  {
  public:
    DescribeSourceServersResult();
    DescribeSourceServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSourceServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Request to filter Source Servers list by item.</p>
     */
    inline const Aws::Vector<SourceServer>& GetItems() const{ return m_items; }

    /**
     * <p>Request to filter Source Servers list by item.</p>
     */
    inline void SetItems(const Aws::Vector<SourceServer>& value) { m_items = value; }

    /**
     * <p>Request to filter Source Servers list by item.</p>
     */
    inline void SetItems(Aws::Vector<SourceServer>&& value) { m_items = std::move(value); }

    /**
     * <p>Request to filter Source Servers list by item.</p>
     */
    inline DescribeSourceServersResult& WithItems(const Aws::Vector<SourceServer>& value) { SetItems(value); return *this;}

    /**
     * <p>Request to filter Source Servers list by item.</p>
     */
    inline DescribeSourceServersResult& WithItems(Aws::Vector<SourceServer>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Request to filter Source Servers list by item.</p>
     */
    inline DescribeSourceServersResult& AddItems(const SourceServer& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Request to filter Source Servers list by item.</p>
     */
    inline DescribeSourceServersResult& AddItems(SourceServer&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Request to filter Source Servers next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Request to filter Source Servers next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Request to filter Source Servers next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Request to filter Source Servers next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Request to filter Source Servers next token.</p>
     */
    inline DescribeSourceServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Request to filter Source Servers next token.</p>
     */
    inline DescribeSourceServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Request to filter Source Servers next token.</p>
     */
    inline DescribeSourceServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SourceServer> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
