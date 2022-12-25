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
    AWS_CONNECT_API TaskTemplateConstraints();
    AWS_CONNECT_API TaskTemplateConstraints(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TaskTemplateConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lists the fields that are required to be filled by agents.</p>
     */
    inline const Aws::Vector<RequiredFieldInfo>& GetRequiredFields() const{ return m_requiredFields; }

    /**
     * <p>Lists the fields that are required to be filled by agents.</p>
     */
    inline bool RequiredFieldsHasBeenSet() const { return m_requiredFieldsHasBeenSet; }

    /**
     * <p>Lists the fields that are required to be filled by agents.</p>
     */
    inline void SetRequiredFields(const Aws::Vector<RequiredFieldInfo>& value) { m_requiredFieldsHasBeenSet = true; m_requiredFields = value; }

    /**
     * <p>Lists the fields that are required to be filled by agents.</p>
     */
    inline void SetRequiredFields(Aws::Vector<RequiredFieldInfo>&& value) { m_requiredFieldsHasBeenSet = true; m_requiredFields = std::move(value); }

    /**
     * <p>Lists the fields that are required to be filled by agents.</p>
     */
    inline TaskTemplateConstraints& WithRequiredFields(const Aws::Vector<RequiredFieldInfo>& value) { SetRequiredFields(value); return *this;}

    /**
     * <p>Lists the fields that are required to be filled by agents.</p>
     */
    inline TaskTemplateConstraints& WithRequiredFields(Aws::Vector<RequiredFieldInfo>&& value) { SetRequiredFields(std::move(value)); return *this;}

    /**
     * <p>Lists the fields that are required to be filled by agents.</p>
     */
    inline TaskTemplateConstraints& AddRequiredFields(const RequiredFieldInfo& value) { m_requiredFieldsHasBeenSet = true; m_requiredFields.push_back(value); return *this; }

    /**
     * <p>Lists the fields that are required to be filled by agents.</p>
     */
    inline TaskTemplateConstraints& AddRequiredFields(RequiredFieldInfo&& value) { m_requiredFieldsHasBeenSet = true; m_requiredFields.push_back(std::move(value)); return *this; }


    /**
     * <p>Lists the fields that are read-only to agents, and cannot be edited.</p>
     */
    inline const Aws::Vector<ReadOnlyFieldInfo>& GetReadOnlyFields() const{ return m_readOnlyFields; }

    /**
     * <p>Lists the fields that are read-only to agents, and cannot be edited.</p>
     */
    inline bool ReadOnlyFieldsHasBeenSet() const { return m_readOnlyFieldsHasBeenSet; }

    /**
     * <p>Lists the fields that are read-only to agents, and cannot be edited.</p>
     */
    inline void SetReadOnlyFields(const Aws::Vector<ReadOnlyFieldInfo>& value) { m_readOnlyFieldsHasBeenSet = true; m_readOnlyFields = value; }

    /**
     * <p>Lists the fields that are read-only to agents, and cannot be edited.</p>
     */
    inline void SetReadOnlyFields(Aws::Vector<ReadOnlyFieldInfo>&& value) { m_readOnlyFieldsHasBeenSet = true; m_readOnlyFields = std::move(value); }

    /**
     * <p>Lists the fields that are read-only to agents, and cannot be edited.</p>
     */
    inline TaskTemplateConstraints& WithReadOnlyFields(const Aws::Vector<ReadOnlyFieldInfo>& value) { SetReadOnlyFields(value); return *this;}

    /**
     * <p>Lists the fields that are read-only to agents, and cannot be edited.</p>
     */
    inline TaskTemplateConstraints& WithReadOnlyFields(Aws::Vector<ReadOnlyFieldInfo>&& value) { SetReadOnlyFields(std::move(value)); return *this;}

    /**
     * <p>Lists the fields that are read-only to agents, and cannot be edited.</p>
     */
    inline TaskTemplateConstraints& AddReadOnlyFields(const ReadOnlyFieldInfo& value) { m_readOnlyFieldsHasBeenSet = true; m_readOnlyFields.push_back(value); return *this; }

    /**
     * <p>Lists the fields that are read-only to agents, and cannot be edited.</p>
     */
    inline TaskTemplateConstraints& AddReadOnlyFields(ReadOnlyFieldInfo&& value) { m_readOnlyFieldsHasBeenSet = true; m_readOnlyFields.push_back(std::move(value)); return *this; }


    /**
     * <p>Lists the fields that are invisible to agents.</p>
     */
    inline const Aws::Vector<InvisibleFieldInfo>& GetInvisibleFields() const{ return m_invisibleFields; }

    /**
     * <p>Lists the fields that are invisible to agents.</p>
     */
    inline bool InvisibleFieldsHasBeenSet() const { return m_invisibleFieldsHasBeenSet; }

    /**
     * <p>Lists the fields that are invisible to agents.</p>
     */
    inline void SetInvisibleFields(const Aws::Vector<InvisibleFieldInfo>& value) { m_invisibleFieldsHasBeenSet = true; m_invisibleFields = value; }

    /**
     * <p>Lists the fields that are invisible to agents.</p>
     */
    inline void SetInvisibleFields(Aws::Vector<InvisibleFieldInfo>&& value) { m_invisibleFieldsHasBeenSet = true; m_invisibleFields = std::move(value); }

    /**
     * <p>Lists the fields that are invisible to agents.</p>
     */
    inline TaskTemplateConstraints& WithInvisibleFields(const Aws::Vector<InvisibleFieldInfo>& value) { SetInvisibleFields(value); return *this;}

    /**
     * <p>Lists the fields that are invisible to agents.</p>
     */
    inline TaskTemplateConstraints& WithInvisibleFields(Aws::Vector<InvisibleFieldInfo>&& value) { SetInvisibleFields(std::move(value)); return *this;}

    /**
     * <p>Lists the fields that are invisible to agents.</p>
     */
    inline TaskTemplateConstraints& AddInvisibleFields(const InvisibleFieldInfo& value) { m_invisibleFieldsHasBeenSet = true; m_invisibleFields.push_back(value); return *this; }

    /**
     * <p>Lists the fields that are invisible to agents.</p>
     */
    inline TaskTemplateConstraints& AddInvisibleFields(InvisibleFieldInfo&& value) { m_invisibleFieldsHasBeenSet = true; m_invisibleFields.push_back(std::move(value)); return *this; }

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
