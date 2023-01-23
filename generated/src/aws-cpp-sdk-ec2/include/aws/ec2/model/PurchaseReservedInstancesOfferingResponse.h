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
   * <p>Contains the output of PurchaseReservedInstancesOffering.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseReservedInstancesOfferingResult">AWS
   * API Reference</a></p>
   */
  class PurchaseReservedInstancesOfferingResponse
  {
  public:
    AWS_EC2_API PurchaseReservedInstancesOfferingResponse();
    AWS_EC2_API PurchaseReservedInstancesOfferingResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API PurchaseReservedInstancesOfferingResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The IDs of the purchased Reserved Instances. If your purchase crosses into a
     * discounted pricing tier, the final Reserved Instances IDs might change. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-reserved-instances-application.html#crossing-pricing-tiers">Crossing
     * pricing tiers</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const Aws::String& GetReservedInstancesId() const{ return m_reservedInstancesId; }

    /**
     * <p>The IDs of the purchased Reserved Instances. If your purchase crosses into a
     * discounted pricing tier, the final Reserved Instances IDs might change. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-reserved-instances-application.html#crossing-pricing-tiers">Crossing
     * pricing tiers</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetReservedInstancesId(const Aws::String& value) { m_reservedInstancesId = value; }

    /**
     * <p>The IDs of the purchased Reserved Instances. If your purchase crosses into a
     * discounted pricing tier, the final Reserved Instances IDs might change. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-reserved-instances-application.html#crossing-pricing-tiers">Crossing
     * pricing tiers</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetReservedInstancesId(Aws::String&& value) { m_reservedInstancesId = std::move(value); }

    /**
     * <p>The IDs of the purchased Reserved Instances. If your purchase crosses into a
     * discounted pricing tier, the final Reserved Instances IDs might change. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-reserved-instances-application.html#crossing-pricing-tiers">Crossing
     * pricing tiers</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetReservedInstancesId(const char* value) { m_reservedInstancesId.assign(value); }

    /**
     * <p>The IDs of the purchased Reserved Instances. If your purchase crosses into a
     * discounted pricing tier, the final Reserved Instances IDs might change. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-reserved-instances-application.html#crossing-pricing-tiers">Crossing
     * pricing tiers</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline PurchaseReservedInstancesOfferingResponse& WithReservedInstancesId(const Aws::String& value) { SetReservedInstancesId(value); return *this;}

    /**
     * <p>The IDs of the purchased Reserved Instances. If your purchase crosses into a
     * discounted pricing tier, the final Reserved Instances IDs might change. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-reserved-instances-application.html#crossing-pricing-tiers">Crossing
     * pricing tiers</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline PurchaseReservedInstancesOfferingResponse& WithReservedInstancesId(Aws::String&& value) { SetReservedInstancesId(std::move(value)); return *this;}

    /**
     * <p>The IDs of the purchased Reserved Instances. If your purchase crosses into a
     * discounted pricing tier, the final Reserved Instances IDs might change. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-reserved-instances-application.html#crossing-pricing-tiers">Crossing
     * pricing tiers</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline PurchaseReservedInstancesOfferingResponse& WithReservedInstancesId(const char* value) { SetReservedInstancesId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline PurchaseReservedInstancesOfferingResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline PurchaseReservedInstancesOfferingResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_reservedInstancesId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
