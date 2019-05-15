/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>The status of the DB parameter group.</p> <p>This data type is used as a
   * response element in the following actions:</p> <ul> <li> <p>
   * <code>CreateDBInstance</code> </p> </li> <li> <p>
   * <code>CreateDBInstanceReadReplica</code> </p> </li> <li> <p>
   * <code>DeleteDBInstance</code> </p> </li> <li> <p> <code>ModifyDBInstance</code>
   * </p> </li> <li> <p> <code>RebootDBInstance</code> </p> </li> <li> <p>
   * <code>RestoreDBInstanceFromDBSnapshot</code> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBParameterGroupStatus">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DBParameterGroupStatus
  {
  public:
    DBParameterGroupStatus();
    DBParameterGroupStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBParameterGroupStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the DP parameter group.</p>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DP parameter group.</p>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DP parameter group.</p>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DP parameter group.</p>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DP parameter group.</p>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DP parameter group.</p>
     */
    inline DBParameterGroupStatus& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DP parameter group.</p>
     */
    inline DBParameterGroupStatus& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DP parameter group.</p>
     */
    inline DBParameterGroupStatus& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>The status of parameter updates.</p>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline DBParameterGroupStatus& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}

    /**
     * <p>The status of parameter updates.</p>
     */
    inline DBParameterGroupStatus& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}

    /**
     * <p>The status of parameter updates.</p>
     */
    inline DBParameterGroupStatus& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}

  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
