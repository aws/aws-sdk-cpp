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
    AWS_DIRECTORYSERVICE_API Trust() = default;
    AWS_DIRECTORYSERVICE_API Trust(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Trust& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Directory ID of the Amazon Web Services directory involved in the trust
     * relationship.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    Trust& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the trust relationship.</p>
     */
    inline const Aws::String& GetTrustId() const { return m_trustId; }
    inline bool TrustIdHasBeenSet() const { return m_trustIdHasBeenSet; }
    template<typename TrustIdT = Aws::String>
    void SetTrustId(TrustIdT&& value) { m_trustIdHasBeenSet = true; m_trustId = std::forward<TrustIdT>(value); }
    template<typename TrustIdT = Aws::String>
    Trust& WithTrustId(TrustIdT&& value) { SetTrustId(std::forward<TrustIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain involved in the
     * trust relationship.</p>
     */
    inline const Aws::String& GetRemoteDomainName() const { return m_remoteDomainName; }
    inline bool RemoteDomainNameHasBeenSet() const { return m_remoteDomainNameHasBeenSet; }
    template<typename RemoteDomainNameT = Aws::String>
    void SetRemoteDomainName(RemoteDomainNameT&& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = std::forward<RemoteDomainNameT>(value); }
    template<typename RemoteDomainNameT = Aws::String>
    Trust& WithRemoteDomainName(RemoteDomainNameT&& value) { SetRemoteDomainName(std::forward<RemoteDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline TrustType GetTrustType() const { return m_trustType; }
    inline bool TrustTypeHasBeenSet() const { return m_trustTypeHasBeenSet; }
    inline void SetTrustType(TrustType value) { m_trustTypeHasBeenSet = true; m_trustType = value; }
    inline Trust& WithTrustType(TrustType value) { SetTrustType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trust relationship direction.</p>
     */
    inline TrustDirection GetTrustDirection() const { return m_trustDirection; }
    inline bool TrustDirectionHasBeenSet() const { return m_trustDirectionHasBeenSet; }
    inline void SetTrustDirection(TrustDirection value) { m_trustDirectionHasBeenSet = true; m_trustDirection = value; }
    inline Trust& WithTrustDirection(TrustDirection value) { SetTrustDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trust relationship state.</p>
     */
    inline TrustState GetTrustState() const { return m_trustState; }
    inline bool TrustStateHasBeenSet() const { return m_trustStateHasBeenSet; }
    inline void SetTrustState(TrustState value) { m_trustStateHasBeenSet = true; m_trustState = value; }
    inline Trust& WithTrustState(TrustState value) { SetTrustState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the trust relationship was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDateTime() const { return m_createdDateTime; }
    inline bool CreatedDateTimeHasBeenSet() const { return m_createdDateTimeHasBeenSet; }
    template<typename CreatedDateTimeT = Aws::Utils::DateTime>
    void SetCreatedDateTime(CreatedDateTimeT&& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = std::forward<CreatedDateTimeT>(value); }
    template<typename CreatedDateTimeT = Aws::Utils::DateTime>
    Trust& WithCreatedDateTime(CreatedDateTimeT&& value) { SetCreatedDateTime(std::forward<CreatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the trust relationship was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    Trust& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the TrustState was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetStateLastUpdatedDateTime() const { return m_stateLastUpdatedDateTime; }
    inline bool StateLastUpdatedDateTimeHasBeenSet() const { return m_stateLastUpdatedDateTimeHasBeenSet; }
    template<typename StateLastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetStateLastUpdatedDateTime(StateLastUpdatedDateTimeT&& value) { m_stateLastUpdatedDateTimeHasBeenSet = true; m_stateLastUpdatedDateTime = std::forward<StateLastUpdatedDateTimeT>(value); }
    template<typename StateLastUpdatedDateTimeT = Aws::Utils::DateTime>
    Trust& WithStateLastUpdatedDateTime(StateLastUpdatedDateTimeT&& value) { SetStateLastUpdatedDateTime(std::forward<StateLastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the TrustState.</p>
     */
    inline const Aws::String& GetTrustStateReason() const { return m_trustStateReason; }
    inline bool TrustStateReasonHasBeenSet() const { return m_trustStateReasonHasBeenSet; }
    template<typename TrustStateReasonT = Aws::String>
    void SetTrustStateReason(TrustStateReasonT&& value) { m_trustStateReasonHasBeenSet = true; m_trustStateReason = std::forward<TrustStateReasonT>(value); }
    template<typename TrustStateReasonT = Aws::String>
    Trust& WithTrustStateReason(TrustStateReasonT&& value) { SetTrustStateReason(std::forward<TrustStateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current state of selective authentication for the trust.</p>
     */
    inline SelectiveAuth GetSelectiveAuth() const { return m_selectiveAuth; }
    inline bool SelectiveAuthHasBeenSet() const { return m_selectiveAuthHasBeenSet; }
    inline void SetSelectiveAuth(SelectiveAuth value) { m_selectiveAuthHasBeenSet = true; m_selectiveAuth = value; }
    inline Trust& WithSelectiveAuth(SelectiveAuth value) { SetSelectiveAuth(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_trustId;
    bool m_trustIdHasBeenSet = false;

    Aws::String m_remoteDomainName;
    bool m_remoteDomainNameHasBeenSet = false;

    TrustType m_trustType{TrustType::NOT_SET};
    bool m_trustTypeHasBeenSet = false;

    TrustDirection m_trustDirection{TrustDirection::NOT_SET};
    bool m_trustDirectionHasBeenSet = false;

    TrustState m_trustState{TrustState::NOT_SET};
    bool m_trustStateHasBeenSet = false;

    Aws::Utils::DateTime m_createdDateTime{};
    bool m_createdDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stateLastUpdatedDateTime{};
    bool m_stateLastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_trustStateReason;
    bool m_trustStateReasonHasBeenSet = false;

    SelectiveAuth m_selectiveAuth{SelectiveAuth::NOT_SET};
    bool m_selectiveAuthHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
