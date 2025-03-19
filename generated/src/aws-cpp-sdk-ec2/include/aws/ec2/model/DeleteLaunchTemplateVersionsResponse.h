/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DeleteLaunchTemplateVersionsResponseSuccessItem.h>
#include <aws/ec2/model/DeleteLaunchTemplateVersionsResponseErrorItem.h>
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
  class DeleteLaunchTemplateVersionsResponse
  {
  public:
    AWS_EC2_API DeleteLaunchTemplateVersionsResponse() = default;
    AWS_EC2_API DeleteLaunchTemplateVersionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteLaunchTemplateVersionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the launch template versions that were successfully
     * deleted.</p>
     */
    inline const Aws::Vector<DeleteLaunchTemplateVersionsResponseSuccessItem>& GetSuccessfullyDeletedLaunchTemplateVersions() const { return m_successfullyDeletedLaunchTemplateVersions; }
    template<typename SuccessfullyDeletedLaunchTemplateVersionsT = Aws::Vector<DeleteLaunchTemplateVersionsResponseSuccessItem>>
    void SetSuccessfullyDeletedLaunchTemplateVersions(SuccessfullyDeletedLaunchTemplateVersionsT&& value) { m_successfullyDeletedLaunchTemplateVersionsHasBeenSet = true; m_successfullyDeletedLaunchTemplateVersions = std::forward<SuccessfullyDeletedLaunchTemplateVersionsT>(value); }
    template<typename SuccessfullyDeletedLaunchTemplateVersionsT = Aws::Vector<DeleteLaunchTemplateVersionsResponseSuccessItem>>
    DeleteLaunchTemplateVersionsResponse& WithSuccessfullyDeletedLaunchTemplateVersions(SuccessfullyDeletedLaunchTemplateVersionsT&& value) { SetSuccessfullyDeletedLaunchTemplateVersions(std::forward<SuccessfullyDeletedLaunchTemplateVersionsT>(value)); return *this;}
    template<typename SuccessfullyDeletedLaunchTemplateVersionsT = DeleteLaunchTemplateVersionsResponseSuccessItem>
    DeleteLaunchTemplateVersionsResponse& AddSuccessfullyDeletedLaunchTemplateVersions(SuccessfullyDeletedLaunchTemplateVersionsT&& value) { m_successfullyDeletedLaunchTemplateVersionsHasBeenSet = true; m_successfullyDeletedLaunchTemplateVersions.emplace_back(std::forward<SuccessfullyDeletedLaunchTemplateVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the launch template versions that could not be deleted.</p>
     */
    inline const Aws::Vector<DeleteLaunchTemplateVersionsResponseErrorItem>& GetUnsuccessfullyDeletedLaunchTemplateVersions() const { return m_unsuccessfullyDeletedLaunchTemplateVersions; }
    template<typename UnsuccessfullyDeletedLaunchTemplateVersionsT = Aws::Vector<DeleteLaunchTemplateVersionsResponseErrorItem>>
    void SetUnsuccessfullyDeletedLaunchTemplateVersions(UnsuccessfullyDeletedLaunchTemplateVersionsT&& value) { m_unsuccessfullyDeletedLaunchTemplateVersionsHasBeenSet = true; m_unsuccessfullyDeletedLaunchTemplateVersions = std::forward<UnsuccessfullyDeletedLaunchTemplateVersionsT>(value); }
    template<typename UnsuccessfullyDeletedLaunchTemplateVersionsT = Aws::Vector<DeleteLaunchTemplateVersionsResponseErrorItem>>
    DeleteLaunchTemplateVersionsResponse& WithUnsuccessfullyDeletedLaunchTemplateVersions(UnsuccessfullyDeletedLaunchTemplateVersionsT&& value) { SetUnsuccessfullyDeletedLaunchTemplateVersions(std::forward<UnsuccessfullyDeletedLaunchTemplateVersionsT>(value)); return *this;}
    template<typename UnsuccessfullyDeletedLaunchTemplateVersionsT = DeleteLaunchTemplateVersionsResponseErrorItem>
    DeleteLaunchTemplateVersionsResponse& AddUnsuccessfullyDeletedLaunchTemplateVersions(UnsuccessfullyDeletedLaunchTemplateVersionsT&& value) { m_unsuccessfullyDeletedLaunchTemplateVersionsHasBeenSet = true; m_unsuccessfullyDeletedLaunchTemplateVersions.emplace_back(std::forward<UnsuccessfullyDeletedLaunchTemplateVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteLaunchTemplateVersionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeleteLaunchTemplateVersionsResponseSuccessItem> m_successfullyDeletedLaunchTemplateVersions;
    bool m_successfullyDeletedLaunchTemplateVersionsHasBeenSet = false;

    Aws::Vector<DeleteLaunchTemplateVersionsResponseErrorItem> m_unsuccessfullyDeletedLaunchTemplateVersions;
    bool m_unsuccessfullyDeletedLaunchTemplateVersionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
