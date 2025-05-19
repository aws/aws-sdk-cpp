/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/MacModificationTask.h>
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
  class DescribeMacModificationTasksResponse
  {
  public:
    AWS_EC2_API DescribeMacModificationTasksResponse() = default;
    AWS_EC2_API DescribeMacModificationTasksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeMacModificationTasksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the tasks.</p>
     */
    inline const Aws::Vector<MacModificationTask>& GetMacModificationTasks() const { return m_macModificationTasks; }
    template<typename MacModificationTasksT = Aws::Vector<MacModificationTask>>
    void SetMacModificationTasks(MacModificationTasksT&& value) { m_macModificationTasksHasBeenSet = true; m_macModificationTasks = std::forward<MacModificationTasksT>(value); }
    template<typename MacModificationTasksT = Aws::Vector<MacModificationTask>>
    DescribeMacModificationTasksResponse& WithMacModificationTasks(MacModificationTasksT&& value) { SetMacModificationTasks(std::forward<MacModificationTasksT>(value)); return *this;}
    template<typename MacModificationTasksT = MacModificationTask>
    DescribeMacModificationTasksResponse& AddMacModificationTasks(MacModificationTasksT&& value) { m_macModificationTasksHasBeenSet = true; m_macModificationTasks.emplace_back(std::forward<MacModificationTasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeMacModificationTasksResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeMacModificationTasksResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MacModificationTask> m_macModificationTasks;
    bool m_macModificationTasksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
