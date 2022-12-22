/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ReservedNodeExchangeStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Reserved-node status details, such as the source reserved-node identifier,
   * the target reserved-node identifier, the node type, the node count, and other
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ReservedNodeExchangeStatus">AWS
   * API Reference</a></p>
   */
  class ReservedNodeExchangeStatus
  {
  public:
    AWS_REDSHIFT_API ReservedNodeExchangeStatus();
    AWS_REDSHIFT_API ReservedNodeExchangeStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ReservedNodeExchangeStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline const Aws::String& GetReservedNodeExchangeRequestId() const{ return m_reservedNodeExchangeRequestId; }

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline bool ReservedNodeExchangeRequestIdHasBeenSet() const { return m_reservedNodeExchangeRequestIdHasBeenSet; }

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline void SetReservedNodeExchangeRequestId(const Aws::String& value) { m_reservedNodeExchangeRequestIdHasBeenSet = true; m_reservedNodeExchangeRequestId = value; }

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline void SetReservedNodeExchangeRequestId(Aws::String&& value) { m_reservedNodeExchangeRequestIdHasBeenSet = true; m_reservedNodeExchangeRequestId = std::move(value); }

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline void SetReservedNodeExchangeRequestId(const char* value) { m_reservedNodeExchangeRequestIdHasBeenSet = true; m_reservedNodeExchangeRequestId.assign(value); }

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline ReservedNodeExchangeStatus& WithReservedNodeExchangeRequestId(const Aws::String& value) { SetReservedNodeExchangeRequestId(value); return *this;}

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline ReservedNodeExchangeStatus& WithReservedNodeExchangeRequestId(Aws::String&& value) { SetReservedNodeExchangeRequestId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline ReservedNodeExchangeStatus& WithReservedNodeExchangeRequestId(const char* value) { SetReservedNodeExchangeRequestId(value); return *this;}


    /**
     * <p>The status of the reserved-node exchange request. Statuses include
     * in-progress and requested.</p>
     */
    inline const ReservedNodeExchangeStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the reserved-node exchange request. Statuses include
     * in-progress and requested.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the reserved-node exchange request. Statuses include
     * in-progress and requested.</p>
     */
    inline void SetStatus(const ReservedNodeExchangeStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the reserved-node exchange request. Statuses include
     * in-progress and requested.</p>
     */
    inline void SetStatus(ReservedNodeExchangeStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the reserved-node exchange request. Statuses include
     * in-progress and requested.</p>
     */
    inline ReservedNodeExchangeStatus& WithStatus(const ReservedNodeExchangeStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the reserved-node exchange request. Statuses include
     * in-progress and requested.</p>
     */
    inline ReservedNodeExchangeStatus& WithStatus(ReservedNodeExchangeStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A date and time that indicate when the reserved-node exchange was
     * requested.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const{ return m_requestTime; }

    /**
     * <p>A date and time that indicate when the reserved-node exchange was
     * requested.</p>
     */
    inline bool RequestTimeHasBeenSet() const { return m_requestTimeHasBeenSet; }

    /**
     * <p>A date and time that indicate when the reserved-node exchange was
     * requested.</p>
     */
    inline void SetRequestTime(const Aws::Utils::DateTime& value) { m_requestTimeHasBeenSet = true; m_requestTime = value; }

    /**
     * <p>A date and time that indicate when the reserved-node exchange was
     * requested.</p>
     */
    inline void SetRequestTime(Aws::Utils::DateTime&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::move(value); }

    /**
     * <p>A date and time that indicate when the reserved-node exchange was
     * requested.</p>
     */
    inline ReservedNodeExchangeStatus& WithRequestTime(const Aws::Utils::DateTime& value) { SetRequestTime(value); return *this;}

    /**
     * <p>A date and time that indicate when the reserved-node exchange was
     * requested.</p>
     */
    inline ReservedNodeExchangeStatus& WithRequestTime(Aws::Utils::DateTime&& value) { SetRequestTime(std::move(value)); return *this;}


    /**
     * <p>The identifier of the source reserved node.</p>
     */
    inline const Aws::String& GetSourceReservedNodeId() const{ return m_sourceReservedNodeId; }

    /**
     * <p>The identifier of the source reserved node.</p>
     */
    inline bool SourceReservedNodeIdHasBeenSet() const { return m_sourceReservedNodeIdHasBeenSet; }

    /**
     * <p>The identifier of the source reserved node.</p>
     */
    inline void SetSourceReservedNodeId(const Aws::String& value) { m_sourceReservedNodeIdHasBeenSet = true; m_sourceReservedNodeId = value; }

    /**
     * <p>The identifier of the source reserved node.</p>
     */
    inline void SetSourceReservedNodeId(Aws::String&& value) { m_sourceReservedNodeIdHasBeenSet = true; m_sourceReservedNodeId = std::move(value); }

    /**
     * <p>The identifier of the source reserved node.</p>
     */
    inline void SetSourceReservedNodeId(const char* value) { m_sourceReservedNodeIdHasBeenSet = true; m_sourceReservedNodeId.assign(value); }

    /**
     * <p>The identifier of the source reserved node.</p>
     */
    inline ReservedNodeExchangeStatus& WithSourceReservedNodeId(const Aws::String& value) { SetSourceReservedNodeId(value); return *this;}

    /**
     * <p>The identifier of the source reserved node.</p>
     */
    inline ReservedNodeExchangeStatus& WithSourceReservedNodeId(Aws::String&& value) { SetSourceReservedNodeId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source reserved node.</p>
     */
    inline ReservedNodeExchangeStatus& WithSourceReservedNodeId(const char* value) { SetSourceReservedNodeId(value); return *this;}


    /**
     * <p>The source reserved-node type, for example ds2.xlarge.</p>
     */
    inline const Aws::String& GetSourceReservedNodeType() const{ return m_sourceReservedNodeType; }

    /**
     * <p>The source reserved-node type, for example ds2.xlarge.</p>
     */
    inline bool SourceReservedNodeTypeHasBeenSet() const { return m_sourceReservedNodeTypeHasBeenSet; }

    /**
     * <p>The source reserved-node type, for example ds2.xlarge.</p>
     */
    inline void SetSourceReservedNodeType(const Aws::String& value) { m_sourceReservedNodeTypeHasBeenSet = true; m_sourceReservedNodeType = value; }

    /**
     * <p>The source reserved-node type, for example ds2.xlarge.</p>
     */
    inline void SetSourceReservedNodeType(Aws::String&& value) { m_sourceReservedNodeTypeHasBeenSet = true; m_sourceReservedNodeType = std::move(value); }

    /**
     * <p>The source reserved-node type, for example ds2.xlarge.</p>
     */
    inline void SetSourceReservedNodeType(const char* value) { m_sourceReservedNodeTypeHasBeenSet = true; m_sourceReservedNodeType.assign(value); }

    /**
     * <p>The source reserved-node type, for example ds2.xlarge.</p>
     */
    inline ReservedNodeExchangeStatus& WithSourceReservedNodeType(const Aws::String& value) { SetSourceReservedNodeType(value); return *this;}

    /**
     * <p>The source reserved-node type, for example ds2.xlarge.</p>
     */
    inline ReservedNodeExchangeStatus& WithSourceReservedNodeType(Aws::String&& value) { SetSourceReservedNodeType(std::move(value)); return *this;}

    /**
     * <p>The source reserved-node type, for example ds2.xlarge.</p>
     */
    inline ReservedNodeExchangeStatus& WithSourceReservedNodeType(const char* value) { SetSourceReservedNodeType(value); return *this;}


    /**
     * <p>The source reserved-node count in the cluster.</p>
     */
    inline int GetSourceReservedNodeCount() const{ return m_sourceReservedNodeCount; }

    /**
     * <p>The source reserved-node count in the cluster.</p>
     */
    inline bool SourceReservedNodeCountHasBeenSet() const { return m_sourceReservedNodeCountHasBeenSet; }

    /**
     * <p>The source reserved-node count in the cluster.</p>
     */
    inline void SetSourceReservedNodeCount(int value) { m_sourceReservedNodeCountHasBeenSet = true; m_sourceReservedNodeCount = value; }

    /**
     * <p>The source reserved-node count in the cluster.</p>
     */
    inline ReservedNodeExchangeStatus& WithSourceReservedNodeCount(int value) { SetSourceReservedNodeCount(value); return *this;}


    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline const Aws::String& GetTargetReservedNodeOfferingId() const{ return m_targetReservedNodeOfferingId; }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline bool TargetReservedNodeOfferingIdHasBeenSet() const { return m_targetReservedNodeOfferingIdHasBeenSet; }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline void SetTargetReservedNodeOfferingId(const Aws::String& value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId = value; }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline void SetTargetReservedNodeOfferingId(Aws::String&& value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId = std::move(value); }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline void SetTargetReservedNodeOfferingId(const char* value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId.assign(value); }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline ReservedNodeExchangeStatus& WithTargetReservedNodeOfferingId(const Aws::String& value) { SetTargetReservedNodeOfferingId(value); return *this;}

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline ReservedNodeExchangeStatus& WithTargetReservedNodeOfferingId(Aws::String&& value) { SetTargetReservedNodeOfferingId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline ReservedNodeExchangeStatus& WithTargetReservedNodeOfferingId(const char* value) { SetTargetReservedNodeOfferingId(value); return *this;}


    /**
     * <p>The node type of the target reserved node, for example ra3.4xlarge.</p>
     */
    inline const Aws::String& GetTargetReservedNodeType() const{ return m_targetReservedNodeType; }

    /**
     * <p>The node type of the target reserved node, for example ra3.4xlarge.</p>
     */
    inline bool TargetReservedNodeTypeHasBeenSet() const { return m_targetReservedNodeTypeHasBeenSet; }

    /**
     * <p>The node type of the target reserved node, for example ra3.4xlarge.</p>
     */
    inline void SetTargetReservedNodeType(const Aws::String& value) { m_targetReservedNodeTypeHasBeenSet = true; m_targetReservedNodeType = value; }

    /**
     * <p>The node type of the target reserved node, for example ra3.4xlarge.</p>
     */
    inline void SetTargetReservedNodeType(Aws::String&& value) { m_targetReservedNodeTypeHasBeenSet = true; m_targetReservedNodeType = std::move(value); }

    /**
     * <p>The node type of the target reserved node, for example ra3.4xlarge.</p>
     */
    inline void SetTargetReservedNodeType(const char* value) { m_targetReservedNodeTypeHasBeenSet = true; m_targetReservedNodeType.assign(value); }

    /**
     * <p>The node type of the target reserved node, for example ra3.4xlarge.</p>
     */
    inline ReservedNodeExchangeStatus& WithTargetReservedNodeType(const Aws::String& value) { SetTargetReservedNodeType(value); return *this;}

    /**
     * <p>The node type of the target reserved node, for example ra3.4xlarge.</p>
     */
    inline ReservedNodeExchangeStatus& WithTargetReservedNodeType(Aws::String&& value) { SetTargetReservedNodeType(std::move(value)); return *this;}

    /**
     * <p>The node type of the target reserved node, for example ra3.4xlarge.</p>
     */
    inline ReservedNodeExchangeStatus& WithTargetReservedNodeType(const char* value) { SetTargetReservedNodeType(value); return *this;}


    /**
     * <p>The count of target reserved nodes in the cluster.</p>
     */
    inline int GetTargetReservedNodeCount() const{ return m_targetReservedNodeCount; }

    /**
     * <p>The count of target reserved nodes in the cluster.</p>
     */
    inline bool TargetReservedNodeCountHasBeenSet() const { return m_targetReservedNodeCountHasBeenSet; }

    /**
     * <p>The count of target reserved nodes in the cluster.</p>
     */
    inline void SetTargetReservedNodeCount(int value) { m_targetReservedNodeCountHasBeenSet = true; m_targetReservedNodeCount = value; }

    /**
     * <p>The count of target reserved nodes in the cluster.</p>
     */
    inline ReservedNodeExchangeStatus& WithTargetReservedNodeCount(int value) { SetTargetReservedNodeCount(value); return *this;}

  private:

    Aws::String m_reservedNodeExchangeRequestId;
    bool m_reservedNodeExchangeRequestIdHasBeenSet = false;

    ReservedNodeExchangeStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_requestTime;
    bool m_requestTimeHasBeenSet = false;

    Aws::String m_sourceReservedNodeId;
    bool m_sourceReservedNodeIdHasBeenSet = false;

    Aws::String m_sourceReservedNodeType;
    bool m_sourceReservedNodeTypeHasBeenSet = false;

    int m_sourceReservedNodeCount;
    bool m_sourceReservedNodeCountHasBeenSet = false;

    Aws::String m_targetReservedNodeOfferingId;
    bool m_targetReservedNodeOfferingIdHasBeenSet = false;

    Aws::String m_targetReservedNodeType;
    bool m_targetReservedNodeTypeHasBeenSet = false;

    int m_targetReservedNodeCount;
    bool m_targetReservedNodeCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
