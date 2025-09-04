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
    AWS_CLOUDFORMATION_API DescribeChangeSetHooksResult() = default;
    AWS_CLOUDFORMATION_API DescribeChangeSetHooksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeChangeSetHooksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The change set identifier (stack ID).</p>
     */
    inline const Aws::String& GetChangeSetId() const { return m_changeSetId; }
    template<typename ChangeSetIdT = Aws::String>
    void SetChangeSetId(ChangeSetIdT&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::forward<ChangeSetIdT>(value); }
    template<typename ChangeSetIdT = Aws::String>
    DescribeChangeSetHooksResult& WithChangeSetId(ChangeSetIdT&& value) { SetChangeSetId(std::forward<ChangeSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change set name.</p>
     */
    inline const Aws::String& GetChangeSetName() const { return m_changeSetName; }
    template<typename ChangeSetNameT = Aws::String>
    void SetChangeSetName(ChangeSetNameT&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::forward<ChangeSetNameT>(value); }
    template<typename ChangeSetNameT = Aws::String>
    DescribeChangeSetHooksResult& WithChangeSetName(ChangeSetNameT&& value) { SetChangeSetName(std::forward<ChangeSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Hook objects.</p>
     */
    inline const Aws::Vector<ChangeSetHook>& GetHooks() const { return m_hooks; }
    template<typename HooksT = Aws::Vector<ChangeSetHook>>
    void SetHooks(HooksT&& value) { m_hooksHasBeenSet = true; m_hooks = std::forward<HooksT>(value); }
    template<typename HooksT = Aws::Vector<ChangeSetHook>>
    DescribeChangeSetHooksResult& WithHooks(HooksT&& value) { SetHooks(std::forward<HooksT>(value)); return *this;}
    template<typename HooksT = ChangeSetHook>
    DescribeChangeSetHooksResult& AddHooks(HooksT&& value) { m_hooksHasBeenSet = true; m_hooks.emplace_back(std::forward<HooksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides the status of the change set hook.</p>
     */
    inline ChangeSetHooksStatus GetStatus() const { return m_status; }
    inline void SetStatus(ChangeSetHooksStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeChangeSetHooksResult& WithStatus(ChangeSetHooksStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token, <code>null</code> or empty if no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeChangeSetHooksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack identifier (stack ID).</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    DescribeChangeSetHooksResult& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack name.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    DescribeChangeSetHooksResult& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeChangeSetHooksResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_changeSetId;
    bool m_changeSetIdHasBeenSet = false;

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    Aws::Vector<ChangeSetHook> m_hooks;
    bool m_hooksHasBeenSet = false;

    ChangeSetHooksStatus m_status{ChangeSetHooksStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
