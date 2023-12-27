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
  class CreateConfiguredAudienceModelAssociationResult
  {
  public:
    AWS_CLEANROOMS_API CreateConfiguredAudienceModelAssociationResult();
    AWS_CLEANROOMS_API CreateConfiguredAudienceModelAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API CreateConfiguredAudienceModelAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the configured audience model association.</p>
     */
    inline const ConfiguredAudienceModelAssociation& GetConfiguredAudienceModelAssociation() const{ return m_configuredAudienceModelAssociation; }

    /**
     * <p>Information about the configured audience model association.</p>
     */
    inline void SetConfiguredAudienceModelAssociation(const ConfiguredAudienceModelAssociation& value) { m_configuredAudienceModelAssociation = value; }

    /**
     * <p>Information about the configured audience model association.</p>
     */
    inline void SetConfiguredAudienceModelAssociation(ConfiguredAudienceModelAssociation&& value) { m_configuredAudienceModelAssociation = std::move(value); }

    /**
     * <p>Information about the configured audience model association.</p>
     */
    inline CreateConfiguredAudienceModelAssociationResult& WithConfiguredAudienceModelAssociation(const ConfiguredAudienceModelAssociation& value) { SetConfiguredAudienceModelAssociation(value); return *this;}

    /**
     * <p>Information about the configured audience model association.</p>
     */
    inline CreateConfiguredAudienceModelAssociationResult& WithConfiguredAudienceModelAssociation(ConfiguredAudienceModelAssociation&& value) { SetConfiguredAudienceModelAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateConfiguredAudienceModelAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateConfiguredAudienceModelAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateConfiguredAudienceModelAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConfiguredAudienceModelAssociation m_configuredAudienceModelAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
