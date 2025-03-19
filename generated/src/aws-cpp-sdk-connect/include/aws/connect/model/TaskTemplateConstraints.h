/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RequiredFieldInfo.h>
#include <aws/connect/model/ReadOnlyFieldInfo.h>
#include <aws/connect/model/InvisibleFieldInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Describes constraints that apply to the template fields.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TaskTemplateConstraints">AWS
   * API Reference</a></p>
   */
  class TaskTemplateConstraints
  {
  public:
    AWS_CONNECT_API TaskTemplateConstraints() = default;
    AWS_CONNECT_API TaskTemplateConstraints(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TaskTemplateConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lists the fields that are required to be filled by agents.</p>
     */
    inline const Aws::Vector<RequiredFieldInfo>& GetRequiredFields() const { return m_requiredFields; }
    inline bool RequiredFieldsHasBeenSet() const { return m_requiredFieldsHasBeenSet; }
    template<typename RequiredFieldsT = Aws::Vector<RequiredFieldInfo>>
    void SetRequiredFields(RequiredFieldsT&& value) { m_requiredFieldsHasBeenSet = true; m_requiredFields = std::forward<RequiredFieldsT>(value); }
    template<typename RequiredFieldsT = Aws::Vector<RequiredFieldInfo>>
    TaskTemplateConstraints& WithRequiredFields(RequiredFieldsT&& value) { SetRequiredFields(std::forward<RequiredFieldsT>(value)); return *this;}
    template<typename RequiredFieldsT = RequiredFieldInfo>
    TaskTemplateConstraints& AddRequiredFields(RequiredFieldsT&& value) { m_requiredFieldsHasBeenSet = true; m_requiredFields.emplace_back(std::forward<RequiredFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the fields that are read-only to agents, and cannot be edited.</p>
     */
    inline const Aws::Vector<ReadOnlyFieldInfo>& GetReadOnlyFields() const { return m_readOnlyFields; }
    inline bool ReadOnlyFieldsHasBeenSet() const { return m_readOnlyFieldsHasBeenSet; }
    template<typename ReadOnlyFieldsT = Aws::Vector<ReadOnlyFieldInfo>>
    void SetReadOnlyFields(ReadOnlyFieldsT&& value) { m_readOnlyFieldsHasBeenSet = true; m_readOnlyFields = std::forward<ReadOnlyFieldsT>(value); }
    template<typename ReadOnlyFieldsT = Aws::Vector<ReadOnlyFieldInfo>>
    TaskTemplateConstraints& WithReadOnlyFields(ReadOnlyFieldsT&& value) { SetReadOnlyFields(std::forward<ReadOnlyFieldsT>(value)); return *this;}
    template<typename ReadOnlyFieldsT = ReadOnlyFieldInfo>
    TaskTemplateConstraints& AddReadOnlyFields(ReadOnlyFieldsT&& value) { m_readOnlyFieldsHasBeenSet = true; m_readOnlyFields.emplace_back(std::forward<ReadOnlyFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the fields that are invisible to agents.</p>
     */
    inline const Aws::Vector<InvisibleFieldInfo>& GetInvisibleFields() const { return m_invisibleFields; }
    inline bool InvisibleFieldsHasBeenSet() const { return m_invisibleFieldsHasBeenSet; }
    template<typename InvisibleFieldsT = Aws::Vector<InvisibleFieldInfo>>
    void SetInvisibleFields(InvisibleFieldsT&& value) { m_invisibleFieldsHasBeenSet = true; m_invisibleFields = std::forward<InvisibleFieldsT>(value); }
    template<typename InvisibleFieldsT = Aws::Vector<InvisibleFieldInfo>>
    TaskTemplateConstraints& WithInvisibleFields(InvisibleFieldsT&& value) { SetInvisibleFields(std::forward<InvisibleFieldsT>(value)); return *this;}
    template<typename InvisibleFieldsT = InvisibleFieldInfo>
    TaskTemplateConstraints& AddInvisibleFields(InvisibleFieldsT&& value) { m_invisibleFieldsHasBeenSet = true; m_invisibleFields.emplace_back(std::forward<InvisibleFieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RequiredFieldInfo> m_requiredFields;
    bool m_requiredFieldsHasBeenSet = false;

    Aws::Vector<ReadOnlyFieldInfo> m_readOnlyFields;
    bool m_readOnlyFieldsHasBeenSet = false;

    Aws::Vector<InvisibleFieldInfo> m_invisibleFields;
    bool m_invisibleFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
