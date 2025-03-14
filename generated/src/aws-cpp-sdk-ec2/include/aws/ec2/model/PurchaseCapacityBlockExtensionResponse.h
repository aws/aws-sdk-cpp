﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CapacityBlockExtension.h>
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
  class PurchaseCapacityBlockExtensionResponse
  {
  public:
    AWS_EC2_API PurchaseCapacityBlockExtensionResponse();
    AWS_EC2_API PurchaseCapacityBlockExtensionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API PurchaseCapacityBlockExtensionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The purchased Capacity Block extensions. </p>
     */
    inline const Aws::Vector<CapacityBlockExtension>& GetCapacityBlockExtensions() const{ return m_capacityBlockExtensions; }
    inline void SetCapacityBlockExtensions(const Aws::Vector<CapacityBlockExtension>& value) { m_capacityBlockExtensions = value; }
    inline void SetCapacityBlockExtensions(Aws::Vector<CapacityBlockExtension>&& value) { m_capacityBlockExtensions = std::move(value); }
    inline PurchaseCapacityBlockExtensionResponse& WithCapacityBlockExtensions(const Aws::Vector<CapacityBlockExtension>& value) { SetCapacityBlockExtensions(value); return *this;}
    inline PurchaseCapacityBlockExtensionResponse& WithCapacityBlockExtensions(Aws::Vector<CapacityBlockExtension>&& value) { SetCapacityBlockExtensions(std::move(value)); return *this;}
    inline PurchaseCapacityBlockExtensionResponse& AddCapacityBlockExtensions(const CapacityBlockExtension& value) { m_capacityBlockExtensions.push_back(value); return *this; }
    inline PurchaseCapacityBlockExtensionResponse& AddCapacityBlockExtensions(CapacityBlockExtension&& value) { m_capacityBlockExtensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline PurchaseCapacityBlockExtensionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline PurchaseCapacityBlockExtensionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CapacityBlockExtension> m_capacityBlockExtensions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
