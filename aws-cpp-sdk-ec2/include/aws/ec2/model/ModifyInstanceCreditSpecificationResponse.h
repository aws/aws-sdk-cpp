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
#include <aws/ec2/model/SuccessfulInstanceCreditSpecificationItem.h>
#include <aws/ec2/model/UnsuccessfulInstanceCreditSpecificationItem.h>
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
  class AWS_EC2_API ModifyInstanceCreditSpecificationResponse
  {
  public:
    ModifyInstanceCreditSpecificationResponse();
    ModifyInstanceCreditSpecificationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyInstanceCreditSpecificationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the instances whose credit option for CPU usage was
     * successfully modified.</p>
     */
    inline const Aws::Vector<SuccessfulInstanceCreditSpecificationItem>& GetSuccessfulInstanceCreditSpecifications() const{ return m_successfulInstanceCreditSpecifications; }

    /**
     * <p>Information about the instances whose credit option for CPU usage was
     * successfully modified.</p>
     */
    inline void SetSuccessfulInstanceCreditSpecifications(const Aws::Vector<SuccessfulInstanceCreditSpecificationItem>& value) { m_successfulInstanceCreditSpecifications = value; }

    /**
     * <p>Information about the instances whose credit option for CPU usage was
     * successfully modified.</p>
     */
    inline void SetSuccessfulInstanceCreditSpecifications(Aws::Vector<SuccessfulInstanceCreditSpecificationItem>&& value) { m_successfulInstanceCreditSpecifications = std::move(value); }

    /**
     * <p>Information about the instances whose credit option for CPU usage was
     * successfully modified.</p>
     */
    inline ModifyInstanceCreditSpecificationResponse& WithSuccessfulInstanceCreditSpecifications(const Aws::Vector<SuccessfulInstanceCreditSpecificationItem>& value) { SetSuccessfulInstanceCreditSpecifications(value); return *this;}

    /**
     * <p>Information about the instances whose credit option for CPU usage was
     * successfully modified.</p>
     */
    inline ModifyInstanceCreditSpecificationResponse& WithSuccessfulInstanceCreditSpecifications(Aws::Vector<SuccessfulInstanceCreditSpecificationItem>&& value) { SetSuccessfulInstanceCreditSpecifications(std::move(value)); return *this;}

    /**
     * <p>Information about the instances whose credit option for CPU usage was
     * successfully modified.</p>
     */
    inline ModifyInstanceCreditSpecificationResponse& AddSuccessfulInstanceCreditSpecifications(const SuccessfulInstanceCreditSpecificationItem& value) { m_successfulInstanceCreditSpecifications.push_back(value); return *this; }

    /**
     * <p>Information about the instances whose credit option for CPU usage was
     * successfully modified.</p>
     */
    inline ModifyInstanceCreditSpecificationResponse& AddSuccessfulInstanceCreditSpecifications(SuccessfulInstanceCreditSpecificationItem&& value) { m_successfulInstanceCreditSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the instances whose credit option for CPU usage was not
     * modified.</p>
     */
    inline const Aws::Vector<UnsuccessfulInstanceCreditSpecificationItem>& GetUnsuccessfulInstanceCreditSpecifications() const{ return m_unsuccessfulInstanceCreditSpecifications; }

    /**
     * <p>Information about the instances whose credit option for CPU usage was not
     * modified.</p>
     */
    inline void SetUnsuccessfulInstanceCreditSpecifications(const Aws::Vector<UnsuccessfulInstanceCreditSpecificationItem>& value) { m_unsuccessfulInstanceCreditSpecifications = value; }

    /**
     * <p>Information about the instances whose credit option for CPU usage was not
     * modified.</p>
     */
    inline void SetUnsuccessfulInstanceCreditSpecifications(Aws::Vector<UnsuccessfulInstanceCreditSpecificationItem>&& value) { m_unsuccessfulInstanceCreditSpecifications = std::move(value); }

    /**
     * <p>Information about the instances whose credit option for CPU usage was not
     * modified.</p>
     */
    inline ModifyInstanceCreditSpecificationResponse& WithUnsuccessfulInstanceCreditSpecifications(const Aws::Vector<UnsuccessfulInstanceCreditSpecificationItem>& value) { SetUnsuccessfulInstanceCreditSpecifications(value); return *this;}

    /**
     * <p>Information about the instances whose credit option for CPU usage was not
     * modified.</p>
     */
    inline ModifyInstanceCreditSpecificationResponse& WithUnsuccessfulInstanceCreditSpecifications(Aws::Vector<UnsuccessfulInstanceCreditSpecificationItem>&& value) { SetUnsuccessfulInstanceCreditSpecifications(std::move(value)); return *this;}

    /**
     * <p>Information about the instances whose credit option for CPU usage was not
     * modified.</p>
     */
    inline ModifyInstanceCreditSpecificationResponse& AddUnsuccessfulInstanceCreditSpecifications(const UnsuccessfulInstanceCreditSpecificationItem& value) { m_unsuccessfulInstanceCreditSpecifications.push_back(value); return *this; }

    /**
     * <p>Information about the instances whose credit option for CPU usage was not
     * modified.</p>
     */
    inline ModifyInstanceCreditSpecificationResponse& AddUnsuccessfulInstanceCreditSpecifications(UnsuccessfulInstanceCreditSpecificationItem&& value) { m_unsuccessfulInstanceCreditSpecifications.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyInstanceCreditSpecificationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyInstanceCreditSpecificationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SuccessfulInstanceCreditSpecificationItem> m_successfulInstanceCreditSpecifications;

    Aws::Vector<UnsuccessfulInstanceCreditSpecificationItem> m_unsuccessfulInstanceCreditSpecifications;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
