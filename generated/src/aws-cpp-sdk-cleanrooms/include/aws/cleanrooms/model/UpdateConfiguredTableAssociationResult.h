/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociation.h>
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
  class UpdateConfiguredTableAssociationResult
  {
  public:
    AWS_CLEANROOMS_API UpdateConfiguredTableAssociationResult() = default;
    AWS_CLEANROOMS_API UpdateConfiguredTableAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateConfiguredTableAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The entire updated configured table association.</p>
     */
    inline const ConfiguredTableAssociation& GetConfiguredTableAssociation() const { return m_configuredTableAssociation; }
    template<typename ConfiguredTableAssociationT = ConfiguredTableAssociation>
    void SetConfiguredTableAssociation(ConfiguredTableAssociationT&& value) { m_configuredTableAssociationHasBeenSet = true; m_configuredTableAssociation = std::forward<ConfiguredTableAssociationT>(value); }
    template<typename ConfiguredTableAssociationT = ConfiguredTableAssociation>
    UpdateConfiguredTableAssociationResult& WithConfiguredTableAssociation(ConfiguredTableAssociationT&& value) { SetConfiguredTableAssociation(std::forward<ConfiguredTableAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateConfiguredTableAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConfiguredTableAssociation m_configuredTableAssociation;
    bool m_configuredTableAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
