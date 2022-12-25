/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/ValueHolder.h>
#include <utility>

namespace Aws
{
namespace QLDB
{
namespace Model
{

  /**
   */
  class GetBlockRequest : public QLDBRequest
  {
  public:
    AWS_QLDB_API GetBlockRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBlock"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline GetBlockRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline GetBlockRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline GetBlockRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The location of the block that you want to request. An address is an Amazon
     * Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline const ValueHolder& GetBlockAddress() const{ return m_blockAddress; }

    /**
     * <p>The location of the block that you want to request. An address is an Amazon
     * Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline bool BlockAddressHasBeenSet() const { return m_blockAddressHasBeenSet; }

    /**
     * <p>The location of the block that you want to request. An address is an Amazon
     * Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline void SetBlockAddress(const ValueHolder& value) { m_blockAddressHasBeenSet = true; m_blockAddress = value; }

    /**
     * <p>The location of the block that you want to request. An address is an Amazon
     * Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline void SetBlockAddress(ValueHolder&& value) { m_blockAddressHasBeenSet = true; m_blockAddress = std::move(value); }

    /**
     * <p>The location of the block that you want to request. An address is an Amazon
     * Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline GetBlockRequest& WithBlockAddress(const ValueHolder& value) { SetBlockAddress(value); return *this;}

    /**
     * <p>The location of the block that you want to request. An address is an Amazon
     * Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline GetBlockRequest& WithBlockAddress(ValueHolder&& value) { SetBlockAddress(std::move(value)); return *this;}


    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline const ValueHolder& GetDigestTipAddress() const{ return m_digestTipAddress; }

    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline bool DigestTipAddressHasBeenSet() const { return m_digestTipAddressHasBeenSet; }

    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline void SetDigestTipAddress(const ValueHolder& value) { m_digestTipAddressHasBeenSet = true; m_digestTipAddress = value; }

    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline void SetDigestTipAddress(ValueHolder&& value) { m_digestTipAddressHasBeenSet = true; m_digestTipAddress = std::move(value); }

    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline GetBlockRequest& WithDigestTipAddress(const ValueHolder& value) { SetDigestTipAddress(value); return *this;}

    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline GetBlockRequest& WithDigestTipAddress(ValueHolder&& value) { SetDigestTipAddress(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ValueHolder m_blockAddress;
    bool m_blockAddressHasBeenSet = false;

    ValueHolder m_digestTipAddress;
    bool m_digestTipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
