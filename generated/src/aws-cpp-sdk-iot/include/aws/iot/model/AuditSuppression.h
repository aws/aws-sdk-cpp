/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ResourceIdentifier.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p> Filters out specific findings of a Device Defender audit. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuditSuppression">AWS
   * API Reference</a></p>
   */
  class AuditSuppression
  {
  public:
    AWS_IOT_API AuditSuppression() = default;
    AWS_IOT_API AuditSuppression(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditSuppression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetCheckName() const { return m_checkName; }
    inline bool CheckNameHasBeenSet() const { return m_checkNameHasBeenSet; }
    template<typename CheckNameT = Aws::String>
    void SetCheckName(CheckNameT&& value) { m_checkNameHasBeenSet = true; m_checkName = std::forward<CheckNameT>(value); }
    template<typename CheckNameT = Aws::String>
    AuditSuppression& WithCheckName(CheckNameT&& value) { SetCheckName(std::forward<CheckNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceIdentifier& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = ResourceIdentifier>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = ResourceIdentifier>
    AuditSuppression& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The expiration date (epoch timestamp in seconds) that you want the
     * suppression to adhere to. </p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    AuditSuppression& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether a suppression should exist indefinitely or not. </p>
     */
    inline bool GetSuppressIndefinitely() const { return m_suppressIndefinitely; }
    inline bool SuppressIndefinitelyHasBeenSet() const { return m_suppressIndefinitelyHasBeenSet; }
    inline void SetSuppressIndefinitely(bool value) { m_suppressIndefinitelyHasBeenSet = true; m_suppressIndefinitely = value; }
    inline AuditSuppression& WithSuppressIndefinitely(bool value) { SetSuppressIndefinitely(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the audit suppression. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AuditSuppression& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_checkName;
    bool m_checkNameHasBeenSet = false;

    ResourceIdentifier m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate{};
    bool m_expirationDateHasBeenSet = false;

    bool m_suppressIndefinitely{false};
    bool m_suppressIndefinitelyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
