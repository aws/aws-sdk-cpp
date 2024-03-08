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
    AWS_CLEANROOMS_API UpdateConfiguredAudienceModelAssociationResult();
    AWS_CLEANROOMS_API UpdateConfiguredAudienceModelAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateConfiguredAudienceModelAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the configured audience model association that you updated.</p>
     */
    inline const ConfiguredAudienceModelAssociation& GetConfiguredAudienceModelAssociation() const{ return m_configuredAudienceModelAssociation; }

    /**
     * <p>Details about the configured audience model association that you updated.</p>
     */
    inline void SetConfiguredAudienceModelAssociation(const ConfiguredAudienceModelAssociation& value) { m_configuredAudienceModelAssociation = value; }

    /**
     * <p>Details about the configured audience model association that you updated.</p>
     */
    inline void SetConfiguredAudienceModelAssociation(ConfiguredAudienceModelAssociation&& value) { m_configuredAudienceModelAssociation = std::move(value); }

    /**
     * <p>Details about the configured audience model association that you updated.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationResult& WithConfiguredAudienceModelAssociation(const ConfiguredAudienceModelAssociation& value) { SetConfiguredAudienceModelAssociation(value); return *this;}

    /**
     * <p>Details about the configured audience model association that you updated.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationResult& WithConfiguredAudienceModelAssociation(ConfiguredAudienceModelAssociation&& value) { SetConfiguredAudienceModelAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateConfiguredAudienceModelAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateConfiguredAudienceModelAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateConfiguredAudienceModelAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConfiguredAudienceModelAssociation m_configuredAudienceModelAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
