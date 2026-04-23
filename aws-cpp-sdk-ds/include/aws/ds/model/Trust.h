/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ds/model/SelectiveAuth.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Describes a trust relationship between an AWS Managed Microsoft AD directory
   * and an external domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/Trust">AWS API
   * Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API Trust
  {
  public:
    Trust();
    Trust(Aws::Utils::Json::JsonView jsonValue);
    Trust& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Directory ID of the AWS directory involved in the trust relationship.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The Directory ID of the AWS directory involved in the trust relationship.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The Directory ID of the AWS directory involved in the trust relationship.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The Directory ID of the AWS directory involved in the trust relationship.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The Directory ID of the AWS directory involved in the trust relationship.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The Directory ID of the AWS directory involved in the trust relationship.</p>
     */
    inline Trust& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The Directory ID of the AWS directory involved in the trust relationship.</p>
     */
    inline Trust& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The Directory ID of the AWS directory involved in the trust relationship.</p>
     */
    inline Trust& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The unique ID of the trust relationship.</p>
     */
    inline const Aws::String& GetTrustId() const{ return m_trustId; }

    /**
     * <p>The unique ID of the trust relationship.</p>
     */
    inline bool TrustIdHasBeenSet() const { return m_trustIdHasBeenSet; }

    /**
     * <p>The unique ID of the trust relationship.</p>
     */
    inline void SetTrustId(const Aws::String& value) { m_trustIdHasBeenSet = true; m_trustId = value; }

    /**
     * <p>The unique ID of the trust relationship.</p>
     */
    inline void SetTrustId(Aws::String&& value) { m_trustIdHasBeenSet = true; m_trustId = std::move(value); }

    /**
     * <p>The unique ID of the trust relationship.</p>
     */
    inline void SetTrustId(const char* value) { m_trustIdHasBeenSet = true; m_trustId.assign(value); }

    /**
     * <p>The unique ID of the trust relationship.</p>
     */
    inline Trust& WithTrustId(const Aws::String& value) { SetTrustId(value); return *this;}

    /**
     * <p>The unique ID of the trust relationship.</p>
     */
    inline Trust& WithTrustId(Aws::String&& value) { SetTrustId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the trust relationship.</p>
     */
    inline Trust& WithTrustId(const char* value) { SetTrustId(value); return *this;}


    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.</p>
     */
    inline const Aws::String& GetRemoteDomainName() const{ return m_remoteDomainName; }

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.</p>
     */
    inline bool RemoteDomainNameHasBeenSet() const { return m_remoteDomainNameHasBeenSet; }

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.</p>
     */
    inline void SetRemoteDomainName(const Aws::String& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = value; }

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.</p>
     */
    inline void SetRemoteDomainName(Aws::String&& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = std::move(value); }

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.</p>
     */
    inline void SetRemoteDomainName(const char* value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName.assign(value); }

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.</p>
     */
    inline Trust& WithRemoteDomainName(const Aws::String& value) { SetRemoteDomainName(value); return *this;}

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.</p>
     */
    inline Trust& WithRemoteDomainName(Aws::String&& value) { SetRemoteDomainName(std::move(value)); return *this;}

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.</p>
     */
    inline Trust& WithRemoteDomainName(const char* value) { SetRemoteDomainName(value); return *this;}


    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline const TrustType& GetTrustType() const{ return m_trustType; }

    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline bool TrustTypeHasBeenSet() const { return m_trustTypeHasBeenSet; }

    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline void SetTrustType(const TrustType& value) { m_trustTypeHasBeenSet = true; m_trustType = value; }

    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline void SetTrustType(TrustType&& value) { m_trustTypeHasBeenSet = true; m_trustType = std::move(value); }

    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline Trust& WithTrustType(const TrustType& value) { SetTrustType(value); return *this;}

    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline Trust& WithTrustType(TrustType&& value) { SetTrustType(std::move(value)); return *this;}


    /**
     * <p>The trust relationship direction.</p>
     */
    inline const TrustDirection& GetTrustDirection() const{ return m_trustDirection; }

    /**
     * <p>The trust relationship direction.</p>
     */
    inline bool TrustDirectionHasBeenSet() const { return m_trustDirectionHasBeenSet; }

    /**
     * <p>The trust relationship direction.</p>
     */
    inline void SetTrustDirection(const TrustDirection& value) { m_trustDirectionHasBeenSet = true; m_trustDirection = value; }

    /**
     * <p>The trust relationship direction.</p>
     */
    inline void SetTrustDirection(TrustDirection&& value) { m_trustDirectionHasBeenSet = true; m_trustDirection = std::move(value); }

    /**
     * <p>The trust relationship direction.</p>
     */
    inline Trust& WithTrustDirection(const TrustDirection& value) { SetTrustDirection(value); return *this;}

    /**
     * <p>The trust relationship direction.</p>
     */
    inline Trust& WithTrustDirection(TrustDirection&& value) { SetTrustDirection(std::move(value)); return *this;}


    /**
     * <p>The trust relationship state.</p>
     */
    inline const TrustState& GetTrustState() const{ return m_trustState; }

    /**
     * <p>The trust relationship state.</p>
     */
    inline bool TrustStateHasBeenSet() const { return m_trustStateHasBeenSet; }

    /**
     * <p>The trust relationship state.</p>
     */
    inline void SetTrustState(const TrustState& value) { m_trustStateHasBeenSet = true; m_trustState = value; }

    /**
     * <p>The trust relationship state.</p>
     */
    inline void SetTrustState(TrustState&& value) { m_trustStateHasBeenSet = true; m_trustState = std::move(value); }

    /**
     * <p>The trust relationship state.</p>
     */
    inline Trust& WithTrustState(const TrustState& value) { SetTrustState(value); return *this;}

    /**
     * <p>The trust relationship state.</p>
     */
    inline Trust& WithTrustState(TrustState&& value) { SetTrustState(std::move(value)); return *this;}


    /**
     * <p>The date and time that the trust relationship was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDateTime() const{ return m_createdDateTime; }

    /**
     * <p>The date and time that the trust relationship was created.</p>
     */
    inline bool CreatedDateTimeHasBeenSet() const { return m_createdDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the trust relationship was created.</p>
     */
    inline void SetCreatedDateTime(const Aws::Utils::DateTime& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = value; }

    /**
     * <p>The date and time that the trust relationship was created.</p>
     */
    inline void SetCreatedDateTime(Aws::Utils::DateTime&& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = std::move(value); }

    /**
     * <p>The date and time that the trust relationship was created.</p>
     */
    inline Trust& WithCreatedDateTime(const Aws::Utils::DateTime& value) { SetCreatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the trust relationship was created.</p>
     */
    inline Trust& WithCreatedDateTime(Aws::Utils::DateTime&& value) { SetCreatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the trust relationship was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time that the trust relationship was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the trust relationship was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the trust relationship was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the trust relationship was last updated.</p>
     */
    inline Trust& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the trust relationship was last updated.</p>
     */
    inline Trust& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the TrustState was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetStateLastUpdatedDateTime() const{ return m_stateLastUpdatedDateTime; }

    /**
     * <p>The date and time that the TrustState was last updated.</p>
     */
    inline bool StateLastUpdatedDateTimeHasBeenSet() const { return m_stateLastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the TrustState was last updated.</p>
     */
    inline void SetStateLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_stateLastUpdatedDateTimeHasBeenSet = true; m_stateLastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the TrustState was last updated.</p>
     */
    inline void SetStateLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_stateLastUpdatedDateTimeHasBeenSet = true; m_stateLastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the TrustState was last updated.</p>
     */
    inline Trust& WithStateLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetStateLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the TrustState was last updated.</p>
     */
    inline Trust& WithStateLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetStateLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The reason for the TrustState.</p>
     */
    inline const Aws::String& GetTrustStateReason() const{ return m_trustStateReason; }

    /**
     * <p>The reason for the TrustState.</p>
     */
    inline bool TrustStateReasonHasBeenSet() const { return m_trustStateReasonHasBeenSet; }

    /**
     * <p>The reason for the TrustState.</p>
     */
    inline void SetTrustStateReason(const Aws::String& value) { m_trustStateReasonHasBeenSet = true; m_trustStateReason = value; }

    /**
     * <p>The reason for the TrustState.</p>
     */
    inline void SetTrustStateReason(Aws::String&& value) { m_trustStateReasonHasBeenSet = true; m_trustStateReason = std::move(value); }

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
    inline Trust& WithTrustStateReason(Aws::String&& value) { SetTrustStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the TrustState.</p>
     */
    inline Trust& WithTrustStateReason(const char* value) { SetTrustStateReason(value); return *this;}


    /**
     * <p>Current state of selective authentication for the trust.</p>
     */
    inline const SelectiveAuth& GetSelectiveAuth() const{ return m_selectiveAuth; }

    /**
     * <p>Current state of selective authentication for the trust.</p>
     */
    inline bool SelectiveAuthHasBeenSet() const { return m_selectiveAuthHasBeenSet; }

    /**
     * <p>Current state of selective authentication for the trust.</p>
     */
    inline void SetSelectiveAuth(const SelectiveAuth& value) { m_selectiveAuthHasBeenSet = true; m_selectiveAuth = value; }

    /**
     * <p>Current state of selective authentication for the trust.</p>
     */
    inline void SetSelectiveAuth(SelectiveAuth&& value) { m_selectiveAuthHasBeenSet = true; m_selectiveAuth = std::move(value); }

    /**
     * <p>Current state of selective authentication for the trust.</p>
     */
    inline Trust& WithSelectiveAuth(const SelectiveAuth& value) { SetSelectiveAuth(value); return *this;}

    /**
     * <p>Current state of selective authentication for the trust.</p>
     */
    inline Trust& WithSelectiveAuth(SelectiveAuth&& value) { SetSelectiveAuth(std::move(value)); return *this;}

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

    SelectiveAuth m_selectiveAuth;
    bool m_selectiveAuthHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
