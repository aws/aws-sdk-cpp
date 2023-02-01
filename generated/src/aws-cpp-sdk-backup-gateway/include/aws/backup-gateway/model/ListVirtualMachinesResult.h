/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup-gateway/model/VirtualMachine.h>
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
namespace BackupGateway
{
namespace Model
{
  class ListVirtualMachinesResult
  {
  public:
    AWS_BACKUPGATEWAY_API ListVirtualMachinesResult();
    AWS_BACKUPGATEWAY_API ListVirtualMachinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API ListVirtualMachinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListVirtualMachinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListVirtualMachinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListVirtualMachinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of your <code>VirtualMachine</code> objects, ordered by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<VirtualMachine>& GetVirtualMachines() const{ return m_virtualMachines; }

    /**
     * <p>A list of your <code>VirtualMachine</code> objects, ordered by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline void SetVirtualMachines(const Aws::Vector<VirtualMachine>& value) { m_virtualMachines = value; }

    /**
     * <p>A list of your <code>VirtualMachine</code> objects, ordered by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline void SetVirtualMachines(Aws::Vector<VirtualMachine>&& value) { m_virtualMachines = std::move(value); }

    /**
     * <p>A list of your <code>VirtualMachine</code> objects, ordered by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline ListVirtualMachinesResult& WithVirtualMachines(const Aws::Vector<VirtualMachine>& value) { SetVirtualMachines(value); return *this;}

    /**
     * <p>A list of your <code>VirtualMachine</code> objects, ordered by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline ListVirtualMachinesResult& WithVirtualMachines(Aws::Vector<VirtualMachine>&& value) { SetVirtualMachines(std::move(value)); return *this;}

    /**
     * <p>A list of your <code>VirtualMachine</code> objects, ordered by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline ListVirtualMachinesResult& AddVirtualMachines(const VirtualMachine& value) { m_virtualMachines.push_back(value); return *this; }

    /**
     * <p>A list of your <code>VirtualMachine</code> objects, ordered by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline ListVirtualMachinesResult& AddVirtualMachines(VirtualMachine&& value) { m_virtualMachines.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<VirtualMachine> m_virtualMachines;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
