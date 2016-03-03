/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API FailoverDBClusterRequest : public RDSRequest
  {
  public:
    FailoverDBClusterRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}

  private:
    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
