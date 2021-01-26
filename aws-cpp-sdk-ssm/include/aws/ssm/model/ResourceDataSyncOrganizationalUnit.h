/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The AWS Organizations organizational unit data source for the
   * sync.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncOrganizationalUnit">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ResourceDataSyncOrganizationalUnit
  {
  public:
    ResourceDataSyncOrganizationalUnit();
    ResourceDataSyncOrganizationalUnit(Aws::Utils::Json::JsonView jsonValue);
    ResourceDataSyncOrganizationalUnit& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS Organization unit ID data source for the sync.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const{ return m_organizationalUnitId; }

    /**
     * <p>The AWS Organization unit ID data source for the sync.</p>
     */
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }

    /**
     * <p>The AWS Organization unit ID data source for the sync.</p>
     */
    inline void SetOrganizationalUnitId(const Aws::String& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = value; }

    /**
     * <p>The AWS Organization unit ID data source for the sync.</p>
     */
    inline void SetOrganizationalUnitId(Aws::String&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::move(value); }

    /**
     * <p>The AWS Organization unit ID data source for the sync.</p>
     */
    inline void SetOrganizationalUnitId(const char* value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId.assign(value); }

    /**
     * <p>The AWS Organization unit ID data source for the sync.</p>
     */
    inline ResourceDataSyncOrganizationalUnit& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}

    /**
     * <p>The AWS Organization unit ID data source for the sync.</p>
     */
    inline ResourceDataSyncOrganizationalUnit& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(std::move(value)); return *this;}

    /**
     * <p>The AWS Organization unit ID data source for the sync.</p>
     */
    inline ResourceDataSyncOrganizationalUnit& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}

  private:

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
