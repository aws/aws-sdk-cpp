/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the policy grant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateEnvironmentProfilePolicyGrantDetail">AWS
   * API Reference</a></p>
   */
  class CreateEnvironmentProfilePolicyGrantDetail
  {
  public:
    AWS_DATAZONE_API CreateEnvironmentProfilePolicyGrantDetail();
    AWS_DATAZONE_API CreateEnvironmentProfilePolicyGrantDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API CreateEnvironmentProfilePolicyGrantDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the domain unit.</p>
     */
    inline const Aws::String& GetDomainUnitId() const{ return m_domainUnitId; }
    inline bool DomainUnitIdHasBeenSet() const { return m_domainUnitIdHasBeenSet; }
    inline void SetDomainUnitId(const Aws::String& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = value; }
    inline void SetDomainUnitId(Aws::String&& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = std::move(value); }
    inline void SetDomainUnitId(const char* value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId.assign(value); }
    inline CreateEnvironmentProfilePolicyGrantDetail& WithDomainUnitId(const Aws::String& value) { SetDomainUnitId(value); return *this;}
    inline CreateEnvironmentProfilePolicyGrantDetail& WithDomainUnitId(Aws::String&& value) { SetDomainUnitId(std::move(value)); return *this;}
    inline CreateEnvironmentProfilePolicyGrantDetail& WithDomainUnitId(const char* value) { SetDomainUnitId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainUnitId;
    bool m_domainUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
