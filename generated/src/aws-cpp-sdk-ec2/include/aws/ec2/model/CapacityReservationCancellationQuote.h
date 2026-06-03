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
#include <aws/ec2/model/CancellationTerms.h>
#include <aws/ec2/model/CapacityReservationCancellationQuoteState.h>
#include <aws/ec2/model/CapacityReservationConfiguration.h>
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
 * <p>Describes a Capacity Reservation cancellation quote, which provides the
 * cancellation terms for cancelling a future-dated Capacity Reservation during its
 * commitment duration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationCancellationQuote">AWS
 * API Reference</a></p>
 */
class CapacityReservationCancellationQuote {
 public:
  AWS_EC2_API CapacityReservationCancellationQuote() = default;
  AWS_EC2_API CapacityReservationCancellationQuote(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CapacityReservationCancellationQuote& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the cancellation quote.</p>
   */
  inline const Aws::String& GetCapacityReservationCancellationQuoteId() const { return m_capacityReservationCancellationQuoteId; }
  inline bool CapacityReservationCancellationQuoteIdHasBeenSet() const { return m_capacityReservationCancellationQuoteIdHasBeenSet; }
  template <typename CapacityReservationCancellationQuoteIdT = Aws::String>
  void SetCapacityReservationCancellationQuoteId(CapacityReservationCancellationQuoteIdT&& value) {
    m_capacityReservationCancellationQuoteIdHasBeenSet = true;
    m_capacityReservationCancellationQuoteId = std::forward<CapacityReservationCancellationQuoteIdT>(value);
  }
  template <typename CapacityReservationCancellationQuoteIdT = Aws::String>
  CapacityReservationCancellationQuote& WithCapacityReservationCancellationQuoteId(CapacityReservationCancellationQuoteIdT&& value) {
    SetCapacityReservationCancellationQuoteId(std::forward<CapacityReservationCancellationQuoteIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Capacity Reservation associated with the cancellation
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
  CapacityReservationCancellationQuote& WithCapacityReservationId(CapacityReservationIdT&& value) {
    SetCapacityReservationId(std::forward<CapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the cancellation quote was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  CapacityReservationCancellationQuote& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the cancellation quote expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
  inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  void SetExpirationTime(ExpirationTimeT&& value) {
    m_expirationTimeHasBeenSet = true;
    m_expirationTime = std::forward<ExpirationTimeT>(value);
  }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  CapacityReservationCancellationQuote& WithExpirationTime(ExpirationTimeT&& value) {
    SetExpirationTime(std::forward<ExpirationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the cancellation quote. Possible values include
   * <code>pending</code>, <code>active</code>, and <code>expired</code>.</p>
   */
  inline CapacityReservationCancellationQuoteState GetQuoteState() const { return m_quoteState; }
  inline bool QuoteStateHasBeenSet() const { return m_quoteStateHasBeenSet; }
  inline void SetQuoteState(CapacityReservationCancellationQuoteState value) {
    m_quoteStateHasBeenSet = true;
    m_quoteState = value;
  }
  inline CapacityReservationCancellationQuote& WithQuoteState(CapacityReservationCancellationQuoteState value) {
    SetQuoteState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current configuration of the Capacity Reservation.</p>
   */
  inline const CapacityReservationConfiguration& GetCurrentConfiguration() const { return m_currentConfiguration; }
  inline bool CurrentConfigurationHasBeenSet() const { return m_currentConfigurationHasBeenSet; }
  template <typename CurrentConfigurationT = CapacityReservationConfiguration>
  void SetCurrentConfiguration(CurrentConfigurationT&& value) {
    m_currentConfigurationHasBeenSet = true;
    m_currentConfiguration = std::forward<CurrentConfigurationT>(value);
  }
  template <typename CurrentConfigurationT = CapacityReservationConfiguration>
  CapacityReservationCancellationQuote& WithCurrentConfiguration(CurrentConfigurationT&& value) {
    SetCurrentConfiguration(std::forward<CurrentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cancellation terms associated with the quote, including the fee type and
   * charge details.</p>
   */
  inline const Aws::Vector<CancellationTerms>& GetCancellationTerms() const { return m_cancellationTerms; }
  inline bool CancellationTermsHasBeenSet() const { return m_cancellationTermsHasBeenSet; }
  template <typename CancellationTermsT = Aws::Vector<CancellationTerms>>
  void SetCancellationTerms(CancellationTermsT&& value) {
    m_cancellationTermsHasBeenSet = true;
    m_cancellationTerms = std::forward<CancellationTermsT>(value);
  }
  template <typename CancellationTermsT = Aws::Vector<CancellationTerms>>
  CapacityReservationCancellationQuote& WithCancellationTerms(CancellationTermsT&& value) {
    SetCancellationTerms(std::forward<CancellationTermsT>(value));
    return *this;
  }
  template <typename CancellationTermsT = CancellationTerms>
  CapacityReservationCancellationQuote& AddCancellationTerms(CancellationTermsT&& value) {
    m_cancellationTermsHasBeenSet = true;
    m_cancellationTerms.emplace_back(std::forward<CancellationTermsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the cancellation quote.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CapacityReservationCancellationQuote& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CapacityReservationCancellationQuote& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityReservationCancellationQuoteId;

  Aws::String m_capacityReservationId;

  Aws::Utils::DateTime m_createTime{};

  Aws::Utils::DateTime m_expirationTime{};

  CapacityReservationCancellationQuoteState m_quoteState{CapacityReservationCancellationQuoteState::NOT_SET};

  CapacityReservationConfiguration m_currentConfiguration;

  Aws::Vector<CancellationTerms> m_cancellationTerms;

  Aws::Vector<Tag> m_tags;
  bool m_capacityReservationCancellationQuoteIdHasBeenSet = false;
  bool m_capacityReservationIdHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
  bool m_expirationTimeHasBeenSet = false;
  bool m_quoteStateHasBeenSet = false;
  bool m_currentConfigurationHasBeenSet = false;
  bool m_cancellationTermsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
