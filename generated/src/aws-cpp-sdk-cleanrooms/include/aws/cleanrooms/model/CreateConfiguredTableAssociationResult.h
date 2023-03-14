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
  class CreateConfiguredTableAssociationResult
  {
  public:
    AWS_CLEANROOMS_API CreateConfiguredTableAssociationResult();
    AWS_CLEANROOMS_API CreateConfiguredTableAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API CreateConfiguredTableAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The entire configured table association object.</p>
     */
    inline const ConfiguredTableAssociation& GetConfiguredTableAssociation() const{ return m_configuredTableAssociation; }

    /**
     * <p>The entire configured table association object.</p>
     */
    inline void SetConfiguredTableAssociation(const ConfiguredTableAssociation& value) { m_configuredTableAssociation = value; }

    /**
     * <p>The entire configured table association object.</p>
     */
    inline void SetConfiguredTableAssociation(ConfiguredTableAssociation&& value) { m_configuredTableAssociation = std::move(value); }

    /**
     * <p>The entire configured table association object.</p>
     */
    inline CreateConfiguredTableAssociationResult& WithConfiguredTableAssociation(const ConfiguredTableAssociation& value) { SetConfiguredTableAssociation(value); return *this;}

    /**
     * <p>The entire configured table association object.</p>
     */
    inline CreateConfiguredTableAssociationResult& WithConfiguredTableAssociation(ConfiguredTableAssociation&& value) { SetConfiguredTableAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateConfiguredTableAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateConfiguredTableAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateConfiguredTableAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConfiguredTableAssociation m_configuredTableAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
