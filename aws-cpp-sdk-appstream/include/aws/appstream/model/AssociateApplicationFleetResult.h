/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ApplicationFleetAssociation.h>
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
namespace AppStream
{
namespace Model
{
  class AssociateApplicationFleetResult
  {
  public:
    AWS_APPSTREAM_API AssociateApplicationFleetResult();
    AWS_APPSTREAM_API AssociateApplicationFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API AssociateApplicationFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If fleet name is specified, this returns the list of applications that are
     * associated to it. If application ARN is specified, this returns the list of
     * fleets to which it is associated.</p>
     */
    inline const ApplicationFleetAssociation& GetApplicationFleetAssociation() const{ return m_applicationFleetAssociation; }

    /**
     * <p>If fleet name is specified, this returns the list of applications that are
     * associated to it. If application ARN is specified, this returns the list of
     * fleets to which it is associated.</p>
     */
    inline void SetApplicationFleetAssociation(const ApplicationFleetAssociation& value) { m_applicationFleetAssociation = value; }

    /**
     * <p>If fleet name is specified, this returns the list of applications that are
     * associated to it. If application ARN is specified, this returns the list of
     * fleets to which it is associated.</p>
     */
    inline void SetApplicationFleetAssociation(ApplicationFleetAssociation&& value) { m_applicationFleetAssociation = std::move(value); }

    /**
     * <p>If fleet name is specified, this returns the list of applications that are
     * associated to it. If application ARN is specified, this returns the list of
     * fleets to which it is associated.</p>
     */
    inline AssociateApplicationFleetResult& WithApplicationFleetAssociation(const ApplicationFleetAssociation& value) { SetApplicationFleetAssociation(value); return *this;}

    /**
     * <p>If fleet name is specified, this returns the list of applications that are
     * associated to it. If application ARN is specified, this returns the list of
     * fleets to which it is associated.</p>
     */
    inline AssociateApplicationFleetResult& WithApplicationFleetAssociation(ApplicationFleetAssociation&& value) { SetApplicationFleetAssociation(std::move(value)); return *this;}

  private:

    ApplicationFleetAssociation m_applicationFleetAssociation;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
