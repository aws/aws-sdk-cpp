/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceFamilyCreditSpecification.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class ModifyDefaultCreditSpecificationResponse
  {
  public:
    AWS_EC2_API ModifyDefaultCreditSpecificationResponse() = default;
    AWS_EC2_API ModifyDefaultCreditSpecificationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyDefaultCreditSpecificationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The default credit option for CPU usage of the instance family.</p>
     */
    inline const InstanceFamilyCreditSpecification& GetInstanceFamilyCreditSpecification() const { return m_instanceFamilyCreditSpecification; }
    template<typename InstanceFamilyCreditSpecificationT = InstanceFamilyCreditSpecification>
    void SetInstanceFamilyCreditSpecification(InstanceFamilyCreditSpecificationT&& value) { m_instanceFamilyCreditSpecificationHasBeenSet = true; m_instanceFamilyCreditSpecification = std::forward<InstanceFamilyCreditSpecificationT>(value); }
    template<typename InstanceFamilyCreditSpecificationT = InstanceFamilyCreditSpecification>
    ModifyDefaultCreditSpecificationResponse& WithInstanceFamilyCreditSpecification(InstanceFamilyCreditSpecificationT&& value) { SetInstanceFamilyCreditSpecification(std::forward<InstanceFamilyCreditSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyDefaultCreditSpecificationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    InstanceFamilyCreditSpecification m_instanceFamilyCreditSpecification;
    bool m_instanceFamilyCreditSpecificationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
