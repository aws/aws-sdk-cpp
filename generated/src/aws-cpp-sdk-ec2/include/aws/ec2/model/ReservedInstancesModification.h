/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ReservedInstancesModification
  {
  public:
    AWS_EC2_API ReservedInstancesModification() = default;
    AWS_EC2_API ReservedInstancesModification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ReservedInstancesModification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ReservedInstancesModification& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the modification request was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    ReservedInstancesModification& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time for the modification to become effective.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveDate() const { return m_effectiveDate; }
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }
    template<typename EffectiveDateT = Aws::Utils::DateTime>
    void SetEffectiveDate(EffectiveDateT&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::forward<EffectiveDateT>(value); }
    template<typename EffectiveDateT = Aws::Utils::DateTime>
    ReservedInstancesModification& WithEffectiveDate(EffectiveDateT&& value) { SetEffectiveDate(std::forward<EffectiveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains target configurations along with their corresponding new Reserved
     * Instance IDs.</p>
     */
    inline const Aws::Vector<ReservedInstancesModificationResponse>& GetModificationResults() const { return m_modificationResults; }
    inline bool ModificationResultsHasBeenSet() const { return m_modificationResultsHasBeenSet; }
    template<typename ModificationResultsT = Aws::Vector<ReservedInstancesModificationResponse>>
    void SetModificationResults(ModificationResultsT&& value) { m_modificationResultsHasBeenSet = true; m_modificationResults = std::forward<ModificationResultsT>(value); }
    template<typename ModificationResultsT = Aws::Vector<ReservedInstancesModificationResponse>>
    ReservedInstancesModification& WithModificationResults(ModificationResultsT&& value) { SetModificationResults(std::forward<ModificationResultsT>(value)); return *this;}
    template<typename ModificationResultsT = ReservedInstancesModificationResponse>
    ReservedInstancesModification& AddModificationResults(ModificationResultsT&& value) { m_modificationResultsHasBeenSet = true; m_modificationResults.emplace_back(std::forward<ModificationResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of one or more Reserved Instances.</p>
     */
    inline const Aws::Vector<ReservedInstancesId>& GetReservedInstancesIds() const { return m_reservedInstancesIds; }
    inline bool ReservedInstancesIdsHasBeenSet() const { return m_reservedInstancesIdsHasBeenSet; }
    template<typename ReservedInstancesIdsT = Aws::Vector<ReservedInstancesId>>
    void SetReservedInstancesIds(ReservedInstancesIdsT&& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds = std::forward<ReservedInstancesIdsT>(value); }
    template<typename ReservedInstancesIdsT = Aws::Vector<ReservedInstancesId>>
    ReservedInstancesModification& WithReservedInstancesIds(ReservedInstancesIdsT&& value) { SetReservedInstancesIds(std::forward<ReservedInstancesIdsT>(value)); return *this;}
    template<typename ReservedInstancesIdsT = ReservedInstancesId>
    ReservedInstancesModification& AddReservedInstancesIds(ReservedInstancesIdsT&& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.emplace_back(std::forward<ReservedInstancesIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique ID for the Reserved Instance modification.</p>
     */
    inline const Aws::String& GetReservedInstancesModificationId() const { return m_reservedInstancesModificationId; }
    inline bool ReservedInstancesModificationIdHasBeenSet() const { return m_reservedInstancesModificationIdHasBeenSet; }
    template<typename ReservedInstancesModificationIdT = Aws::String>
    void SetReservedInstancesModificationId(ReservedInstancesModificationIdT&& value) { m_reservedInstancesModificationIdHasBeenSet = true; m_reservedInstancesModificationId = std::forward<ReservedInstancesModificationIdT>(value); }
    template<typename ReservedInstancesModificationIdT = Aws::String>
    ReservedInstancesModification& WithReservedInstancesModificationId(ReservedInstancesModificationIdT&& value) { SetReservedInstancesModificationId(std::forward<ReservedInstancesModificationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Reserved Instances modification request.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ReservedInstancesModification& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the status.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ReservedInstancesModification& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the modification request was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const { return m_updateDate; }
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    void SetUpdateDate(UpdateDateT&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::forward<UpdateDateT>(value); }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    ReservedInstancesModification& WithUpdateDate(UpdateDateT&& value) { SetUpdateDate(std::forward<UpdateDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveDate{};
    bool m_effectiveDateHasBeenSet = false;

    Aws::Vector<ReservedInstancesModificationResponse> m_modificationResults;
    bool m_modificationResultsHasBeenSet = false;

    Aws::Vector<ReservedInstancesId> m_reservedInstancesIds;
    bool m_reservedInstancesIdsHasBeenSet = false;

    Aws::String m_reservedInstancesModificationId;
    bool m_reservedInstancesModificationIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_updateDate{};
    bool m_updateDateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
