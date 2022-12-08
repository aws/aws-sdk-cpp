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
    AWS_EC2_API ModifyDefaultCreditSpecificationResponse();
    AWS_EC2_API ModifyDefaultCreditSpecificationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyDefaultCreditSpecificationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The default credit option for CPU usage of the instance family.</p>
     */
    inline const InstanceFamilyCreditSpecification& GetInstanceFamilyCreditSpecification() const{ return m_instanceFamilyCreditSpecification; }

    /**
     * <p>The default credit option for CPU usage of the instance family.</p>
     */
    inline void SetInstanceFamilyCreditSpecification(const InstanceFamilyCreditSpecification& value) { m_instanceFamilyCreditSpecification = value; }

    /**
     * <p>The default credit option for CPU usage of the instance family.</p>
     */
    inline void SetInstanceFamilyCreditSpecification(InstanceFamilyCreditSpecification&& value) { m_instanceFamilyCreditSpecification = std::move(value); }

    /**
     * <p>The default credit option for CPU usage of the instance family.</p>
     */
    inline ModifyDefaultCreditSpecificationResponse& WithInstanceFamilyCreditSpecification(const InstanceFamilyCreditSpecification& value) { SetInstanceFamilyCreditSpecification(value); return *this;}

    /**
     * <p>The default credit option for CPU usage of the instance family.</p>
     */
    inline ModifyDefaultCreditSpecificationResponse& WithInstanceFamilyCreditSpecification(InstanceFamilyCreditSpecification&& value) { SetInstanceFamilyCreditSpecification(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyDefaultCreditSpecificationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyDefaultCreditSpecificationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    InstanceFamilyCreditSpecification m_instanceFamilyCreditSpecification;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
