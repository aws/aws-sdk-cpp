/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>Information about required authentication parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/AuthParameter">AWS
   * API Reference</a></p>
   */
  class AuthParameter
  {
  public:
    AWS_APPFLOW_API AuthParameter() = default;
    AWS_APPFLOW_API AuthParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API AuthParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authentication key required to authenticate with the connector.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    AuthParameter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this authentication parameter is required.</p>
     */
    inline bool GetIsRequired() const { return m_isRequired; }
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }
    inline AuthParameter& WithIsRequired(bool value) { SetIsRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Label used for authentication parameter.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    AuthParameter& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description about the authentication parameter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AuthParameter& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this authentication parameter is a sensitive field.</p>
     */
    inline bool GetIsSensitiveField() const { return m_isSensitiveField; }
    inline bool IsSensitiveFieldHasBeenSet() const { return m_isSensitiveFieldHasBeenSet; }
    inline void SetIsSensitiveField(bool value) { m_isSensitiveFieldHasBeenSet = true; m_isSensitiveField = value; }
    inline AuthParameter& WithIsSensitiveField(bool value) { SetIsSensitiveField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains default values for this authentication parameter that are supplied
     * by the connector.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectorSuppliedValues() const { return m_connectorSuppliedValues; }
    inline bool ConnectorSuppliedValuesHasBeenSet() const { return m_connectorSuppliedValuesHasBeenSet; }
    template<typename ConnectorSuppliedValuesT = Aws::Vector<Aws::String>>
    void SetConnectorSuppliedValues(ConnectorSuppliedValuesT&& value) { m_connectorSuppliedValuesHasBeenSet = true; m_connectorSuppliedValues = std::forward<ConnectorSuppliedValuesT>(value); }
    template<typename ConnectorSuppliedValuesT = Aws::Vector<Aws::String>>
    AuthParameter& WithConnectorSuppliedValues(ConnectorSuppliedValuesT&& value) { SetConnectorSuppliedValues(std::forward<ConnectorSuppliedValuesT>(value)); return *this;}
    template<typename ConnectorSuppliedValuesT = Aws::String>
    AuthParameter& AddConnectorSuppliedValues(ConnectorSuppliedValuesT&& value) { m_connectorSuppliedValuesHasBeenSet = true; m_connectorSuppliedValues.emplace_back(std::forward<ConnectorSuppliedValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    bool m_isRequired{false};
    bool m_isRequiredHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isSensitiveField{false};
    bool m_isSensitiveFieldHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectorSuppliedValues;
    bool m_connectorSuppliedValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
