/**
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
    AWS_EC2_API PurchaseCapacityBlockExtensionResponse() = default;
    AWS_EC2_API PurchaseCapacityBlockExtensionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API PurchaseCapacityBlockExtensionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The purchased Capacity Block extensions. </p>
     */
    inline const Aws::Vector<CapacityBlockExtension>& GetCapacityBlockExtensions() const { return m_capacityBlockExtensions; }
    template<typename CapacityBlockExtensionsT = Aws::Vector<CapacityBlockExtension>>
    void SetCapacityBlockExtensions(CapacityBlockExtensionsT&& value) { m_capacityBlockExtensionsHasBeenSet = true; m_capacityBlockExtensions = std::forward<CapacityBlockExtensionsT>(value); }
    template<typename CapacityBlockExtensionsT = Aws::Vector<CapacityBlockExtension>>
    PurchaseCapacityBlockExtensionResponse& WithCapacityBlockExtensions(CapacityBlockExtensionsT&& value) { SetCapacityBlockExtensions(std::forward<CapacityBlockExtensionsT>(value)); return *this;}
    template<typename CapacityBlockExtensionsT = CapacityBlockExtension>
    PurchaseCapacityBlockExtensionResponse& AddCapacityBlockExtensions(CapacityBlockExtensionsT&& value) { m_capacityBlockExtensionsHasBeenSet = true; m_capacityBlockExtensions.emplace_back(std::forward<CapacityBlockExtensionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    PurchaseCapacityBlockExtensionResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CapacityBlockExtension> m_capacityBlockExtensions;
    bool m_capacityBlockExtensionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
