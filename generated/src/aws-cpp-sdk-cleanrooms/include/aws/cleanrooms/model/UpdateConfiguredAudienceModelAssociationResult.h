/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredAudienceModelAssociation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CleanRooms
{
namespace Model
{
  class UpdateConfiguredAudienceModelAssociationResult
  {
  public:
    AWS_CLEANROOMS_API UpdateConfiguredAudienceModelAssociationResult() = default;
    AWS_CLEANROOMS_API UpdateConfiguredAudienceModelAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateConfiguredAudienceModelAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the configured audience model association that you updated.</p>
     */
    inline const ConfiguredAudienceModelAssociation& GetConfiguredAudienceModelAssociation() const { return m_configuredAudienceModelAssociation; }
    template<typename ConfiguredAudienceModelAssociationT = ConfiguredAudienceModelAssociation>
    void SetConfiguredAudienceModelAssociation(ConfiguredAudienceModelAssociationT&& value) { m_configuredAudienceModelAssociationHasBeenSet = true; m_configuredAudienceModelAssociation = std::forward<ConfiguredAudienceModelAssociationT>(value); }
    template<typename ConfiguredAudienceModelAssociationT = ConfiguredAudienceModelAssociation>
    UpdateConfiguredAudienceModelAssociationResult& WithConfiguredAudienceModelAssociation(ConfiguredAudienceModelAssociationT&& value) { SetConfiguredAudienceModelAssociation(std::forward<ConfiguredAudienceModelAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateConfiguredAudienceModelAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConfiguredAudienceModelAssociation m_configuredAudienceModelAssociation;
    bool m_configuredAudienceModelAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
