/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>DeleteDBInstance</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBInstanceMessage">AWS
   * API Reference</a></p>
   */
  class DeleteDBInstanceRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API DeleteDBInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBInstance"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The instance identifier for the instance to be deleted. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name of an
     * existing instance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The instance identifier for the instance to be deleted. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name of an
     * existing instance.</p> </li> </ul>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The instance identifier for the instance to be deleted. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name of an
     * existing instance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The instance identifier for the instance to be deleted. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name of an
     * existing instance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The instance identifier for the instance to be deleted. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name of an
     * existing instance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The instance identifier for the instance to be deleted. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name of an
     * existing instance.</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The instance identifier for the instance to be deleted. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name of an
     * existing instance.</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The instance identifier for the instance to be deleted. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name of an
     * existing instance.</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
