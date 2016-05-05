/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/TrustType.h>
#include <aws/ds/model/TrustDirection.h>
#include <aws/ds/model/TrustState.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{

  /**
   * Describes a trust relationship between an Microsoft AD in the AWS cloud and an
   * external domain.
   */
  class AWS_DIRECTORYSERVICE_API Trust
  {
  public:
    Trust();
    Trust(const Aws::Utils::Json::JsonValue& jsonValue);
    Trust& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * The Directory ID of the AWS directory involved in the trust relationship.
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * The Directory ID of the AWS directory involved in the trust relationship.
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * The Directory ID of the AWS directory involved in the trust relationship.
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * The Directory ID of the AWS directory involved in the trust relationship.
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * The Directory ID of the AWS directory involved in the trust relationship.
     */
    inline Trust& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * The Directory ID of the AWS directory involved in the trust relationship.
     */
    inline Trust& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * The Directory ID of the AWS directory involved in the trust relationship.
     */
    inline Trust& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * The unique ID of the trust relationship.
     */
    inline const Aws::String& GetTrustId() const{ return m_trustId; }

    /**
     * The unique ID of the trust relationship.
     */
    inline void SetTrustId(const Aws::String& value) { m_trustIdHasBeenSet = true; m_trustId = value; }

    /**
     * The unique ID of the trust relationship.
     */
    inline void SetTrustId(Aws::String&& value) { m_trustIdHasBeenSet = true; m_trustId = value; }

    /**
     * The unique ID of the trust relationship.
     */
    inline void SetTrustId(const char* value) { m_trustIdHasBeenSet = true; m_trustId.assign(value); }

    /**
     * The unique ID of the trust relationship.
     */
    inline Trust& WithTrustId(const Aws::String& value) { SetTrustId(value); return *this;}

    /**
     * The unique ID of the trust relationship.
     */
    inline Trust& WithTrustId(Aws::String&& value) { SetTrustId(value); return *this;}

    /**
     * The unique ID of the trust relationship.
     */
    inline Trust& WithTrustId(const char* value) { SetTrustId(value); return *this;}

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.
     */
    inline const Aws::String& GetRemoteDomainName() const{ return m_remoteDomainName; }

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.
     */
    inline void SetRemoteDomainName(const Aws::String& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = value; }

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.
     */
    inline void SetRemoteDomainName(Aws::String&& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = value; }

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.
     */
    inline void SetRemoteDomainName(const char* value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName.assign(value); }

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.
     */
    inline Trust& WithRemoteDomainName(const Aws::String& value) { SetRemoteDomainName(value); return *this;}

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.
     */
    inline Trust& WithRemoteDomainName(Aws::String&& value) { SetRemoteDomainName(value); return *this;}

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.
     */
    inline Trust& WithRemoteDomainName(const char* value) { SetRemoteDomainName(value); return *this;}

    /**
     * The trust relationship type.
     */
    inline const TrustType& GetTrustType() const{ return m_trustType; }

    /**
     * The trust relationship type.
     */
    inline void SetTrustType(const TrustType& value) { m_trustTypeHasBeenSet = true; m_trustType = value; }

    /**
     * The trust relationship type.
     */
    inline void SetTrustType(TrustType&& value) { m_trustTypeHasBeenSet = true; m_trustType = value; }

    /**
     * The trust relationship type.
     */
    inline Trust& WithTrustType(const TrustType& value) { SetTrustType(value); return *this;}

    /**
     * The trust relationship type.
     */
    inline Trust& WithTrustType(TrustType&& value) { SetTrustType(value); return *this;}

    /**
     * The trust relationship direction.
     */
    inline const TrustDirection& GetTrustDirection() const{ return m_trustDirection; }

    /**
     * The trust relationship direction.
     */
    inline void SetTrustDirection(const TrustDirection& value) { m_trustDirectionHasBeenSet = true; m_trustDirection = value; }

    /**
     * The trust relationship direction.
     */
    inline void SetTrustDirection(TrustDirection&& value) { m_trustDirectionHasBeenSet = true; m_trustDirection = value; }

    /**
     * The trust relationship direction.
     */
    inline Trust& WithTrustDirection(const TrustDirection& value) { SetTrustDirection(value); return *this;}

    /**
     * The trust relationship direction.
     */
    inline Trust& WithTrustDirection(TrustDirection&& value) { SetTrustDirection(value); return *this;}

    /**
     * The trust relationship state.
     */
    inline const TrustState& GetTrustState() const{ return m_trustState; }

    /**
     * The trust relationship state.
     */
    inline void SetTrustState(const TrustState& value) { m_trustStateHasBeenSet = true; m_trustState = value; }

    /**
     * The trust relationship state.
     */
    inline void SetTrustState(TrustState&& value) { m_trustStateHasBeenSet = true; m_trustState = value; }

    /**
     * The trust relationship state.
     */
    inline Trust& WithTrustState(const TrustState& value) { SetTrustState(value); return *this;}

    /**
     * The trust relationship state.
     */
    inline Trust& WithTrustState(TrustState&& value) { SetTrustState(value); return *this;}

    /**
     * The date and time that the trust relationship was created.
     */
    inline const Aws::Utils::DateTime& GetCreatedDateTime() const{ return m_createdDateTime; }

    /**
     * The date and time that the trust relationship was created.
     */
    inline void SetCreatedDateTime(const Aws::Utils::DateTime& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = value; }

    /**
     * The date and time that the trust relationship was created.
     */
    inline void SetCreatedDateTime(Aws::Utils::DateTime&& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = value; }

    /**
     * The date and time that the trust relationship was created.
     */
    inline Trust& WithCreatedDateTime(const Aws::Utils::DateTime& value) { SetCreatedDateTime(value); return *this;}

    /**
     * The date and time that the trust relationship was created.
     */
    inline Trust& WithCreatedDateTime(Aws::Utils::DateTime&& value) { SetCreatedDateTime(value); return *this;}

    /**
     * The date and time that the trust relationship was last updated.
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * The date and time that the trust relationship was last updated.
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * The date and time that the trust relationship was last updated.
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * The date and time that the trust relationship was last updated.
     */
    inline Trust& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * The date and time that the trust relationship was last updated.
     */
    inline Trust& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * The date and time that the TrustState was last updated.
     */
    inline const Aws::Utils::DateTime& GetStateLastUpdatedDateTime() const{ return m_stateLastUpdatedDateTime; }

    /**
     * The date and time that the TrustState was last updated.
     */
    inline void SetStateLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_stateLastUpdatedDateTimeHasBeenSet = true; m_stateLastUpdatedDateTime = value; }

    /**
     * The date and time that the TrustState was last updated.
     */
    inline void SetStateLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_stateLastUpdatedDateTimeHasBeenSet = true; m_stateLastUpdatedDateTime = value; }

    /**
     * The date and time that the TrustState was last updated.
     */
    inline Trust& WithStateLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetStateLastUpdatedDateTime(value); return *this;}

    /**
     * The date and time that the TrustState was last updated.
     */
    inline Trust& WithStateLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetStateLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The reason for the TrustState.</p>
     */
    inline const Aws::String& GetTrustStateReason() const{ return m_trustStateReason; }

    /**
     * <p>The reason for the TrustState.</p>
     */
    inline void SetTrustStateReason(const Aws::String& value) { m_trustStateReasonHasBeenSet = true; m_trustStateReason = value; }

    /**
     * <p>The reason for the TrustState.</p>
     */
    inline void SetTrustStateReason(Aws::String&& value) { m_trustStateReasonHasBeenSet = true; m_trustStateReason = value; }

    /**
     * <p>The reason for the TrustState.</p>
     */
    inline void SetTrustStateReason(const char* value) { m_trustStateReasonHasBeenSet = true; m_trustStateReason.assign(value); }

    /**
     * <p>The reason for the TrustState.</p>
     */
    inline Trust& WithTrustStateReason(const Aws::String& value) { SetTrustStateReason(value); return *this;}

    /**
     * <p>The reason for the TrustState.</p>
     */
    inline Trust& WithTrustStateReason(Aws::String&& value) { SetTrustStateReason(value); return *this;}

    /**
     * <p>The reason for the TrustState.</p>
     */
    inline Trust& WithTrustStateReason(const char* value) { SetTrustStateReason(value); return *this;}

  private:
    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;
    Aws::String m_trustId;
    bool m_trustIdHasBeenSet;
    Aws::String m_remoteDomainName;
    bool m_remoteDomainNameHasBeenSet;
    TrustType m_trustType;
    bool m_trustTypeHasBeenSet;
    TrustDirection m_trustDirection;
    bool m_trustDirectionHasBeenSet;
    TrustState m_trustState;
    bool m_trustStateHasBeenSet;
    Aws::Utils::DateTime m_createdDateTime;
    bool m_createdDateTimeHasBeenSet;
    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet;
    Aws::Utils::DateTime m_stateLastUpdatedDateTime;
    bool m_stateLastUpdatedDateTimeHasBeenSet;
    Aws::String m_trustStateReason;
    bool m_trustStateReasonHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
