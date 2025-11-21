/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace AutoScaling {
namespace Model {

/**
 * <p> Contains details about errors encountered during instance launch attempts.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LaunchInstancesError">AWS
 * API Reference</a></p>
 */
class LaunchInstancesError {
 public:
  AWS_AUTOSCALING_API LaunchInstancesError() = default;
  AWS_AUTOSCALING_API LaunchInstancesError(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_AUTOSCALING_API LaunchInstancesError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> The instance type that failed to launch. </p>
   */
  inline const Aws::String& GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  template <typename InstanceTypeT = Aws::String>
  void SetInstanceType(InstanceTypeT&& value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = std::forward<InstanceTypeT>(value);
  }
  template <typename InstanceTypeT = Aws::String>
  LaunchInstancesError& WithInstanceType(InstanceTypeT&& value) {
    SetInstanceType(std::forward<InstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The market type (On-Demand or Spot) that encountered the launch error. </p>
   */
  inline const Aws::String& GetMarketType() const { return m_marketType; }
  inline bool MarketTypeHasBeenSet() const { return m_marketTypeHasBeenSet; }
  template <typename MarketTypeT = Aws::String>
  void SetMarketType(MarketTypeT&& value) {
    m_marketTypeHasBeenSet = true;
    m_marketType = std::forward<MarketTypeT>(value);
  }
  template <typename MarketTypeT = Aws::String>
  LaunchInstancesError& WithMarketType(MarketTypeT&& value) {
    SetMarketType(std::forward<MarketTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The subnet ID where the instance launch was attempted. </p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  LaunchInstancesError& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Availability Zone where the instance launch was attempted. </p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  LaunchInstancesError& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Availability Zone ID where the launch error occurred. </p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  LaunchInstancesError& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The error code representing the type of error encountered (e.g.,
   * InsufficientInstanceCapacity). </p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  LaunchInstancesError& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A descriptive message providing details about the error encountered during
   * the launch attempt. </p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  LaunchInstancesError& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceType;
  bool m_instanceTypeHasBeenSet = false;

  Aws::String m_marketType;
  bool m_marketTypeHasBeenSet = false;

  Aws::String m_subnetId;
  bool m_subnetIdHasBeenSet = false;

  Aws::String m_availabilityZone;
  bool m_availabilityZoneHasBeenSet = false;

  Aws::String m_availabilityZoneId;
  bool m_availabilityZoneIdHasBeenSet = false;

  Aws::String m_errorCode;
  bool m_errorCodeHasBeenSet = false;

  Aws::String m_errorMessage;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
