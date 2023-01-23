/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociation.h>
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
  class GetConfiguredTableAssociationResult
  {
  public:
    AWS_CLEANROOMS_API GetConfiguredTableAssociationResult();
    AWS_CLEANROOMS_API GetConfiguredTableAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetConfiguredTableAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetConfiguredTableAssociationResult& WithConfiguredTableAssociation(const ConfiguredTableAssociation& value) { SetConfiguredTableAssociation(value); return *this;}

    /**
     * <p>The entire configured table association object.</p>
     */
    inline GetConfiguredTableAssociationResult& WithConfiguredTableAssociation(ConfiguredTableAssociation&& value) { SetConfiguredTableAssociation(std::move(value)); return *this;}

  private:

    ConfiguredTableAssociation m_configuredTableAssociation;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
