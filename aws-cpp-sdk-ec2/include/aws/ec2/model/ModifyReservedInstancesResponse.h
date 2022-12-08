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
    AWS_EC2_API ModifyReservedInstancesResponse();
    AWS_EC2_API ModifyReservedInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyReservedInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID for the modification.</p>
     */
    inline const Aws::String& GetReservedInstancesModificationId() const{ return m_reservedInstancesModificationId; }

    /**
     * <p>The ID for the modification.</p>
     */
    inline void SetReservedInstancesModificationId(const Aws::String& value) { m_reservedInstancesModificationId = value; }

    /**
     * <p>The ID for the modification.</p>
     */
    inline void SetReservedInstancesModificationId(Aws::String&& value) { m_reservedInstancesModificationId = std::move(value); }

    /**
     * <p>The ID for the modification.</p>
     */
    inline void SetReservedInstancesModificationId(const char* value) { m_reservedInstancesModificationId.assign(value); }

    /**
     * <p>The ID for the modification.</p>
     */
    inline ModifyReservedInstancesResponse& WithReservedInstancesModificationId(const Aws::String& value) { SetReservedInstancesModificationId(value); return *this;}

    /**
     * <p>The ID for the modification.</p>
     */
    inline ModifyReservedInstancesResponse& WithReservedInstancesModificationId(Aws::String&& value) { SetReservedInstancesModificationId(std::move(value)); return *this;}

    /**
     * <p>The ID for the modification.</p>
     */
    inline ModifyReservedInstancesResponse& WithReservedInstancesModificationId(const char* value) { SetReservedInstancesModificationId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyReservedInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyReservedInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_reservedInstancesModificationId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
