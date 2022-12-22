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
    AWS_APPFLOW_API AuthParameter();
    AWS_APPFLOW_API AuthParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API AuthParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The authentication key required to authenticate with the connector.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The authentication key required to authenticate with the connector.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The authentication key required to authenticate with the connector.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The authentication key required to authenticate with the connector.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The authentication key required to authenticate with the connector.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The authentication key required to authenticate with the connector.</p>
     */
    inline AuthParameter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The authentication key required to authenticate with the connector.</p>
     */
    inline AuthParameter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The authentication key required to authenticate with the connector.</p>
     */
    inline AuthParameter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Indicates whether this authentication parameter is required.</p>
     */
    inline bool GetIsRequired() const{ return m_isRequired; }

    /**
     * <p>Indicates whether this authentication parameter is required.</p>
     */
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }

    /**
     * <p>Indicates whether this authentication parameter is required.</p>
     */
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }

    /**
     * <p>Indicates whether this authentication parameter is required.</p>
     */
    inline AuthParameter& WithIsRequired(bool value) { SetIsRequired(value); return *this;}


    /**
     * <p>Label used for authentication parameter.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>Label used for authentication parameter.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>Label used for authentication parameter.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>Label used for authentication parameter.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>Label used for authentication parameter.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>Label used for authentication parameter.</p>
     */
    inline AuthParameter& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>Label used for authentication parameter.</p>
     */
    inline AuthParameter& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>Label used for authentication parameter.</p>
     */
    inline AuthParameter& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>A description about the authentication parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description about the authentication parameter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description about the authentication parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description about the authentication parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description about the authentication parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description about the authentication parameter.</p>
     */
    inline AuthParameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description about the authentication parameter.</p>
     */
    inline AuthParameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description about the authentication parameter.</p>
     */
    inline AuthParameter& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether this authentication parameter is a sensitive field.</p>
     */
    inline bool GetIsSensitiveField() const{ return m_isSensitiveField; }

    /**
     * <p>Indicates whether this authentication parameter is a sensitive field.</p>
     */
    inline bool IsSensitiveFieldHasBeenSet() const { return m_isSensitiveFieldHasBeenSet; }

    /**
     * <p>Indicates whether this authentication parameter is a sensitive field.</p>
     */
    inline void SetIsSensitiveField(bool value) { m_isSensitiveFieldHasBeenSet = true; m_isSensitiveField = value; }

    /**
     * <p>Indicates whether this authentication parameter is a sensitive field.</p>
     */
    inline AuthParameter& WithIsSensitiveField(bool value) { SetIsSensitiveField(value); return *this;}


    /**
     * <p>Contains default values for this authentication parameter that are supplied
     * by the connector.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectorSuppliedValues() const{ return m_connectorSuppliedValues; }

    /**
     * <p>Contains default values for this authentication parameter that are supplied
     * by the connector.</p>
     */
    inline bool ConnectorSuppliedValuesHasBeenSet() const { return m_connectorSuppliedValuesHasBeenSet; }

    /**
     * <p>Contains default values for this authentication parameter that are supplied
     * by the connector.</p>
     */
    inline void SetConnectorSuppliedValues(const Aws::Vector<Aws::String>& value) { m_connectorSuppliedValuesHasBeenSet = true; m_connectorSuppliedValues = value; }

    /**
     * <p>Contains default values for this authentication parameter that are supplied
     * by the connector.</p>
     */
    inline void SetConnectorSuppliedValues(Aws::Vector<Aws::String>&& value) { m_connectorSuppliedValuesHasBeenSet = true; m_connectorSuppliedValues = std::move(value); }

    /**
     * <p>Contains default values for this authentication parameter that are supplied
     * by the connector.</p>
     */
    inline AuthParameter& WithConnectorSuppliedValues(const Aws::Vector<Aws::String>& value) { SetConnectorSuppliedValues(value); return *this;}

    /**
     * <p>Contains default values for this authentication parameter that are supplied
     * by the connector.</p>
     */
    inline AuthParameter& WithConnectorSuppliedValues(Aws::Vector<Aws::String>&& value) { SetConnectorSuppliedValues(std::move(value)); return *this;}

    /**
     * <p>Contains default values for this authentication parameter that are supplied
     * by the connector.</p>
     */
    inline AuthParameter& AddConnectorSuppliedValues(const Aws::String& value) { m_connectorSuppliedValuesHasBeenSet = true; m_connectorSuppliedValues.push_back(value); return *this; }

    /**
     * <p>Contains default values for this authentication parameter that are supplied
     * by the connector.</p>
     */
    inline AuthParameter& AddConnectorSuppliedValues(Aws::String&& value) { m_connectorSuppliedValuesHasBeenSet = true; m_connectorSuppliedValues.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains default values for this authentication parameter that are supplied
     * by the connector.</p>
     */
    inline AuthParameter& AddConnectorSuppliedValues(const char* value) { m_connectorSuppliedValuesHasBeenSet = true; m_connectorSuppliedValues.push_back(value); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    bool m_isRequired;
    bool m_isRequiredHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isSensitiveField;
    bool m_isSensitiveFieldHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectorSuppliedValues;
    bool m_connectorSuppliedValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
