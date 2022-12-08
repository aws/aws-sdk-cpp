/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/BlueGreenDeployment.h>
#include <aws/rds/model/ResponseMetadata.h>
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
namespace RDS
{
namespace Model
{
  class DeleteBlueGreenDeploymentResult
  {
  public:
    AWS_RDS_API DeleteBlueGreenDeploymentResult();
    AWS_RDS_API DeleteBlueGreenDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DeleteBlueGreenDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const BlueGreenDeployment& GetBlueGreenDeployment() const{ return m_blueGreenDeployment; }

    
    inline void SetBlueGreenDeployment(const BlueGreenDeployment& value) { m_blueGreenDeployment = value; }

    
    inline void SetBlueGreenDeployment(BlueGreenDeployment&& value) { m_blueGreenDeployment = std::move(value); }

    
    inline DeleteBlueGreenDeploymentResult& WithBlueGreenDeployment(const BlueGreenDeployment& value) { SetBlueGreenDeployment(value); return *this;}

    
    inline DeleteBlueGreenDeploymentResult& WithBlueGreenDeployment(BlueGreenDeployment&& value) { SetBlueGreenDeployment(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteBlueGreenDeploymentResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteBlueGreenDeploymentResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    BlueGreenDeployment m_blueGreenDeployment;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
