/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/model/NodeAssociationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorksCM
{
namespace Model
{
  class DescribeNodeAssociationStatusResult
  {
  public:
    AWS_OPSWORKSCM_API DescribeNodeAssociationStatusResult();
    AWS_OPSWORKSCM_API DescribeNodeAssociationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API DescribeNodeAssociationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the association or disassociation request. </p> <p
     * class="title"> <b>Possible values:</b> </p> <ul> <li> <p> <code>SUCCESS</code>:
     * The association or disassociation succeeded. </p> </li> <li> <p>
     * <code>FAILED</code>: The association or disassociation failed. </p> </li> <li>
     * <p> <code>IN_PROGRESS</code>: The association or disassociation is still in
     * progress. </p> </li> </ul>
     */
    inline const NodeAssociationStatus& GetNodeAssociationStatus() const{ return m_nodeAssociationStatus; }

    /**
     * <p>The status of the association or disassociation request. </p> <p
     * class="title"> <b>Possible values:</b> </p> <ul> <li> <p> <code>SUCCESS</code>:
     * The association or disassociation succeeded. </p> </li> <li> <p>
     * <code>FAILED</code>: The association or disassociation failed. </p> </li> <li>
     * <p> <code>IN_PROGRESS</code>: The association or disassociation is still in
     * progress. </p> </li> </ul>
     */
    inline void SetNodeAssociationStatus(const NodeAssociationStatus& value) { m_nodeAssociationStatus = value; }

    /**
     * <p>The status of the association or disassociation request. </p> <p
     * class="title"> <b>Possible values:</b> </p> <ul> <li> <p> <code>SUCCESS</code>:
     * The association or disassociation succeeded. </p> </li> <li> <p>
     * <code>FAILED</code>: The association or disassociation failed. </p> </li> <li>
     * <p> <code>IN_PROGRESS</code>: The association or disassociation is still in
     * progress. </p> </li> </ul>
     */
    inline void SetNodeAssociationStatus(NodeAssociationStatus&& value) { m_nodeAssociationStatus = std::move(value); }

    /**
     * <p>The status of the association or disassociation request. </p> <p
     * class="title"> <b>Possible values:</b> </p> <ul> <li> <p> <code>SUCCESS</code>:
     * The association or disassociation succeeded. </p> </li> <li> <p>
     * <code>FAILED</code>: The association or disassociation failed. </p> </li> <li>
     * <p> <code>IN_PROGRESS</code>: The association or disassociation is still in
     * progress. </p> </li> </ul>
     */
    inline DescribeNodeAssociationStatusResult& WithNodeAssociationStatus(const NodeAssociationStatus& value) { SetNodeAssociationStatus(value); return *this;}

    /**
     * <p>The status of the association or disassociation request. </p> <p
     * class="title"> <b>Possible values:</b> </p> <ul> <li> <p> <code>SUCCESS</code>:
     * The association or disassociation succeeded. </p> </li> <li> <p>
     * <code>FAILED</code>: The association or disassociation failed. </p> </li> <li>
     * <p> <code>IN_PROGRESS</code>: The association or disassociation is still in
     * progress. </p> </li> </ul>
     */
    inline DescribeNodeAssociationStatusResult& WithNodeAssociationStatus(NodeAssociationStatus&& value) { SetNodeAssociationStatus(std::move(value)); return *this;}


    /**
     * <p>Attributes specific to the node association. In Puppet, the attibute
     * PUPPET_NODE_CERT contains the signed certificate (the result of the CSR). </p>
     */
    inline const Aws::Vector<EngineAttribute>& GetEngineAttributes() const{ return m_engineAttributes; }

    /**
     * <p>Attributes specific to the node association. In Puppet, the attibute
     * PUPPET_NODE_CERT contains the signed certificate (the result of the CSR). </p>
     */
    inline void SetEngineAttributes(const Aws::Vector<EngineAttribute>& value) { m_engineAttributes = value; }

    /**
     * <p>Attributes specific to the node association. In Puppet, the attibute
     * PUPPET_NODE_CERT contains the signed certificate (the result of the CSR). </p>
     */
    inline void SetEngineAttributes(Aws::Vector<EngineAttribute>&& value) { m_engineAttributes = std::move(value); }

    /**
     * <p>Attributes specific to the node association. In Puppet, the attibute
     * PUPPET_NODE_CERT contains the signed certificate (the result of the CSR). </p>
     */
    inline DescribeNodeAssociationStatusResult& WithEngineAttributes(const Aws::Vector<EngineAttribute>& value) { SetEngineAttributes(value); return *this;}

    /**
     * <p>Attributes specific to the node association. In Puppet, the attibute
     * PUPPET_NODE_CERT contains the signed certificate (the result of the CSR). </p>
     */
    inline DescribeNodeAssociationStatusResult& WithEngineAttributes(Aws::Vector<EngineAttribute>&& value) { SetEngineAttributes(std::move(value)); return *this;}

    /**
     * <p>Attributes specific to the node association. In Puppet, the attibute
     * PUPPET_NODE_CERT contains the signed certificate (the result of the CSR). </p>
     */
    inline DescribeNodeAssociationStatusResult& AddEngineAttributes(const EngineAttribute& value) { m_engineAttributes.push_back(value); return *this; }

    /**
     * <p>Attributes specific to the node association. In Puppet, the attibute
     * PUPPET_NODE_CERT contains the signed certificate (the result of the CSR). </p>
     */
    inline DescribeNodeAssociationStatusResult& AddEngineAttributes(EngineAttribute&& value) { m_engineAttributes.push_back(std::move(value)); return *this; }

  private:

    NodeAssociationStatus m_nodeAssociationStatus;

    Aws::Vector<EngineAttribute> m_engineAttributes;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
