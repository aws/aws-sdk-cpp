/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ReservedInstancesModificationResponse.h>
#include <aws/ec2/model/ReservedInstancesId.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a Reserved Instance modification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservedInstancesModification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ReservedInstancesModification
  {
  public:
    ReservedInstancesModification();
    ReservedInstancesModification(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReservedInstancesModification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ReservedInstancesModification& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ReservedInstancesModification& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ReservedInstancesModification& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The time when the modification request was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The time when the modification request was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The time when the modification request was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The time when the modification request was created.</p>
     */
    inline ReservedInstancesModification& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The time when the modification request was created.</p>
     */
    inline ReservedInstancesModification& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The time for the modification to become effective.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveDate() const{ return m_effectiveDate; }

    /**
     * <p>The time for the modification to become effective.</p>
     */
    inline void SetEffectiveDate(const Aws::Utils::DateTime& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = value; }

    /**
     * <p>The time for the modification to become effective.</p>
     */
    inline void SetEffectiveDate(Aws::Utils::DateTime&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::move(value); }

    /**
     * <p>The time for the modification to become effective.</p>
     */
    inline ReservedInstancesModification& WithEffectiveDate(const Aws::Utils::DateTime& value) { SetEffectiveDate(value); return *this;}

    /**
     * <p>The time for the modification to become effective.</p>
     */
    inline ReservedInstancesModification& WithEffectiveDate(Aws::Utils::DateTime&& value) { SetEffectiveDate(std::move(value)); return *this;}


    /**
     * <p>Contains target configurations along with their corresponding new Reserved
     * Instance IDs.</p>
     */
    inline const Aws::Vector<ReservedInstancesModificationResponse>& GetModificationResults() const{ return m_modificationResults; }

    /**
     * <p>Contains target configurations along with their corresponding new Reserved
     * Instance IDs.</p>
     */
    inline void SetModificationResults(const Aws::Vector<ReservedInstancesModificationResponse>& value) { m_modificationResultsHasBeenSet = true; m_modificationResults = value; }

    /**
     * <p>Contains target configurations along with their corresponding new Reserved
     * Instance IDs.</p>
     */
    inline void SetModificationResults(Aws::Vector<ReservedInstancesModificationResponse>&& value) { m_modificationResultsHasBeenSet = true; m_modificationResults = std::move(value); }

    /**
     * <p>Contains target configurations along with their corresponding new Reserved
     * Instance IDs.</p>
     */
    inline ReservedInstancesModification& WithModificationResults(const Aws::Vector<ReservedInstancesModificationResponse>& value) { SetModificationResults(value); return *this;}

    /**
     * <p>Contains target configurations along with their corresponding new Reserved
     * Instance IDs.</p>
     */
    inline ReservedInstancesModification& WithModificationResults(Aws::Vector<ReservedInstancesModificationResponse>&& value) { SetModificationResults(std::move(value)); return *this;}

    /**
     * <p>Contains target configurations along with their corresponding new Reserved
     * Instance IDs.</p>
     */
    inline ReservedInstancesModification& AddModificationResults(const ReservedInstancesModificationResponse& value) { m_modificationResultsHasBeenSet = true; m_modificationResults.push_back(value); return *this; }

    /**
     * <p>Contains target configurations along with their corresponding new Reserved
     * Instance IDs.</p>
     */
    inline ReservedInstancesModification& AddModificationResults(ReservedInstancesModificationResponse&& value) { m_modificationResultsHasBeenSet = true; m_modificationResults.push_back(std::move(value)); return *this; }


    /**
     * <p>The IDs of one or more Reserved Instances.</p>
     */
    inline const Aws::Vector<ReservedInstancesId>& GetReservedInstancesIds() const{ return m_reservedInstancesIds; }

    /**
     * <p>The IDs of one or more Reserved Instances.</p>
     */
    inline void SetReservedInstancesIds(const Aws::Vector<ReservedInstancesId>& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds = value; }

    /**
     * <p>The IDs of one or more Reserved Instances.</p>
     */
    inline void SetReservedInstancesIds(Aws::Vector<ReservedInstancesId>&& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds = std::move(value); }

    /**
     * <p>The IDs of one or more Reserved Instances.</p>
     */
    inline ReservedInstancesModification& WithReservedInstancesIds(const Aws::Vector<ReservedInstancesId>& value) { SetReservedInstancesIds(value); return *this;}

    /**
     * <p>The IDs of one or more Reserved Instances.</p>
     */
    inline ReservedInstancesModification& WithReservedInstancesIds(Aws::Vector<ReservedInstancesId>&& value) { SetReservedInstancesIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more Reserved Instances.</p>
     */
    inline ReservedInstancesModification& AddReservedInstancesIds(const ReservedInstancesId& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more Reserved Instances.</p>
     */
    inline ReservedInstancesModification& AddReservedInstancesIds(ReservedInstancesId&& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique ID for the Reserved Instance modification.</p>
     */
    inline const Aws::String& GetReservedInstancesModificationId() const{ return m_reservedInstancesModificationId; }

    /**
     * <p>A unique ID for the Reserved Instance modification.</p>
     */
    inline void SetReservedInstancesModificationId(const Aws::String& value) { m_reservedInstancesModificationIdHasBeenSet = true; m_reservedInstancesModificationId = value; }

    /**
     * <p>A unique ID for the Reserved Instance modification.</p>
     */
    inline void SetReservedInstancesModificationId(Aws::String&& value) { m_reservedInstancesModificationIdHasBeenSet = true; m_reservedInstancesModificationId = std::move(value); }

    /**
     * <p>A unique ID for the Reserved Instance modification.</p>
     */
    inline void SetReservedInstancesModificationId(const char* value) { m_reservedInstancesModificationIdHasBeenSet = true; m_reservedInstancesModificationId.assign(value); }

    /**
     * <p>A unique ID for the Reserved Instance modification.</p>
     */
    inline ReservedInstancesModification& WithReservedInstancesModificationId(const Aws::String& value) { SetReservedInstancesModificationId(value); return *this;}

    /**
     * <p>A unique ID for the Reserved Instance modification.</p>
     */
    inline ReservedInstancesModification& WithReservedInstancesModificationId(Aws::String&& value) { SetReservedInstancesModificationId(std::move(value)); return *this;}

    /**
     * <p>A unique ID for the Reserved Instance modification.</p>
     */
    inline ReservedInstancesModification& WithReservedInstancesModificationId(const char* value) { SetReservedInstancesModificationId(value); return *this;}


    /**
     * <p>The status of the Reserved Instances modification request.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Reserved Instances modification request.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Reserved Instances modification request.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Reserved Instances modification request.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the Reserved Instances modification request.</p>
     */
    inline ReservedInstancesModification& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Reserved Instances modification request.</p>
     */
    inline ReservedInstancesModification& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the Reserved Instances modification request.</p>
     */
    inline ReservedInstancesModification& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The reason for the status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The reason for the status.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The reason for the status.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The reason for the status.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The reason for the status.</p>
     */
    inline ReservedInstancesModification& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The reason for the status.</p>
     */
    inline ReservedInstancesModification& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The reason for the status.</p>
     */
    inline ReservedInstancesModification& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The time when the modification request was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>The time when the modification request was last updated.</p>
     */
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDateHasBeenSet = true; m_updateDate = value; }

    /**
     * <p>The time when the modification request was last updated.</p>
     */
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::move(value); }

    /**
     * <p>The time when the modification request was last updated.</p>
     */
    inline ReservedInstancesModification& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>The time when the modification request was last updated.</p>
     */
    inline ReservedInstancesModification& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;

    Aws::Utils::DateTime m_effectiveDate;
    bool m_effectiveDateHasBeenSet;

    Aws::Vector<ReservedInstancesModificationResponse> m_modificationResults;
    bool m_modificationResultsHasBeenSet;

    Aws::Vector<ReservedInstancesId> m_reservedInstancesIds;
    bool m_reservedInstancesIdsHasBeenSet;

    Aws::String m_reservedInstancesModificationId;
    bool m_reservedInstancesModificationIdHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::Utils::DateTime m_updateDate;
    bool m_updateDateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
