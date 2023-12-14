/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/X12TransactionSet.h>
#include <aws/b2bi/model/X12Version.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>A structure that contains the X12 transaction set and version. The X12
   * structure is used when the system transforms an EDI (electronic data
   * interchange) file.</p>  <p>If an EDI input file contains more than one
   * transaction, each transaction must have the same transaction set and version,
   * for example 214/4010. If not, the transformer cannot parse the file.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12Details">AWS API
   * Reference</a></p>
   */
  class X12Details
  {
  public:
    AWS_B2BI_API X12Details();
    AWS_B2BI_API X12Details(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12Details& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns an enumerated type where each value identifies an X12 transaction
     * set. Transaction sets are maintained by the X12 Accredited Standards
     * Committee.</p>
     */
    inline const X12TransactionSet& GetTransactionSet() const{ return m_transactionSet; }

    /**
     * <p>Returns an enumerated type where each value identifies an X12 transaction
     * set. Transaction sets are maintained by the X12 Accredited Standards
     * Committee.</p>
     */
    inline bool TransactionSetHasBeenSet() const { return m_transactionSetHasBeenSet; }

    /**
     * <p>Returns an enumerated type where each value identifies an X12 transaction
     * set. Transaction sets are maintained by the X12 Accredited Standards
     * Committee.</p>
     */
    inline void SetTransactionSet(const X12TransactionSet& value) { m_transactionSetHasBeenSet = true; m_transactionSet = value; }

    /**
     * <p>Returns an enumerated type where each value identifies an X12 transaction
     * set. Transaction sets are maintained by the X12 Accredited Standards
     * Committee.</p>
     */
    inline void SetTransactionSet(X12TransactionSet&& value) { m_transactionSetHasBeenSet = true; m_transactionSet = std::move(value); }

    /**
     * <p>Returns an enumerated type where each value identifies an X12 transaction
     * set. Transaction sets are maintained by the X12 Accredited Standards
     * Committee.</p>
     */
    inline X12Details& WithTransactionSet(const X12TransactionSet& value) { SetTransactionSet(value); return *this;}

    /**
     * <p>Returns an enumerated type where each value identifies an X12 transaction
     * set. Transaction sets are maintained by the X12 Accredited Standards
     * Committee.</p>
     */
    inline X12Details& WithTransactionSet(X12TransactionSet&& value) { SetTransactionSet(std::move(value)); return *this;}


    /**
     * <p>Returns the version to use for the specified X12 transaction set. Supported
     * versions are <code>4010</code>, <code>4030</code>, and <code>5010</code>.</p>
     */
    inline const X12Version& GetVersion() const{ return m_version; }

    /**
     * <p>Returns the version to use for the specified X12 transaction set. Supported
     * versions are <code>4010</code>, <code>4030</code>, and <code>5010</code>.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Returns the version to use for the specified X12 transaction set. Supported
     * versions are <code>4010</code>, <code>4030</code>, and <code>5010</code>.</p>
     */
    inline void SetVersion(const X12Version& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Returns the version to use for the specified X12 transaction set. Supported
     * versions are <code>4010</code>, <code>4030</code>, and <code>5010</code>.</p>
     */
    inline void SetVersion(X12Version&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Returns the version to use for the specified X12 transaction set. Supported
     * versions are <code>4010</code>, <code>4030</code>, and <code>5010</code>.</p>
     */
    inline X12Details& WithVersion(const X12Version& value) { SetVersion(value); return *this;}

    /**
     * <p>Returns the version to use for the specified X12 transaction set. Supported
     * versions are <code>4010</code>, <code>4030</code>, and <code>5010</code>.</p>
     */
    inline X12Details& WithVersion(X12Version&& value) { SetVersion(std::move(value)); return *this;}

  private:

    X12TransactionSet m_transactionSet;
    bool m_transactionSetHasBeenSet = false;

    X12Version m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
