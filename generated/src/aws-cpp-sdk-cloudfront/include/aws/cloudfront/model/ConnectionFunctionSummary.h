/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FunctionConfig.h>
#include <aws/cloudfront/model/FunctionStage.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {

/**
 * <p>A connection function summary.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ConnectionFunctionSummary">AWS
 * API Reference</a></p>
 */
class ConnectionFunctionSummary {
 public:
  AWS_CLOUDFRONT_API ConnectionFunctionSummary() = default;
  AWS_CLOUDFRONT_API ConnectionFunctionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API ConnectionFunctionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The connection function name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ConnectionFunctionSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function ID.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ConnectionFunctionSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FunctionConfig& GetConnectionFunctionConfig() const { return m_connectionFunctionConfig; }
  inline bool ConnectionFunctionConfigHasBeenSet() const { return m_connectionFunctionConfigHasBeenSet; }
  template <typename ConnectionFunctionConfigT = FunctionConfig>
  void SetConnectionFunctionConfig(ConnectionFunctionConfigT&& value) {
    m_connectionFunctionConfigHasBeenSet = true;
    m_connectionFunctionConfig = std::forward<ConnectionFunctionConfigT>(value);
  }
  template <typename ConnectionFunctionConfigT = FunctionConfig>
  ConnectionFunctionSummary& WithConnectionFunctionConfig(ConnectionFunctionConfigT&& value) {
    SetConnectionFunctionConfig(std::forward<ConnectionFunctionConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetConnectionFunctionArn() const { return m_connectionFunctionArn; }
  inline bool ConnectionFunctionArnHasBeenSet() const { return m_connectionFunctionArnHasBeenSet; }
  template <typename ConnectionFunctionArnT = Aws::String>
  void SetConnectionFunctionArn(ConnectionFunctionArnT&& value) {
    m_connectionFunctionArnHasBeenSet = true;
    m_connectionFunctionArn = std::forward<ConnectionFunctionArnT>(value);
  }
  template <typename ConnectionFunctionArnT = Aws::String>
  ConnectionFunctionSummary& WithConnectionFunctionArn(ConnectionFunctionArnT&& value) {
    SetConnectionFunctionArn(std::forward<ConnectionFunctionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function status.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  ConnectionFunctionSummary& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function stage.</p>
   */
  inline FunctionStage GetStage() const { return m_stage; }
  inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
  inline void SetStage(FunctionStage value) {
    m_stageHasBeenSet = true;
    m_stage = value;
  }
  inline ConnectionFunctionSummary& WithStage(FunctionStage value) {
    SetStage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function created time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  ConnectionFunctionSummary& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function last modified time.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  ConnectionFunctionSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  FunctionConfig m_connectionFunctionConfig;
  bool m_connectionFunctionConfigHasBeenSet = false;

  Aws::String m_connectionFunctionArn;
  bool m_connectionFunctionArnHasBeenSet = false;

  Aws::String m_status;
  bool m_statusHasBeenSet = false;

  FunctionStage m_stage{FunctionStage::NOT_SET};
  bool m_stageHasBeenSet = false;

  Aws::Utils::DateTime m_createdTime{};
  bool m_createdTimeHasBeenSet = false;

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_lastModifiedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
