/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/model/NodeAssociationStatus.h>

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
  class AWS_OPSWORKSCM_API DescribeNodeAssociationStatusResult
  {
  public:
    DescribeNodeAssociationStatusResult();
    DescribeNodeAssociationStatusResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeNodeAssociationStatusResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetNodeAssociationStatus(NodeAssociationStatus&& value) { m_nodeAssociationStatus = value; }

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
    inline DescribeNodeAssociationStatusResult& WithNodeAssociationStatus(NodeAssociationStatus&& value) { SetNodeAssociationStatus(value); return *this;}

  private:
    NodeAssociationStatus m_nodeAssociationStatus;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
