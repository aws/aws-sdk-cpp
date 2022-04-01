﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/voice-id/model/DomainStatus.h>
#include <aws/voice-id/model/ServerSideEncryptionConfiguration.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Contains a summary of information about a domain.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DomainSummary">AWS
   * API Reference</a></p>
   */
  class AWS_VOICEID_API DomainSummary
  {
  public:
    DomainSummary();
    DomainSummary(Aws::Utils::Json::JsonView jsonValue);
    DomainSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline DomainSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline DomainSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline DomainSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The timestamp showing when the domain is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp showing when the domain is created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp showing when the domain is created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp showing when the domain is created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp showing when the domain is created.</p>
     */
    inline DomainSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp showing when the domain is created.</p>
     */
    inline DomainSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline DomainSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline DomainSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline DomainSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline DomainSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline DomainSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline DomainSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The current status of the domain.</p>
     */
    inline const DomainStatus& GetDomainStatus() const{ return m_domainStatus; }

    /**
     * <p>The current status of the domain.</p>
     */
    inline bool DomainStatusHasBeenSet() const { return m_domainStatusHasBeenSet; }

    /**
     * <p>The current status of the domain.</p>
     */
    inline void SetDomainStatus(const DomainStatus& value) { m_domainStatusHasBeenSet = true; m_domainStatus = value; }

    /**
     * <p>The current status of the domain.</p>
     */
    inline void SetDomainStatus(DomainStatus&& value) { m_domainStatusHasBeenSet = true; m_domainStatus = std::move(value); }

    /**
     * <p>The current status of the domain.</p>
     */
    inline DomainSummary& WithDomainStatus(const DomainStatus& value) { SetDomainStatus(value); return *this;}

    /**
     * <p>The current status of the domain.</p>
     */
    inline DomainSummary& WithDomainStatus(DomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}


    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline DomainSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline DomainSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline DomainSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The server-side encryption configuration containing the KMS Key Identifier
     * you want Voice ID to use to encrypt your data..</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }

    /**
     * <p>The server-side encryption configuration containing the KMS Key Identifier
     * you want Voice ID to use to encrypt your data..</p>
     */
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }

    /**
     * <p>The server-side encryption configuration containing the KMS Key Identifier
     * you want Voice ID to use to encrypt your data..</p>
     */
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }

    /**
     * <p>The server-side encryption configuration containing the KMS Key Identifier
     * you want Voice ID to use to encrypt your data..</p>
     */
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }

    /**
     * <p>The server-side encryption configuration containing the KMS Key Identifier
     * you want Voice ID to use to encrypt your data..</p>
     */
    inline DomainSummary& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}

    /**
     * <p>The server-side encryption configuration containing the KMS Key Identifier
     * you want Voice ID to use to encrypt your data..</p>
     */
    inline DomainSummary& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The timestamp showing the domain's last update.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp showing the domain's last update.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp showing the domain's last update.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp showing the domain's last update.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp showing the domain's last update.</p>
     */
    inline DomainSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp showing the domain's last update.</p>
     */
    inline DomainSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet;

    DomainStatus m_domainStatus;
    bool m_domainStatusHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
