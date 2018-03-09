/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API DeleteLaunchTemplateVersionsResponse
  {
  public:
    DeleteLaunchTemplateVersionsResponse();
    DeleteLaunchTemplateVersionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteLaunchTemplateVersionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the launch template versions that were successfully
     * deleted.</p>
     */
    inline const Aws::Vector<DeleteLaunchTemplateVersionsResponseSuccessItem>& GetSuccessfullyDeletedLaunchTemplateVersions() const{ return m_successfullyDeletedLaunchTemplateVersions; }

    /**
     * <p>Information about the launch template versions that were successfully
     * deleted.</p>
     */
    inline void SetSuccessfullyDeletedLaunchTemplateVersions(const Aws::Vector<DeleteLaunchTemplateVersionsResponseSuccessItem>& value) { m_successfullyDeletedLaunchTemplateVersions = value; }

    /**
     * <p>Information about the launch template versions that were successfully
     * deleted.</p>
     */
    inline void SetSuccessfullyDeletedLaunchTemplateVersions(Aws::Vector<DeleteLaunchTemplateVersionsResponseSuccessItem>&& value) { m_successfullyDeletedLaunchTemplateVersions = std::move(value); }

    /**
     * <p>Information about the launch template versions that were successfully
     * deleted.</p>
     */
    inline DeleteLaunchTemplateVersionsResponse& WithSuccessfullyDeletedLaunchTemplateVersions(const Aws::Vector<DeleteLaunchTemplateVersionsResponseSuccessItem>& value) { SetSuccessfullyDeletedLaunchTemplateVersions(value); return *this;}

    /**
     * <p>Information about the launch template versions that were successfully
     * deleted.</p>
     */
    inline DeleteLaunchTemplateVersionsResponse& WithSuccessfullyDeletedLaunchTemplateVersions(Aws::Vector<DeleteLaunchTemplateVersionsResponseSuccessItem>&& value) { SetSuccessfullyDeletedLaunchTemplateVersions(std::move(value)); return *this;}

    /**
     * <p>Information about the launch template versions that were successfully
     * deleted.</p>
     */
    inline DeleteLaunchTemplateVersionsResponse& AddSuccessfullyDeletedLaunchTemplateVersions(const DeleteLaunchTemplateVersionsResponseSuccessItem& value) { m_successfullyDeletedLaunchTemplateVersions.push_back(value); return *this; }

    /**
     * <p>Information about the launch template versions that were successfully
     * deleted.</p>
     */
    inline DeleteLaunchTemplateVersionsResponse& AddSuccessfullyDeletedLaunchTemplateVersions(DeleteLaunchTemplateVersionsResponseSuccessItem&& value) { m_successfullyDeletedLaunchTemplateVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the launch template versions that could not be deleted.</p>
     */
    inline const Aws::Vector<DeleteLaunchTemplateVersionsResponseErrorItem>& GetUnsuccessfullyDeletedLaunchTemplateVersions() const{ return m_unsuccessfullyDeletedLaunchTemplateVersions; }

    /**
     * <p>Information about the launch template versions that could not be deleted.</p>
     */
    inline void SetUnsuccessfullyDeletedLaunchTemplateVersions(const Aws::Vector<DeleteLaunchTemplateVersionsResponseErrorItem>& value) { m_unsuccessfullyDeletedLaunchTemplateVersions = value; }

    /**
     * <p>Information about the launch template versions that could not be deleted.</p>
     */
    inline void SetUnsuccessfullyDeletedLaunchTemplateVersions(Aws::Vector<DeleteLaunchTemplateVersionsResponseErrorItem>&& value) { m_unsuccessfullyDeletedLaunchTemplateVersions = std::move(value); }

    /**
     * <p>Information about the launch template versions that could not be deleted.</p>
     */
    inline DeleteLaunchTemplateVersionsResponse& WithUnsuccessfullyDeletedLaunchTemplateVersions(const Aws::Vector<DeleteLaunchTemplateVersionsResponseErrorItem>& value) { SetUnsuccessfullyDeletedLaunchTemplateVersions(value); return *this;}

    /**
     * <p>Information about the launch template versions that could not be deleted.</p>
     */
    inline DeleteLaunchTemplateVersionsResponse& WithUnsuccessfullyDeletedLaunchTemplateVersions(Aws::Vector<DeleteLaunchTemplateVersionsResponseErrorItem>&& value) { SetUnsuccessfullyDeletedLaunchTemplateVersions(std::move(value)); return *this;}

    /**
     * <p>Information about the launch template versions that could not be deleted.</p>
     */
    inline DeleteLaunchTemplateVersionsResponse& AddUnsuccessfullyDeletedLaunchTemplateVersions(const DeleteLaunchTemplateVersionsResponseErrorItem& value) { m_unsuccessfullyDeletedLaunchTemplateVersions.push_back(value); return *this; }

    /**
     * <p>Information about the launch template versions that could not be deleted.</p>
     */
    inline DeleteLaunchTemplateVersionsResponse& AddUnsuccessfullyDeletedLaunchTemplateVersions(DeleteLaunchTemplateVersionsResponseErrorItem&& value) { m_unsuccessfullyDeletedLaunchTemplateVersions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteLaunchTemplateVersionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteLaunchTemplateVersionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DeleteLaunchTemplateVersionsResponseSuccessItem> m_successfullyDeletedLaunchTemplateVersions;

    Aws::Vector<DeleteLaunchTemplateVersionsResponseErrorItem> m_unsuccessfullyDeletedLaunchTemplateVersions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
