/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ChangeSetHooksStatus.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/ChangeSetHook.h>
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
namespace CloudFormation
{
namespace Model
{
  class DescribeChangeSetHooksResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeChangeSetHooksResult();
    AWS_CLOUDFORMATION_API DescribeChangeSetHooksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeChangeSetHooksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The change set identifier (stack ID).</p>
     */
    inline const Aws::String& GetChangeSetId() const{ return m_changeSetId; }

    /**
     * <p>The change set identifier (stack ID).</p>
     */
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetId = value; }

    /**
     * <p>The change set identifier (stack ID).</p>
     */
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetId = std::move(value); }

    /**
     * <p>The change set identifier (stack ID).</p>
     */
    inline void SetChangeSetId(const char* value) { m_changeSetId.assign(value); }

    /**
     * <p>The change set identifier (stack ID).</p>
     */
    inline DescribeChangeSetHooksResult& WithChangeSetId(const Aws::String& value) { SetChangeSetId(value); return *this;}

    /**
     * <p>The change set identifier (stack ID).</p>
     */
    inline DescribeChangeSetHooksResult& WithChangeSetId(Aws::String&& value) { SetChangeSetId(std::move(value)); return *this;}

    /**
     * <p>The change set identifier (stack ID).</p>
     */
    inline DescribeChangeSetHooksResult& WithChangeSetId(const char* value) { SetChangeSetId(value); return *this;}


    /**
     * <p>The change set name.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }

    /**
     * <p>The change set name.</p>
     */
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetName = value; }

    /**
     * <p>The change set name.</p>
     */
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetName = std::move(value); }

    /**
     * <p>The change set name.</p>
     */
    inline void SetChangeSetName(const char* value) { m_changeSetName.assign(value); }

    /**
     * <p>The change set name.</p>
     */
    inline DescribeChangeSetHooksResult& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The change set name.</p>
     */
    inline DescribeChangeSetHooksResult& WithChangeSetName(Aws::String&& value) { SetChangeSetName(std::move(value)); return *this;}

    /**
     * <p>The change set name.</p>
     */
    inline DescribeChangeSetHooksResult& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}


    /**
     * <p>List of hook objects.</p>
     */
    inline const Aws::Vector<ChangeSetHook>& GetHooks() const{ return m_hooks; }

    /**
     * <p>List of hook objects.</p>
     */
    inline void SetHooks(const Aws::Vector<ChangeSetHook>& value) { m_hooks = value; }

    /**
     * <p>List of hook objects.</p>
     */
    inline void SetHooks(Aws::Vector<ChangeSetHook>&& value) { m_hooks = std::move(value); }

    /**
     * <p>List of hook objects.</p>
     */
    inline DescribeChangeSetHooksResult& WithHooks(const Aws::Vector<ChangeSetHook>& value) { SetHooks(value); return *this;}

    /**
     * <p>List of hook objects.</p>
     */
    inline DescribeChangeSetHooksResult& WithHooks(Aws::Vector<ChangeSetHook>&& value) { SetHooks(std::move(value)); return *this;}

    /**
     * <p>List of hook objects.</p>
     */
    inline DescribeChangeSetHooksResult& AddHooks(const ChangeSetHook& value) { m_hooks.push_back(value); return *this; }

    /**
     * <p>List of hook objects.</p>
     */
    inline DescribeChangeSetHooksResult& AddHooks(ChangeSetHook&& value) { m_hooks.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides the status of the change set hook.</p>
     */
    inline const ChangeSetHooksStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Provides the status of the change set hook.</p>
     */
    inline void SetStatus(const ChangeSetHooksStatus& value) { m_status = value; }

    /**
     * <p>Provides the status of the change set hook.</p>
     */
    inline void SetStatus(ChangeSetHooksStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Provides the status of the change set hook.</p>
     */
    inline DescribeChangeSetHooksResult& WithStatus(const ChangeSetHooksStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Provides the status of the change set hook.</p>
     */
    inline DescribeChangeSetHooksResult& WithStatus(ChangeSetHooksStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Pagination token, <code>null</code> or empty if no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token, <code>null</code> or empty if no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token, <code>null</code> or empty if no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token, <code>null</code> or empty if no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token, <code>null</code> or empty if no more results.</p>
     */
    inline DescribeChangeSetHooksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token, <code>null</code> or empty if no more results.</p>
     */
    inline DescribeChangeSetHooksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token, <code>null</code> or empty if no more results.</p>
     */
    inline DescribeChangeSetHooksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The stack identifier (stack ID).</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack identifier (stack ID).</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }

    /**
     * <p>The stack identifier (stack ID).</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackId = std::move(value); }

    /**
     * <p>The stack identifier (stack ID).</p>
     */
    inline void SetStackId(const char* value) { m_stackId.assign(value); }

    /**
     * <p>The stack identifier (stack ID).</p>
     */
    inline DescribeChangeSetHooksResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack identifier (stack ID).</p>
     */
    inline DescribeChangeSetHooksResult& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack identifier (stack ID).</p>
     */
    inline DescribeChangeSetHooksResult& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The stack name.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The stack name.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackName = value; }

    /**
     * <p>The stack name.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackName = std::move(value); }

    /**
     * <p>The stack name.</p>
     */
    inline void SetStackName(const char* value) { m_stackName.assign(value); }

    /**
     * <p>The stack name.</p>
     */
    inline DescribeChangeSetHooksResult& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The stack name.</p>
     */
    inline DescribeChangeSetHooksResult& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The stack name.</p>
     */
    inline DescribeChangeSetHooksResult& WithStackName(const char* value) { SetStackName(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeChangeSetHooksResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeChangeSetHooksResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_changeSetId;

    Aws::String m_changeSetName;

    Aws::Vector<ChangeSetHook> m_hooks;

    ChangeSetHooksStatus m_status;

    Aws::String m_nextToken;

    Aws::String m_stackId;

    Aws::String m_stackName;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
