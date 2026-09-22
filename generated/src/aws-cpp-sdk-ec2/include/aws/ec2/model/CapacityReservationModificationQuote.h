/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityReservationModificationQuoteState.h>
#include <aws/ec2/model/ModificationQuoteCurrentConfiguration.h>
#include <aws/ec2/model/ModificationTerms.h>
#include <aws/ec2/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes a Capacity Reservation modification quote, which provides the terms
 * for changing the start date or the commitment of a future-dated Capacity
 * Reservation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationModificationQuote">AWS
 * API Reference</a></p>
 */
class CapacityReservationModificationQuote {
 public:
  AWS_EC2_API CapacityReservationModificationQuote() = default;
  AWS_EC2_API CapacityReservationModificationQuote(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CapacityReservationModificationQuote& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the modification quote.</p>
   */
  inline const Aws::String& GetCapacityReservationModificationQuoteId() const { return m_capacityReservationModificationQuoteId; }
  inline bool CapacityReservationModificationQuoteIdHasBeenSet() const { return m_capacityReservationModificationQuoteIdHasBeenSet; }
  template <typename CapacityReservationModificationQuoteIdT = Aws::String>
  void SetCapacityReservationModificationQuoteId(CapacityReservationModificationQuoteIdT&& value) {
    m_capacityReservationModificationQuoteIdHasBeenSet = true;
    m_capacityReservationModificationQuoteId = std::forward<CapacityReservationModificationQuoteIdT>(value);
  }
  template <typename CapacityReservationModificationQuoteIdT = Aws::String>
  CapacityReservationModificationQuote& WithCapacityReservationModificationQuoteId(CapacityReservationModificationQuoteIdT&& value) {
    SetCapacityReservationModificationQuoteId(std::forward<CapacityReservationModificationQuoteIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Capacity Reservation associated with the modification
   * quote.</p>
   */
  inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
  inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
  template <typename CapacityReservationIdT = Aws::String>
  void SetCapacityReservationId(CapacityReservationIdT&& value) {
    m_capacityReservationIdHasBeenSet = true;
    m_capacityReservationId = std::forward<CapacityReservationIdT>(value);
  }
  template <typename CapacityReservationIdT = Aws::String>
  CapacityReservationModificationQuote& WithCapacityReservationId(CapacityReservationIdT&& value) {
    SetCapacityReservationId(std::forward<CapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the modification quote was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  CapacityReservationModificationQuote& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the modification quote expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
  inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  void SetExpirationTime(ExpirationTimeT&& value) {
    m_expirationTimeHasBeenSet = true;
    m_expirationTime = std::forward<ExpirationTimeT>(value);
  }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  CapacityReservationModificationQuote& WithExpirationTime(ExpirationTimeT&& value) {
    SetExpirationTime(std::forward<ExpirationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the modification quote itself. Possible values are:</p> <ul>
   * <li> <p> <code>active</code> - The quote can still be used.</p> </li> <li> <p>
   * <code>expired</code> - The quote can no longer be used. A quote becomes
   * <code>expired</code> at its <code>expirationTime</code>.</p> </li> </ul>
   */
  inline CapacityReservationModificationQuoteState GetQuoteState() const { return m_quoteState; }
  inline bool QuoteStateHasBeenSet() const { return m_quoteStateHasBeenSet; }
  inline void SetQuoteState(CapacityReservationModificationQuoteState value) {
    m_quoteStateHasBeenSet = true;
    m_quoteState = value;
  }
  inline CapacityReservationModificationQuote& WithQuoteState(CapacityReservationModificationQuoteState value) {
    SetQuoteState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that the Capacity Reservation has at the time the quote was
   * generated.</p>
   */
  inline const ModificationQuoteCurrentConfiguration& GetCurrentConfiguration() const { return m_currentConfiguration; }
  inline bool CurrentConfigurationHasBeenSet() const { return m_currentConfigurationHasBeenSet; }
  template <typename CurrentConfigurationT = ModificationQuoteCurrentConfiguration>
  void SetCurrentConfiguration(CurrentConfigurationT&& value) {
    m_currentConfigurationHasBeenSet = true;
    m_currentConfiguration = std::forward<CurrentConfigurationT>(value);
  }
  template <typename CurrentConfigurationT = ModificationQuoteCurrentConfiguration>
  CapacityReservationModificationQuote& WithCurrentConfiguration(CurrentConfigurationT&& value) {
    SetCurrentConfiguration(std::forward<CurrentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The terms of the modification, including the configuration that the Capacity
   * Reservation will have if you accept them by using
   * <code>ModifyCapacityReservation</code>.</p>
   */
  inline const ModificationTerms& GetModificationTerms() const { return m_modificationTerms; }
  inline bool ModificationTermsHasBeenSet() const { return m_modificationTermsHasBeenSet; }
  template <typename ModificationTermsT = ModificationTerms>
  void SetModificationTerms(ModificationTermsT&& value) {
    m_modificationTermsHasBeenSet = true;
    m_modificationTerms = std::forward<ModificationTermsT>(value);
  }
  template <typename ModificationTermsT = ModificationTerms>
  CapacityReservationModificationQuote& WithModificationTerms(ModificationTermsT&& value) {
    SetModificationTerms(std::forward<ModificationTermsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the modification quote.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CapacityReservationModificationQuote& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CapacityReservationModificationQuote& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityReservationModificationQuoteId;

  Aws::String m_capacityReservationId;

  Aws::Utils::DateTime m_createTime{};

  Aws::Utils::DateTime m_expirationTime{};

  CapacityReservationModificationQuoteState m_quoteState{CapacityReservationModificationQuoteState::NOT_SET};

  ModificationQuoteCurrentConfiguration m_currentConfiguration;

  ModificationTerms m_modificationTerms;

  Aws::Vector<Tag> m_tags;
  bool m_capacityReservationModificationQuoteIdHasBeenSet = false;
  bool m_capacityReservationIdHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
  bool m_expirationTimeHasBeenSet = false;
  bool m_quoteStateHasBeenSet = false;
  bool m_currentConfigurationHasBeenSet = false;
  bool m_modificationTermsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
