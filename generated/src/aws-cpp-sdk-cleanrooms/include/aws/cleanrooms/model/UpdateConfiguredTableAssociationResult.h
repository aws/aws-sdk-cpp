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
    AWS_CLEANROOMS_API UpdateConfiguredTableAssociationResult();
    AWS_CLEANROOMS_API UpdateConfiguredTableAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateConfiguredTableAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The entire updated configured table association.</p>
     */
    inline const ConfiguredTableAssociation& GetConfiguredTableAssociation() const{ return m_configuredTableAssociation; }

    /**
     * <p>The entire updated configured table association.</p>
     */
    inline void SetConfiguredTableAssociation(const ConfiguredTableAssociation& value) { m_configuredTableAssociation = value; }

    /**
     * <p>The entire updated configured table association.</p>
     */
    inline void SetConfiguredTableAssociation(ConfiguredTableAssociation&& value) { m_configuredTableAssociation = std::move(value); }

    /**
     * <p>The entire updated configured table association.</p>
     */
    inline UpdateConfiguredTableAssociationResult& WithConfiguredTableAssociation(const ConfiguredTableAssociation& value) { SetConfiguredTableAssociation(value); return *this;}

    /**
     * <p>The entire updated configured table association.</p>
     */
    inline UpdateConfiguredTableAssociationResult& WithConfiguredTableAssociation(ConfiguredTableAssociation&& value) { SetConfiguredTableAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateConfiguredTableAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateConfiguredTableAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateConfiguredTableAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConfiguredTableAssociation m_configuredTableAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
