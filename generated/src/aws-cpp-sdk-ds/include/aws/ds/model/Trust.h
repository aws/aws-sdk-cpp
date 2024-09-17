/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes a trust relationship between an Managed Microsoft AD directory and
   * an external domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/Trust">AWS API
   * Reference</a></p>
   */
  class Trust
  {
  public:
    AWS_DIRECTORYSERVICE_API Trust();
    AWS_DIRECTORYSERVICE_API Trust(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Trust& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Directory ID of the Amazon Web Services directory involved in the trust
     * relationship.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline Trust& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline Trust& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline Trust& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the trust relationship.</p>
     */
    inline const Aws::String& GetTrustId() const{ return m_trustId; }
    inline bool TrustIdHasBeenSet() const { return m_trustIdHasBeenSet; }
    inline void SetTrustId(const Aws::String& value) { m_trustIdHasBeenSet = true; m_trustId = value; }
    inline void SetTrustId(Aws::String&& value) { m_trustIdHasBeenSet = true; m_trustId = std::move(value); }
    inline void SetTrustId(const char* value) { m_trustIdHasBeenSet = true; m_trustId.assign(value); }
    inline Trust& WithTrustId(const Aws::String& value) { SetTrustId(value); return *this;}
    inline Trust& WithTrustId(Aws::String&& value) { SetTrustId(std::move(value)); return *this;}
    inline Trust& WithTrustId(const char* value) { SetTrustId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.</p>
     */
    inline const Aws::String& GetRemoteDomainName() const{ return m_remoteDomainName; }
    inline bool RemoteDomainNameHasBeenSet() const { return m_remoteDomainNameHasBeenSet; }
    inline void SetRemoteDomainName(const Aws::String& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = value; }
    inline void SetRemoteDomainName(Aws::String&& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = std::move(value); }
    inline void SetRemoteDomainName(const char* value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName.assign(value); }
    inline Trust& WithRemoteDomainName(const Aws::String& value) { SetRemoteDomainName(value); return *this;}
    inline Trust& WithRemoteDomainName(Aws::String&& value) { SetRemoteDomainName(std::move(value)); return *this;}
    inline Trust& WithRemoteDomainName(const char* value) { SetRemoteDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline const TrustType& GetTrustType() const{ return m_trustType; }
    inline bool TrustTypeHasBeenSet() const { return m_trustTypeHasBeenSet; }
    inline void SetTrustType(const TrustType& value) { m_trustTypeHasBeenSet = true; m_trustType = value; }
    inline void SetTrustType(TrustType&& value) { m_trustTypeHasBeenSet = true; m_trustType = std::move(value); }
    inline Trust& WithTrustType(const TrustType& value) { SetTrustType(value); return *this;}
    inline Trust& WithTrustType(TrustType&& value) { SetTrustType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trust relationship direction.</p>
     */
    inline const TrustDirection& GetTrustDirection() const{ return m_trustDirection; }
    inline bool TrustDirectionHasBeenSet() const { return m_trustDirectionHasBeenSet; }
    inline void SetTrustDirection(const TrustDirection& value) { m_trustDirectionHasBeenSet = true; m_trustDirection = value; }
    inline void SetTrustDirection(TrustDirection&& value) { m_trustDirectionHasBeenSet = true; m_trustDirection = std::move(value); }
    inline Trust& WithTrustDirection(const TrustDirection& value) { SetTrustDirection(value); return *this;}
    inline Trust& WithTrustDirection(TrustDirection&& value) { SetTrustDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trust relationship state.</p>
     */
    inline const TrustState& GetTrustState() const{ return m_trustState; }
    inline bool TrustStateHasBeenSet() const { return m_trustStateHasBeenSet; }
    inline void SetTrustState(const TrustState& value) { m_trustStateHasBeenSet = true; m_trustState = value; }
    inline void SetTrustState(TrustState&& value) { m_trustStateHasBeenSet = true; m_trustState = std::move(value); }
    inline Trust& WithTrustState(const TrustState& value) { SetTrustState(value); return *this;}
    inline Trust& WithTrustState(TrustState&& value) { SetTrustState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the trust relationship was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDateTime() const{ return m_createdDateTime; }
    inline bool CreatedDateTimeHasBeenSet() const { return m_createdDateTimeHasBeenSet; }
    inline void SetCreatedDateTime(const Aws::Utils::DateTime& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = value; }
    inline void SetCreatedDateTime(Aws::Utils::DateTime&& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = std::move(value); }
    inline Trust& WithCreatedDateTime(const Aws::Utils::DateTime& value) { SetCreatedDateTime(value); return *this;}
    inline Trust& WithCreatedDateTime(Aws::Utils::DateTime&& value) { SetCreatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the trust relationship was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline Trust& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline Trust& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the TrustState was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetStateLastUpdatedDateTime() const{ return m_stateLastUpdatedDateTime; }
    inline bool StateLastUpdatedDateTimeHasBeenSet() const { return m_stateLastUpdatedDateTimeHasBeenSet; }
    inline void SetStateLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_stateLastUpdatedDateTimeHasBeenSet = true; m_stateLastUpdatedDateTime = value; }
    inline void SetStateLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_stateLastUpdatedDateTimeHasBeenSet = true; m_stateLastUpdatedDateTime = std::move(value); }
    inline Trust& WithStateLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetStateLastUpdatedDateTime(value); return *this;}
    inline Trust& WithStateLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetStateLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the TrustState.</p>
     */
    inline const Aws::String& GetTrustStateReason() const{ return m_trustStateReason; }
    inline bool TrustStateReasonHasBeenSet() const { return m_trustStateReasonHasBeenSet; }
    inline void SetTrustStateReason(const Aws::String& value) { m_trustStateReasonHasBeenSet = true; m_trustStateReason = value; }
    inline void SetTrustStateReason(Aws::String&& value) { m_trustStateReasonHasBeenSet = true; m_trustStateReason = std::move(value); }
    inline void SetTrustStateReason(const char* value) { m_trustStateReasonHasBeenSet = true; m_trustStateReason.assign(value); }
    inline Trust& WithTrustStateReason(const Aws::String& value) { SetTrustStateReason(value); return *this;}
    inline Trust& WithTrustStateReason(Aws::String&& value) { SetTrustStateReason(std::move(value)); return *this;}
    inline Trust& WithTrustStateReason(const char* value) { SetTrustStateReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current state of selective authentication for the trust.</p>
     */
    inline const SelectiveAuth& GetSelectiveAuth() const{ return m_selectiveAuth; }
    inline bool SelectiveAuthHasBeenSet() const { return m_selectiveAuthHasBeenSet; }
    inline void SetSelectiveAuth(const SelectiveAuth& value) { m_selectiveAuthHasBeenSet = true; m_selectiveAuth = value; }
    inline void SetSelectiveAuth(SelectiveAuth&& value) { m_selectiveAuthHasBeenSet = true; m_selectiveAuth = std::move(value); }
    inline Trust& WithSelectiveAuth(const SelectiveAuth& value) { SetSelectiveAuth(value); return *this;}
    inline Trust& WithSelectiveAuth(SelectiveAuth&& value) { SetSelectiveAuth(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_trustId;
    bool m_trustIdHasBeenSet = false;

    Aws::String m_remoteDomainName;
    bool m_remoteDomainNameHasBeenSet = false;

    TrustType m_trustType;
    bool m_trustTypeHasBeenSet = false;

    TrustDirection m_trustDirection;
    bool m_trustDirectionHasBeenSet = false;

    TrustState m_trustState;
    bool m_trustStateHasBeenSet = false;

    Aws::Utils::DateTime m_createdDateTime;
    bool m_createdDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stateLastUpdatedDateTime;
    bool m_stateLastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_trustStateReason;
    bool m_trustStateReasonHasBeenSet = false;

    SelectiveAuth m_selectiveAuth;
    bool m_selectiveAuthHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
