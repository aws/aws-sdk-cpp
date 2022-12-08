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
    AWS_IOT_API AuditSuppression();
    AWS_IOT_API AuditSuppression(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditSuppression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCheckName() const{ return m_checkName; }

    
    inline bool CheckNameHasBeenSet() const { return m_checkNameHasBeenSet; }

    
    inline void SetCheckName(const Aws::String& value) { m_checkNameHasBeenSet = true; m_checkName = value; }

    
    inline void SetCheckName(Aws::String&& value) { m_checkNameHasBeenSet = true; m_checkName = std::move(value); }

    
    inline void SetCheckName(const char* value) { m_checkNameHasBeenSet = true; m_checkName.assign(value); }

    
    inline AuditSuppression& WithCheckName(const Aws::String& value) { SetCheckName(value); return *this;}

    
    inline AuditSuppression& WithCheckName(Aws::String&& value) { SetCheckName(std::move(value)); return *this;}

    
    inline AuditSuppression& WithCheckName(const char* value) { SetCheckName(value); return *this;}


    
    inline const ResourceIdentifier& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    
    inline void SetResourceIdentifier(const ResourceIdentifier& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    
    inline void SetResourceIdentifier(ResourceIdentifier&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    
    inline AuditSuppression& WithResourceIdentifier(const ResourceIdentifier& value) { SetResourceIdentifier(value); return *this;}

    
    inline AuditSuppression& WithResourceIdentifier(ResourceIdentifier&& value) { SetResourceIdentifier(std::move(value)); return *this;}


    /**
     * <p> The expiration date (epoch timestamp in seconds) that you want the
     * suppression to adhere to. </p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p> The expiration date (epoch timestamp in seconds) that you want the
     * suppression to adhere to. </p>
     */
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }

    /**
     * <p> The expiration date (epoch timestamp in seconds) that you want the
     * suppression to adhere to. </p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    /**
     * <p> The expiration date (epoch timestamp in seconds) that you want the
     * suppression to adhere to. </p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }

    /**
     * <p> The expiration date (epoch timestamp in seconds) that you want the
     * suppression to adhere to. </p>
     */
    inline AuditSuppression& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p> The expiration date (epoch timestamp in seconds) that you want the
     * suppression to adhere to. </p>
     */
    inline AuditSuppression& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}


    /**
     * <p> Indicates whether a suppression should exist indefinitely or not. </p>
     */
    inline bool GetSuppressIndefinitely() const{ return m_suppressIndefinitely; }

    /**
     * <p> Indicates whether a suppression should exist indefinitely or not. </p>
     */
    inline bool SuppressIndefinitelyHasBeenSet() const { return m_suppressIndefinitelyHasBeenSet; }

    /**
     * <p> Indicates whether a suppression should exist indefinitely or not. </p>
     */
    inline void SetSuppressIndefinitely(bool value) { m_suppressIndefinitelyHasBeenSet = true; m_suppressIndefinitely = value; }

    /**
     * <p> Indicates whether a suppression should exist indefinitely or not. </p>
     */
    inline AuditSuppression& WithSuppressIndefinitely(bool value) { SetSuppressIndefinitely(value); return *this;}


    /**
     * <p> The description of the audit suppression. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline AuditSuppression& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline AuditSuppression& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline AuditSuppression& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_checkName;
    bool m_checkNameHasBeenSet = false;

    ResourceIdentifier m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    bool m_suppressIndefinitely;
    bool m_suppressIndefinitelyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
