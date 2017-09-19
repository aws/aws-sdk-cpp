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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/DeletionTaskStatusType.h>
#include <aws/iam/model/DeletionTaskFailureReasonType.h>
#include <aws/iam/model/ResponseMetadata.h>
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
namespace IAM
{
namespace Model
{
  class AWS_IAM_API GetServiceLinkedRoleDeletionStatusResult
  {
  public:
    GetServiceLinkedRoleDeletionStatusResult();
    GetServiceLinkedRoleDeletionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetServiceLinkedRoleDeletionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The status of the deletion.</p>
     */
    inline const DeletionTaskStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the deletion.</p>
     */
    inline void SetStatus(const DeletionTaskStatusType& value) { m_status = value; }

    /**
     * <p>The status of the deletion.</p>
     */
    inline void SetStatus(DeletionTaskStatusType&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the deletion.</p>
     */
    inline GetServiceLinkedRoleDeletionStatusResult& WithStatus(const DeletionTaskStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the deletion.</p>
     */
    inline GetServiceLinkedRoleDeletionStatusResult& WithStatus(DeletionTaskStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about the reason the deletion failed.</p>
     */
    inline const DeletionTaskFailureReasonType& GetReason() const{ return m_reason; }

    /**
     * <p>An object that contains details about the reason the deletion failed.</p>
     */
    inline void SetReason(const DeletionTaskFailureReasonType& value) { m_reason = value; }

    /**
     * <p>An object that contains details about the reason the deletion failed.</p>
     */
    inline void SetReason(DeletionTaskFailureReasonType&& value) { m_reason = std::move(value); }

    /**
     * <p>An object that contains details about the reason the deletion failed.</p>
     */
    inline GetServiceLinkedRoleDeletionStatusResult& WithReason(const DeletionTaskFailureReasonType& value) { SetReason(value); return *this;}

    /**
     * <p>An object that contains details about the reason the deletion failed.</p>
     */
    inline GetServiceLinkedRoleDeletionStatusResult& WithReason(DeletionTaskFailureReasonType&& value) { SetReason(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetServiceLinkedRoleDeletionStatusResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetServiceLinkedRoleDeletionStatusResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DeletionTaskStatusType m_status;

    DeletionTaskFailureReasonType m_reason;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
