﻿/*
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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RebootDBInstanceMessage">AWS
   * API Reference</a></p>
   */
  class AWS_NEPTUNE_API RebootDBInstanceRequest : public NeptuneRequest
  {
  public:
    RebootDBInstanceRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RebootDBInstance"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline RebootDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline RebootDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline RebootDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p> When <code>true</code>, the reboot is conducted through a MultiAZ failover.
     * </p> <p>Constraint: You can't specify <code>true</code> if the instance is not
     * configured for MultiAZ.</p>
     */
    inline bool GetForceFailover() const{ return m_forceFailover; }

    /**
     * <p> When <code>true</code>, the reboot is conducted through a MultiAZ failover.
     * </p> <p>Constraint: You can't specify <code>true</code> if the instance is not
     * configured for MultiAZ.</p>
     */
    inline void SetForceFailover(bool value) { m_forceFailoverHasBeenSet = true; m_forceFailover = value; }

    /**
     * <p> When <code>true</code>, the reboot is conducted through a MultiAZ failover.
     * </p> <p>Constraint: You can't specify <code>true</code> if the instance is not
     * configured for MultiAZ.</p>
     */
    inline RebootDBInstanceRequest& WithForceFailover(bool value) { SetForceFailover(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    bool m_forceFailover;
    bool m_forceFailoverHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
