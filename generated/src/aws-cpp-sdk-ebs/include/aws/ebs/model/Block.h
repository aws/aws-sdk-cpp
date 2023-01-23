/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
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
namespace EBS
{
namespace Model
{

  /**
   * <p>A block of data in an Amazon Elastic Block Store snapshot.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/Block">AWS API
   * Reference</a></p>
   */
  class Block
  {
  public:
    AWS_EBS_API Block();
    AWS_EBS_API Block(Aws::Utils::Json::JsonView jsonValue);
    AWS_EBS_API Block& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EBS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The block index.</p>
     */
    inline int GetBlockIndex() const{ return m_blockIndex; }

    /**
     * <p>The block index.</p>
     */
    inline bool BlockIndexHasBeenSet() const { return m_blockIndexHasBeenSet; }

    /**
     * <p>The block index.</p>
     */
    inline void SetBlockIndex(int value) { m_blockIndexHasBeenSet = true; m_blockIndex = value; }

    /**
     * <p>The block index.</p>
     */
    inline Block& WithBlockIndex(int value) { SetBlockIndex(value); return *this;}


    /**
     * <p>The block token for the block index.</p>
     */
    inline const Aws::String& GetBlockToken() const{ return m_blockToken; }

    /**
     * <p>The block token for the block index.</p>
     */
    inline bool BlockTokenHasBeenSet() const { return m_blockTokenHasBeenSet; }

    /**
     * <p>The block token for the block index.</p>
     */
    inline void SetBlockToken(const Aws::String& value) { m_blockTokenHasBeenSet = true; m_blockToken = value; }

    /**
     * <p>The block token for the block index.</p>
     */
    inline void SetBlockToken(Aws::String&& value) { m_blockTokenHasBeenSet = true; m_blockToken = std::move(value); }

    /**
     * <p>The block token for the block index.</p>
     */
    inline void SetBlockToken(const char* value) { m_blockTokenHasBeenSet = true; m_blockToken.assign(value); }

    /**
     * <p>The block token for the block index.</p>
     */
    inline Block& WithBlockToken(const Aws::String& value) { SetBlockToken(value); return *this;}

    /**
     * <p>The block token for the block index.</p>
     */
    inline Block& WithBlockToken(Aws::String&& value) { SetBlockToken(std::move(value)); return *this;}

    /**
     * <p>The block token for the block index.</p>
     */
    inline Block& WithBlockToken(const char* value) { SetBlockToken(value); return *this;}

  private:

    int m_blockIndex;
    bool m_blockIndexHasBeenSet = false;

    Aws::String m_blockToken;
    bool m_blockTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
