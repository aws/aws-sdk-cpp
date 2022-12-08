/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CoipPool.h>
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
  class DeleteCoipPoolResponse
  {
  public:
    AWS_EC2_API DeleteCoipPoolResponse();
    AWS_EC2_API DeleteCoipPoolResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteCoipPoolResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the CoIP address pool.</p>
     */
    inline const CoipPool& GetCoipPool() const{ return m_coipPool; }

    /**
     * <p>Information about the CoIP address pool.</p>
     */
    inline void SetCoipPool(const CoipPool& value) { m_coipPool = value; }

    /**
     * <p>Information about the CoIP address pool.</p>
     */
    inline void SetCoipPool(CoipPool&& value) { m_coipPool = std::move(value); }

    /**
     * <p>Information about the CoIP address pool.</p>
     */
    inline DeleteCoipPoolResponse& WithCoipPool(const CoipPool& value) { SetCoipPool(value); return *this;}

    /**
     * <p>Information about the CoIP address pool.</p>
     */
    inline DeleteCoipPoolResponse& WithCoipPool(CoipPool&& value) { SetCoipPool(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteCoipPoolResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteCoipPoolResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    CoipPool m_coipPool;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
