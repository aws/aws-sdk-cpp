/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  /**
   * <p>Contains the output of ModifyReservedInstances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyReservedInstancesResult">AWS
   * API Reference</a></p>
   */
  class ModifyReservedInstancesResponse
  {
  public:
    AWS_EC2_API ModifyReservedInstancesResponse() = default;
    AWS_EC2_API ModifyReservedInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyReservedInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID for the modification.</p>
     */
    inline const Aws::String& GetReservedInstancesModificationId() const { return m_reservedInstancesModificationId; }
    template<typename ReservedInstancesModificationIdT = Aws::String>
    void SetReservedInstancesModificationId(ReservedInstancesModificationIdT&& value) { m_reservedInstancesModificationIdHasBeenSet = true; m_reservedInstancesModificationId = std::forward<ReservedInstancesModificationIdT>(value); }
    template<typename ReservedInstancesModificationIdT = Aws::String>
    ModifyReservedInstancesResponse& WithReservedInstancesModificationId(ReservedInstancesModificationIdT&& value) { SetReservedInstancesModificationId(std::forward<ReservedInstancesModificationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyReservedInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedInstancesModificationId;
    bool m_reservedInstancesModificationIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
