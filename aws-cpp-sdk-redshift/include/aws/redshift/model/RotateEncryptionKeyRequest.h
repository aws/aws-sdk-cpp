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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_REDSHIFT_API RotateEncryptionKeyRequest : public RedshiftRequest
  {
  public:
    RotateEncryptionKeyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The unique identifier of the cluster that you want to rotate the encryption
     * keys for.</p> <p>Constraints: Must be the name of valid cluster that has
     * encryption enabled.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of the cluster that you want to rotate the encryption
     * keys for.</p> <p>Constraints: Must be the name of valid cluster that has
     * encryption enabled.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster that you want to rotate the encryption
     * keys for.</p> <p>Constraints: Must be the name of valid cluster that has
     * encryption enabled.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster that you want to rotate the encryption
     * keys for.</p> <p>Constraints: Must be the name of valid cluster that has
     * encryption enabled.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the cluster that you want to rotate the encryption
     * keys for.</p> <p>Constraints: Must be the name of valid cluster that has
     * encryption enabled.</p>
     */
    inline RotateEncryptionKeyRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster that you want to rotate the encryption
     * keys for.</p> <p>Constraints: Must be the name of valid cluster that has
     * encryption enabled.</p>
     */
    inline RotateEncryptionKeyRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster that you want to rotate the encryption
     * keys for.</p> <p>Constraints: Must be the name of valid cluster that has
     * encryption enabled.</p>
     */
    inline RotateEncryptionKeyRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

  private:
    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
